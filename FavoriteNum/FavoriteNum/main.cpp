#include <iostream>;

int main()
{
	int yourFavNum = 0;

	std::cout << "please enter your favorite number:";
	std::cin >> yourFavNum;
	
	std::cout << "Your favorite number is: " + yourFavNum.toString() << std::endl;

	return 0;
}