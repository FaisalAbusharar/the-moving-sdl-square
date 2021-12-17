#include "window.h"

#include <string>
#undef main
#include <iostream>
#include <SDL.h>

int main(int argc, char* argv) {

	Window window("SDL Learning", 800, 600);

	while (!window.isClosed()) 
	{
		window.pollEvents();
		window.clear();
	}

	return 0;
}