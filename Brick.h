#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

// ��ġ����
// �������
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

