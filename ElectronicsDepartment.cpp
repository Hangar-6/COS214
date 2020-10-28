#include "ElectronicsDepartment.h"

using namespace std;

ElectronicsDepartment::ElectronicsDepartment(){
    Electronics* NewElectronic = new Electronics (0);
    this->setComponent(NewElectronic);
    cout<<"New eletronics are being prepared."<<endl;
}
Component* ElectronicsDepartment::produce(int performance){
    Component* MyElectronic = this->getComponent();
    MyElectronic->setPerformance(performance);
    this->setComponent(MyElectronic);
    cout<<"Electronics have been produced with a technological performance of "<<performance<<"."<<endl;
}

void ElectronicsDepartment::upgrade(int IncreaseAmount){ // Do i upgrade a component that is given in or my current?
    Component* MyElectronic = this->getComponent();
    int CurrentPerformance = MyElectronic->getPerformance();
    int MaxPerformance = MyElectronic->getMaxPerformance();
    if ((CurrentPerformance+IncreaseAmount <= MaxPerformance)){
        MyElectronic->setPerformance(CurrentPerformance+IncreaseAmount);
        this->setComponent(MyElectronic);
        cout<<"Electronics technological performance has been increased from "<<CurrentPerformance<<" to "+MyChassis->getPerformance()<<"."<<endl;
    }
    else{
        cout<<"Electronic technological performance increase by "<<IncreaseAmount<<" will exceed the electronics' maximum performance of "<<MaxPerformance<<endl;
    }
}

void ElectronicsDepartment::downgrade(int DecreaseAmount){
    Component* MyElectronic = this->getComponent();
    int CurrentPerformance = MyElectronic->getPerformance();
    int MaxPerformance = MyElectronic->getMaxPerformance();
    if ((CurrentPerformance-DecreaseAmount > 0)){
        MyElectronic->setPerformance(CurrentPerformance-DecreaseAmount);
        this->setComponent(MyElectronic);
        cout<<"Electronics technological performance has been decreased from "<<CurrentPerformance<<" to "+MyElectronic->getPerformance()<<"."<<endl;
    }
    else{
        cout<<"Electronics performance decrease by "<<DecreaseAmount<<" will render the technology useless."<<endl;
    }
}