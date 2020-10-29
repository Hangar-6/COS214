#include "ChassisDepartment.h"

using namespace std;

ChassisDepartment::ChassisDepartment(){
    Chassis* NewChassis = new Chassis (0);
    this->setComponent(NewChassis);
    cout<<"New chassis is being prepared."<<endl;
}
Component* ChassisDepartment::produce(int performance){
    Component* MyChassis = this->getComponent();
    MyChassis->setPerformance(performance);
    this->setComponent(MyChassis);
    cout<<"Chassis has been produced with a strength of "<<performance<<"."<<endl;
}