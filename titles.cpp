#include "titles.hpp"
Titles::Titles()
{
    string msg = "Untitled";
    rating = 0;
}

Titles::Titles(string _title, string _genre, float _rating, float _duration)
{
    title = _title;
    genre = _genre;
    rating = _rating;
}

string Titles::show()
{
    cout << "The title is: " << title << endl << "  Genre: " << genre << "  Rating: "<< rating << endl;
    return 0;
}

string Titles::getTitle()
{
    return title;
}

int Titles::getRating()
{
    return rating;
}

string Titles::getGenre()
{
    return genre;
}

float Titles::getDuration()
{
    return duration;
}