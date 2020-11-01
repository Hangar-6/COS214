#ifndef LOGISTICS_H
#define LOGISTICS_H

#include "RaceWeekend.h"
#include "Container.h"

class Logistics {
    protected:
        Logistics* next;        // used for chain of responsibility

    public:
        Logistics();
        virtual ~Logistics();
        virtual void transport(RaceWeekend* race, Container* container) = 0;
        virtual string getType() = 0;
        void addNext(Logistics* Vehicle);
        void removeNext();
};

#endif