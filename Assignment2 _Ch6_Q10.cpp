/*
Algorithm was designed in the following series of steps:
1) Define function for future value set up based on formula and required variables, where future value intialized to 0 & interest rate is converted to percent
2) Define main function with variables also defined 
3) Prompt user to enter account present value
4) Take user input value entered for PV
5) Prompt user to enter interest rate
6) Take user input value entered for interest rate
7) Prompt user to enter account time in months
8) Take user input value entered for months 
7) Output calculated future value for the account 

Functions/Formulas

This program has two functions, the first of which is a future value function which calculates FV based on values
user entered in main function. The constructor is set up accordingly to record present value, interest rate and
number of months

The main function prompts user to enter values for the formula and then outputs the calculated results for account FV

Formula for converting decimal interger value to percentage = interestR = interestR / 100.0;

Formula for future value = presentV * pow(1 + interestR, timeMonths);


Revision History:
January 30, 2019: First working edition created
February 3, 2019: Final version revised and completed


*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


// Function for the future value 
double futureValue(double presentV, double interestR, int timeMonths)
{
	// Future value variable defined and intialized to 0 of data type double
	double futureV = 0;

	// Formula to convert decimal interest rate value entered into percentage for final calculation
	interestR = interestR / 100.0;

	// Returns the calculated result based on user input from main function
	return presentV * pow(1 + interestR, timeMonths);


}



int main()
{

	// Defines the variable for present value
	double presentVal;

	// Defines the variable for time passed in number of months
	double numMonths;

	// Defines the variable for interest rate 
	double interestRate;

	//Defines and intializes future value variable set to 0
	double futureVal = 0;

	// Prompts user to enter the present value of the account
	cout << "What is the account's present value? " << endl;

	// Takes user input for the present value
	cin >> presentVal;

	// Prompts the user to enter interest rate per month
	cout << "What is the interest rate per month? " << endl;

	// Takes user input for the interest rate
	cin >> interestRate;

	// Prompts the user to enter the time in months
	cout << "What number of months have passed" << endl;

	// Takes user input for the time in months 
	cin >> numMonths;

	// This represents the future value constructor
	futureVal = futureValue(presentVal, interestRate, numMonths);

	// Outputs the final results for future value rounded to two decimal places 
	cout << "The future value of this account is : $" << setprecision(2) << fixed << futureVal << endl;

	return 0;
}






