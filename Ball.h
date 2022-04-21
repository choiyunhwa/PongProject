#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
//������ ������
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

	void ReboundSides(); // ����. �����ʿ� �ε�

	void ReboundBatOrTop(); // �ٿ� �ε�

	void ReboundBottom(); // �Ʒ��� �Ѿ

	void Update(float dt);

};

