#pragma once
#include "CommonIncludes.h"

class Window
{
public:
	void create(std::string title);
	void update();
	bool shouldClose();
	void setTitle(std::string newTitle);
	GLFWwindow* getWindow();
	Window();
	~Window();
private:
	const GLFWvidmode* vidMode;
	GLFWwindow* window;
	int width;
	int height;
	std::string title;
};

