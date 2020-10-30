#ifndef PRACTICETEST_H
#define PRACTICETEST_H

#include "Testing.h"
#include <iostream>
#include <vector>

class PracticeTest : public Testing {
    public:
        PracticeTest();
        void test(Engineering* engineering, TestType type);     // handles test of type PRACTICE
};

#endif