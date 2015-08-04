#include <iostream>

using namespace std;

// Start of main
int main()
{
	int x = 25;
	int *p; // pointer of type int
	p = &x; // p points to x

	cout << "The address that p contains: " << p << endl;
	cout << "What p is pointing to: " << *p << endl;
	cout << "The address of p: " << &p << endl;
	cout << "The address of x: " << &x << endl;

	return 0;
}
// End of main
/*

*/