#include "AerodynamicsDepartment.h"
#include <iostream>

AerodynamicsDepartment::AerodynamicsDepartment(){
    Aerodynamics* NewAero = new Aerodynamics(0);
    this->setComponent(NewAero);
    cout<<"New engine is being prepared."<<endl;
}

Component* AerodynamicsDepartment::produce(int performance){
    Component* MyAero = this->getComponent();
    MyAero->setPerformance(performance);
    this->setComponent(MyAero);
    cout<<"Aerodynamics has been produced with a performance of "<<performance<<" downforce."<<endl;
}