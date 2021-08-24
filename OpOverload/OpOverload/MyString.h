#pragma once
class MyString
{
	private:
		char* str;
	public:
		MyString();
		MyString(const char* s);
		MyString(const MyString& s);
		~MyString();
		void display() const;
		int get_length() const;
		const char* get_str() const;
		MyString& operator=(const MyString& rhs);
};

