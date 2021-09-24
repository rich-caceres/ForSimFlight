#pragma once
#include <string>
#include <ctime>

class Account
{
private:
	double balance;
	std::string name;
	time_t date_created;
public:
	void setBalance(double balance);
	void setName(std::string name);
	void set_time(time_t date_created);
	Account();
	Account(std::string name, double balance);
	~Account();
	void deposit(double amount);
	void withdraw(double amount);
};

