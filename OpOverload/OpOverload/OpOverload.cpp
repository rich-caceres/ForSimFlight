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

	richie = rich;

	empty.display();
	rich.display();
	richie.display();
}

