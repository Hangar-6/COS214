#include "EngineDepartment.h"

EngineeringDepartment::EngineeringDepartment() {
    cout<<"Engineering department has been created."<<endl;
}

EngineeringDepartment::~EngineeringDepartment() {
    if(component) 
        delete component;
    component = nullptr;
}

Component * EngineeringDepartment::getComponent() {
    return component;
}

void EngineeringDepartment::setComponent(Component* NewComp) {
    component = NewComp;
}