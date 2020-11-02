#include "AerodynamicsDepartment.h"

AerodynamicsDepartment::AerodynamicsDepartment() : EngineeringDepartment() {
    component = new Aerodynamics();
}

AerodynamicsDepartment::~AerodynamicsDepartment() {}

Component* AerodynamicsDepartment::produce(int performance) {
    component->setPerformance(performance);
    cout<<"Aerodynamics has been produced with a performance value of "<<performance<<endl;
    return component;
}