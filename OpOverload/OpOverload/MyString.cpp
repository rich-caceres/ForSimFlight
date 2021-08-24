#include <cstring>
#include <string.h>
#include <iostream>
#include "MyString.h"

MyString::MyString()
	:str(nullptr) {
	str = new char[1];
	* str = '\0';
}

MyString::MyString(const char* s)
	: str{ nullptr } {
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		str = new char[std::strlen(s) + 1];
		strcpy_s(str, std::strlen(s) + 1, s);
	}
}
MyString::MyString(const MyString &source) 
	:str{nullptr} {

	str = new char[std::strlen(source.str) + 1];
	strcpy_s(str, std::strlen(source.str) + 1,source.str);

}
MyString::~MyString() {
	delete str;
}

void MyString::display() const {
	for (size_t i = 0; i < sizeof(str); i++) {
		std::cout << str[i];
	}
	std::cout << std::endl;
}

int MyString::get_length() const {
	return std::strlen(str);
}