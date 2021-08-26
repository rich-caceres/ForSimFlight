#pragma once
class MyString
{
	friend bool operator==(const MyString& lhs, const MyString& rhs);
	friend MyString operator-(const MyString& obj);
	friend MyString operator+(const MyString& lhs, const MyString& rhs);
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

