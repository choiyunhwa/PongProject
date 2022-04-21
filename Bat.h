#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
// �׸��� : shape : RectamgleShapge
// �̵� : �������� �̵��ϴ� �Լ�/ ���������� �̵��ϴ� �Լ�
// - �ӵ��� �ð� �������� ����������

enum class Sides
{
	LEFT,
	RIGHT,
	NONE
};
class Bat
{
private:
	Vector2f position; //bat�� ��ġ�� ������

	RectangleShape shape;

	float speed = 1000.f;
	Sides moveDir = Sides::NONE;
public:
	Bat(float x, float y); //�������� ��ġ

	FloatRect GetGlobalBounds();//�浹üũ�Ҷ� �̿�
	const RectangleShape& GetShape(); 

	void SetMoveDir(Sides side);

	void Update(float dt);
	

};

