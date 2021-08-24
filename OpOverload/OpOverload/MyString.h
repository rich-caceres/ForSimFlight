#pragma once
class MyString
{
	private:
		char* str;
	public:
		MyString();
		MyString(const char* s);
		MyString(const MyString& s);//copy contructor
		MyString(MyString&& s);//move constructor
		~MyString();
		void display() const;
		int get_length() const;
		const char* get_str() const;
		MyString& operator=(const MyString& rhs);//copy assignment
		MyString& operator=(MyString&& rhs);//move assignment
};

