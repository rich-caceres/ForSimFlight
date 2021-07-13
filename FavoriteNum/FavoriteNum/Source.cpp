#include <iostream>;
#include <string>;
#include <vector>;

void MoneyChallenge() {
	int centsInteger{ 0 }, total{ 0 }, dollars{ 0 }, quarters{ 0 }, dimes{ 0 },nickles{ 0 }, pennies{ 0 };
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
			<<"\nQuarters: " << quarters
			<<"\nDimes: " << dimes
			<<"\nNickles: " << nickles
			<<"\nPennies: " << pennies;
}

void vectorFun() {
	std::vector<int> vector1;
	std::vector<int> vector2;
	std::vector <std::vector<int>> vector_2d;

	vector1.push_back(10);
	vector1.push_back(20);
	std::cout << "These are the results from vector1:\n" ;
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
	for (std::vector<int> vect:vector_2d) {
		for(int i = 0; i < vect.size(); i++)
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

int main()
{
	//int yourFavNum = 0;

	//std::cout << "please enter your favorite number:";
	//std::cin >> yourFavNum;

	//std::cout << "Your favorite number is: " + std::to_string(yourFavNum) << std::endl;
	//multiply(yourFavNum);
	//=================================================================================

	//vectorFun();

	MoneyChallenge();
	return 0;
}

