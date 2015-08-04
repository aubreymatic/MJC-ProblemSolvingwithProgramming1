/*
Implementation file for dayType class
*/

#include <string>
#include <iostream>
#include "dayType.h"

using namespace std;

// accessors
string dayType::getDay() const
{
	return currentDay;
}

// mutators
void dayType::setDay(string newDay)
{
	currentDay = newDay;
}

// constructors
dayType::dayType() // default constructor
{
	currentDay = "sun";
	previousDay = "sat";
	nextDay = "mon";
}
// default values are:
// currentDay: sun for sunday
// previousDay: sat for saturday
// nextDay: mon for monday

void dayType::printDay() const
{
	// these couts displays the days
	cout << "The Current day is " << currentDay << endl;
	cout << "The previous day is " << previousDay << endl;
	cout << "The next day is " << nextDay << endl;
}