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
    int teams;//amount of teams participating
    ScoreSheet* results;
    Car* car;
    string venue;
public:
    WeekendFactory(){}
    void setVenueAndType(string v, string t){this->venue = v;this->type = t;}
    string getType(){return this->type;}
    int getTeams(){return this->teams;}
    ScoreSheet* getResults(){return this->results;}
    string getVenue(){return this->venue;}
    Car* getCar(){return this->car;}

    virtual void start()=0;
    virtual void end()=0;
};
//Creator (Factory Method)
#endif
