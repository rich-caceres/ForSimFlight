#include "Movies.h"
#include "Movie.h"
#include <iostream>
#include <vector>

void Movies::addMovie(Movie movie) {
	movies.push_back(movie);
}

void Movies::displayAllMovies() const{
	for (Movie movie : movies) {
		movie.displayMovie();
	}
}