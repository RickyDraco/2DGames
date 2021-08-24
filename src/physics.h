#pragma once
#include<iostream>

class vector2f
{
public:
	float x, y;

private:

public:
	vector2f() : x(0.0f), y(0.0f)
	{
	}

	vector2f(float px, float py) : x(px), y(py)
	{
	}

	void print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};



