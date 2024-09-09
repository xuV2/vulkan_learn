#include "first_app.hpp"

namespace xy{
    void FirstAPP::run(){
        while(!xyWindow.shouldClose()){ // user close return 1
            glfwPollEvents();
        }
    }
}