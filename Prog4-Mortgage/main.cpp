//===============================
//David Logan
//Mortgage Payment: Problem 15
//Due: 2/19/19
//===============================

#include "Mortgage.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// creating mortgage object
	Mortgage mortg;

	//setting data to the mortgage object
	mortg.numYears();
	mortg.setIntRate();
	mortg.setLoan();

	//displaying output
	cout << setprecision(2) << fixed;
	cout << "\nMonthly payment is: $";
	cout << mortg.monthlyPayment() << endl;

	cout << "Total paid: $";
	cout << mortg.getTotal() << endl;

	return 0;
}

