#pragma once
#include <string>
#include <ctime>

class Account
{
public:
	double balance;
	std::string name;
	time_t date_created;
	Account();
	Account(std::string name, double balance);
	~Account();
	void deposit(double amount);
	void withdraw(double amount);
};

