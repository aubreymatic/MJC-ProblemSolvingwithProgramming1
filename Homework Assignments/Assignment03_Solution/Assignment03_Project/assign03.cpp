/* Assignment 3 Week 3
   Problem solving with programming
   1-30-15

   i need to write a program that can help someone find out the actual size of a hard drive or other type of storage using
   variables and arithmetic to convert a manufactuer specified storage size which the program will prompt the user to enter
   and will be stored in a variable which will be used to get a real storage number through arithmetic.
*/

#include <iostream>
using namespace std;

// Start of main
int main()
{
	int manufactuerAmount;
	double actualAmount;

	cout << "What is the specified amount of GB for the hard drive from the manucfactuer?" << endl;
	cin >> manufactuerAmount;
	actualAmount = (manufactuerAmount * 1000) / 1024;
	cout << "The actual amount of the hard drive is " << actualAmount << "GB" << endl;
	return 0;
}
// End of main