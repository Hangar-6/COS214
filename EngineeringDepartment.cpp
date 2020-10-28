#include "EngineDepartment.h"

EngineeringDepartment::EngineeringDepartment(){
    this->CurrentComponent = null;
}

Component * EngineeringDepartment::getComponent() {
    return this->CurrentComponent;
}

/*void EngineeringDepartment::setComponent(Component * NewComp) {
    this->CurrentComponent = NewComp;           Uncomment if needed
}*/