#include <iostream>//needed for input output
#include <string>//using strings
#include <vector>//using vectors
#include <cmath>//math library
#include <cstdlib>//C standard library
#include <iomanip>//setting Precision
#include <array>//using array library
#include "Header.h"

//prints out array items and also combines both arrays
void Header::pointerSolution() {
	const size_t array1_size{ 5 };
	const size_t array2_size{ 3 };

	int array1[]{ 1,2,3,4,5 };
	int array2[]{ 10,20,30 };

	std::cout << "Array 1: ";
	print(array1, array1_size);

	std::cout << "Array 2: ";
	print(array2, array2_size);

	int* results = apply_all(array1, array1_size, array2, array2_size);
	constexpr size_t results_size{ array1_size * array2_size };

	std::cout << "Result: ";
	print(results, results_size);

	delete[] results;//release memory in heap
	std::cout << std::endl;
}

//pointer solution to print items in an array
void Header::print(const int* const arrayRef, size_t sizeOfArray) {
	for (int item = 0; item < sizeOfArray; item++) {
		std::cout << arrayRef[item] << " ";
	}
}

//pointer solution to combine all items in an array
int* Header::apply_all(const int* const array1, size_t array1Size, const int* const array2, size_t array2Size) {
	int* results_arr{};
	results_arr = new int[array1Size * array2Size];//creates memory in heap
	int index = 0;

	for (int item1 = 0; item1 < array1Size; item1++) {
		for (int item2 = 0; item2 < array2Size; item2++) {
			results_arr[index] = array1[item1] * array2[item2];
			index++;
		}
	}
	return results_arr;
}
void Header::pointers() {
	int* int_ptr{ nullptr };
	int num{ 10 };

	int_ptr = &num;

	std::cout << int_ptr;
}

void Header::favoriteNum() {
	int yourFavNum = 0;

	std::cout << "please enter your favorite number:";
	std::cin >> yourFavNum;

	std::cout << "Your favorite number is: " + std::to_string(yourFavNum) << std::endl;
	//multiply(yourFavNum);
}

unsigned long long Header::fibonacci(unsigned long long n) {
	if (n <= 1)
		return n;

	return fibonacci(n - 1) + fibonacci(n - 2);
}
unsigned long long Header::factorial(unsigned long long n) {
	if (n == 0)
		return 1;

	return n * factorial(n - 1);
}

void Header::moneyChallenge() {
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

void Header::vectorFun() {
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

void Header::multiply(int number)
{
	number = number * 2;
	std::cout << "Your favorite number * 2 is equal to: " + std::to_string(number);
}

void Header::addNumberToVec(std::vector<int>* vec) {
	int num{ 0 };

	std::cout << "Please enter the number to add:";
	std::cin >> num;
	(*vec).push_back(num);
	std::cout << "You added " << num << " to the list!" << std::endl;

}

void Header::printAllNums(std::vector<int>* const vec) {
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

void Header::meanNumbers(std::vector<int>* const vec) {
	float result{ 0 };


	std::cout << "This gets the Mean of numbers!\n";

	for (int vec_item : *vec) {
		result = result + vec_item;
	}
	result = result / (*vec).size();
	std::cout << std::setprecision(5);
	std::cout << "The mean of all the numbers in the vector is " << result << std::endl;
}

void Header::smallestOfNumbers(std::vector<int>* const vec) {
	int smallest{ 0 };

	std::cout << "This gets smallest number!\n";
	for (int vec_item : *vec) {
		if (vec_item < smallest || smallest == 0) {
			smallest = vec_item;
		}
	}
	std::cout << "The smallest number in the vector is: " << smallest << std::endl;
}

void Header::largestOfNumbers(std::vector<int>* const vec) {
	int largest{ 0 };

	std::cout << "This gets Largest numbers!\n";
	for (int vec_item : *vec) {
		if (vec_item > largest || largest == 0) {
			largest = vec_item;
		}
	}
	std::cout << "The largest number in the vector is: " << largest << std::endl;
}

void Header::menuOption() {

	bool quit{ false };
	std::vector<int> vec{};

	std::cout << std::boolalpha;


	while (!quit) {
		char option{ ' ' };
		std::cout << "P - Print numbers\nI - Pointer Solution\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nW - Percent increase or decrease on number\n1 - Letter Pyramid by C++\n2 - This is a menu option\n3 - This will create an encrypted message\nQ- Quit\n\nEnter your choice: ";
		std::cin >> option;
		//TODO: add declarations for the rest of the methods in the file.
		switch (option) {
		case 'p':
		case 'P':
			printAllNums(&vec);
			break;
		case 'i':
		case 'I':
			pointerSolution();
			break;
		case 'a':
		case 'A':
			addNumberToVec(&vec);
			break;
		case 'w':
		case 'W':
			mathWithCpp();
			break;
		case 'm':
		case 'M':
			meanNumbers(&vec);
			break;
		case 's':
		case 'S':
			smallestOfNumbers(&vec);
			break;
		case 'l':
		case 'L':
			largestOfNumbers(&vec);
			break;
		case '1':
			letterPyramid();
			break;
		case '2':
			letterPyramid();
			break;
		case '3':
			secretMessage();
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

void Header::letterPyramid() {

	std::string input{};
	std::cout << "Thsi will output a character pyramid\n";
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
void Header::mathWithCpp() {
	float percentage;

	std::cout << "Enter the percentage to increase or decrease by:\n";
	std::cin >> percentage;

	percentage = percentage / 100;

	std::cout << percentage;
}

void Header::secretMessage() {

	std::string alphabet{ "abcdefghijklmnopqrstuvwxyz " };
	std::string encrypt{ "=+$!^&.()_+=-/*8+?<>6][5210" };
	std::cout << "This will encrypt a message based on input\n";
	std::cout << "You have chosen to encrypt message!!\n";

	std::cin;
	std::string message{};

	std::getline(std::cin >> std::ws, message);

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