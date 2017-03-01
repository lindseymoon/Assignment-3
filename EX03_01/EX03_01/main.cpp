//////////////
//
//CS172--Assignment #3
//EX03_01
//Exercise 9.4: The_Point_Class
//
//////////////

#include <iostream>
#include <string>
#include "MyPoint.h"

using namespace std;

int main()
{
	MyPoint p1;
	MyPoint p2(10, 30.5);

	double d = p1.distance(p2);

	cout << d << endl;

	return 0;
}