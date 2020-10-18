#ifndef TESTING_H
#define TESTING_H
#include "RaceCar.h"
using namespace std;

class Testing{

private:
    Racecar* TestCar;
public: //Make all tests into one test function?
    virtual void EngineTest() = 0;
    virtual void AeroTest() = 0;
    virtual void ElectronicTest() = 0;
    virtual void ChasisTest() = 0;
};

#endif
