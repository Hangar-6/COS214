#ifndef AERODYNAMICSDEPARTMENT_H
#define AERODYNAMICSDEPARTMENT_H

#include "EngineeringDepartment.h"
#include "Aerodynamics.h"

class AerodynamicsDepartment : public EngineeringDepartment {
    public:
        AerodynamicsDepartment(BaseCar* baseCar, int perf);
        Component* produce(int performance);
};

#endif