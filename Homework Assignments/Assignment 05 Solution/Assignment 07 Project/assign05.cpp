/*
Chris Golpashin
problem solving with programming
2-27-15
assignment 4

problem:
I must calculate how many months it will take to pay off the loan. I was really confused with what the question wanted, because 
it did not clearly state what it wanted. I asked a friend to help me figure out what was the question asking.

solution:
I used cin and cout to get data from the user and the calculations are done in the monthsForLoan function.
I also used an if else with a while loop in it to check to see if the monthly payment is sufficient to pay the interest and loan amount and reduces it. 
*/

#include <iostream>

using namespace std;

// function prototypes
int monthsForLoan(double, double, double);

int main()
{
	double loanAmount, interestRate, monthlyPayment;
	int months;

	// getting input data from user
	cout << "Please enter a amount you wish to take as a loan." << endl;
	cin >> loanAmount;
	cout << "Now please enter a interest rate percent per year in decimal." << endl;
	cin >> interestRate;
	cout << "What amount do you want your monthly payment to be?" << endl;
	cin >> monthlyPayment;

	// calls monthsForLoan and gets value from function and stores it in months variable
	months = monthsForLoan(loanAmount, interestRate, monthlyPayment);
	
	// checks to see if monthly payment is sufficient.
	if (months == 0){
		while (months == 0){ // while loop will keep looping till monthly payment is sufficient.
			cout << "ERROR. Monthly payment is too low. Please use a higher amount." << endl << endl;
			cout << "What do you want the new monthly payment to be?" << endl;
			cin >> monthlyPayment;
			cout << endl;
			months = monthsForLoan(loanAmount, interestRate, monthlyPayment);
		}
		cout << "The number of months required to pay off the loan is: " << months << endl;
	}
	else{
		cout << "The number of months required to pay off the loan is: " << months << endl;
	}

	return 0;
}// end of main

int monthsForLoan(double loan, double interestRate, double monthlyPayment)
{
	int size = 0;

	while (loan > 0){

		double interestRatePerMonth;
		double interestAmount; // amount of monthly payment toward interest
		double AmountToLoan; // amount of monthly payment toward intitial loan

		interestRatePerMonth = (interestRate / 12) / 100;

		interestAmount = interestRatePerMonth * loan;

		AmountToLoan = monthlyPayment - interestAmount;

		if (AmountToLoan <= 0){
			return size;
		}

		// reduces the initial loan
		loan = loan - AmountToLoan;

		size++;
	}

	return size;
}