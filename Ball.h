#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
//스스로 움직임
class Ball
{
private:
	Vector2f originalPosition;
	Vector2f position;
	RectangleShape shape;

	float speed = 500.f;
	Vector2f dir;

public:
	Ball(float x, float y);

	FloatRect GetGlobalBounds();
	const RectangleShape& GetShape();

	void ReboundSides(); // 왼쪽. 오른쪽에 부딪

	void ReboundBatOrTop(); // 바와 부딪

	void ReboundBottom(); // 아래쪽 넘어감

	void Update(float dt);

};

