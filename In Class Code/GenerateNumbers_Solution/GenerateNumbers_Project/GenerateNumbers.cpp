// mean and standard deviation up to 100

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	int data[100]; // array for up to 100 data points
	int counter = 0; // number of data points
	double x = 0; // mean of my data
	double SumForSD = 0; // sum for numerator of SD equation
	double standardDev = 0; // the standard deviation


	ifstream inFile;
	inFile.open("numbers.txt");
	while (!inFile.eof())
	{
		inFile >> data[counter++];
	}// end read data
	inFile.close();

	// compute mean
	for (int index = 0; index < counter; index++)
	{
		x = x + data[index];
		x = x / counter;
	}

	// compute standard deviation
	for (int index = 0; index < counter; index++)
		SumForSD = SumForSD + pow(data[index] - x, 2);
	standardDev = sqrt(SumForSD) / counter;

	return 0;
}// end of main

/*
// print array | use this to check if their is data in the array and remove it after it is not needed
for (int index = 0; index < counter; index++)
cout << data[index] << " ";
cout << endl;
*/
