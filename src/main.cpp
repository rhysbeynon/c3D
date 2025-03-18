#include <GLFW/glfw3.h> //include GLFW for window handling
#include <iostream> //inputs and outputs
#include <string> //easier strings

using namespace std;

const int WIDTH = 800;
const int HEIGHT = 600;

int main() {
    //start glfw
    if (!glfwInit()) {
        cerr << "Failed to initialize GLFW :(" << endl;
        return -1;
    }
    //creates window
    GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "c3D", nullptr, nullptr);
    if (!window) {
        cerr << "Failed to initialize GLFW :(" << endl;
        glfwTerminate();
        return -1;
    }

    //let OpenGL know where to render
    glfwMakeContextCurrent(window);

    //MAIN LOOP
    while (!glfwWindowShouldClose(window)) {
    //clear default black screen
    glClear(GL_COLOR_BUFFER_BIT);

    //swap buffers with new one each frame
    glfwSwapBuffers(window);

    //poll for events (Inputs and whatnot)
    glfwPollEvents();
    }

    //Exit cleanup stuff
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}