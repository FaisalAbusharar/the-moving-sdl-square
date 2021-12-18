#pragma once

#include "window.h"

class Rect : public Window {
public:
	Rect(const Window &window, int w, int h, int x, int y, int r, int g, int b, int a);

	void draw() const;
	void pollEvents(SDL_Event& event);

private:
	int _w, _h;
	int _x, _y;
	int _r, _g, _b, _a;
};

