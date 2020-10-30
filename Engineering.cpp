#include "Engineering.h"

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

void Engineering::upgrade(TestResult result, ComponentType component) { //result is based off enum and make decision
    
    // call produce with new performance value if result is UPGRADE and decrease performance if result is DOWNGRADE
    // increase and decrease performance by 1 for now
    // clear components vector and call produce for each 
}       

void Engineering::buildCars(Car* car1, Car* car2) {
    // go through vector of components for each car, clone each component and set baseCar to a car

}   // clones components and sets their baseCar to the cars and adds them to the cars

void Engineering::disassemble(Car* car1, Car* car2) {
    static_cast<BaseCar*>(car1)->clearComponents();
    static_cast<BaseCar*>(car2)->clearComponents();
    // function called by Team after race
}     // clears vector<Component*> of cars

void Engineering::service(Car* car1, Car* car2) {
    cout<<"Both cars are currently being serviced. All parts are being tested and repaired."<<endl;
}     // service both cars

int Engineering::getWindTunnelRuns() {
    return windTunnelRuns;
}

void Engineering::setWindTunnelRuns(int runs) {
    windTunnelRuns = runs;
}
