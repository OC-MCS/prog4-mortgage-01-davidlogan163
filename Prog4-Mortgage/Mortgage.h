#pragma once

using namespace std;

class Mortgage {
private:
	double loan;
	int years;
	double intRate;
	
public:
	Mortgage();
	void setIntRate();
	void numYears();
	void setLoan();
	double getTotal();
	double getTerm();
	double monthlyPayment();
};


