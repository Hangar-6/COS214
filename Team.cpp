#include "Team.h"

Team::Team() {
    Director director;
    TeamItems items = director.buildTeam();
    car1 = items.car1;
    car2 = items.car2;
    current = items.current;
    next = items.next;
    strategist = items.strategist;
    logistics = items.logistics;
    test = items.testing;
}

Team::~Team() {
    delete current;
    delete next;
    delete test;
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
    test->test(current, type);
}

Cars Team::getCars() {
    Cars cars = {car1, car2};
    return cars;
}

Engineers Team::getEngineers() {
    Engineers engineers = {current, next};
    return engineers;
}