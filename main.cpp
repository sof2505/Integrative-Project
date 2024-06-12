#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <locale>
#include "movies.hpp"
#include "series.hpp"

using namespace std;

int main() {
    int opcion;
    bool repeat = true;
    int rating; // Declare rating variable outside switch

    Movies movie;
    movie.loadMovies("movies.csv");

    Series serie;
    serie.loadSeries("series.csv");

    do {
        system("cls");

        cout << "Welcome to the streaming service" << endl;
        cout << "You'll have a few options to choose from: " << endl;
        cout << "" << endl;
        cout << "Menu" << endl;
        cout << "  1. Show all videos" << endl;
        cout << "  2. Show videos, generally, by classification or by genre." << endl;
        cout << "  3. Show videos of a series by its rating." << endl;
        cout << "  4. Show movies by their rating." << endl;
        cout << "  5. Rate a movie or series." << endl;
        cout << "  6. Exit" << endl;

        cout << "Enter an option: ";
        cin >> opcion;

        switch (opcion) {
            case 1: 
                system("cls");
                cout << "Movies: " << endl;
                cout << movie.show() << endl;

                cout << "\nSeries: " << endl;
                cout << serie.show() << endl;
                system("pause>nul"); 
                break;

            case 2:                /* Este y el 5 porfas Emma*/
                /*{
                system("cls");
                cout << "Select an option: " << endl;
                cout << "  By classification  (C)" << endl;
                cout << "  By genre  (G)" << endl;
                char option;
                cin >> option;
                option << toupper(option);
                if (option == ("C" || "G")){
                    if (option == "C" ) {
                        cout << "Series with rating: " << rating << ": " << endl;
                        cout << movie.showRatedSeries(ratingSerie) << endl;
                    } else {
                        cout << "Invalid rating!" << endl;
                        cout << "Enter a number from 1 to 5 ." << endl;
                    }
                break;
                } else {
                    cout << "Invalid option!" << endl;
                }*/

            case 3: {
                system("cls");
                cout << "Select a rating of series for us to search: " << endl;
                cout << "From: 1-5" << endl;
                cin >> rating; 
                string ratingSerie = to_string(rating); 

                if (rating >= 1 && rating <= 5) {
                    cout << "Series with rating: " << rating << ": " << endl;
                    cout << serie.showRatedSeries(ratingSerie) << endl;
                } else {
                    cout << "Invalid rating!" << endl;
                    cout << "Enter a number from 1 to 5 ." << endl;
                }

                system("pause>nul");
                break;
            }

            case 4: {
                system("cls");
                cout << "Select a rating of movies for us to search: " << endl;
                cout << "From: 1-5" << endl;
                cin >> rating; 
                string ratingMovie = to_string(rating);

                if (rating >= 1 && rating <= 5) {
                    cout << "Movies with rating: " << rating << ": " << endl;
                    cout << movie.showRatedMovies(ratingMovie) << endl;
                } else {
                    cout << "Invalid rating!" << endl;
                    cout << "Enter a number from 1 to 5 ." << endl;
                }

                system("pause>nul");
                break;
            }

            case 5:
                system("pause>nul"); 
                break;

            case 6:
                repeat = false;
                break;

            default:
                cout << "Error, try again." << endl;
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


