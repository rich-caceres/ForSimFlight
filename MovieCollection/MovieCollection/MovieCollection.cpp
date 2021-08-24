// MovieCollection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Movie.h"
#include "Movies.h"

Movie createMovie();

int main()
{
	bool addMovie = true;
	Movies MovieCollection;

	while (addMovie) {
		char answer;
		Movie movie(createMovie());
		MovieCollection.addMovie(movie);
		std::cout << "Would you like to add another movie? y/n";
		std::cin >> answer;
		if (answer == 'n') addMovie = false;
	}
	MovieCollection.displayAllMovies();
}

Movie createMovie() {
	std::string movie_name{};
	std::string movie_rating{};
	int num_watched{ 0 };

	std::cout << "Please add the name of the movie:\n";
	std::getline(std::cin >> std::ws, movie_name);
	std::cout << "Please add the movie rating:\n";
	std::getline(std::cin, movie_rating);
	std::cout << "Please add the number of times watched:\n";
	std::cin >> num_watched;
	Movie movie(movie_name, movie_rating, num_watched);

	return movie;
}

