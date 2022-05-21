#include "Keyboard.h"

bool Keyboard::isKeyDown(int key)
{
	return glfwGetKey(window, key) == GLFW_PRESS;
}

void Keyboard::setup(GLFWwindow* window)
{
	this->window = window;
}
