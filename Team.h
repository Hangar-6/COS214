#ifndef TEAM_H
#define TEAM_H

using namespace std;

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

        Engineering* current;
        Engineering* next;
        Testing* testing;

        Car* car1;
        Car* car2;

        Strategist* strategist; 
        Logistics* logistics;

        Equipment* garage;
        Equipment* catering;

    public:
        Team(string name);
        ~Team();
        void addPoints(int d1Points, int d2Points);
        void runTest(TestType type);
        Cars getCars();
        Engineers getEngineers();
        void transport(EquipmentType type);
        void test(TestType type, Engineering* engineering);
        void setCar(Car* car);
        void setEngineers(Engineering* current, Engineering* next);
        void setStrategist(Strategist* strategist);
        void setLogistics(Logistics* logistics);
        void setEquipment(Equipment* garage, Equipment* catering);
        void setTesting(Testing* testing);
        void racePreparations();
        void raceEnd();
};

#endif