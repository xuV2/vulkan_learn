#pragma once 

#include "xy_window.hpp"
#include "xy_pipeline.hpp"
#include "xy_device.hpp"
#include "xy_swap_chain.hpp"
#include "xy_model.hpp"

#include <memory>
#include <vector>


namespace xy{
    class FirstAPP{
        public:
            static constexpr int WIDTH = 800; // constexpr 告诉编译器这个变量的值在编译时是已知,可替换常�?
            static constexpr int HEIGHT = 600;

            FirstAPP();
            ~FirstAPP();

            FirstAPP(const FirstAPP&)=delete;
            FirstAPP &operator=(const FirstAPP &) = delete;

            void run();
        private:
            void loadModels();
            void createPipelineLayout();
            void createPipeline();
            void createCommandBuffers();
            void drawFrame();

            XyWindow xyWindow{WIDTH,HEIGHT,"Hello Vulkan!"}; // use this window
            XyDevice xyDevice{xyWindow};
            XySwapChain xySwapChain{xyDevice,xyWindow.getExtent()};
            std::unique_ptr<XyPipeline>xyPipeline;
            VkPipelineLayout pipelineLayout;
            std::vector<VkCommandBuffer> commandBuffers;
            std::unique_ptr<XyModel>xyModel;

            // XyPipeline xyPipeline{xyDevice, "D:/vulkan_learn/src/shader/vert.spv",
            // "D:/vulkan_learn/src/shader/frag.spv",
            // XyPipeline::defaultPipelineConfigInfo(WIDTH,HEIGHT)};

    };
}