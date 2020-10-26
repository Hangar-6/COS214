#ifndef QUALIFYING_H
#define QUALIFYING_H

#include "WeekendFactory.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

class Qualifying: public WeekendFactory {

public:
    Qualifying(string v, string l, Car* c);
    ~Qualifying();
    void start();
    void end();
};
//ConcreteCreator
#endif
