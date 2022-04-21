#include "Bat.h"

Bat::Bat(float x, float y)
	:position(x,y)//���� ��ġ
{
	shape.setSize(Vector2f(100, 5));
	shape.setPosition(position);
	shape.setFillColor(Color::White);
}

FloatRect Bat::GetGlobalBounds()
{
	return shape.getGlobalBounds(); // getLocalBounds : ������ǥ ����� �簢���� ����
									// getGlobalBounds : ������ǥ ������ �簢���� ����
}
const RectangleShape& Bat::GetShape()
{
	return shape;
}

void Bat::SetMoveDir(Sides side)
{
	moveDir = side;
}
void Bat::Update(float dt)//�̵��� ���� �ð� �ӵ�
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
	position += dir * dt * speed; // Vector�� ���� ( ����, ��, �ӵ��� ������ ������ ����)
	shape.setPosition(position); //Vector2f : �ܼ��� ���� �Ӹ��ƴ϶� �ӵ����� �ǹ��ϴ°� vector��� �Ҹ����
}