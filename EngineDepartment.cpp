#include "EngineDepartment.h"

using namespace std;

EngineDepartment::EngineDepartment() : EngineeringDepartment() {
    component = new Engine();
}

EngineDepartment::~EngineDepartment() {}

Component* EngineDepartment::produce(int performance) {
    if(performance > 0) {
        component->setPerformance(performance);
        // cout<<"Engine has been produced with a performance value of "<<performance<<endl;
    }
    return component;
}