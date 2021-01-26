#pragma once
#include "SDL.h"
void DrawCircle(SDL_Renderer * renderer, int32_t centreX, int32_t centreY, int32_t radius);
void FilledCircle(SDL_Renderer *renderer, int cx, int cy, int radius, Uint8 r, Uint8 g, Uint8 b, Uint8 a);
bool IsCollide(int x10, int y10, int r1, int x20, int y20, int r2);
