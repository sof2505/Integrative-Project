#include <iostream>
#include <vector>
#include "movies.hpp"

#include "series.hpp"
using namespace std;

int main() {
    int opcion;
    bool repeat = true;

    Movies movies;
    movies.loadMovies("movies.csv");

    Series serie;
    serie.loadSeries("series.csv");



    do{
        system("cls");

        cout << "Welcome to the streaming service" << endl;
        cout << "You'll hav ea few options from where to choose: " << endl;
        cout << "" << endl;
        cout << "Menu" << endl;
        cout << "  1. Show all videos" << endl;
        cout << "  2. Show videos, generally, by clasification or by genre." << endl;
        cout << "  3. Show videos of a series by its rating." << endl;
        cout << "  4. Show movies by its rating." << endl;
        cout << "  5. Rate a movie or series." << endl;
        cout << "  6. Exit" << endl;

        cout << "Ingrese una opción: " << endl;
        cin >> opcion;

        switch (opcion) {
            case 1: 
                system("cls");
                cout << "Movies: " << endl;
                cout << movies.show() << endl;

                cout << "\nSeries: " << endl;
                cout << serie.show() << endl;
                system("pause>nul"); 
                break;


            case 2:
            system("cls");
            cout << "Select an option: " << endl;
            cout << "  By classification  (C)" << endl;
            cout << "  By genre  (G)" << endl;
            char option;
            cin >> option;


                break;

            case 3:
                system("cls");
                cout << "Select a rating of series for us to search: " << endl;
                cout << "From: 1-5" << endl;
                int rating;
                cin >> rating;
                if (rating >= 1 && rating <= 5) {
                    cout << "Series with rating: " << rating << ": " << endl;
                    cout << serie.showRatedSeries(rating) << endl;
                } else {
                    cout << "Invalid rating! Please enter a number between 1 and 5." << endl;
                }

                system("pause>nul");
                break;

            case 4:
                system("pause>nul");
                break;

            case 5:
                system("pause>nul"); 
                break;

            case 6:

                repeat = false;
                break;
            

            default:
                cout << "Error,  try again." << endl;
                system("pause");
                break;

        }


    } while (repeat);

    cout << "Goodbye!" << endl;

    return 0;
}

    /*
    Movies movies;
    movies.loadMovies("movies.csv");
    cout << movies.ratedMovies();

    Series serie;
    serie.loadSeries("series.csv");
    cout << serie.show();
    cout << serie.showRatedSeries();
    return 0;
    */


    //std::vector<Series> series = Series::loadSeries("series.csv");


    //for (const auto& serie : series) {
        //serie.show();
    //}


