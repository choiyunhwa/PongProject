#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
//������ ������
class Ball
{
private:
	Vector2f originalPosition; // ���� �����ϴ� ��ġ
	Vector2f position;
	RectangleShape shape;

	float speed = 500.f;
	Vector2f dir;

public:ÿ��
	Ball(float x, float y);

	FloatRect GetGlobalBounds();
	const RectangleShape& GetShape();

	void ReboundSides(); // ����. �����ʿ� �ε�

	void ReboundBatOrTop(); // �ٿ� �ε�

	void ReboundBottom(); // ������

	void Update(float dt);

};

