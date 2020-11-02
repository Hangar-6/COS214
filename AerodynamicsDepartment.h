#ifndef AERODYNAMICSDEPARTMENT_H
#define AERODYNAMICSDEPARTMENT_H

#include "EngineeringDepartment.h"
#include "Aerodynamics.h"

class AerodynamicsDepartment : public EngineeringDepartment {
    public:
        AerodynamicsDepartment();
        ~AerodynamicsDepartment();
        Component* produce(int performance = 0);
};

#endif