//////////////
//
//CS172--Assignment #3
//EX03_03
//Exercise 9.10: The_Intersection_Class
//
//////////////

#include <iostream>
#include <cmath>
#include "LinearEquation.h"

using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4 = 0;
	cout << "Please enter eight values: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	cout << endl;
	cout << "You entered: (" << x1 << ", " << y1 << ")" << endl;
	cout << "You entered: (" << x2 << ", " << y2 << ")" << endl;
	cout << "You entered: (" << x3 << ", " << y3 << ")" << endl;
	cout << "You entered: (" << x4 << ", " << y4 << ")" << endl;

	double a = y1 - y2;
	double b = x1 - x2;
	double c = y3 - y4;
	double d = x3 - x4;

	double e = (a * x1) - (b * y1);
	double f = (c * x3) - (d * y3);

	LinearEquation p2(a, b, c, d, e, f);
	bool x = p2.isSolvable();
	
	if (x == true)
	{
		cout << "the lines intersect at: " << " ( " << p2.getX() << " , " << p2.getY() << " ) ";
	}
	else
		cout << "The lines are parallel." << endl;
}