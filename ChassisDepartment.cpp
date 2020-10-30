#include "ChassisDepartment.h"

using namespace std;

ChassisDepartment::ChassisDepartment() : EngineeringDepartment() {
    component = new Chassis();
}

Component* ChassisDepartment::produce(int performance = 0) {
    component->setPerformance(performance);
    cout<<"Chassis has been produced with a performance value of "<<performance<<endl;
    return component;
}