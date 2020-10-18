#ifndef PRACTICE_H
#define PRACTICE_H

#include "WeekendFactory.h"
#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>

class Practice: public WeekendFactory {

public:
    Practice();
    ~Practice();
    void start();
    void end();
};
//ConcreteCreator
#endif
