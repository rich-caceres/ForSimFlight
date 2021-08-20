// MovieCollection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Movie.h"
#include "Movies.h"

int main()
{
	std::string movie_name{""};
	std::string movie_rating{""};
	int num_watched{0};

	std::cout << "Please add the name of the movie:\n";
	std::getline(std::cin, movie_name);
	std::cout << "Please add the movie rating: \n";
	std::getline(std::cin, movie_rating);
	std::cout << "Please add the number of times watched: \n";
	std::cin >> num_watched;
	Movie movie(movie_name, movie_rating, num_watched);
	movie.displayMovie();
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
