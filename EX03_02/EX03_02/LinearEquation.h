//
//  LinearEquation.h
//  EX03_02
//
//  Created by Lindsey Moon on 2/21/17.
//  Copyright © 2017 Lindsey Moon. All rights reserved.
//

#ifndef LINEAREQUATION_H_
#define LINEAREQUATION_H_


#include <string>

using namespace std;

class LinearEquation
{
private:
	double a, b, c, d, e, f;

public:
	LinearEquation(double A, double B, double C, double D, double E, double F)
	{
		a = A;
		b = B;
		c = C;
		d = D;
		e = E;
		f = F;
	}

	double geta()
	{
		return a;
	}

	double getb()
	{
		return b;
	}

	double getc()
	{
		return c;
	}

	double getd()
	{
		return d;
	}

	double gete()
	{
		return e;
	}

	double getf()
	{
		return f;
	}

	bool isSolvable()
	{
		if (((a * d) - (b * c)) == 0)
			return false;
		else
			return true;
	}

	double getX()
	{
		return ((e * d) - (b * f)) / ((a * d) - (b * c));
	}

	double getY()
	{
		return ((a * f) - (e * c)) / ((a * d) - (b * c));
	}
};

#endif
