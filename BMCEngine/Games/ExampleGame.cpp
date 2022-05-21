#include "ExampleGame.h"

float refreshcol = 0.0f;

void ExampleGame::Update()
{
	if (keyboard->isKeyDown(GLFW_KEY_UP)) {
		refreshcol += 0.005f;
	}

	if (keyboard->isKeyDown(GLFW_KEY_DOWN)) {
		refreshcol -= 0.005f;
	}

	refreshcol = Math::Clamp(refreshcol, 0.0f, 1.0f);

	RefreshColor = Vector3(refreshcol, refreshcol, refreshcol);
}

void ExampleGame::Render()
{
	Refresh();
}

void ExampleGame::Refresh()
{
	glClearColor(RefreshColor.X, RefreshColor.Y, RefreshColor.Z, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
}

void ExampleGame::Setup(Window* window)
{
	glfwInit();
	keyboard = new Keyboard();
	keyboard->setup(window->getWindow());
}

ExampleGame::ExampleGame()
{
	RefreshColor = Vector3(refreshcol, refreshcol, refreshcol);
}
