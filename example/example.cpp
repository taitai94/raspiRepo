#include <iostream>

#include <cstdlib>

#include <GL/glew.h>

#include <GLFW/glfw3.h>



const GLuint WIDTH = 512, HEIGHT = 512;

int main()

{

//	glfwInit();
//
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);

//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

//	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

//	GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "app", NULL,NULL);



//	glfwMakeContextCurrent(window);

//	glewExperimental = GL_TRUE;

	glewInit();

	glViewport(0, 0, WIDTH, HEIGHT);

	glClearColor(1.0f, 0.65f, 0.0f, 1.0f);

//	while (!glfwWindowShouldClose(window))

//	{

		glClear(GL_COLOR_BUFFER_BIT);

//		glfwPollEvents();

//		glfwSwapBuffers(window);

//	}

//	glfwTerminate();

	std::cout << "yep\n";

	return 0;

}
