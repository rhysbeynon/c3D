#include <GLFW/glfw3.h> //include GLFW for window handling
#include <iostream> //for printing errors to the console

const int WIDTH = 800;
const int HEIGHT = 600;

if (!glfwInit()) {
    std::cerr << "Failed to initialize GLFW :(" << std::endl;
    return -1;
}

GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "c3D", nullptr, nullptr);
if (!window) {
    std::cerr << "Failed to initialize GLFW :(" << std::endl;
    glfwTerminate();
    return -1;
}