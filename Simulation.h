#ifndef SIMULATION_H
#define SIMULATION_H
#include "Testing.h"
using namespace std;

class Simulation : public Testing{

private:

public:
    Simulation();
    virtual void EngineTest();
    virtual void AeroTest();
    virtual void ElectronicTest();
    virtual void ChasisTest();
};

#endif
