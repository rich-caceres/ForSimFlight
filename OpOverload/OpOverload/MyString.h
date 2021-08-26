#pragma once
class MyString
{
	//friend overloaded operators as global methods
	friend bool operator==(const MyString& lhs, const MyString& rhs);
	friend MyString operator-(const MyString& obj);
	friend bool operator<(const MyString& lhs, const MyString& rhs);
	friend MyString operator*(const MyString& obj);
	friend MyString operator+(const MyString& lhs, const MyString& rhs);
	friend std::ostream& operator<<(std::ostream& os, const MyString& rhs);
	friend std::istream& operator>>(std::istream& in, MyString& rhs);

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
		

		//overloaded functions that are member functions
		// =============================================
		//bool operator==(const MyString& lhs, const MyString& rhs);
		//MyString operator-(const MyString& obj);
		//MyString operator+(const MyString& lhs, const MyString& rhs);
		//std::ostream& operator<<(std::ostream& os, const MyString& rhs);
		//std::istream& operator>>(std::istream& in, MyString& rhs);
};

