#include "AerodynamicsDepartment.h"

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

void AerodynamicsDepartment::upgrade(int IncreaseAmount){ // Do i upgrade a component that is given in or my current?
    Component* MyAero = this->getComponent();
    int CurrentPerformance = MyAero->getPerformance();
    int MaxPerformance = MyAero->getMaxPerformance();
    if ((CurrentPerformance+IncreaseAmount <= MaxPerformance)){
        MyAero->setPerformance(CurrentPerformance+IncreaseAmount);
        this->setComponent(MyAero);
        cout<<"Aerodynamic's performance has been increased from "<<CurrentPerformance<<" to "+MyEngine->getPerformance()<<" downforce"<<endl;
    }
    else{
        cout<<"Aerodynamic's performance increase by "<<IncreaseAmount<<" will exceed the aerodynamic's maximum downforce of "<<MaxPerformance<<endl;
    }
}

void AerodynamicsDepartment::downgrade(int DecreaseAmount){
    Component* MyAero = this->getComponent();
    int CurrentPerformance = MyAero->getPerformance();
    int MaxPerformance = MyAero->getMaxPerformance();
    if ((CurrentPerformance-DecreaseAmount > 0)){
        MyAero->setPerformance(CurrentPerformance-DecreaseAmount);
        this->setComponent(MyAero);
        cout<<"Aerodynamic's performance has been decreased from "<<CurrentPerformance<<" to "+MyAero->getPerformance()<<" downforce"<<endl;
    }
    else{
        cout<<"Aerodynamic's performance decrease by "<<DecreaseAmount<<" will exceed the aerodynamic's minimum downforce before being useless."<<endl;
    }
}