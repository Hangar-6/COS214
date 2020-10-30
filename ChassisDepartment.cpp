#include "ChassisDepartment.h"
#include <iostream>

using namespace std;

ChassisDepartment::ChassisDepartment(BaseCar* baseCar, int perf){
    Chassis* NewChassis = new Chassis (baseCar, perf);
    this->setComponent(NewChassis);
    cout<<"New chassis is being prepared."<<endl;
}
Component* ChassisDepartment::produce(int performance){
    Component* MyChassis = this->getComponent();
    MyChassis->setPerformance(performance);
    this->setComponent(MyChassis);
    cout<<"Chassis has been produced with a strength of "<<performance<<"."<<endl;
}