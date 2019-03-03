    #include <iostream>
    #include <GL/gl.h>
    #include "glfw3.h"

    int main()
    {
        GLFWwindow* window;

        if (!glfwInit()) return -1;

        window = glfwCreateWindow(480, 320, "TestOpenGL", NULL ,NULL);

        if (!window)
        {
            glfwTerminate();
            return -1;
        }

        glfwMakeContextCurrent(window);

        while (!glfwWindowShouldClose(window))
        {
            glBegin(GL_TRIANGLES);

            glColor3f(1.0, 0.0, 0.0);
            glVertex3f(0.0, 1.0 ,0.0);

            glColor3f(0.0, 1.0, 0.0);
            glVertex3f(-1.0, -1.0 ,0.0);

            glColor3f(1.0, 0.0, 1.0);
            glVertex3f(1.0, -1.0 ,0.0);

            glEnd();

            glfwSwapBuffers(window);

            glfwPollEvents();
        }

        glfwTerminate();
        
        return 0;
    }