#ifndef LOGISTICS_H
#define LOGISTICS_H

#include "RaceWeekend.h"
#include "Container.h"

class Logistics {
    protected:
        Logistics* next;

    public:
        virtual void transport(RaceWeekend* race, Container* container) = 0;
};

#endif