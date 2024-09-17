#pragma once

#include <string>
#include <vector>
#include "xy_device.hpp"

namespace xy{
    // 该结构体定义了Vulkan图形管线的配置设置。
    // 包括管线创建所需的各种状态配置，如视口、剪裁矩形、输入装配、光栅化、多重采样、颜色混合、深度模板测试、管线布局和渲染通道信息。

    struct PipelineConfigInfo {
        VkViewport viewport; // 视口设置，定义渲染区域的大小和变换。
        VkRect2D scissor; // 剪裁矩形，限制渲染区域到视口内的特定区域。
        VkPipelineInputAssemblyStateCreateInfo inputAssemblyInfo; // 描述图元装配方式（例如，三角形列表、条带等）。
        VkPipelineRasterizationStateCreateInfo rasterizationInfo; // 配置光栅化阶段（例如，多边形模式、剔除方式等）。
        VkPipelineMultisampleStateCreateInfo multisampleInfo; // 配置多重采样，用于抗锯齿处理。
        VkPipelineColorBlendAttachmentState colorBlendAttachment; // 指定每个帧缓冲区附件的颜色混合处理方式。
        VkPipelineColorBlendStateCreateInfo colorBlendInfo; // 颜色混合的整体配置。
        VkPipelineDepthStencilStateCreateInfo depthStencilInfo; // 配置深度和模板测试。
        VkPipelineLayout pipelineLayout = nullptr; // 管线布局，定义着色器一致性变量的布局。
        VkRenderPass renderPass = nullptr; // 渲染通道，定义渲染操作的执行方式。
        uint32_t subpass = 0; // 子通道索引，指定当前管线使用的子通道。
    };


    class XyPipeline{
        public:
            XyPipeline(XyDevice &device, const std::string vertFilePath,const std::string fragFilePath,const PipelineConfigInfo configInfo);
            ~XyPipeline();
            XyPipeline(const XyPipeline&) = delete;
            void operator=(const XyPipeline&) = delete;
            
            void bind(VkCommandBuffer commandBuffer);
            
            static PipelineConfigInfo defaultPipelineConfigInfo(uint32_t width, uint32_t height);
        
        private:
            static std::vector<char> readFile(const std::string filePath);
            void createGraphicsPipeline(const std::string &vertFilePath,const std::string &fragFilePath,PipelineConfigInfo configInfo);

        void createShaderMoule(const std::vector<char>&code , VkShaderModule* shaderModule);

        XyDevice &xyDevice;
        VkPipeline graphicsPipeline;
        VkShaderModule vertShaderModule;
        VkShaderModule fragShaderModule;
    };
}