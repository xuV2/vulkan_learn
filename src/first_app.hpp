#pragma once 

#include "xy_window.hpp"
#include "xy_pipeline.hpp"


namespace xy{
    class FirstAPP{
        public:
            static constexpr int WIDTH = 800; // constexpr 告诉编译器这个变量的值在编译时是已知,可替换常量
            static constexpr int HEIGHT = 600;
            void run();
        private:
            XyWindow xyWindow{WIDTH,HEIGHT,"Hello Vulkan!"}; // use this window
            XyPipeline xyPipeline{"D:/vulkan_learn/src/shader/vert.spv",
            "D:/vulkan_learn/src/shader/frag.spv"};

    };
}