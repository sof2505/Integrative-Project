#ifndef TITLES
#define TITLES
#include <iostream>
using namespace std;
class Titles
{
    private:
        string title;
        float rating;
    public:
        Titles();
        Titles(string title, float rating);
        //pure virtual funciton
        virtual string show();
        string getTitle();
        int getRating();
};
#endif