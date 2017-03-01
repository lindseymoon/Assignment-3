//////////////
//
//CS172--Assignment #3
//EX03_02
//Exerccise 9.9: 2x2_Linear_Equations
//
//////////////

#include <iostream>
#include <string>
#include "LinearEquation.h"

using namespace std;

int main()
{
	double A, B, C, D, E, F;
	cout << "Please enter 6 values: ";
	cin >> A >> B >> C >> D >> E >> F;

	LinearEquation p2(A, B, C, D, E, F);
	bool x = p2.isSolvable();
	if (x == true)
	{
		cout << "X = " << p2.getX() << endl;
		cout << "Y = " << p2.getY() << endl;
	}
	else
		cout << "The equation has no solution." << endl;
}