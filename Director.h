#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Team.h"
#include "CarBuilder.h"
#include "EngineeringBuilder.h"
#include "StrategistBuilder.h"
#include "LogisticsBuilder.h"
#include "TestingBuilder.h"

class Director {
    public:
        TeamItems buildTeam();
};

#endif