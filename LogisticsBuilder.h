#ifndef LOGISTICSBUILDER_H
#define LOGISTICSBUILDER_H

#include "Builder.h"
#include "Logistics.h"

class LogisticsBuilder : public Builder {
    public:
        void build();
        Logistics* getLogistics();
};

#endif