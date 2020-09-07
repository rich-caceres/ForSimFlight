// HelloWorldFirstApp.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
#include <cmath>


std::string getName() {
    std::string fullName;

    getline(std::cin, fullName);

    return fullName;

}

//functions have to be at the top of the stack at all times to run the functon without errors!
int mathCompletion(int num, int userNum) {

    int result = 0;

    result = num + userNum;

    return result;
}

//using a function to do the same work in main, this is a much better way to seperate functions!
void NameFunction() {

    int num = 5;
    int userNum = 0;
    std::string firstName = "";
    std::string lastName = "";
    std::string fullName = "";

    //printing to console with cout
    std::cout << "Hello World!\n";
    std::cout << "Working with C++ is fun\nmy number is equal to " << num << "\nnum can also be printed with another statement like so: \n";
    std::cout << num;
    //Working with input from user
    std::cout << "\nLets get user input, please enter your age:\n";
    std::cin >> num;
    std::cout << "Your age is " << num << " thats pretty awesome. Thanks for telling me!\n";
    std::cout << "Now enter a number so that C++ can do math\n";
    std::cin >> userNum;
    //Doing math with c++ along with user input

    std::cout << userNum << " + " << num << " = " << mathCompletion(num, userNum) << "\n";
    std::cout << "C++ can also find the maximum and minimum of these numbers starting with max:\n" << std::max(num, userNum) << "\nNow minimum:\n" << std::min(num, userNum);


    //Working with string in C++
    std::cout << "\nOk, let's have C++ get your name. Please enter your first name:\n ";
    std::cin >> firstName;
    std::cout << "Enter your last name:\n ";
    std::cin >> lastName;
    std::cout << "Hello " << firstName.append(" ").append(lastName) << ", it's very nice to meet you!\n";
    std::cout << "There is a better way to get your name, this time I would like you to enter your entire name on one line: \n";
    std::cin.get(); //Forces C++ to jump lines because we have been using cin already
    fullName = getName();
    std::cout << "Your full name is: " << fullName;

}

int main()
{

    NameFunction();
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
