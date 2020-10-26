#ifndef PRACTICETEST_H
#define PRACTICETEST_H

#include "Testing.h"

class PracticeTest : public Testing {
    public:
        void test(Engineering* engineering, TestType type);     // handles test of type PRACTICE
        void notify(Engineering* engineering, TestResult result);
};

#endif