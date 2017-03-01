#ifndef MYINTEGER_H_
#define MYINTEGER_H_

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class MyInteger
{
private:
	int value; //an int data field named value that stores the int value represented by this object

public:
	MyInteger(int myvalue) //a constructor that creates a MyInteger object for the specified int value
	{
		value = myvalue;
	}

	const int GetValue() //constant get function that returns the int value
	{
		return value;
	}

	const bool isEven() //constant function, returns true if even
	{
		if (value % 2 == 0)
			return true;
	}
	const bool isOdd() //constant function, returns true if odd
	{
		if (value % 3 != 0)
			return true;
	}
	const bool isPrime() //constant function, returns true if prime
	{
		for (int i = 2; i < value; i++)
		{
			if (value % i != 0)
			{
				return true; //this number is prime
			}
		}
	}


	static bool isEven(MyInteger I) //static function, returns true if even
	{
		return I.isEven;
	}

	static bool isOdd(MyInteger I) //static function, returns true if odd
	{
		return I.isOdd;
	}

	static bool isPrime(MyInteger I) //static function, returns true if prime
	{
		return I.isPrime;
	}

	const bool Equals(int) {}

	const bool Equals(const MyInteger&) {}

	static int parseInt(const string& s)
	{
		stringstream ss(s);
		int i;
		ss >> i;
		return i;
	}

};

#endif
	