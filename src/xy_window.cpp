#include "xy_window.hpp"

#include <stdexcept>

namespace xy{
    XyWindow::XyWindow(int w,int h,std::string name):width(w),height(h),windowName(name){
        initWindow();
    }
    XyWindow::~XyWindow(){
        glfwDestroyWindow(window);
        glfwTerminate();
    }
    void XyWindow::initWindow(){
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API,GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE,GLFW_FALSE); // no resize
        window = glfwCreateWindow(width,height,windowName.c_str(),nullptr,nullptr);

    }
    void XyWindow::createWindowSurface(VkInstance instance , VkSurfaceKHR *surface){
        if(glfwCreateWindowSurface(instance,window,nullptr,surface) != VK_SUCCESS){
            throw std::runtime_error("failed to create surface"); 
        }
    }
}