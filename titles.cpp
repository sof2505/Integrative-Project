#include "titles.hpp"
Titles::Titles()
{
    string msg = "Untitled";
    rating = 0;
}

Titles::Titles(string _title, string genre, float _rating)
{
    this ->title = title;
    this ->genre = genre;
    this ->rating = rating;
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