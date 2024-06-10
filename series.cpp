#include "series.hpp"
Series::Series()
{

}

Series::Series(string _title, string _genre, float _rating, int season, int episode):Titles(string _title, string _genre, float _rating)
{
    season = _season;
    episode = _episode;
}
