#include "Window.h"
#include "Games/ExampleGame.h"

void Window::create(string title)
{
	glfwInit();

	this->title = title;

	glfwDefaultWindowHints();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_ANY_PROFILE);

	window = glfwCreateWindow(width, height, title.c_str(), 0, 0);
	glfwSetWindowPos(window, (vidMode->width / 2) - (width / 2), (vidMode->height / 2) - (height / 2));

	glfwMakeContextCurrent(window);
	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
	glViewport(0, 0, width, height);
}

void Window::update()
{
	glfwPollEvents();
	glfwSwapBuffers(window);
}

bool Window::shouldClose()
{
	return glfwWindowShouldClose(window);
}

void Window::setTitle(std::string newTitle)
{
	this->title = newTitle;
	glfwSetWindowTitle(window, newTitle.c_str());
}

GLFWwindow* Window::getWindow()
{
	return window;
}

Window::Window()
{
	glfwInit();
	vidMode = glfwGetVideoMode(glfwGetPrimaryMonitor());
	width = (vidMode->width / 8) * 7;
	height = (vidMode->height / 8) * 7;
	title = "No title!";
	window = nullptr;
}

Window::~Window()
{
	glfwTerminate();
}
