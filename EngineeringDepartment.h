#ifndef ENGINEERINGDEPARTMENT_H
#define ENGINEERINGDEPARTMENT_H

#include "Component.h"

class EngineeringDepartment {
    public:
        EngineeringDepartment(); // Based on slides of Factory - check with group
        virtual Component* produce(int performance) = 0;
        virtual void upgrade() = 0; //Check with group if it should take a parameter or nah
        virtual void downgrade() = 0; // Check this one too  // Also check if they should be pure virtual
        void setComponent(Component* NewComp); //check with group - Slide 11 of Factory
        Component* getComponent();
    private:
        Component* CurrentComponent;
};

#endif