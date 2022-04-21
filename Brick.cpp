#include "Brick.h"


Brick::Brick()
{
	shape.setSize(Vector2f(300, 50));
	shape.setFillColor(Color::Red);
}

const RectangleShape& Brick::GetShape()
{
	return shape;
}

FloatRect Brick::GetGlobalBounds()
{
	return shape.getGlobalBounds();
}
