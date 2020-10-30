#include "Engineering.h"

Engineering::Engineering(BaseCar *car1, BaseCar *car2){
    baseCar1 = car1;
    baseCar2 = car2;

    aeroP=0;
    engineP=0;
    electronicsP=0;
    chasP=0;

    aeroDep = new AerodynamicsDepartment(baseCar1, aeroP);
    chassisDep = new ChassisDepartment(baseCar1, chasP);
    electronicsDep = new ElectronicsDepartment(baseCar1, electronicsP);
    engineDep = new EngineDepartment(baseCar1, engineP);

    aeroDep2 = new AerodynamicsDepartment(baseCar2, aeroP);
    chassisDep2 = new ChassisDepartment(baseCar2, chasP);
    electronicsDep2 = new ElectronicsDepartment(baseCar2, electronicsP);
    engineDep2 = new EngineDepartment(baseCar2, engineP);

    aeroP=50;
    engineP=50;
    electronicsP=50;
    chasP=50;
}                      // creates Departments

Engineering::~Engineering(){
    delete aeroDep;
    delete chassisDep;
    delete electronicsDep;
    delete engineDep;

    for (int i = 0; i < components.size(); ++i) {
        delete components[i];
    }

    delete baseCar;
}             // deletes departments and components

vector<Component*> Engineering::getComponents(){
    return components;
}

void Engineering::upgrade(TestResult result){ //result is based off enum and make decision
    if(result==UPGRADE)
    {
        aeroP+=2;
        engineP+=3;
        electronicsP+=2;
        chasP+=2;
        buildCars();
    }
}       // creates new Component with new performance value if result is UPGRADE

void Engineering::buildCars(){
    buildComponents();

    baseCar1->setComponents(components1);
    baseCar2->setComponents(components2);
}   // clones components and adds them to the cars

void Engineering::disassemble(BaseCar* car1, BaseCar* car2){
    components1.clear();
    components2.clear();

    baseCar1->clearComponents();
    baseCar2->clearComponents();
}     // clears vector<Component*> of cars

void Engineering::service(BaseCar* car1, BaseCar* car2){
    cout<<"Both cars are currently being serviced, all parts are being tested and repaired."<<endl;
}     // service both cars
