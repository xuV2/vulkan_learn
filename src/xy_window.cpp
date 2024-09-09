#include "xy_window.hpp"

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
}