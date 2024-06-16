#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <locale>
#include <algorithm>
#include "movies.hpp"
#include "series.hpp"
using namespace std;

int main() {
    int opcion;
    bool repeat = true;
    int rating; // Declare rating variable outside switch

    // Declared variables for cases 5 and 6
    string rate_user = "";
    string ID_num = "";
    string type_video = "";
    string episode_user = "";
    string ID_series = "";

    vector<string> IDseries_options= {"S1","S2","S3","S4","S5","S6","S7","S8","S9","S10"}; 

    //Possible number ID's
    vector<string> ID_options= {"1","2","3","4","5","6","7","8","9","10"}; 
    //Possible rating numbers
    vector<string> rate_options= {"1","2","3","4","5"}; 
    //Possible episode numbers
    vector<string> ep_options= {"1","2","3","4","5"}; 

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
        cout << "  2. Show videos with a specific rating or specific genre." << endl;
        cout << "  3. Show videos of a specific series with specific rating." << endl;
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

            case 2:
                system("cls");
                cout << "Select an option: " << endl;
                cout << "  By rating  (R)" << endl;
                cout << "  By genre  (G)" << endl;
                char option;
                cin >> option;
                option = toupper(option);
                if (option == 'R' || option == 'G'){
                    if (option == 'R' ) {
                        int rating;
                        cout << "\nPlease select a number between 1 and 5 for the rating" << endl;
                        cin >> rating;
                        string ratingString = to_string(rating); 
                        if (rating >= 1 && rating <= 5)
                        {
                            cout << "\nVideos with rating " << rating << ": " << endl;
                            cout << "\nMovies with rating " << rating << ": " << endl;
                            cout << movie.showRatedMovies(ratingString) << endl;
                            cout << "\nSeries with rating " << rating << ": " << endl;
                            cout << serie.showRatedSeries(ratingString) << endl;
                            system("pause>nul"); 
                            break;
                        }
                        else 
                        {
                        cout << "Invalid rating!" << endl;
                        cout << "Enter a number from 1 to 5 ." << endl;
                        }
                    } else if (option == 'G'){
                        string genre;
                        string gen_choice;
                        cout << "\nPlease select a letter according to the genre of your choice." << endl;
                        cout << "  Drama (D)" << endl;
                        cout << "  Action (A)" << endl;
                        cout << "  Mystery (M)" << endl;
                        cout << "  Scifi (S)" << endl;
                        cin >> gen_choice;
                        if (gen_choice == "D")
                        {
                            genre = "Drama";
                            cout << "\nVideos of drama genre: "<< endl;
                            cout << "Movies of drama genre: "<< endl;
                            cout << movie.showGenreMovies(genre) << endl;
                            cout << "Series of drama genre: "<< endl;
                            cout << serie.showGenreSeries(genre) << endl;
                            system("pause>nul"); 
                            break;
                        }

                        else if (gen_choice == "A")
                        {
                            genre = "Action";
                            cout << "\nVideos of action genre: "<< endl;
                            cout << "Movies of action genre: "<< endl;
                            cout << movie.showGenreMovies(genre) << endl;
                            cout << "Series of action genre: "<< endl;
                            cout << serie.showGenreSeries(genre) << endl;
                            system("pause>nul"); 
                            break;
                        }

                        else if (gen_choice == "M")
                        {
                            genre = "Mystery";
                            cout << "\nVideos of mystery genre: "<< endl;
                            cout << "Movies of mystery genre: "<< endl;
                            cout << movie.showGenreMovies(genre) << endl;
                            cout << "Series of mystery genre: "<< endl;
                            cout << serie.showGenreSeries(genre) << endl;
                            system("pause>nul"); 
                            break;
                        }
                        
                        else if (gen_choice == "S")
                        {
                            genre = "Scifi";
                            cout << "\nVideos of scifi genre: "<< endl;
                            cout << "Movies of scifi genre: "<< endl;
                            cout << movie.showGenreMovies(genre) << endl;
                            cout << "Series of scifi genre: "<< endl;
                            cout << serie.showGenreSeries(genre) << endl;
                            system("pause>nul"); 
                            break;
                        }

                        else
                        {
                            cout << "Invalid genre!"<< endl;
                            system("pause>nul"); 
                            break;
                        }

                    }
                } else {
                    cout << "Invalid option!" << endl;
                }

            case 3: {
                                system("cls");

                cout << "Type the ID (letter + number) of a series which you want to see: " << endl;
                cin >> ID_series;
                if(find(IDseries_options.begin(), IDseries_options.end(), ID_series) != IDseries_options.end())
                {
                    cout << "\nSelect a rating of series for us to search: " << endl;
                    cout << "From: 1-5" << endl;
                    cin >> rating; 
                    string ratingSerie = to_string(rating); 

                    if (rating >= 1 && rating <= 5) {
                        cout << "Videos of that series with rating: " << rating << ": " << endl;
                        cout << serie.showRatedVideosSpecSeries(ID_series,ratingSerie) << endl;
                    } else {
                        cout << "Invalid rating!" << endl;
                        cout << "Enter a number from 1 to 5 ." << endl;
                    }

                }

                else
                {
                    cout << "Invalid ID. Try again!" << endl;

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
                system("cls");
                cout << "Select the type of video you want to rate" << endl;
                cout << "  Movie (M)" << endl;
                cout << "  Serie (S)" << endl;
                cin >> type_video;
                if (type_video == "M")
                {
                    cout << "Type only the number ID of the movie you want" << endl;
                    cin >> ID_num;
                    if (find(ID_options.begin(), ID_options.end(), ID_num) != ID_options.end())
                    {
                        cout << "Select a number bewteen 1 and 5 to rate the movie" << endl;
                        cin >> rate_user;
                        if (find(rate_options.begin(), rate_options.end(), rate_user) != rate_options.end())
                        {
                            movie.rateMovie(ID_num,rate_user);
                        }
                        else
                        {
                            cout << "Incorrect rate. Try Again!" << endl;

                        }
                    }

                    else
                    {
                        cout << "Incorrect number ID. Try Again!" << endl;
                    }


                }
                else if (type_video == "S")
                {
                    cout << "Type only the number ID of the series you want" << endl;
                    cin >> ID_num;
                    if (find(ID_options.begin(), ID_options.end(), ID_num) != ID_options.end())
                    {
                        cout << "Type the episode number of that series" << endl;
                        cin >> episode_user;
                        if (find(ep_options.begin(), ep_options.end(), episode_user) != ep_options.end())
                        {
                            cout << "Select a number bewteen 1 and 5 to rate the movie" << endl;
                            cin >> rate_user;
                            if(find(rate_options.begin(), rate_options.end(), rate_user) != rate_options.end())
                            {
                                serie.rateSeries(ID_num,episode_user,rate_user);
                            }
                            else
                            {
                                cout << "Incorrect rate. Try Again!" << endl;
                            }
                        }
                        else
                        {
                            cout << "Incorrect number of episode. Try Again!" << endl;
                        }
                    }

                    else
                    {
                        cout << "Incorrect number ID. Try Again!" << endl;
                    }
                }
                else
                {
                    cout << "Incorrect type of video. Try again!" << endl;
                }
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
