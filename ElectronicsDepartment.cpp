#include "ElectronicsDepartment.h"
#include <iostream>

using namespace std;

ElectronicsDepartment::ElectronicsDepartment() : EngineeringDepartment() {
    component = new Electronics();
}

Component* ElectronicsDepartment::produce(int performance = 0){
    component->setPerformance(performance);
    cout<<"Electronics have been produced with a performance value of "<<performance<<endl;
    return component;
}