#ifndef TEAM_H
#define TEAM_H

using namespace std;

#include "CurrentEngineering.h"
#include "NextEngineering.h"
#include "Car.h"
#include "Strategist.h"
#include "Logistics.h"
#include "Testing.h"
#include <string>

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

    public:
        ~Team();
        void addPoints(int d1Points, int d2Points);
};

#endif