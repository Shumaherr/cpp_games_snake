#include "Fruit.h"

Fruits Fruit::GetFruitType()
{
	return type;
}

int Fruit::GetFruitRadius()
{
	return radius;
}

bool Fruit::CanCollide()
{
	return canColide;
}
