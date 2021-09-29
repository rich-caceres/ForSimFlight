#pragma once
#include <string>
#include "Account.h"

class SavingsAccount : public Account
{
private:
	double interest_rate;
public:
	void setInterestRate(double interest_rate);
	double getInterestRate();
	SavingsAccount();
	~SavingsAccount();
	void applyInterestRate();
};

