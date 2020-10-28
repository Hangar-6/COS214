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

void ChassisDepartment::upgrade(int IncreaseAmount){ // Do i upgrade a component that is given in or my current?
    Component* MyChassis = this->getComponent();
    int CurrentPerformance = MyChassis->getPerformance();
    int MaxPerformance = MyChassis->getMaxPerformance();
    if ((CurrentPerformance+IncreaseAmount <= MaxPerformance)){
        MyChassis->setPerformance(CurrentPerformance+IncreaseAmount);
        this->setComponent(MyChassis);
        cout<<"Chassis strength has been increased from "<<CurrentPerformance<<" to "+MyChassis->getPerformance()<<"."<<endl;
    }
    else{
        cout<<"Chassis strength increase by "<<IncreaseAmount<<" will exceed the chassis's maximum strength of "<<MaxPerformance<<endl;
    }
}

void ChassisDepartment::downgrade(int DecreaseAmount){
    Component* MyChassis = this->getComponent();
    int CurrentPerformance = MyChassis->getPerformance();
    int MaxPerformance = MyChassis->getMaxPerformance();
    if ((CurrentPerformance-DecreaseAmount > 0)){
        MyChassis->setPerformance(CurrentPerformance-DecreaseAmount);
        this->setComponent(MyChassis);
        cout<<"Chassis strength has been decreased from "<<CurrentPerformance<<" to "+MyChassis->getPerformance()<<"."<<endl;
    }
    else{
        cout<<"Chassis strength decrease by "<<DecreaseAmount<<" will exceed the chassis's minimum strength of 0."<<endl;
    }
}