#pragma once
class Account
{
public:
	double balance;
	double amount;
	Account();
	~Account();
	void deposit(double amount);
	void withdraw(double amount);
};

