#ifndef CHASSISDEPARTMENT_H
#define CHASSISDEPARTMENT_H

#include "EngineeringDepartment.h"
#include "Chassis.h"

class ChassisDepartment : public EngineeringDepartment {
    public:
        ChassisDepartment();
        Component* produce(int performance);
        void upgrade(Component* Comp);
        void downgrade(Component* Comp);
};

#endif