#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
// 그리기 : shape : RectamgleShapge
// 이동 : 왼쪽으로 이동하는 함수/ 오른쪽으로 이동하는 함수
// - 속도와 시간 기준으로 움직여야함

enum class Sides
{
	LEFT,
	RIGHT,
	NONE
};
class Bat
{
private:
	Vector2f position; //bat가 위치할 포지션

	RectangleShape shape;

	float speed = 1000.f;
	Sides moveDir = Sides::NONE;
public:
	Bat(float x, float y); //생성자의 위치

	FloatRect GetGlobalBounds();//충돌체크할때 이용
	const RectangleShape& GetShape(); 

	void SetMoveDir(Sides side);

	void Update(float dt);
	

};

