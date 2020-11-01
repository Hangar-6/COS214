#ifndef TEAMBUILDER_H
#define TEAMBUILDER_H

#include "Builder.h"
#include "Truck.h"
#include "Ship.h"
#include "Plane.h"
#include "WindTunnel.h"
#include "Simulation.h"
#include "PracticeTest.h"

class TeamBuilder : public Builder {
    public:
        Team* build(string name);
};

#endif