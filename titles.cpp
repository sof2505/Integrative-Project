#include "titles.hpp"
#include <iostream>
#include <string>
using namespace std;

Titles::Titles()
{
    id = 0;
    title = "Untitled";
    genre = "";
    rating = 0; 
    duration = 0;
}

Titles::Titles(int _id, const string& _title, const string& _genre, float _rating, float _duration)
{
    id = _id;
    title = _title;
    genre = _genre;
    rating = _rating;
    duration = _duration;
}

const string& Titles::getTitle() const {
    return title;
}

float Titles::getRating() const {
    return rating;
}

const string& Titles::getGenre() const {
    return genre;
}

float Titles::getDuration() const {
    return duration;
}
