#include "Mortgage.h"
#include <iostream>
#include <iomanip>

using namespace std;

Mortgage::Mortgage()
{
	loan = 0;
	years = 0;
	intRate = 0;
}

//Function: setLoan()
//Asks user for amount of loan
//returns nothing
void Mortgage::setLoan()
{
	double setloan;
	cout << "Enter amount of loan: $";
	cin >> setloan;

	//confirm input
	while (setloan < 0 || !cin)
	{	
		//clearing wrong input
		cin.clear();
		cin.ignore();
		cout << "Invalid response! Enter again: ";
		cin >> setloan;
	}
	loan = setloan;
}

//Function: setIntRate()
//Asks user for interest rate
//returns nothing
void Mortgage::setIntRate()
{
	double rate;
	cout << "Enter the annual interest rate: ";
	cin >> rate;


	while (rate < 0 || !cin)
	{
		//clearing wrong input
		cin.clear();
		cin.ignore();
		cout << "Invalid response! Enter again: ";
		cin >> rate;
	}
	intRate = rate;
}

//Function: numYears
//Asks user for number of years
//returns nothing
void Mortgage::numYears()
{
	int y;
	cout << "Enter number of years of the loan: ";
	cin >> y;

	//confirming input
	while (y < 1 || !cin) 
	{
		//clearing wrong input
		cin.clear();
		cin.ignore();
		cout << "Input cannot be less than 1 year or a number. Enter again: ";
		cin >> y;
	}
	years = y;
}


//Function: monthlyPayment()
//calculates monthly payment
//returns payment
double Mortgage::monthlyPayment() 
{
	double payment;
	payment = (loan * intRate / 12 * getTerm()) / ((getTerm() - 1));
	return payment;
}

//Function: getTotal()
//calculates total payment
//returns total
double Mortgage::getTotal() 
{
	double total;

	total = 12 * years * monthlyPayment();
	return total;
}

//Function: getTerm()
//calculates total amount for a term
double Mortgage::getTerm()
{
	double term;
	term = pow((1 + (intRate / 12)), (12 * years));

	return term;
}


