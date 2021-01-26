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
	}
	Fruits GetFruitType();
	int GetFruitRadius();
private:
	Fruits type;
	int radius;
};

