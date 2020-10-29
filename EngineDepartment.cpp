#include "EngineDepartment.h"
#include <iostream>

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