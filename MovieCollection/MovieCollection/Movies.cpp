#include "Movies.h"
#include "Movie.h"
#include <iostream>
#include <vector>
#include <string>

void Movies::addMovie(Movie movie) {
	if (!checkForMatchingName(*movie.getMovieName())) {
		movies.push_back(movie);
	}
}

void Movies::displayAllMovies() const{
	if (movies.size() == 0) {
		std::cout << "Sorry no movies to display"<<std::endl;
	}
	else {
		int movieCount{ 1 };
		for (const auto movie : movies) {
			std::cout << "====================== "<< movieCount << " =======================" << std::endl;
			movie.displayMovie();
			++movieCount;
		}
	}
}

bool Movies::checkForMatchingName(std::string movieName){
	for (size_t i = 0; i < movies.size(); ++i) {
		if (*movies[i].getMovieName() == movieName) {
			char answer{' '};
			std::cout << "Movie already in collection.\n";
			std::cout << "Would you like to change the amount of times watched? enter Y if so. Enter N if you would like to increase by 1.\n";
			std::cin >> answer;
			if (tolower(answer) == 'y') {
				int numWatched{ 0 };
				std::cout << "Enter the amount of times watched.\n";
				std::cin >> numWatched;

				movies[i].setNumWatched(&numWatched);
			}
			else {
				movies[i].increaseNumWatched();
			}
			return true;
		}
	}
	return false;
}
