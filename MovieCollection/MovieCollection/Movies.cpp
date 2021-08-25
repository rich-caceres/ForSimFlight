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
			std::cout << "Movie already in collection. Times watched increased by 1.\n";
			movies[i].increaseNumWatched();
			return true;
		}
	}
	return false;
}
