#ifndef TYRESTRATEGY_H
#define TYRESTRATEGY_H

#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

class TyreStrategy {

public:
    virtual string takeAction()=0;
};
//strategy
#endif
