#pragma once
#include "GameObject.h"

enum Fruits {
	APPLE,
	ORANGE,
	WATERMELON,
	LAST //For random

};
class Fruit :
	public GameObject
{
public:
	Fruit(int x, int y)
	{
		position = { x, y };
		//type = static_cast<Fruits>(rand() % LAST);
		type = APPLE;
		radius = 10;
		canColide = true;
	}
	Fruits GetFruitType();
	int GetFruitRadius();
	bool CanCollide();
private:
	Fruits type;
	int radius;
	bool canColide;
};

