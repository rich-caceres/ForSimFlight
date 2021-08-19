#pragma once
#include <string>

class Movie
{
private:
	std::string movie_name;
	std::string movie_rating;
	int num_watched;
public:
	std::string getMovieName() const;
	std::string getMovieRating() const;
	int getNumWatched() const;
	void setMovieName();
	void setMovieRating();
	void setNumWatched();
	void displayMovie() const;
	//constructors
	Movie();
	Movie(std::string name, std::string movie_rating, int num_watched);
	//destructors
	~Movie();
};

