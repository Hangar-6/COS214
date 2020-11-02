#include "ChassisDepartment.h"

using namespace std;

ChassisDepartment::ChassisDepartment() : EngineeringDepartment() {
    component = new Chassis();
}

ChassisDepartment::~ChassisDepartment() {}

Component* ChassisDepartment::produce(int performance) {
    component->setPerformance(performance);
    cout<<"Chassis has been produced with a performance value of "<<performance<<endl;
    return component;
}