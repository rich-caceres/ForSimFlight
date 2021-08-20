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
	void setMovieName(std::string movie_name);
	void setMovieRating();
	void setNumWatched();
	void displayMovie() const;
	//constructors
	Movie(std::string movie_name = "No name given", std::string movie_rating = "no rating/unknown", int num_watched = 0);
	//destructors
	~Movie();
};

