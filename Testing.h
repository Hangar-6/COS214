#ifndef TESTING_H
#define TESTING_H

enum TestResult {NOCHANGE, UPGRADE, DOWNGRADE};

enum TestType {WINDTUNNEL, SIMULATION, PRACTICE};

#include "Engineering.h"

class Testing {
    protected:
        Testing* next;

    public:
        Testing();
        void addNext(Testing* NextTester);  //Adding pointer to next object in chain
        virtual void test(Engineering* engineering, TestType type) = 0;     // simulate a test using chain of responsibility
        //virtual void notify(Engineering* engineering, TestResult result) = 0;       // notifies enginneering of result
        void notify(Engineering* engineering, TestResult result);   //->>check with group
};

#endif