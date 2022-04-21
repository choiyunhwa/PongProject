#include "Bat.h"

Bat::Bat(float x, float y)
	:position(x,y)//시작 위치
{
	shape.setSize(Vector2f(100, 5));
	shape.setPosition(position);
	shape.setFillColor(Color::White);
}

FloatRect Bat::GetGlobalBounds()
{
	return shape.getGlobalBounds(); // getLocalBounds : 로컬좌표 대상의 사각형이 리턴
									// getGlobalBounds : 월드좌표 기준의 사각형이 리턴
}
const RectangleShape& Bat::GetShape()
{
	return shape;
}

void Bat::SetMoveDir(Sides side)
{
	moveDir = side;
}
void Bat::Update(float dt)//이동할 방향 시간 속도
{
	Vector2f dir;
	switch (moveDir)
	{
	case Sides::LEFT:
		dir.x = -1.f;
		break;
	case Sides::RIGHT:
		dir.x = 1.f;
		break;
	}
	position += dir * dt * speed; // Vector로 쓰임 ( 방향, 힘, 속도의 정보를 가지고 있음)
	shape.setPosition(position); //Vector2f : 단순의 길이 뿐만아니라 속도까지 의미하는걸 vector라고 불리운다
}