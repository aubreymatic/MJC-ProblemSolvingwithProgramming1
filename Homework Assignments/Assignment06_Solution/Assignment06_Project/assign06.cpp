/*
Chris Golpashin
problem solving with programming
3-6-15
assignment 6

problem:
I must check to see if a character entered by a user is a vowel or not. i also must check a sequence
of characters and tell the user how many vowels their are. it needs to use a isVowel function to check
the vowels.

solution:
I will use an isVowel function to do all the checking for the vowels. I will also give it data from the
main's variables to the function to check for vowels. I will use an if-else statement for all the vowels in
the function but this is a more tedious way of doing it since I have to type it all out. I could have
made the input data from the user all upper case or lower case to shorten the code. I cant check a whole string
for vowels so I have to check each character individually using a loop. it will use a boolean and counters to incrament
every time there is a vowel.
*/

// C++ libraries
#include <iostream>
#include <string>

// don't have to put std: every time
using namespace std;

// function prototypes
int isVowel(char userInputChar, string userInputSequence);

int main()
{
	// variables
	bool vowel; 
	char userInputChar; 
	string userInputSequence; 
	int numVowels(0);

	// getting input data from user
	cout << "Please enter a letter to see if it is a vowel." << " For example 1 = true, 0 = false " << endl;
	cin >> userInputChar;
	
	// calls function to store a value in variable
	vowel = isVowel(userInputChar, userInputSequence);

	// outputs if it is a vowel or not
	cout << vowel << endl;

	// getting input data from user
	cout << "Please enter a sequence of characters to determine the amount of vowels in it." << endl;
	cin >> userInputSequence;

	// checks string for amount of vowels contained
	for (int i = 0; i < (int)userInputSequence.size(); ++i)
	{
		char charToTest = userInputSequence.at(i); // creates char variable to check every character in the string

		if (true == isVowel(charToTest,userInputSequence)) // uses the isVowel if-else to check each of the characters
		{
			numVowels++; // incraments evertime there is a vowel
		}
	}

	// outputs number of vowels in string
	cout <<"Their are " << numVowels << " vowels." << endl;

	return 0;
}// end of main

int isVowel(char userInputChar, string userInputSequence)
{
	// variable
	bool vowelCheck;

	// checks to see if user inputed character is a vowel or not and outputs a true or false.
	if (userInputChar == 'A' || userInputChar == 'a' || userInputChar == 'E' || userInputChar == 'e' || userInputChar == 'I' || userInputChar == 'i' || userInputChar == 'O' || userInputChar == 'o' || userInputChar == 'U' || userInputChar == 'u')
		vowelCheck = true;
	else
		vowelCheck = false;

	// returns value
	return vowelCheck;
}// end of isVowel