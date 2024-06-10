#include "titles.hpp"
Titles::Titles()
{
    string msg = "Untitled";
    rating = 0;
}

Titles::Titles(string _title, float _rating)
{
    title = _title;
    rating = _rating;
}

string Titles::show()
{
    cout << "The title is: " << title << endl << " Rating: "<< rating << endl;
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