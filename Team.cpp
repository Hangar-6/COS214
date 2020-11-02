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
    Driver1Points = d1Points;
    Driver2Points = d2Points;
    ConstructorPoints = d1Points + d2Points;
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

void Team::setConstructorPoints(int p) {
    ConstructorPoints = p;
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
    for(int i = 0; i < 10; i++) {
        testing->test(current, WINDTUNNEL);
        testing->test(current, SIMULATION);
        testing->test(next, WINDTUNNEL);
        testing->test(next, SIMULATION);
    }
    current->viewComponentPeformance();
    next->viewComponentPeformance();
}

void Team::test(TestType type, Engineering* engineering) {
    // run test for specific engineering team and type
    // mostly used for PracticeTest
    testing->test(engineering, type);
}

void Team::transport(RaceWeekend* race) {
    // store all equipment and both cars into containers and move containers to storage
    // use logistics to transport all containers
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

    delete adapter1;
    delete adapter2;
}
