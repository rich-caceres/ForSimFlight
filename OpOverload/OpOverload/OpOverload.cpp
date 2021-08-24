

#include <iostream>
#include "MyString.h"

int main()
{
	MyString empty; //empty string
	MyString rich("Rich");
	MyString richie(rich);

	empty.display();
	rich.display();
	richie.display();
}

