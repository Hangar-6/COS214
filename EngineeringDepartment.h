#ifndef ENGINEERINGDEPARTMENT_H
#define ENGINEERINGDEPARTMENT_H

#include "Component.h"
#include <iostream>

class EngineeringDepartment {
    protected:
        Component* component;

    public:
        EngineeringDepartment(); // Based on slides of Factory - check with group
        virtual ~EngineeringDepartment();
        virtual Component* produce(int performance) = 0;
        void setComponent(Component* NewComp); //check with group - Slide 11 of Factory
        Component* getComponent();
};

#endif