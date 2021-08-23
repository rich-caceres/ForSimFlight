#include <iostream>


int main(){

	int year{ 1970 };
	int day{ 25 };
	int month{ 2 };

		while (year < 2021) {
			std::cout << month << "/" << day<< "/" << ++year<< std::endl;

		}

	return 0;
}