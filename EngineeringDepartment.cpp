#include "EngineeringDepartment.h"

EngineeringDepartment::EngineeringDepartment() {}

EngineeringDepartment::~EngineeringDepartment() {
    delete component;
    component = nullptr;
}

Component* EngineeringDepartment::getComponent() {
    return component;
}

void EngineeringDepartment::setComponent(Component* NewComp) {
    component = NewComp;
}