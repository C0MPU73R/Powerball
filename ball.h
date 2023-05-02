#pragma once
#include <string>
using namespace std;
class ball
{
public:
	ball(int number, string color = "white");
	string getBallColor();
	int getBallNumber();
private:
	string color;
	int ballNumber;
};