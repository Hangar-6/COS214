#include "ChassisDepartment.h"

using namespace std;

ChassisDepartment::ChassisDepartment() : EngineeringDepartment() {
    component = new Chassis();
}

ChassisDepartment::~ChassisDepartment() {}

Component* ChassisDepartment::produce(int performance) {
    if(performance > 0) {
        component->setPerformance(performance);
        cout<<"Chassis has been produced with a strength value of "<<performance<<endl;
    }
    return component;
}