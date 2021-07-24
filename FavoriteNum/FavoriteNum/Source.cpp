/*============== CPP Fun ==================
*Author: Richard Caceres
* 
* Author has created this program to practice with C++.
* To use this application uncomment functions in main to see the output of each function.
* 
*/

#include "Header.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace head;

void MoneyChallenge();
void vectorFun();
void multiply(int number);
void MenuOption();
void LetterPyramid();
void MathWithCpp();
void SecretMessage();
void FavoriteNum();
void Pointers();
void PrintAllNums(std::vector<int> *const vec);
void AddNumberToVec(std::vector<int> *vec);
void MeanNumbers(std::vector<int> *const vec);
unsigned long long fibonacci(unsigned long long n);
unsigned long long factorial(unsigned long long n);

int main()
{
	//FavoriteNum();
	//=================================================================================
	//vectorFun();
	//=================================================================================
	//MoneyChallenge();
	//=================================================================================
	MenuOption();
	//=================================================================================
	//SecretMessage();
	//=================================================================================
	//LetterPyramid();
	//=================================================================================
	//MathWithCpp();
	//=================================================================================
	//std::cout<<fibonacci(20);
	//=================================================================================
	//std::cout << factorial(1);
	//=================================================================================
	//Pointers();
	return 0;
}

void Pointers() {
	int *int_ptr{ nullptr };
	int num{ 10 };

	int_ptr = &num;

	std::cout << int_ptr;
}

void FavoriteNum() {
	 int yourFavNum = 0;

	std::cout << "please enter your favorite number:";
	std::cin >> yourFavNum;

	std::cout << "Your favorite number is: " + std::to_string(yourFavNum) << std::endl;
	//multiply(yourFavNum);
}

unsigned long long fibonacci(unsigned long long n) {
	if (n <= 1)
		return n;

	return fibonacci(n - 1) + fibonacci(n - 2);
}
unsigned long long factorial(unsigned long long n) {
	if (n == 0)
		return 1;

	return n * factorial(n - 1);
}

void MoneyChallenge() {
	int centsInteger{ 0 }, total{ 0 }, dollars{ 0 }, quarters{ 0 }, dimes{ 0 }, nickles{ 0 }, pennies{ 0 };
	const int DOLLAR{ 100 };
	const int QUARTER{ 25 };
	const int DIME{ 10 };
	const int NICKLE{ 5 };

	std::cout << "Enter cents as an integer to return the change: ";
	std::cin >> centsInteger;

	dollars = centsInteger / DOLLAR;
	total = centsInteger % DOLLAR;

	quarters = total / QUARTER;
	total %= QUARTER;

	dimes = total / DIME;
	total %= DIME;

	nickles = total / NICKLE;
	total %= NICKLE;

	pennies = total;

	std::cout << "You can provide this change as follows:\n"
		<< "Dollars: " << dollars
		<< "\nQuarters: " << quarters
		<< "\nDimes: " << dimes
		<< "\nNickles: " << nickles
		<< "\nPennies: " << pennies;
}

void vectorFun() {
	std::vector<int> vector1;
	std::vector<int> vector2;
	std::vector <std::vector<int>> vector_2d;

	vector1.push_back(10);
	vector1.push_back(20);
	std::cout << "These are the results from vector1:\n";
	for (int i = 0; i < vector1.size(); i++) {
		std::cout << vector1.at(i) << "\n";
	}

	vector2.push_back(100);
	vector2.push_back(200);

	std::cout << "These are the results from vector2:\n";
	for (int i = 0; i < vector2.size(); i++) {
		std::cout << vector2.at(i) << "\n";
	}

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	std::cout << "These are the results from vector_2d:\n";
	for (std::vector<int> vect : vector_2d) {
		for (int i = 0; i < vect.size(); i++)
			std::cout << vect.at(i) << "\n";
	}

	vector1.at(0) = 1000;

	std::cout << "These are the results from vector_2d:\n";
	for (std::vector<int> vect : vector_2d) {
		for (int i = 0; i < vect.size(); i++)
			std::cout << vect.at(i) << "\n";
	}

	std::cout << "These are the results from vector1:\n";
	for (int i = 0; i < vector1.size(); i++) {
		std::cout << vector1.at(i) << "\n";
	}

}

void multiply(int number)
{
	number = number * 2;
	std::cout << "Your favorite number * 2 is equal to: " + std::to_string(number);
}

void AddNumberToVec(std::vector<int> *vec) {
	int num{0};

	std::cout << "Please enter the number to add:";
	std::cin >> num;
	(*vec).push_back(num);
	std::cout << "You added " << num << " to the list!" << std::endl;

}

void PrintAllNums(std::vector<int> *const vec) {
	std::cout << "You selected to print all numbers!\n";
	if (!(*vec).empty()) {
		for (int vec_item : *vec) {
			std::cout << vec_item << " ";
		}
	}
	else {
		std::cout << "There is nothing to show here as the list is empty!\n";
	}
	std::cout << std::endl;
}

void MeanNumbers(std::vector<int> *const vec) {
	float result{ 0 };

	
	std::cout << "This gets the Mean of numbers!\n";

	for (int vec_item : *vec) {
		result = result + vec_item;
	}
	result = result / (*vec).size();
	std::cout << std::setprecision(5);
	std::cout << "The mean of all the numbers in the vector is " << result << std::endl;
}

void SmallestOfNumbers(std::vector<int> *const vec) {
	int smallest{ 0 };

	std::cout << "This gets smallest number!\n";
	for (int vec_item : *vec) {
		if (vec_item < smallest || smallest == 0) {
			smallest = vec_item;
		}
	}
	std::cout << "The smallest number in the vector is: " << smallest << std::endl;
}

void LargestOfNumbers(std::vector<int>* const vec) {
	int largest{ 0 };

	std::cout << "This gets Largest numbers!\n";
	for (int vec_item : *vec) {
		if (vec_item > largest || largest == 0) {
			largest = vec_item;
		}
	}
	std::cout << "The largest number in the vector is: " << largest << std::endl;
}

void MenuOption() {

	bool quit{ false };
	std::vector<int> vec{};

	std::cout << std::boolalpha;

	while (!quit) {
		char option{ ' ' };
		std::cout << "P - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\n1 - Letter Pyramid by C++\n2 - This is a menu option\n3 - this is a menu option\nQ- Quit\n\nEnter your choice: ";
		std::cin >> option;
		//TODO: add declarations for the rest of the methods in the file.
		switch (option) {
		case 'p':
		case 'P':
			PrintAllNums(&vec);
			break;
		case 'a':
		case 'A':
			AddNumberToVec(&vec);
			break;
		case 'm':
		case 'M':
			MeanNumbers(&vec);
			break;
		case 's':
		case 'S':
			SmallestOfNumbers(&vec);
			break;
		case 'l':
		case 'L':
			LargestOfNumbers(&vec);
			break;
		case '1':
			LetterPyramid();
			break;
		case '2':
			std::cout << "Temp output for option 2";
			break;
		case '3':
			std::cout << "Temp output for option 3";
			break;
		case 'q':
		case 'Q':
			std::cout << "This quits program!";
			quit = true;
			break;
		default: std::cout << "Invalid input, please try again.\n";
		}
	}
}

void LetterPyramid() {
	std::string input{};

	std::cout << "Enter various letters or characters to have C++ create a pyramid: ";
	std::cin >> input;

	size_t numLetters = input.length();

	int position{ 0 };

	for (char c : input) {
		size_t numSpaces = numLetters - position;
		while (numSpaces > 0) {
			std::cout << " ";
			--numSpaces;
		}
		for (size_t i = 0; i < position; i++) {
			std::wcout << input.at(i);
		}

		std::cout << c;

		for (int i = position - 1; i >= 0; --i) {
			auto charAt = static_cast<size_t>(i);
			std::cout << input.at(charAt);
		}

		std::cout << std::endl;
		++position;
	}
}
void MathWithCpp(){
	std::cout << "nothing here yet";
}

void SecretMessage() {

	std::string message{};
	std::string alphabet{ "abcdefghijklmnopqrstuvwxyz " };
	std::string encrypt{ "=+$!^&.()_+=-/*8+?<>6][5210" };
	std::string encryptedMessage{};

	std::cout << "Enter a message you wish to encrypt:" << std::endl;
	std::getline(std::cin, message);

	for (size_t i{ 0 }; i < message.size(); i++) {
		for (size_t j{ 0 }; j < alphabet.size(); j++) {
			if (message.at(i) == alphabet.at(j)) {
				message.at(i) = encrypt.at(j);
			}
		}
	}
	std::cout << "Here is the encrypted message: " << message << std::endl;

	for (size_t i{ 0 }; i < message.size(); i++) {
		for (size_t j{ 0 }; j < encrypt.size(); j++) {
			if (message.at(i) == encrypt.at(j)) {
				message.at(i) = alphabet.at(j);
			}
		}
	}
	std::cout << "Here is the de-crypted message: " << message << std::endl;
}