#include "window.h"

#include <string>
#undef main
#include <iostream>
#include <SDL.h>
#include "rect.h";

void pollEvents(Window& window, Rect& rect) {
	SDL_Event event;

	if (SDL_PollEvent(&event)) {
		rect.pollEvents(event);
		window.pollEvents(event);
	}
}

int main(int argc, char* argv) {

	Window window("SDL Learning", 800, 600);
	Rect rect(window, 120, 120, 0, 0, 200, 0, 200, 255);

	while (!window.isClosed()) 
	{
		pollEvents(window, rect);
		rect.draw();
		window.clear();
	}

	return 0;
}