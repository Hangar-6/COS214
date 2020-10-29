#ifndef WINDTUNNEL_H
#define WINDTUNNEL_H

#include "Testing.h"

class WindTunnel : public Testing {
    public:
        WindTunnel();
        void test(Engineering* engineering, TestType type);     // handles test of type WINDTUNNEL and decrements engineering's windTunnelRuns for each run
        //void notify(Engineering* engineering, TestResult result);
};

#endif