#ifndef MOVIES
#define MOVIES

#include "Titles.hpp"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Movies : public Titles {
    private:
    vector<vector<string>> movieData;
    
    public:
    Movies();
    Movies(int _id, const string& _title, const std::string& _genre, float _rating, float _duration);

    void loadMovies(const string& fileName);
    string show() const override;
};

#endif 
