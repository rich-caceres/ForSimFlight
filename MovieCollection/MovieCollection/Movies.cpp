#include "Movies.h"
#include "Movie.h"
#include <iostream>
#include <vector>
#include <string>

void Movies::addMovie(Movie movie) {
	
	if (!checkForMatchingName(movie.getMovieName())) {
		movies.push_back(movie);
	}

}

void Movies::displayAllMovies() const{
	for (Movie movie : movies) {
		movie.displayMovie();
	}
}

bool Movies::checkForMatchingName(std::string movieName) const {
	for (Movie movie : movies) {
		if (movie.getMovieName() == movieName) {
			std::cout << "Movie already in collection. Times watched increased by 1.\n";
			movie.increaseNumWatched();
			return true;
		}
	}
	return false;
}
