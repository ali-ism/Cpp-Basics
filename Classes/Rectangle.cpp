#include"Rectangle.h"

float Rectangle::area()
{
	return width * length;
}

float Rectangle::perimeter()
{
	return (width + length) * 2;
}