#ifndef PLANE_H
#define PLANE_H

#include "Logistics.h"

class Plane : public Logistics {
    public:
        void transport(RaceWeekend* race);
};

#endif