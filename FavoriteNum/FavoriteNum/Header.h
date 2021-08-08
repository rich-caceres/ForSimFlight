#pragma once
#include "iostream"//needed for input output
#include "string"//using strings
#include "vector"//using vectors
#include "cmath"//math library
#include "cstdlib"//C standard library
#include "iomanip"//setting Precision
#include "array"//using array library

	class Header 
	{
	public:
		//nothing here yet
		void moneyChallenge();
		void vectorFun();
		void multiply(int);
		void menuOption();
		void letterPyramid();
		void mathWithCpp();
		void secretMessage();
		void smallestOfNumbers(std::vector<int>* const vec);
		void largestOfNumbers(std::vector<int>* const vec);
		void favoriteNum();
		void pointers();
		void pointerSolution();
		void print(const int* const arr, size_t arrSize);
		int* apply_all(const int* const arr1, size_t arraySize1, const int* const arr2, size_t arraySize2);
		void printAllNums(std::vector<int>* const);
		void addNumberToVec(std::vector<int>*);
		void meanNumbers(std::vector<int>* const);
		unsigned long long fibonacci(unsigned long long n);
		unsigned long long factorial(unsigned long long n);
	};
