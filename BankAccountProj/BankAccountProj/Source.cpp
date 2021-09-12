#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"

int main() {

	Account acc;

	acc.deposit(100.00);
	acc.withdraw(100.00);
	acc.deposit(100.00);
	acc.withdraw(101.00);
	
	return 0;
}