#include <iostream>
#include <vector>
#include "movies.hpp"
#include "series.hpp"
using namespace std;

int main() {
    // Cargar películas desde el archivo CSV
    Movies movies;
    movies.loadMovies("movies.csv");  // Cargar las películas desde el archivo CSV
    cout << movies.show();  // Mostrar las películas cargadas

    return 0;

    // Cargar series desde el archivo CSV
    //std::vector<Series> series = Series::loadSeries("series.csv");


    // Mostrar series
    //for (const auto& serie : series) {
        //serie.show();
    //}

    return 0;
}
