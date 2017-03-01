//////////////
//
//CS172--Assignment #3
//EX03_04
//Exercise 10.4: Sort_Characters_in_a_String
//
//////////////

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string sort(string& s);

int main()
{
	string s;
	cout << "Please enter a string: ";
	getline(cin, s);
	cout << endl;

	sort(s);
	cout << "The sorted string is " << s << endl;
}

string sort(string& s)
{
	sort(s.begin(), s.end());
	return s;
}