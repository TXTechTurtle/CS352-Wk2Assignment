/*
Andrew Diedrich
CS352 Data Structures
Week 2 Programming Assignment
*/

// This program allows a user to enter a whole number, then it sums the digits of the number
// The purpose is to use a recursive function to do the work

//#include "stdafx.h"			//needed for Microsoft Visual Studio to precompile (remove if using g++ in Linux)
#include <iostream>
#include <string>
using namespace std;

void sumDigits(string &myVal, int &myTotal)			//this is the recursive function
{
	if (myVal.length() > 0)			//checks to see if the string is empty
	{
		char a = myVal[0];
		int b = a - '0';		//converts the char to an int of the same plain-view value
		myTotal += b;			//adds the digits
		myVal.erase(0, 1);		//removes the character from the string
		sumDigits(myVal, myTotal);		//recurses the function
	} //end if
} //end sumDigits

int main()
{
	string myVal;
	int myTotal = 0;
	cout << "Enter a Whole Number: ";
	cin >> myVal;
	sumDigits(myVal, myTotal);			//calls the recursive fnction
	cout << "The sum of the digits is " << myTotal << "." << endl;
	//system("PAUSE");					//nasty call to Windows to run the "pause" program
	return 0;
}

