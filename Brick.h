#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

// 위치정보
// 블록정보
class Brick
{
private:
	RectangleShape shape;
	Vector2f position;
public:
	Brick();
	const RectangleShape& GetShape();
	FloatRect GetGlobalBounds();
};

