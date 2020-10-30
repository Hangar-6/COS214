#ifndef CHASSISDEPARTMENT_H
#define CHASSISDEPARTMENT_H

#include "EngineeringDepartment.h"
#include "Chassis.h"

class ChassisDepartment : public EngineeringDepartment {
    public:
        ChassisDepartment(BaseCar* baseCar, int perf);
        Component* produce(int performance);
};

#endif