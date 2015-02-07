/*
  Chris Golpashin
  Assignment 4
  Problem solving with Programming

  I need to make a program that will ask the user for a integer value and give that user either a 
  number if it is between 0 to 9 but from 10 to 25 give A to Z. i need to use static_cast<char>( ) 
  and i could have use a case statement or a if then so i decided to use a if then.

*/

#include <iostream>
//#include <fstream>

using namespace std;

// Start of main
int main()
{
	int inputInteger; //stores integer value from cin in a variable

	cout << "Please enter a integer between 0 and 35" << endl; //asks user to do something
	cin >> inputInteger; //stores inout into variable

	//start if if then
	if (inputInteger <= 9)
		cout << inputInteger << endl;
	else if (inputInteger == 10)
	    cout << static_cast<char>('A') << endl;
	else if (inputInteger == 11)
		cout << static_cast<char>('B') << endl;
	else if (inputInteger == 12)
		cout << static_cast<char>('C') << endl;
	else if (inputInteger == 13)
		cout << static_cast<char>('D') << endl;
	else if (inputInteger == 14)
		cout << static_cast<char>('E') << endl;
	else if (inputInteger == 15)
		cout << static_cast<char>('F') << endl;
	else if (inputInteger == 16)
		cout << static_cast<char>('G') << endl;
	else if (inputInteger == 17)
		cout << static_cast<char>('H') << endl;
	else if (inputInteger == 18)
		cout << static_cast<char>('I') << endl;
	else if (inputInteger == 19)
		cout << static_cast<char>('J') << endl;
	else if (inputInteger == 20)
		cout << static_cast<char>('K') << endl;
	else if (inputInteger == 21)
		cout << static_cast<char>('L') << endl;
	else if (inputInteger == 22)
		cout << static_cast<char>('M') << endl;
	else if (inputInteger == 23)
		cout << static_cast<char>('N') << endl;
	else if (inputInteger == 24)
		cout << static_cast<char>('O') << endl;
	else if (inputInteger == 25)
		cout << static_cast<char>('P') << endl;
	else if (inputInteger == 26)
		cout << static_cast<char>('Q') << endl;
	else if (inputInteger == 27)
		cout << static_cast<char>('R') << endl;
	else if (inputInteger == 28)
		cout << static_cast<char>('S') << endl;
	else if (inputInteger == 29)
		cout << static_cast<char>('T') << endl;
	else if (inputInteger == 30)
		cout << static_cast<char>('U') << endl;
	else if (inputInteger == 31)
		cout << static_cast<char>('V') << endl;
	else if (inputInteger == 32)
		cout << static_cast<char>('W') << endl;
	else if (inputInteger == 33)
		cout << static_cast<char>('X') << endl;
	else if (inputInteger == 34)
		cout << static_cast<char>('Y') << endl;
	else if (inputInteger == 35)
		cout << static_cast<char>('Z') << endl;
	// end of if then

	return 0;
}
// End of main