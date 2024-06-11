#include "series.hpp"
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

string Series::show()
{
    cout << "The title is: " << title << endl << "  Genre: " << genre << "  Rating: "<< rating << endl;
    cout << "  Season: " << season << endl << "  Episode: " << episode << endl;
    return 0;
}



