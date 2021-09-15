#include <iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount()
	:interest_rate{ .06 } {
	std::cout << "Interest rate has been set too" << interest_rate << std::endl;
}

SavingsAccount::~SavingsAccount(){
	std::cout << "Destructor for Savings account called";
}

void SavingsAccount::applyInterestRate() {

	this->balance = this->balance + (this->balance * interest_rate);
	std::cout << "Balance after applied interest rate is" << balance << std::endl;

}