#ifndef TITLES
#define TITLES
#include <iostream>
using namespace std;
class Titles
{
    private:
        string title;
        float rating;
        string genre;
        float duration;
    public:
        Titles();
        Titles(string title, string genre, float rating, float duration);
        // virtual funciton
        virtual string show();
        string getTitle();
        int getRating();
        string getGenre();
        float getDuration();
};
#endif