#include <iostream>
#include <vector>
#include "movies.hpp"

#include "series.hpp"
using namespace std;

int main() {
    Movies movies;
    movies.loadMovies("movies.csv");
    cout << movies.ratedMovies();




    Series serie;
    serie.loadSeries("series.csv");
    cout << serie.show();
    return 0;

    //std::vector<Series> series = Series::loadSeries("series.csv");


    //for (const auto& serie : series) {
        //serie.show();
    //}

    return 0;
}
