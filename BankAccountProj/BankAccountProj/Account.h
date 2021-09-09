#pragma once
#include <string>
class Account
{
public:
	double balance;
	std::string name;
	Account();
	~Account();
	void deposit(double amount);
	void withdraw(double amount);
};

