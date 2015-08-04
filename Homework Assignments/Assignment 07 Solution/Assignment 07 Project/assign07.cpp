/*
Chris Golpashin
Problem Solving with Programming
Assignment 7
3/17/15

Problem
I need to find the distance, radius, circumference, area by using a point in the middle of the circle and a point on the circle.
It needs to get the cordinates from the user and display the calculated results
it will most likely use the cmath library and functions for each differnt calculations.

Solution
I will use the cmath library to use pow and sqrt. I will just return the calculated value in each function using "return" so I dont
have to make variables for each function just to store a value, which will take up more memory. some of the functions will use other
functions plus what ever code is in the current functions so code that does the same thing doesnt have to be typed again(reusable code).

*/

//libraries
#include <iostream>
#include <cmath>

using namespace std;

//Prototype functions
double distance(double x1, double y1, double x2, double y2);
double radius(double x1, double y1, double x2, double y2);
double circumference(double r);
double area(double r);

int main()
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0; // variables store cordinates and are alreadt initialized

	// getting input data from user for center point
	cout << "Enter the x and y cordinates of the center of the circle" << endl;
	cin >> x1 >> y1;

	// getting input data from user for point on the circle
	cout << "Enter the x and y cordinates of a point on the circle" << endl;
	cin >> x2 >> y2;
	
	// radius is calculated by sending data to radius function to be calculated and then returned to be printed out on the screen
	cout << "Radius: " << radius(x1, y1, x2, y2) << endl;

	// distance is calculated by sending data to distance function to be calculated and then returned
	// then is added to its self because the radius is half of the diameter of the circle and is then printed out on the screen
	cout << "Distance: " << distance(x1, y1, x2, y2) + distance(x1, y1, x2, y2) << endl;

	//circumference is calulated by sending data to the circumference and also uses the radius function and then is printed out on screen
	cout << "Circumference: " << circumference(radius(x1, y1, x2, y2)) << endl;

	// area is calculated by sending data to the area function and radius function and then its printed out on the scrren
	cout << "Area: " << area(radius(x1, y1, x2, y2)) << endl;
	
	return 0;
}// end of main

//Functions
double distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // finds the distance between each of the x cords and y cords and uses the exponent of 2 for each the adds them together and square roots them.
}// end of distance

double radius(double x1, double y1, double x2, double y2)
{
	return distance(x1, y1, x2, y2); // uses the distance function to find the radius
}// end of radius

double circumference(double r)
{
	return 2 * 3.1416 * r; // times PI by 2 then times the radius which the radius came from the radius function
}// end of circumference

double area(double r)
{
	return pow(r, 2) * 3.1416; // gets the radius value and uses a exponent of 2 and then times it by PI
}// end of area