#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include "SDL.h"
#include "Snake.h"
#include "Utils.h"
#include "Fruit.h"

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define SEGMENT_RADIUS 10
bool isRunning;
Snake* player;
SDL_Renderer* renderer;
SDL_Window* window;
Fruit* fruit; //TODO make a vector of fruits

void CreateFruit()
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<float> distX(0, SCREEN_WIDTH);
	std::uniform_real_distribution<float> distY(0, SCREEN_HEIGHT);
	fruit = new Fruit((int) distX(mt), (int) distY(mt));
}

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
	player =  new Snake(0, 0, SEGMENT_RADIUS);
	CreateFruit();
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
		if (player->CanRotate())
		{
			if ((state[SDL_SCANCODE_UP] || state[SDL_SCANCODE_W]) && player->GetDirection() != DOWN)
			{
				player->ChangeDirection(Direction::UP);
			}
			if ((state[SDL_SCANCODE_DOWN] || state[SDL_SCANCODE_S]) && player->GetDirection() != UP)
			{
				player->ChangeDirection(Direction::DOWN);
			}
			if ((state[SDL_SCANCODE_LEFT] || state[SDL_SCANCODE_A]) && player->GetDirection() != RIGHT)
			{
				player->ChangeDirection(Direction::LEFT);
			}
			if ((state[SDL_SCANCODE_RIGHT] || state[SDL_SCANCODE_D]) && player->GetDirection() != LEFT)
			{
				player->ChangeDirection(Direction::RIGHT);
			}
		}
	}
}

void Update()
{
	for (int i = 0; i < player->GetSegmentsCount(); i++)
	{
		if (!player->GetRotationPoints().empty())
		{
			for (int j = 0; j < player->GetRotationPoints().size(); j++)
			{
				if (*player->GetSegment(i) == player->GetRotationPoints()[j])
				{
					player->RotateSegment(i, player->GetRotationPoints()[j].rotation);
					if (i == 1)
					{
						player->CanRotate(true);
					}
					if (i == player->GetSegmentsCount() - 1)
					{
						player->RemoveRotationPoint(j);
					}
				}


			}
		}
		Transform2D *newPos = player->GetSegment(i);
		switch (newPos->rotation)
		{
		case UP:
			--newPos->y;
			if (newPos->y < 0)
				newPos->y = SCREEN_HEIGHT;
			break;
		case DOWN:
			++newPos->y;
			if (newPos->y > SCREEN_HEIGHT)
				newPos->y = 0;
			break;
		case LEFT:
			--newPos->x;
			if (newPos->x < 0)
				newPos->x = SCREEN_WIDTH;
			break;
		case RIGHT:
			++newPos->x;
			if (newPos->x > SCREEN_WIDTH)
				newPos->x = 0;
			break;
		default:
			break;
		}
	}

	if (IsCollide(player->GetSegment(0)->x, player->GetSegment(0)->y, player->GetSegmentRadius(), fruit->GetPosition()->x, fruit->GetPosition()->y, fruit->GetFruitRadius() && fruit->CanCollide()))
	{
		//std::cout << "Collide!"; //For tests
		if (fruit)
			delete fruit;
		player->AddSegment();
		
		CreateFruit();
	}
}

void Render()
{
	SDL_SetRenderDrawColor(renderer, 164, 235, 52, 255);
	SDL_RenderClear(renderer);
	SDL_RenderFillRect(renderer, NULL);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	for (int i = 0; i < player->GetSegmentsCount(); i++)
	{
		DrawCircle(renderer, player->GetSegment(i)->x, player->GetSegment(i)->y, SEGMENT_RADIUS);
		SDL_RenderDrawPoint(renderer, player->GetSegment(i)->x, player->GetSegment(i)->y);
	}
	//Draw Fruits
	FilledCircle(renderer, fruit->GetPosition()->x, fruit->GetPosition()->y, fruit->GetFruitRadius(), 255, 0, 0, 255);
	SDL_RenderPresent(renderer);
}

int main(int argc, char* argv[])
{
	Init();
	//srand((unsigned)time(0));
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
	if (fruit)
		delete fruit;
	if (player)
		delete player;
	return 0;
}
