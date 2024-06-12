#include "series.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
Series::Series()
{

}

Series::Series(int _id, string _title, string _genre, float _rating, float _duration, int _season, int _episode) : Titles(_id, _title, _genre, _rating, _duration)
{
    season = _season;
    episode = _episode;
}

int Series::getSeason(){
    return season;
}

int Series::getEpisode(){
    return episode;
}

void Series::loadSeries(const string& fileName) {
    ifstream file(fileName);
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            istringstream ss(line);
            string id, title, genre, rating, duration, episode, season;
            getline(ss, id, ','); //stringstream
            getline(ss, title, ',');
            getline(ss, duration, ',');
            getline(ss, genre, ',');
            getline(ss, episode, ',');
            getline(ss, season, ',');
            getline(ss, rating, ',');

            vector<string> serie = {id, title, duration, genre, episode, season, rating};
            SeriesData.push_back(serie); //unir en pushback
        }
        file.close();
    } else {
        cerr << "Unable to open file " << fileName << endl; // cerr= mensaje de error
    }
}

string Series::show() const {
    string serieoutput;
    for (const auto& serie : SeriesData) {
        serieoutput += "ID: " + serie[0] + " Title: " + serie[1] + "\n"
                            + "   Duration: " + serie[2] + " minutes    "
                            + "   Genre: " + serie[3] + "\n"
                            + "   Episode: " + serie[4] + "    "
                            + "   Season: " + serie[5] + "\n"
                            + "   Rating: " + serie[6] + "\n";
    }
    return serieoutput;
}

string Series::showRatedSeries(string rating) const {
  bool same = false ;
  string ratedseries = "";
  for (const auto& serie : SeriesData) {
    if ((serie[6]) == (rating)) {
      ratedseries += "ID: " + serie[0] + " Title: " + serie[1] + "\n"
                    "  Duration: " + serie[2] + " minutes  "
                    "  Genre: " + serie[3] + "\n"
                    "  Episode: " + serie[4] + "  "
                    "  Season: " + serie[5] + "\n"
                    "  Rating: " + serie[6] + "\n";

    } 
    }   //Checar esto 
    if (sizeof(ratedseries) == 0) {
    cout << "No match found";
    } else {
    return ratedseries;
}

}
