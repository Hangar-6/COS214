#ifndef SIMULATION_H
#define SIMULATION_H

#include "Testing.h"

class Simulation : public Testing {
    public:
        void test(Engineering* engineering, TestType type);
        void notify(Engineering* engineering, TestResult result);
};

#endif