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