#include "Startup.h"

#include "Games/ExampleGame.h" // Include your game

int main() {
	Window* window = new Window();

	window->create("BMCEngine Public Build 1");

	ExampleGame game = ExampleGame();
	game.Setup(window);

	while (!window->shouldClose()) {
		window->update();

		game.Update();
		game.Render();
	}

	window->~Window();

	return 0;
}