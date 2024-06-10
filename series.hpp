#include "titles.hpp"
#include <iostream>
using namespace std;

class Series:public Titles{
    private:
        int season;
        int episode;
    public:
        Series();
        Series(string _title, string _genre, float _rating, int season, int episode);
};