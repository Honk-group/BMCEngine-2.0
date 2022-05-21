// ** ONLY ADD/REMOVE YOUR OWN FUNCTIONS IN THIS FILE ** //

#pragma once
#include "../CommonIncludes.h"

class ExampleGame
{
public:
	void Update();
	void Render();
	void Refresh();
	void Setup(Window* window);
	ExampleGame();
public:
	string Name = "Game";
	Vector3 RefreshColor;
	Keyboard* keyboard;
};
