#include <iostream>

using namespace std;

void printArray(int number[], int length);

int main()
{
	// arrays
	int num[20] = {0};

	printArray(num, 20);

	return 0;
}// end of main

void printArray(int number[], int length)
{
	for (int n = 0; n<length; ++n)
		cout << number[n] << ' ';
	cout << '\n';
}