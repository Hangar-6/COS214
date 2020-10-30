#ifndef ENGINEDEPARTMENT_H
#define ENGINEDEPARTMENT_H

#include "EngineeringDepartment.h"
#include "Engine.h"

class EngineDepartment : public EngineeringDepartment {
    public:
        EngineDepartment(BaseCar* baseCar, int perf);
        Component* produce(int performance);
};

#endif