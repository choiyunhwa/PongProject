#include "BrickMaster.h"

BrickMaster::Brick(float x, float y) //���⿡ ������ ���?
	: position(x,y)
{

}

FloatRect BrickMaster::GetGlobalBounds()
{
	return brick.getGlobalBounds();
}
