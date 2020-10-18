#ifndef WEEKENDFACTORY_H
#define WEEKENDFACTORY_H

#include "ScoreSheet.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

class WeekendFactory {

private:
    string type;//type of race
    int teams;//amount of teams participating
    ScoreSheet* results;

public:
    virtual void start()=0;
    virtual void end()=0;
    string getType(){return this->type;}
    int getTeams(){return this->teams;}
    ScoreSheet* getResults(){return this->results;}
};
//Creator (Factory Method)
#endif
