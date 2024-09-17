#include "first_app.hpp"
#include <stdexcept>
#include <array>

namespace xy{
    FirstAPP::FirstAPP(){
        createPipelineLayout();
        createPipeline();
        createCommandBuffers();
    }
    FirstAPP::~FirstAPP(){
        vkDestroyPipelineLayout(xyDevice.device(),pipelineLayout,nullptr);
    }

    void FirstAPP::run(){
        while(!xyWindow.shouldClose()){ // user close return 1
            glfwPollEvents();
            drawFrame();
        }
        vkDeviceWaitIdle(xyDevice.device()); // 函数CPU将阻塞直到所有GPU操作完成，方便安全清理
    }
    void FirstAPP::createPipelineLayout(){
        VkPipelineLayoutCreateInfo pipelineLayoutInfo{};
        pipelineLayoutInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
        pipelineLayoutInfo.setLayoutCount = 1;
        pipelineLayoutInfo.pSetLayouts = nullptr;
        pipelineLayoutInfo.pushConstantRangeCount = 0;
        pipelineLayoutInfo.pPushConstantRanges = nullptr;
        if(vkCreatePipelineLayout(xyDevice.device(), &pipelineLayoutInfo, nullptr, &pipelineLayout)!= VK_SUCCESS){
            throw std::runtime_error("failed to create pipeline layout!");
        }
    }
    void FirstAPP::createPipeline(){
        auto pipelineConfig =
            XyPipeline::defaultPipelineConfigInfo(xySwapChain.width(),xySwapChain.height());
        pipelineConfig.renderPass = xySwapChain.getRenderPass();
        pipelineConfig.pipelineLayout = pipelineLayout;
        xyPipeline = std::make_unique<XyPipeline>(xyDevice,
        "D:/vulkan_learn/src/shader/vert.spv",
        "D:/vulkan_learn/src/shader/frag.spv",
        pipelineConfig);

    }
    void FirstAPP::createCommandBuffers(){
        commandBuffers.resize(xySwapChain.imageCount());
        VkCommandBufferAllocateInfo allocInfo{};
        allocInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
        allocInfo.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
        allocInfo.commandPool = xyDevice.getCommandPool();
        allocInfo.commandBufferCount = static_cast<uint32_t>(commandBuffers.size());

        if(vkAllocateCommandBuffers(xyDevice.device(), &allocInfo, commandBuffers.data())!= VK_SUCCESS){
            throw std::runtime_error("failed to allocate command buffers!");
        }
        for(int i=0;i<commandBuffers.size();i++){
            VkCommandBufferBeginInfo beginInfo{};
            beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;

            VkRenderPassBeginInfo renderPassInfo{};
            renderPassInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
            renderPassInfo.renderPass = xySwapChain.getRenderPass();
            renderPassInfo.framebuffer = xySwapChain.getFrameBuffer(i);
        
            renderPassInfo.renderArea.offset = {0,0};
            renderPassInfo.renderArea.extent = xySwapChain.getSwapChainExtent();

            std::array<VkClearValue, 2> clearValues{};
            clearValues[0].color = {0.1f,0.1f,0.1f,1.0f};
            clearValues[1].depthStencil = {1.0f,0};
            renderPassInfo.clearValueCount = static_cast<uint32_t>(clearValues.size());
            renderPassInfo.pClearValues = clearValues.data();

            vkCmdBeginRenderPass(commandBuffers[i],&renderPassInfo,VK_SUBPASS_CONTENTS_INLINE);

            xyPipeline->bind(commandBuffers[i]);
            vkCmdDraw(commandBuffers[i],3,1,0,0);

            vkCmdEndRenderPass(commandBuffers[i]);
            if(vkEndCommandBuffer(commandBuffers[i])!=VK_SUCCESS){
                throw std::runtime_error("failed to record command buffer!");
            }
        }

    }
    void FirstAPP::drawFrame(){
        uint32_t imageIndex;
        auto result = xySwapChain.acquireNextImage(&imageIndex);

        if(result != VK_SUCCESS && result != VK_SUBOPTIMAL_KHR){
            throw std::runtime_error("failed to acquire swap chain image!");
        }
        result = xySwapChain.submitCommandBuffers(&commandBuffers[imageIndex],&imageIndex);
        if(result!= VK_SUCCESS){
            throw std::runtime_error("failed to submit draw command buffer!");
        }
    }

}