#include "ElectronicsDepartment.h"
#include <iostream>

using namespace std;

ElectronicsDepartment::ElectronicsDepartment() : EngineeringDepartment() {
    component = new Electronics();
}

ElectronicsDepartment::~ElectronicsDepartment() {}

Component* ElectronicsDepartment::produce(int performance) {
    component->setPerformance(performance);
    cout<<"Electronics have been produced with a performance value of "<<performance<<endl;
    return component;
}