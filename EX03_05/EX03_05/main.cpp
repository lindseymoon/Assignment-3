//////////////
//
//CS172--Assignment #3
//EX03_05
//Exercise 10.10: The_MyInteger_Class
//
//////////////

#include <iostream>
#include <string>
#include "MyInteger.h"

using namespace std;

int main()
{
	MyInteger a(10);
	MyInteger b(100);

	if (a.isEven())
	{
		std::cout << "The number is even!" << std::endl;
	}
	else
	{
		std::cout << "The number is not even." << std::endl;
	}

	if (a.isOdd())
	{
		std::cout << "The number is odd!" << std::endl;
	}
	else
	{
		std::cout << "The number is not odd." << std::endl;
	}

	if (a.isPrime())
	{
		std::cout << "The number is prime!" << std::endl;
	}
	else
	{
		std::cout << "The number is not prime." << std::endl;
	}

	if (MyInteger::isEven(20))
	{
		std::cout << "It works!";
	}

	if (MyInteger::isOdd(20))
	{
		std::cout << "It works!";
	}

	if (MyInteger::isPrime(20))
	{
		std::cout << "It works!";
	}

}