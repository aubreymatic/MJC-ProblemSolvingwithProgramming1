/*
Test romanType
*/

#include <string>
#include <iostream>
#include "romanType.h"

using namespace std;

int main()
{
	romanType myNumber;
	myNumber.printRoman();
	myNumber.printDecimal();

	myNumber.setRoman("DLVII");
	myNumber.printRoman();
	myNumber.printDecimal();

	return 0;
}