#ifndef RACE_H
#define RACE_H

#include "WeekendFactory.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

class Race: public WeekendFactory{

public:
    Race(string v, string l, Car* c);
    ~Race();
    void start();
    void end();
};
//ConcreteCreator
#endif
