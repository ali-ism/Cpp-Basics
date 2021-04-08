#pragma once

class Rectangle
{
private:
	float width, length;
public:
	Rectangle(float x, float y)
	{
		width = x;
		length = y;
	}
	float area();
	float perimeter();
};