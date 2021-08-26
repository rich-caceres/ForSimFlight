/* Author: Richard Caceres
* 
* Practice program using copy constructors to create a string using c style strings. Used strcpy_s to copy the string 
* instead of strcpy for security purposes. Using operator overload to create a deep copy instead of using a copy constructor.
*
*/

#include <iostream>
#include "MyString.h"

int main()
{
	MyString empty; //empty string
	MyString rich("Rich");
	MyString richie(rich);
	std::cout << std::boolalpha;
	std::cout << (rich == richie) << std::endl;
	rich = rich * 3;
	rich = MyString{ "RichieRich" };
	rich.display();
	

	richie = rich;

	empty.display();
	rich.display();
	richie.display();
}

