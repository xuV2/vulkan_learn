#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace xy{
    class XyWindow{
        public:
            XyWindow(int w,int h,std::string name);
            ~XyWindow();
            // destroy 删除�? XyWindow 类的拷贝构造函数和拷贝赋值运算符
            // 防止创建 XyWindow 对象的拷贝，确保对象的唯一�?
            XyWindow(const XyWindow&)=delete;
            XyWindow &operator=(const XyWindow &) = delete;
            
            bool shouldClose(){
                return glfwWindowShouldClose(window);
            }
            VkExtent2D getExtent(){
                return {static_cast<uint32_t>(width), static_cast<uint32_t>(height)};
            }
            void createWindowSurface(VkInstance instance , VkSurfaceKHR *surface);
            
        private:
            void initWindow();
            const int width;
            const int height;
            std::string windowName;
            GLFWwindow * window;

    };
}