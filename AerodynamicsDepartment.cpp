#include "AerodynamicsDepartment.h"

AerodynamicsDepartment::AerodynamicsDepartment() : EngineeringDepartment() {
    component = new Aerodynamics();
}

Component* AerodynamicsDepartment::produce(int performance = 0) {
    component->setPerformance(performance);
    cout<<"Aerodynamics has been produced with a performance value of "<<performance<<endl;
    return component;
}