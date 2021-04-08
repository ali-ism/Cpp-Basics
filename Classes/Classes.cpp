#include <iostream>
#include"Rectangle.h"

using namespace std;

int main()
{
	Rectangle rect1(3, 4);
	cout << "Area: " << rect1.area() << endl << "Perimeter: " << rect1.perimeter() << endl;
}
