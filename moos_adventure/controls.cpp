#include "controls.h"


void sprites::Controls::init(games::GameSetup *newG, std::string newFilename, int newCount, float newAX, float newAY, float newVX, float newVY, float newPX, float newPY, int newT0, int newAction) {
	g = newG;
	filename = newFilename;
	count = newCount;
	totalGameTime = newT0;
	aX = newAX;
	aY = newAY;
	vX = newVX;
	vY = newVY;
	pX = newPX;
	pY = newPY;
	action = newAction;
}

void sprites::Controls::updateRender() {
	SDL_RenderPresent(g->getRenderer());
	//SDL_UpdateWindowSurface(g->getWindow());
}

int sprites::Controls::getAction() {
	return action;
}
