/*
specification for dayType
*/

/*
Chris Golpashin
Problem solving with programming
Assignment 9

Problem:
I need a program that will get the day from the user. it will then need to find out what the previous day is and the next day.
it needs to return the 3 days to the user. the program needs three files which are a specification file, a Implementation file, 
and finnaly a test file.

Solution:
I will create a class called dayType. It will contain multiple functions ranging from an accessor, mutator, constructor, and other types
functions. I was going to use a select case for each of the days, but I was also thinking of using modulus to find the remainder of the
days but did not have enough time to implement it. I was having issues trying to remember how to send a value using cin to the setDay function.
I don’t know if having multiple variables was a good solution to the problem. I also don't know if a select case would be a good way of calculating
the days. I was going to use (day % 7) as a way to find the day in the week, if the user entered a number of a day that was more than 7. I’m not sure if
the select case would cause problems if it was put into the print function of the class. If I had a little more time I probably could of got this program
working correctly.
*/

#include <iostream>
#include <string>

using namespace std;

class dayType
{
public:
	// accessors
	string getDay() const;
	// returns the day

	// mutators
	void setDay(string newDay);
	// sets the day

	// constructors
	dayType(); // default cunstructor

	// other
	void printDay() const;
	// prints out the day
private:
	string currentDay, previousDay, nextDay;
};