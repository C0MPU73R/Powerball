#include "ball.h"

ball::ball(int number, string color) : ballNumber(number), color(color)
{
}

string ball::getBallColor()
{
	return this->color;
}

int ball::getBallNumber()
{
	return this->ballNumber;
}
