#ifndef WEEKENDFACTORY_H
#define WEEKENDFACTORY_H

#include "ScoreSheet.h"
#include "Car.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

class WeekendFactory {

private:
    string type;//type of race
    string venue;
    string location;
    int teams = 10;//amount of teams participating
    ScoreSheet* results;
    Car* car;
public:
    WeekendFactory(){}
    void setVenue(string v);
    string getVenue();
    void setLocation(string l);
    string getLocation();
    void setType(string t);
    string getType();
    int getTeams();
    void setScoresheet();
    ScoreSheet* getResults();
    void setCar(Car* racecar);
    Car* getCar();

    virtual void start()=0;
    virtual void end()=0;
};
//Creator (Factory Method)
#endif
