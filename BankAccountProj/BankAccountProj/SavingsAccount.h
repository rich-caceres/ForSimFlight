#pragma once
#include <string>
#include "Account.h"

class SavingsAccount : public Account
{
public:
	double interest_rate;
	void applyInterestRate();
};

