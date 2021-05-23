#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
    // Initializes GLFW to use its functions
    glfwInit();
    
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    
    // Defines the OpenGL profile functions to be used:
    // - Core (modern functions)
    // - Compatibility (includes both modern and deprecated functions)
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    
    GLFWwindow * window = glfwCreateWindow(800, 600, "OpenGL Playground", nullptr, nullptr);
    
    if(window == nullptr) {
        std::cout << "Failed to initilize GLFW" << std::endl;
        glfwTerminate();
        return -1;
    }
    
    glfwMakeContextCurrent(window);
    
    while(!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }
    
    glfwDestroyWindow(window);
    // Properly terminates GLFW;
    glfwTerminate();
    
    return 0;
}
