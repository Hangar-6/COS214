#ifndef TEAM_H
#define TEAM_H

using namespace std;

#include "Director.h"
#include "CurrentEngineering.h"
#include "NextEngineering.h"
#include "Car.h"
#include "Strategist.h"
#include "Logistics.h"
#include "Testing.h"
#include "BaseCar.h"
#include "GarageEquipment.h"
#include "CateringEquipment.h"
#include "CarAdapter.h"
#include <string>

struct TeamItems {
    Car* car1;
    Car* car2;
    CurrentEngineering* current;
    NextEngineering* next;
    Strategist* strategist;
    Logistics* logistics;
    Testing* testing;
};

struct Cars {
    Car* car1;
    Car* car2;
};

struct Engineers {
    Engineering* current;
    Engineering* next;
};

class Team {
    private:
        string teamName;
        int ConstructorPoints = 0;
        int Driver1Points = 0;
        int Driver2Points = 0;

        CurrentEngineering* current;
        NextEngineering* next;
        Testing* test;

        Car* car1;
        Car* car2;

        Strategist* strategist; 
        Logistics* logistics;

        Equipment* garage;
        Equipment* catering;

    public:
        Team();
        ~Team();
        void addPoints(int d1Points, int d2Points);
        void runTest(TestType type);
        Cars getCars();
        Engineers getEngineers();
        void transport(EquipmentType type);
        void test(TestType type, Engineering* engineering);
};

#endif