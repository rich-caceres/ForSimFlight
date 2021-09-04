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

MyString::MyString(MyString &&source)
	:str{source.str} {
	std::cout << "Move constructor used\n";
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

	std::cout << "Move operator used\n";

	if (this == &rhs)
		return *this;

	delete[] str;
	str = rhs.str;

	rhs.str = nullptr;

	return *this;
}

//Equality
bool operator==(const MyString& lhs, const MyString& rhs) {
	return (std::strcmp(lhs.str, rhs.str) == 0);
}

//Make lowercase
MyString operator-(const MyString& obj) {
	char* buff = new char[std::strlen(obj.str) + 1];
	strcpy_s(buff, std::strlen(obj.str) + 1, obj.str);

	for (size_t i = 0; i < std::strlen(buff); i++) 
		buff[i] = std::tolower(buff[i]);
	
	MyString temp{ buff };
	delete[] buff;
	return temp;
}

//make uppercase
MyString operator++(const MyString& obj) {
	char* buff = new char[std::strlen(obj.str) + 1];
	strcpy_s(buff, std::strlen(obj.str) + 1, obj.str);

	for (size_t i = 0; i < std::strlen(buff); i++)
		buff[i] = std::toupper(buff[i]);

	MyString temp{ buff };
	delete[] buff;
	return temp;

}

//concat
MyString operator+(const MyString& lhs, const MyString& rhs) {
	char* buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
	strcpy_s(buff, std::strlen(lhs.str) + 1, lhs.str);
	strcat_s(buff, std::strlen(rhs.str) + 1, rhs.str);
	MyString temp{ buff };
	delete[] buff;
	return temp;
}

MyString operator+=(const MyString& lhs, const MyString& rhs) {
	char* buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
	strcpy_s(buff, std::strlen(lhs.str) + 1, lhs.str);
	strcat_s(buff, std::strlen(rhs.str) + 1, rhs.str);
	MyString temp{ buff };
	delete[] buff;
	return temp;
}

bool operator<(const MyString& lhs, const MyString &rhs) {
	return (std::strlen(lhs.str) < std::strlen(rhs.str));
}

bool operator>(const MyString& lhs, const MyString& rhs) {
	return (std::strlen(lhs.str) > std::strlen(rhs.str));
}

MyString operator*(const MyString &obj, int numOfTimes) {
	char* buff = new char[(std::strlen(obj.str) * numOfTimes) + 1];
	strcpy_s(buff, std::strlen(obj.str) + 1, obj.str);

	for (int i = 1; i < numOfTimes; i++)
		strcat_s(buff, (std::strlen(obj.str) * numOfTimes) + 1, obj.str);

	MyString temp{ buff };
	delete[] buff;

	return temp;
}

MyString operator*=(const MyString& obj, int numOfTimes) {
	char* buff = new char[(std::strlen(obj.str) * numOfTimes) + 1];
	strcpy_s(buff, std::strlen(obj.str) + 1, obj.str);

	for (int i = 1; i < numOfTimes; i++)
		strcat_s(buff, (std::strlen(obj.str) * numOfTimes) + 1, obj.str);

	MyString temp{ buff };
	delete[] buff;
	
	return temp;
}

MyString operator--(const MyString& obj) {
	
	char* buff = new char[std::strlen(obj.str) + 1];
	strcpy_s(buff, std::strlen(obj.str) + 1, obj.str);

	for (int i = 0; i < std::strlen(obj.str) + 1; i++)
		buff[i] = std::tolower(buff[i]);
	
	return obj.str;
}

//overloaded insertion operator
std::ostream& operator<<(std::ostream& os, const MyString& rhs) {
	os << rhs.str;
	return os;
}

std::istream& operator>>(std::istream& in, MyString& rhs) {
	char* buff = new char[1000];
	in >> buff;
	rhs = MyString{ buff };
	delete[] buff;
	return in;
}

