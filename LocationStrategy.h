#ifndef LOCATIONSTRATEGY_H
#define LOCATIONSTRATEGY_H

#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

class LocationStrategy {

public:
    virtual string takeAction()=0;
};
//strategy
#endif
