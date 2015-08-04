/*
Recursion/factorial/fibanachi
*/
#include <iostream>

using namespace std;

void stars(int n);
int fib(int n);
int factorial(int number);
int fact(int n);

int main()
{

	return 0;
}

int factorial(int number)
{
	int factorial = 1;
	for (int count = 0; count <= 20; count++)
		cout << "The factorial of " << factorial << endl;
}// end of factorial

int fact(int n)
{
	if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}// end of fact

int fib(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else return fib(n - 1) + fib(n - 2);
}// end of fib

void stars(int n)
{
	if (n > 0) // print stars out
		for (int count = 1; count <= n; count++)
			cout << "*";
	cout << endl;

	stars(n - 1);
}// end of stars