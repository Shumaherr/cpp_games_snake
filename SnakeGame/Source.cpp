#include <iostream>
#include "SDL.h"
#include "Snake.h"
#include "Utils.h"

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define SEGMENT_RADIUS 10
bool isRunning;
Snake player;
SDL_Renderer* renderer;
SDL_Window* window;

void Init()
{
	isRunning = true;
	window = SDL_CreateWindow(
		"Snake Game",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH,
		SCREEN_HEIGHT,
		SDL_WINDOW_OPENGL
	);
		renderer = SDL_CreateRenderer(window,
			-1,
			SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	player = Snake(0, 0, SEGMENT_RADIUS);
}

void ProcessInput()
{
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			isRunning = false;
			break;
		}
		const Uint8 *state = SDL_GetKeyboardState(NULL);
		if (state[SDL_SCANCODE_ESCAPE]) {
			isRunning = false;
		}
		if (player.CanRotate())
		{
			if ((state[SDL_SCANCODE_UP] || state[SDL_SCANCODE_W]) && player.GetDirection() != DOWN)
			{
				player.ChangeDirection(Direction::UP);
			}
			if ((state[SDL_SCANCODE_DOWN] || state[SDL_SCANCODE_S]) && player.GetDirection() != UP)
			{
				player.ChangeDirection(Direction::DOWN);
			}
			if ((state[SDL_SCANCODE_LEFT] || state[SDL_SCANCODE_A]) && player.GetDirection() != RIGHT)
			{
				player.ChangeDirection(Direction::LEFT);
			}
			if ((state[SDL_SCANCODE_RIGHT] || state[SDL_SCANCODE_D]) && player.GetDirection() != LEFT)
			{
				player.ChangeDirection(Direction::RIGHT);
			}
		}
	}
}

void Update()
{
	for (int i = 1; i < player.GetSegmentsCount(); i++)
	{
		/*if (player.GetSegment(i).rotation != player.GetDirection())
		{
			if (((player.GetDirection() == UP || player.GetDirection() == DOWN) && player.GetSegment(i).x == player.GetSegment(i - 1).x) ||
				((player.GetDirection() == LEFT || player.GetDirection() == RIGHT) && player.GetSegment(i).y == player.GetSegment(i - 1).y))
			{
				player.RotateSegment(i);
				break;
			}
				
		}*/
		
			
	}
	for (int i = 0; i < player.GetSegmentsCount(); i++)
	{
		if (!player.GetRotationPoints().empty())
		{
			for (Transform2D point : player.GetRotationPoints())
			{
				if (player.GetSegment(i).Equal(point))
				{
					player.RotateSegment(i, point.rotation);
					if (i == 1)
					{
						player.CanRotate(true);
					}
					if (i == player.GetSegmentsCount() - 1)
					{
						player.RemoveRotationPoint(point);
					}
				}


			}
		}
		Transform2D newPos = player.GetSegment(i);
		switch (newPos.rotation)
		{
		case UP:
			--newPos.y;
			if (newPos.y < 0)
				newPos.y = SCREEN_HEIGHT;
			break;
		case DOWN:
			++newPos.y;
			if (newPos.y > SCREEN_HEIGHT)
				newPos.y = 0;
			break;
		case LEFT:
			--newPos.x;
			if (newPos.x < 0)
				newPos.x = SCREEN_WIDTH;
			break;
		case RIGHT:
			++newPos.x;
			if (newPos.x > SCREEN_WIDTH)
				newPos.x = 0;
			break;
		default:
			break;
		}
		player.MoveSegment(i, newPos);
	}
}

void Render()
{
	SDL_SetRenderDrawColor(renderer, 164, 235, 52, 255);
	SDL_RenderClear(renderer);
	SDL_RenderFillRect(renderer, NULL);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	for (int i = 0; i < player.GetSegmentsCount(); i++)
	{
		DrawCircle(renderer, player.GetSegment(i).x, player.GetSegment(i).y, SEGMENT_RADIUS);
		SDL_RenderDrawPoint(renderer, player.GetSegment(i).x, player.GetSegment(i).y);
	}
	SDL_RenderPresent(renderer);
}

int main(int argc, char* argv[])
{
	Init();

	// Check that the window was successfully created
	if (!window) {
		// In the case that the window could not be made...
		std::cout << "Could not create window: %s\n";
		return 1;
	}

	while (isRunning)
	{
		ProcessInput();
		Update();
		Render();
	}
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}