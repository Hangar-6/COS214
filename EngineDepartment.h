#ifndef ENGINEDEPARTMENT_H
#define ENGINEDEPARTMENT_H

#include "EngineeringDepartment.h"
#include "Engine.h"

class EngineDepartment : public EngineeringDepartment {
    public:
        Component* produce();
};

#endif