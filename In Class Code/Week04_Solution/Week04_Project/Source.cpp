#include <iostream>
using namespace std;

// Start of main
int main()
{
	int num = -3;
	double floatNum = 23.0;

	cout << "start of if else statement" << endl;

	if (num > floatNum)
	{
		cout << "num is greater than -6" << endl;
		cout << "this is an example of an if statement." << endl;
	}// end if
	else// contunues if top statement is not true
	{
		cout << "now in the else portion." << endl;
		cout << "num is equal to floatNum." << endl;
	}// end else if

	cout << "end of if else statement" << endl;

	return 0;
}
// End of main