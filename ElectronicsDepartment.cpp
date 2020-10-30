#include "ElectronicsDepartment.h"
#include <iostream>

using namespace std;

ElectronicsDepartment::ElectronicsDepartment(BaseCar* baseCar, int perf){
    Electronics* NewElectronic = new Electronics (baseCar, perf);
    this->setComponent(NewElectronic);
    cout<<"New eletronics are being prepared."<<endl;
}
Component* ElectronicsDepartment::produce(int performance){
    Component* MyElectronic = this->getComponent();
    MyElectronic->setPerformance(performance);
    this->setComponent(MyElectronic);
    cout<<"Electronics have been produced with a technological performance of "<<performance<<"."<<endl;
}