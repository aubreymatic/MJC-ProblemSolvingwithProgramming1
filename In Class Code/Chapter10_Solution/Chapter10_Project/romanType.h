/*
Specification for romanType
*/
#include <iostream>
#include <string>

using namespace std;

class romanType
{
public:
	// accessors
	string getRoman() const;
	// returns number as a Roman Numeral
	int getDecimal() const;
	// returns number in decimal form

	// mutators
	void setRoman(string newRoman);
	void setDecimal(int newDecimal);

	// constructors
	romanType(); // default constructor
	// default values are:
	// roman numeral: I
	// decimal number: 1

	// other
	void convertRomanToDecimal();
	void printRoman() const;
	void printDecimal() const;

private:
	string romanNumber;
	int decimalNumber;
};