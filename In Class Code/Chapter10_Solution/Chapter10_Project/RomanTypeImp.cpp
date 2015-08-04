/*
Implementation file for romanType class
*/

#include <string>
#include <iostream>
#include "romanType.h"

using namespace std;


// accessors
string romanType::getRoman() const
{
	return romanNumber;
}

int romanType::getDecimal() const
{
	return decimalNumber;
}

// mutators
void romanType::setRoman(string newRoman)
{
	romanNumber = newRoman;
	convertRomanToDecimal();
}

void romanType::setDecimal(int newDecimal)
{
	decimalNumber = newDecimal;
}

// constructors
romanType::romanType() // default constructor
{
	romanNumber = "I";
	convertRomanToDecimal();
}
// default values are:
// roman numeral: I
// decimal number: 1

// other
void romanType::convertRomanToDecimal()
{
	int M = 1000, // values for roman digits
		D = 500,
		C = 100,
		L = 50,
		X = 10,
		V = 5,
		I = 1;
	int decimalSum = 0;
	// does not take into account special numbers like IX (at least not yet)
	for (int index = 0; index < romanNumber.length(); index++)
	{
		switch (romanNumber[index])
		{
		case 'M': decimalSum = decimalSum + M; break;
		case 'D': decimalSum = decimalSum + D; break;
		case 'C': decimalSum = decimalSum + C; break;
		case 'L': decimalSum = decimalSum + L; break;
		case 'X': decimalSum = decimalSum + X; break;
		case 'V': decimalSum = decimalSum + V; break;
		case 'I': decimalSum = decimalSum + I; break;
		}// end switch
	}// end for loop

	decimalNumber = decimalSum;

}// end convertRomanToDecimal

void romanType::printRoman() const
{
	cout << romanNumber << endl;
}

void romanType::printDecimal() const
{
	cout << decimalNumber << endl;
}