#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
using namespace std;


int main(void)
{
    GLFWwindow* window;

    if (!glfwInit())
    {
        std::cout << "GLFW couldn't start!" << std::endl;
        return -1;
    }

    window = glfwCreateWindow(640, 480, "My Window", NULL, NULL);
    if (!window)
    {
        std::cout << "An error occured while initiating window!" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        glfwTerminate();
        return -1;
    }

    glClearColor(0.25f, 0.5f, 0.75f, 1.0f);


    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}