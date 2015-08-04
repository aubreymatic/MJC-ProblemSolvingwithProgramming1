/*
Phone number problem
02/09/2015

Problem
I need to convert a users phone number from a string to digits. it will convert characters
into numbers for example 1-800-LOAN. the program needs to output a 7 digit number with a hiphen.
it must also continue converting phone numbers till the user wants to stop.

Solution
1. Ask the user to enter a string that represents a phone number.
2. store user input into a string variable
3. extract characters in the variable using a loop
4. store phone number into another variable
5. output phone number
Note: it needs to handle upper and lower case numbers
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string inputString; // user input is stored in variable
	string phoneNumber; // converted phone number is stored here

	cout << "please enter a phone number (at least 7 characters)" << endl;
	
	getline(cin, inputString);
	
	inputString.replace(1, 0, "-");
	inputString.replace(5, 0, "-");

	cout << inputString << endl;

	return 0;
}