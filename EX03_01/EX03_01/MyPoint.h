//
//  MyPoint.h
//  EX03_01
//
//  Created by Lindsey Moon on 2/21/17.
//  Copyright © 2017 Lindsey Moon. All rights reserved.
//

/*

UML Diagram

My Point Class
Data Fields (Properties): x, y
Functions (Behaviors): x, y, Distance

*/

#ifndef MYPOINT_H_
#define MYPOINT_H_

#include <string>
#include <cmath>
using namespace std;

class MyPoint
{
private: //two data fields x and y that represent the coordinates
	double x1;
	double y1;

public:
	MyPoint() //no arg-constructor that creates a point (0,0)
	{
		x1 = 0;
		y1 = 0;
	}

	MyPoint(double x, double y) //constructor that constructs a point with specified coordinates
	{
		x1 = x;
		y1 = y;
	}

	double distance(MyPoint p) //gets the private values x1 and y1, uses these values to calculate the distance
	{
		return sqrt(((p.getX() - x1) * (p.getX() - x1)) + ((p.getY() - y1) * (p.getY() - y1)));
	}
	double getX() //get function for x
	{
		return x1;
	}

	double getY() //get function for y
	{
		return y1;
	}
};

#endif
