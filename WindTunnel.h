#ifndef WINDTUNNEL_H
#define WINDTUNNEL_H

#include "Testing.h"

class WindTunnel : public Testing {
    public:
        void test(Engineering* engineering, TestType type);
        void notify(Engineering* engineering, TestResult result);
};

#endif