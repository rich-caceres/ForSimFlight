#pragma once
#include <string>
#include "Account.h"

class SavingsAccount : public Account
{
public:
	double interest_rate;
	SavingsAccount();
	~SavingsAccount();
	void applyInterestRate();
};

