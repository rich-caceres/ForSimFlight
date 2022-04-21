#include <iostream>
#include <ctime>
#include "SavingsAccount.h"

//constructor based off of inheritance, with a default interest rate
SavingsAccount::SavingsAccount()
	:interest_rate{ .06 } {
	std::cout << "Interest rate has been set too " << interest_rate << std::endl;
}

//destructor
SavingsAccount::~SavingsAccount(){
	//std::cout << "Destructor for Savings account called"<< std::endl;
}

//setting interest rate and getting inerest rate
void SavingsAccount::setInterestRate(double interest_rate) {
	this->interest_rate = interest_rate;
}

double SavingsAccount::getInterestRate() {
	return interest_rate;
}

//applying the interest, will need to expand to include the time
void SavingsAccount::applyInterestRate() {
	double *tempBalance = new double;
	*tempBalance = getBalance();
	*tempBalance = *tempBalance + (*tempBalance * interest_rate);
	setBalance(*tempBalance);
	delete tempBalance;
	std::cout << "Balance after applied interest rate is " << getBalance() << std::endl;
}