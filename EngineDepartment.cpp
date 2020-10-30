#include "EngineDepartment.h"
#include <iostream>

using namespace std;

EngineDepartment::EngineDepartment() : EngineeringDepartment() {
    component = new Engine();
}
Component* EngineDepartment::produce(int performance = 0) {
    component->setPerformance(performance);
    cout<<"Engine has been produced with a performance value of "<<performance<<endl;
    return component;
}