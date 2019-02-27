#include <GLFW\glfw3.h>

int main(void)
{
	GLFWwindow * window;

	//初始化glfw库
	if (!glfwInit())
	{
		return -1;
	}

	//创建一个窗口和它的OpenGL上下文
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);

	if (!window)
	{
		//没有创建则会返回NULL
		glfwTerminate();
		return -1;
	}

	//设置当前的窗口上下文
	glfwMakeContextCurrent(window);

	//循环,直到用户关闭窗口
	while (!glfwWindowShouldClose(window))
	{
		//在这里做渲染
		glClear(GL_COLOR_BUFFER_BIT);

		//交换缓冲区，即在window上更新内容
		glfwSwapBuffers(window);

		//轮询事件
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}