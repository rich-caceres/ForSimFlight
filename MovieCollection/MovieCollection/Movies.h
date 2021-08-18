#pragma once
#include <vector>
#include "Movie.h"

class Movies
{
private:
	std::vector<Movie> movies;
public:
	void addMovie(Movie movie);
};

