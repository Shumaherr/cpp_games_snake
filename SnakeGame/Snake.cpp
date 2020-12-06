#include "GameObject.h"
#include "Snake.h"

Snake::Snake()
{
}

Snake::Snake(int x, int y, int segmentRadius) : GameObject::GameObject(x,y) {
		this->direction = Direction::UP;
		Vector2D p1 = { 150,150 }; //TODO Refactor this
		Vector2D p2 = { 150 + 2 * segmentRadius, 150 };
		Vector2D p3 = { 151 + 4 * segmentRadius, 150 };
		segments.push_back(p1);
		segments.push_back(p2);
		segments.push_back(p3);
	}
	void Snake::ChangeDirection(Direction dir)
	{
		this->direction = dir;
	}
	int Snake::GetSegmentsCount()
	{
		return this->segments.size();
	}

	void Snake::AddSegment()
	{
		Vector2D newP = { segments[segments.size() - 1].x + 2 * this->segmentRadius, segments[segments.size() - 1].y };
		this->segments.push_back(newP);
	}

	Vector2D Snake::GetSegment(int n)
	{
		return segments[n];
	}

	void Snake::MoveSegment(int n, Vector2D newPos)
	{
		this->segments[n] = newPos;
	}

	Direction Snake::GetDirection()
	{
		return this->direction;
	}
