#ifndef ENGINEDEPARTMENT_H
#define ENGINEDEPARTMENT_H

#include "EngineeringDepartment.h"
#include "Engine.h"

class EngineDepartment : public EngineeringDepartment {
    public:
        EngineDepartment();
        Component* produce(int performance = 0);
};

#endif