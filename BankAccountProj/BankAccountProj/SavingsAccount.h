#pragma once
#include <string>
#include "Account.h"

class SavingsAccount : public Account
{
private:
	double interest_rate;
public:
	SavingsAccount();
	~SavingsAccount();
	void applyInterestRate();
};

