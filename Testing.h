#ifndef TESTING_H
#define TESTING_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum TestResult {NOCHANGE, UPGRADE, DOWNGRADE};

enum TestType {WINDTUNNEL, SIMULATION, PRACTICE};

#include "Engineering.h"

class Engineering;

class Testing {
    protected:
        Testing* next = nullptr;

    public:
        virtual ~Testing();
        void addNext(Testing* NextTester);  //Adding pointer to next object in chain
        virtual void test(Engineering* engineering, TestType type) = 0;     // simulate a test using chain of responsibility
        void notify(Engineering* engineering, TestResult result, ComponentType component);   // notifies engineering and calls update
        // added a ComponentType to upgrade each component separately
};

#endif