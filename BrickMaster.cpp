#include "BrickMaster.h"

BrickMaster::Brick(float x, float y) //여기에 여러개 출력?
	: position(x,y)
{

}

FloatRect BrickMaster::GetGlobalBounds()
{
	return brick.getGlobalBounds();
}
