#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"

int main() {

	Account acc;
	SavingsAccount sav_acc;

	sav_acc.deposit(100.00);
	sav_acc.applyInterestRate();
	
	//##TESTING CODE BELOW
	//acc.deposit(100.00);
	//acc.withdraw(100.00);
	//acc.deposit(100.00);
	//acc.withdraw(101.00);
	
	return 0;
}