#include "Base.h"
#include <string>
#include <iostream>

Base::Base() 
	:phrase{"No Name"} {

}

Base::Base(std::string name) 
	:phrase{name} {

}

void Base::PrintGreeting() {
	std::cout << "Enter your name " << std::endl;
	std::cin >> phrase;
	std::cout << "Hello " << phrase << std::endl;
}
