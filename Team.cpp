#include "Team.h"

Team::Team(string name) : teamName(name) {}

Team::~Team() {
    delete current;
    delete next;
    delete testing;
    delete car1;
    delete car2;
    delete strategist;
    delete logistics;
    delete garage;
    delete catering;
}

void Team::addPoints(int d1Points, int d2Points) {
    Driver1Points += d1Points;
    Driver2Points += d2Points;
    ConstructorPoints += (d1Points + d2Points);
}

int Team::getTeamPoints(){
    return ConstructorPoints;
}

int Team::getCar1Points(){
    return Driver1Points;
}

int Team::getCar2Points(){
    return Driver2Points;
}

Cars Team::getCars() {
    Cars cars = {car1, car2};
    return cars;
}

Engineers Team::getEngineers() {
    Engineers engineers = {current, next};
    return engineers;
}

string Team::getTeamName() {
    return teamName;
}

void Team::printSeasonResults(){
    cout << endl << "---------End of season results---------" << endl;
    cout << "CONSTRUCTOR POINTS \n" << teamName << "\t" << ConstructorPoints << endl;
    cout << "DRIVER POINTS \n" << "Car 1" << "\t" << Driver1Points << endl << "Car 2" << "\t" << Driver2Points << endl << endl;
}

void Team::setCar(Car* car) {
    car1 = car;
    car2 = car->clone();
}

void Team::setEngineers(Engineering* _current, Engineering* _next) {
    current = _current;
    current->buildComponents();
    next = _next;
    next->buildComponents();
}

void Team::setStrategist(Strategist* _strategist) {
    strategist = _strategist;
}

void Team::setLogistics(Logistics* _logistics) {
    logistics = _logistics;
}

void Team::setEquipment(Equipment* _garage, Equipment* _catering) {
    garage = _garage;
    catering = _catering;
}

void Team::setTesting(Testing* _testing) {
    testing = _testing;
}

void Team::racePreparations(RaceWeekend* race) {
    current->buildCars(car1, car2);
    strategist->strategy(car1, car2, race);
}

void Team::raceEnd() {
    current->disassemble(car1, car2);
}

void Team::test() {
    // perform multiple tests WindTunnel and Simulation tests before races for both engineering teams
    cout << "Wind Tunnel Tests and Simulation Tests will be performed on all components\n";
    for(int i = 0; i < 9; i++) {
        testing->test(current, WINDTUNNEL);
        testing->test(current, SIMULATION);
        testing->test(next, WINDTUNNEL);
        testing->test(next, SIMULATION);
    }
}

void Team::test(TestType type, Engineering* engineering) {
    // run test for specific engineering team and type
    // mostly used for PracticeTest
    testing->test(engineering, type);
}

void Team::transport(RaceWeekend* race) {
    // store all equipment and both cars into containers and move containers to storage
    // use logistics to transport all containers
    cout << teamName << " prepares containers to ship all their equipment\n";
    vector<Storage> storage;
    storage.push_back(new Container(garage));
    storage.push_back(new Container(catering));
    CarAdapter* adapter1 = new CarAdapter(car1);
    CarAdapter* adapter2 = new CarAdapter(car2);
    storage.push_back(new Container(adapter1));
    storage.push_back(new Container(adapter2));

    vector<Storage>::iterator it;
    for(it = storage.begin(); it != storage.end(); ++it) {
        logistics->transport(race, it->getContainer());
        delete it->getContainer();
    }
    storage.clear();

    if(!race)
        current->service(car1, car2);

    delete adapter1;
    delete adapter2;
}

void Team::seasonEnd() {
    cout << endl << "---------End of season results---------" << endl;
    cout << "CONSTRUCTOR POINTS \n" << teamName << "\t" << ConstructorPoints << endl;
    cout << "DRIVER POINTS \n" << "Car 1" << "\t" << Driver1Points << endl << "Car 2" << "\t" << Driver2Points << endl << endl;
    // transfer next components to current components
    vector<Component*> c1 = current->getComponents();
    vector<Component*> c2 = next->getComponents();
    vector<Component*>::iterator curr;
    vector<Component*>::iterator nxt;

    for(curr = c1.begin(), nxt = c2.begin(); curr != c1.end() && nxt != c2.end(); ++curr, ++nxt) {
        (*curr)->setPerformance((*nxt)->getPerformance());
        (*nxt)->setPerformance(0);
    }

    cout << "Next Engineering transfers its components to Current Engineering and begins its work on new components\n";

}
