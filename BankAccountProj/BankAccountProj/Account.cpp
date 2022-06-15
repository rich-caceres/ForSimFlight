#include <iostream>
#include <string>
#include <ctime>
#include "Account.h"

//constructor call
Account::Account()
	:balance{ 0.0 }, name{ "NULL" }, date_created{ time(0) }, interest_rate{ 0.5 }{
}

//constructor overload
Account::Account(std::string name, double balance, double interest_rate) 
	: name{ name }, balance{ balance }, interest_rate{ interest_rate }, date_created{ time(0) } {
	std::cout << "You account has been created as " << this->name << " your current balance is " << this->balance << std::endl;
}

//deconstructor
Account::~Account() {

}
//setter and getters
void Account::setBalance(double balance) {
	this->balance = balance;
}

void Account::setInterestRate(double interest_rate) {
	this->interest_rate = interest_rate;
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

//withdrawal implementation
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

//applying the interest, will need to expand to include the time
void Account::applyInterestRate() {
	double* tempBalance = new double;
	*tempBalance = getBalance();
	*tempBalance = *tempBalance + (*tempBalance * interest_rate);
	setBalance(*tempBalance);
	delete tempBalance;
	std::cout << "Balance after applied interest rate is " << getBalance() << std::endl;
}

//deposit implementation
void Account::deposit(double amount) {
	std::cout << "depositing " << amount << " to account." << std::endl;
	if (amount > 0) {
		balance = balance + amount;
	}
	std::cout << "Current account balance is " << balance << "." << std::endl;
}

