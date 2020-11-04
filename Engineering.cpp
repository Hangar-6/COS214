#include "Engineering.h"

int Engineering::windTunnelRuns = 400;

Engineering::Engineering() {
    aeroDep = new AerodynamicsDepartment();
    chassisDep = new ChassisDepartment();
    electronicsDep = new ElectronicsDepartment();
    engineDep = new EngineDepartment();
}                      // creates Departments

Engineering::~Engineering() {
    delete aeroDep;
    delete chassisDep;
    delete electronicsDep;
    delete engineDep;

    components.clear();

    // no need to delete components, done in EngineeringDepartment
    // deletes departments and clears components
}            

vector<Component*> Engineering::getComponents() {
    return components;
}

void Engineering::upgrade(TestResult result, ComponentType component) { 
    //result is based off enum and make decision
    // call produce with new performance value if result is UPGRADE and decrease performance if result is DOWNGRADE
    // increase and decrease performance by 1 for now
    switch(component) {
        case AERODYNAMICS:
            if(result == UPGRADE) 
                aeroDep->produce(aeroDep->getComponent()->getPerformance()+1);
            else if(result == DOWNGRADE) 
                aeroDep->produce(aeroDep->getComponent()->getPerformance()-1);
            break;

        case CHASSIS:
            if(result == UPGRADE) 
                chassisDep->produce(chassisDep->getComponent()->getPerformance()+1);
            else if(result == DOWNGRADE) 
                chassisDep->produce(chassisDep->getComponent()->getPerformance()-1);
            break;

        case ELECTRONICS:
            if(result == UPGRADE) 
                electronicsDep->produce(electronicsDep->getComponent()->getPerformance()+1);
            else if(result == DOWNGRADE) 
                electronicsDep->produce(electronicsDep->getComponent()->getPerformance()-1);
            break;

        case ENGINE:
            if(result == UPGRADE) 
                engineDep->produce(engineDep->getComponent()->getPerformance()+1);
            else if(result == DOWNGRADE) 
                engineDep->produce(engineDep->getComponent()->getPerformance()-1);
            break;
    }
}       

void Engineering::buildCars(Car* car1, Car* car2) {
    // go through vector of components for each car, clone each component and set baseCar to a car
    // clones components and sets their baseCar to the cars and adds them to the cars

    vector<Component*>::iterator it;
    for(it = components.begin(); it != components.end(); ++it) {
        Car* c1 = (*it)->clone();
        static_cast<Component*>(c1)->setBaseCar(car1);
        c1->add(c1);

        Car* c2 = (*it)->clone();
        static_cast<Component*>(c2)->setBaseCar(car2);
        c2->add(c2);
    }
}   

void Engineering::disassemble(Car* car1, Car* car2) {
    static_cast<BaseCar*>(car1)->clearComponents();
    static_cast<BaseCar*>(car2)->clearComponents();
    // function called by Team after race
}     // clears vector<Component*> of cars

void Engineering::service(Car* car1, Car* car2) {
    // service both cars
    cout<<"Both cars are currently being serviced. All parts are being tested and repaired."<<endl;
    vector<Component*>::iterator it;
    for(it = components.begin(); it != components.end(); ++it)
        (*it)->repair();

    car1->repair();
    car2->repair();
    // maybe add reliability to Car and set it back to original value after being serviced
}     

int Engineering::getWindTunnelRuns() {
    return windTunnelRuns;
}

void Engineering::setWindTunnelRuns(int runs) {
    windTunnelRuns = runs;
}

void Engineering::viewComponentPeformance() {
    for(Component* c : components) {
        cout << c->getPerformance() << endl;
    }
}
