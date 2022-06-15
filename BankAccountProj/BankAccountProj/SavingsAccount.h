#pragma once
#include <string>
#include "Account.h"

//inheriting from account class
class SavingsAccount : public Account
{
private:
	double interest_rate;
public:
	virtual void setInterestRate(double interest_rate);
	double getInterestRate();
	SavingsAccount();
	virtual ~SavingsAccount();
	void applyInterestRate();
};

