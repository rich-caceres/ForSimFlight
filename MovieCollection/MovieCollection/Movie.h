#pragma once
#include <string>

class Movie
{
private:
	std::string movie_name;
	char movie_rating;
	int num_watched;
public:
	std::string getMovieName() const;
	char getMovieRating() const;
	int getNumWatched() const;
};

