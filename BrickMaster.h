#pragma once
#include <SFML/Graphics.hpp>
#include "Brick.h"
using namespace sf;

// 벽돌 출력
// 벽돌 범위
// 벽돌이 공과 겹침 -> 삭제
class BrickMaster
{
private:
	Brick brick;

public:
	Brick(float x, float y);
	FloatRect GetGlobalBounds();
};

