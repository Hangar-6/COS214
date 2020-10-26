#ifndef TESTING_H
#define TESTING_H

enum TestResult {NOCHANGE, UPGRADE, DOWNGRADE};

enum TestType {WINDTUNNEL, SIMULATION, PRACTICE};

#include "Engineering.h"

class Testing {
    protected:
        Testing* next;

    public:
        virtual void test(Engineering* engineering, TestType type) = 0;
        virtual void notify(Engineering* engineering, TestResult result) = 0;
};

#endif