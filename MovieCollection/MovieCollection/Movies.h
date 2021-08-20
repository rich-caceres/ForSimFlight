#pragma once
#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
	std::vector<Movie> movies;
public:
	void addMovie(Movie movie);
	void displayAllMovies() const;
	void checkForMatchingName(std::string movieName) const;
};

