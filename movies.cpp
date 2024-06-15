#include "movies.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

Movies::Movies()
{

}

Movies::Movies(int _id, const string& _title, const string& _genre, float _rating, float _duration) : Titles(_id, _title, _genre, _rating, _duration) 
{

}

void Movies::loadMovies(const string& fileName) {
    ifstream file(fileName);
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            istringstream ss(line);
            string id, title, genre, rating, duration;
            getline(ss, id, ','); //stringstream
            getline(ss, title, ',');
            getline(ss, duration, ',');
            getline(ss, genre, ',');
            getline(ss, rating, ',');

            vector<string> movie = {id, title, duration, genre, rating};
            movieData.push_back(movie); //unir en pushback
        }
        file.close();
    } else {
        cerr << "Unable to open file " << fileName << endl; // cerr= mensaje de error
    }
}

string Movies::showRatedMovies(string rating) const {
    string ratedmovies="";
    for (const auto& movie : movieData) {
        if (movie[4] == rating)
        {
            ratedmovies += "ID: " + movie[0] + " Title: " + movie[1] + "\n"
            + "   Duration: " + movie[2] + " minutes\n" + ".  Genre: " + movie[3]
            + ".  Rating: " + movie[4] + "\n\n";
        }
    }
    return ratedmovies;
}

string Movies::showGenreMovies(string genre) const {
    string genreMovies="";
    for (const auto& movie : movieData) {
        if (movie[3] == genre)
        {
            genreMovies += "ID: " + movie[0] + " Title: " + movie[1] + "\n"
            + "   Duration: " + movie[2] + " minutes\n" + ".  Genre: " + movie[3]
            + ".  Rating: " + movie[4] + "\n\n";
        }
    }
    return genreMovies;
}

string Movies::show() const {
    string movieoutput;
    for (const auto& movie : movieData) {
        movieoutput += "ID: " + movie[0] + " Title: " + movie[1] + "\n"
        + "   Duration: " + movie[2] + " minutes\n" + "  Genre: " + movie[3]
        + "   Rating: " + movie[4] + "\n\n";
    }
    return movieoutput;
}
