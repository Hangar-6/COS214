#include "EngineDepartment.h"
#include <iostream>

EngineeringDepartment::EngineeringDepartment(){
    this->CurrentComponent = null;
    cout<<"Engineering department has been created."<<endl;
}

EngineeringDepartment::~EngineeringDepartment(){
    if (CurrentComponent != nullptr)
        delete CurrentComponent;
    cout<<"Engineering department has been demolished."<<endl;
}

Component * EngineeringDepartment::getComponent() {
    return this->CurrentComponent;
}

void EngineeringDepartment::setComponent(Component* NewComp){
    this->CurrentComponent = NewComp;
}