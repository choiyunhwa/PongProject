#pragma once
#include <SFML/Graphics.hpp>
#include "Brick.h"
using namespace sf;

// ���� ���
// ���� ����
// ������ ���� ��ħ -> ����
class BrickMaster
{
private:
	Brick brick;

public:
	Brick(float x, float y);
	FloatRect GetGlobalBounds();
};

