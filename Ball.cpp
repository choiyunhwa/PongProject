#include "Ball.h"

Ball::Ball(float x, float y) 
	: originalPosition(x,y), position(x,y)
{
	dir.x = 1.f;
	dir.y = 1.f;

	//��ֶ�����
	float length = sqrt(dir.x * dir.x + dir.y * dir.y); //������ ����
	dir.x /= length;
	dir.y /= length;

	shape.setSize(Vector2f(10, 10));
	shape.setPosition(position);
	shape.setFillColor(Color::White);
}

FloatRect Ball::GetGlobalBounds()
{
	return shape.getGlobalBounds(); //���� ��� �簢��
}

const RectangleShape& Ball::GetShape()
{
	return shape;
}

void Ball::ReboundSides()
{
	dir.x *= -1.f;
}

void Ball::ReboundBatOrTop()
{
	dir.y *= -1.f;
}

void Ball::ReboundBottom()
{
	position = originalPosition;
}

void Ball::Update(float dt)
{
	position += dir * dt * speed;
	shape.setPosition(position);
}
