#include "Game.h"

Game* game = nullptr;

int main(int argc, char* argv[]) {
	game = new Game();

	game->init("C++ Let's Make Games Tutorial", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 2650, 1600, false);

	while (game->running()) {
		game->handleEvents();
		game->update();
		game->render();
	}
	
	game->clean();

	return 0;
}