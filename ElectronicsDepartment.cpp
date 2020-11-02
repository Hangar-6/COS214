#include "ElectronicsDepartment.h"
#include <iostream>

using namespace std;

ElectronicsDepartment::ElectronicsDepartment() : EngineeringDepartment() {
    component = new Electronics();
}

ElectronicsDepartment::~ElectronicsDepartment() {}

Component* ElectronicsDepartment::produce(int performance) {
    if(performance > 0) {
        component->setPerformance(performance);
        cout<<"Aerodynamics has been produced with a performance value of "<<performance<<endl;
    }
    return component;
}