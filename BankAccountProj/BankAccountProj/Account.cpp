#include <iostream>
#include <string>
#include "Account.h"

Account::Account()
	:balance{ 0.0 }, amount{0.0} {
}

Account::~Account() {

}

void Account::withdraw(double amount) {
	std::cout << "Withdrawing " << amount << " from account." << std::endl;
	if (amount <= balance) {
		balance = balance - amount;
		std::cout << "Withdrawing " << amount << " from account." << std::endl;
	}
	else {
		std::cout << "You do not have the required funds and will overdraft your account, do you wish to proceed?"<<std::endl;
		char answer{ '\0' };
		std::cin >> answer;
		if (tolower(answer) == 'y') {
			std::cout << "Your account will be overdrafted!" << std::endl;
			balance = balance - amount;
		}
		else {
			std::cout << "Withdrawal has been canceled" << std::endl;
		}
	}
	std::cout << "Remaining balance is: " << balance << "." << std::endl;
}

void Account::deposit(double amount) {
	std::cout << "depositing " << amount << " to account." << std::endl;
}

