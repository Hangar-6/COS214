#include "EngineDepartment.h"

EngineDepartment::EngineDepartment(){
    Engine* NewEngine = new Engine(0);
    this->setComponent(NewEngine);
}
Component* EngineDepartment::produce(int performance){
    Component* MyEngine = this->getComponent();
    MyEngine->setPerformance(performance);
    this->setComponent(MyEngine);
}

void EngineDepartment::upgrade(Component* Comp){

}

void EngineDepartment::downgrade(Component* Comp){

}