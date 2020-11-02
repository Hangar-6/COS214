#include "ChassisDepartment.h"

using namespace std;

ChassisDepartment::ChassisDepartment() : EngineeringDepartment() {
    component = new Chassis();
}

ChassisDepartment::~ChassisDepartment() {}

Component* ChassisDepartment::produce(int performance) {
    if(performance > 0) {
        component->setPerformance(performance);
        cout<<"Aerodynamics has been produced with a performance value of "<<performance<<endl;
    }
    return component;
}