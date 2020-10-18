#ifndef WINDTUNNEL_H
#define WINDTUNNEL_H
#include "Testing.h"
using namespace std;

class WindTunnel : public Testing{

private:

public:
    WindTunnel();
    virtual void EngineTest();
    virtual void AeroTest();
    virtual void ElectronicTest();
    virtual void ChasisTest();
};

#endif
