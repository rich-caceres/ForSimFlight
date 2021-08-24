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

MyString::MyString(MyString &&source) noexcept
	:str{source.str} {
	source.str = nullptr;
}

MyString::~MyString() {
	delete [] str;
}

void MyString::display() const {
	
	std::cout << str << " : " << get_length() << std::endl;
}

int MyString::get_length() const {
	return std::strlen(str);
}

const char *MyString::get_str() const{
	return str;
}

MyString& MyString::operator= (const MyString& rhs) {

	if (this == &rhs) 
		return *this;
	
	delete[] str;

	str = new char[std::strlen(rhs.str) + 1];
	strcpy_s(str, std::strlen(rhs.str) + 1, rhs.str);

	return *this;

}

MyString& MyString::operator=(MyString&& rhs) {

	if (this == &rhs)
		return *this;

	delete[] str;
	str = rhs.str;

	rhs.str = nullptr;

	return *this;
}