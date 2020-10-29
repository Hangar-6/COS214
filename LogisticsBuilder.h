#ifndef LOGISTICSBUILDER_H
#define LOGISTICSBUILDER_H

#include "Builder.h"
#include "Truck.h"
#include "Plane.h"
#include "Ship.h"

class LogisticsBuilder : public Builder {
    private:
        Logistics* logistics;

    public:
        ~LogisticsBuilder();
        void build();
        Logistics* getLogistics();
};

#endif