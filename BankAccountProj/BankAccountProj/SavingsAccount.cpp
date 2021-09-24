#include <iostream>
#include<ctime>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount()
	:interest_rate{ .06 } {
	std::cout << "Interest rate has been set too " << interest_rate << std::endl;
}

SavingsAccount::~SavingsAccount(){
	std::cout << "Destructor for Savings account called"<< std::endl;
}

void SavingsAccount::applyInterestRate() {
	double *tempBalance = new double;
	*tempBalance = getBalance();
	*tempBalance = *tempBalance + (*tempBalance * interest_rate);
	setBalance(*tempBalance);
	delete tempBalance;
	std::cout << "Balance after applied interest rate is " << getBalance() << std::endl;
	
}