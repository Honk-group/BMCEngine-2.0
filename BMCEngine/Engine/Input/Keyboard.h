#pragma once
#include "../../CommonIncludes.h"
class Keyboard
{
public:
	bool isKeyDown(int key);
	void setup(GLFWwindow* window);
private:
	GLFWwindow* window;
};
