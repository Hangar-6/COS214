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
}

void Team::addPoints(int d1Points, int d2Points) {
    Driver1Points = d1Points;
    Driver2Points = d2Points;
    ConstructorPoints = d1Points + d2Points;
}

void Team::runTest(TestType type) {
    // testing->test(current, type);
}

Cars Team::getCars() {
    Cars cars = {car1, car2};
    return cars;
}

Engineers Team::getEngineers() {
    Engineers engineers = {current, next};
    return engineers;
}

void Team::setCar(Car* car) {
    car1 = car;
    car2 = car->clone();
}

void Team::setEngineers(Engineering* _current, Engineering* _next) {
    current = _current;
    next = _next;
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

void Team::racePreparations() {
    current->buildCars(car1, car2);
}

void Team::raceEnd() {
    current->disassemble(car1, car2);
}