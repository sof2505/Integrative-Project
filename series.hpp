#include "titles.hpp"
#include <iostream>
using namespace std;

class Series:public Titles{
    private:
        int season;
        int episode;
        int rating;
        vector<vector<string>> SeriesData;
    public:
        Series();
        Series(int _id, string _title, string _genre, float _rating, float _duration,  int _season, int _episode);
        int getSeason();
        int getEpisode();
        
        void loadSeries(const string& fileName);
        string show() const override;
        string showRatedSeries(int rating) const;

};