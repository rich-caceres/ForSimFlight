#include <iostream>
#include <string>
#include <ctime>
#include "Account.h"

Account::Account()
	:balance{ 0.0 }, name{ "NULL" }, date_created{time(0)} {
}

Account::Account(std::string name, double balance) 
	: name{ name }, balance{ balance }, date_created{time(0)} {
	std::cout << "You account has been created as " << this->name << " your current balance is " << this->balance << std::endl;
}

Account::~Account() {

}

void Account::setBalance(double balance) {
	this->balance = balance;
}

void Account::setName(std::string name) {
	this->name = name;
}

void Account::set_time() {
	this->date_created = time(0);
}

double Account::getBalance() {
	return balance;
}

std::string Account::getName() {
	return name;
}

time_t Account::get_time() {
	return date_created;
}

void Account::withdraw(double amount) {
	std::cout << "Withdrawing " << amount << " from account." << std::endl;
	if (amount <= balance) {
		balance = balance - amount;
		std::cout << "Withdrawing " << amount << " from account." << std::endl;
	}
	else {
		std::cout << "You do not have the required funds and will overdraft your account, do you wish to proceed? y/n"<<std::endl;
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
	if (amount > 0) {
		balance = balance + amount;
	}
	std::cout << "Current account balance is " << balance << "." << std::endl;
}

