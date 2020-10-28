#include "EngineDepartment.h"

using namespace std;

EngineDepartment::EngineDepartment(){
    Engine* NewEngine = new Engine(0);
    this->setComponent(NewEngine);
    cout<<"New engine is being prepared."<<endl;
}
Component* EngineDepartment::produce(int performance){
    Component* MyEngine = this->getComponent();
    MyEngine->setPerformance(performance);
    this->setComponent(MyEngine);
    cout<<"Engine has been produced with a performance of "<<performance<<" kWh."<<endl;
}

void EngineDepartment::upgrade(int IncreaseAmount){ // Do i upgrade a component that is given in or my current?
    Component* MyEngine = this->getComponent();
    int CurrentPerformance = MyEngine->getPerformance();
    int MaxPerformance = MyEngine->getMaxPerformance();
    if ((CurrentPerformance+IncreaseAmount <= MaxPerformance)){
        MyEngine->setPerformance(CurrentPerformance+IncreaseAmount);
        this->setComponent(MyEngine);
        cout<<"Engine performance has been increased from "<<CurrentPerformance<<" to "+MyEngine->getPerformance()<<" kWh"<<endl;
    }
    else{
        cout<<"Engine performance increase by "<<IncreaseAmount<<" will exceed the engine's maximum performance of "<<MaxPerformance<<endl;
    }
}

void EngineDepartment::downgrade(int DecreaseAmount){
    Component* MyEngine = this->getComponent();
    int CurrentPerformance = MyEngine->getPerformance();
    int MaxPerformance = MyEngine->getMaxPerformance();
    if ((CurrentPerformance-DecreaseAmount > 0)){
        MyEngine->setPerformance(CurrentPerformance-DecreaseAmount);
        this->setComponent(MyEngine);
        cout<<"Engine performance has been decreased from "<<CurrentPerformance<<" to "+MyEngine->getPerformance()<<" kWh"<<endl;
    }
    else{
        cout<<"Engine performance decrease by "<<DecreaseAmount<<" will exceed the engine's minimum performance of 0."<<endl;
    }
}