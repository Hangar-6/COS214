#ifndef AERODYNAMICSDEPARTMENT_H
#define AERODYNAMICSDEPARTMENT_H

#include "EngineeringDepartment.h"
#include "Aerodynamics.h"

class AerodynamicsDepartment : public EngineeringDepartment {
    public:
        AerodynamicsDepartment();
        Component* produce(int performance);
        void upgrade(Component* Comp);
        void downgrade(Component* Comp);
};

#endif