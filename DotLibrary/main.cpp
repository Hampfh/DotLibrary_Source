#include "window.h"
#include "Grid.h"
#include "Dot.h"

void pollEvents(Window &window) {
	SDL_Event evnt;

	if (SDL_PollEvent(&evnt)) {
		window.pollEvent(evnt);
	}
}

int main(int argc, char** argv) {

	Grid grid(4,4);
	grid.SetupWindow("Test window", 1000, 750);
	grid.GridSpecifications.betweenDotDistance = 2;
	grid.GridSpecifications.dotSize = 30;
	grid.drawGrid();

	Dot* ThisDot = grid.specifyDot(2,3);
	ThisDot->color.g = 255;
	ThisDot->color.r = 255;
	ThisDot->callDrawMethod();
	grid.mainWindow->clear();
	
	while (true) {
		pollEvents(*grid.mainWindow);
		if (grid.mainWindow->isClosed()) {
			SDL_Quit;
			break;
		}
	}

	return 0;
}