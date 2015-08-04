/*
Test dayType
*/

// these are the libraries
#include <string>
#include <iostream>
#include "dayType.h"

using namespace std;

int main()
{
	dayType myday;
	// these couts tell the user about the program and what to enter.
	cout << "This program wil show you the current, next, and previous day." << endl;
	cout << "Please enter a day of the weak using only 3 letters and only in lowercase." << endl;
	cout << "An example of this is sun for sunday" << endl;
	cout << endl;
	
	myday.setDay("sun");

	// this tells the function to print out the data
	myday.printDay();

	return 0;
}