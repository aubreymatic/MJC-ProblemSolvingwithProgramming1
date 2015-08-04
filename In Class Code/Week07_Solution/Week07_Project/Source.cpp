#include <iostream>
//#include <cmath>

using namespace std;

// function prototypes
int larger(int num1, int num2);

// Start of main
int main()
{
	int num1, num2;

	cout << "Please enter two integers: ";
	cin >> num1 >> num2;
	cout << endl;
	cout << "The larger of " << num1 << " and " << num2 << " is " << larger(num1, num2) << endl;
	return 0;
} // End of main

int larger(int num1, int num2)
{
	int result;
	if (num1 > num2) // num1 is larger
		result = num1;
	else  // num2 is larger
		result = num2;
	return result;
} // end of larger