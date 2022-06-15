#pragma once
#include <string>
#include <ctime>

//base class that will be used to create savings account as well
class Account
{
private:
	double interest_rate;
	double balance;
	std::string name;
	time_t date_created;
protected:
	//for protected fuinctions and variables
public:
	virtual void setInterestRate(double interest_rate);
	virtual void setBalance(double balance);
	virtual void setName(std::string name);
	virtual void set_time();
	virtual double getBalance();
	virtual std::string getName();
	time_t get_time();
	Account();
	Account(std::string name, double balance);
	virtual ~Account();
	virtual void deposit(double amount);
	virtual void withdraw(double amount);
};

