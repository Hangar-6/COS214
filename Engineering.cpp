#include "Engineering.h"

Engineering::Engineering(){
    aeroDep = new AerodynamicsDepartment();
    chassisDep = new ChassisDepartment();
    electronicsDep = new ElectronicsDepartment();
    engineDep = new EngineDepartment();
}                      // creates Departments

Engineering::~Engineering(){
    delete aeroDep;
    delete chassisDep;
    delete electronicsDep;
    delete engineDep;

    for (int i = 0; i < components.size(); ++i) {
        delete components[i];
    }
}             // deletes departments and components

vector<Component*> Engineering::getComponents(){
    return components;
}

void Engineering::upgrade(TestResult result){ //result is based off enum and make decision
    if(result==UPGRADE)
    {

    }
}       // creates new Component with new performance value if result is UPGRADE

void Engineering::buildCars(BaseCar *car1, BaseCar *car2){
    car1->setComponents(components);
    car2->setComponents(components);
}   // clones components and adds them to the cars

void Engineering::disassemble(BaseCar* car1, BaseCar* car2){
    car1->clearComponents();
    car2->clearComponents();
}     // clears vector<Component*> of cars

void Engineering::service(Car* car1, Car* car2){

}     // service both cars
