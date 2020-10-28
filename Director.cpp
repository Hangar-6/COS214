#include "Director.h"

TeamItems Director::buildTeam() {
    CarBuilder carBuilder;
    carBuilder.build();
    EngineeringBuilder engineeringBuilder;
    engineeringBuilder.build();
    StrategistBuilder strategistBuilder;
    strategistBuilder.build();
    LogisticsBuilder logisticsBuilder;
    logisticsBuilder.build();
    TestingBuilder testingBuilder;
    testingBuilder.build();

    Car* car1 = carBuilder.getCar();
    Car* car2 = car1->clone();

    Engineering* current = engineeringBuilder.getEngineering(CURRENT);
    Engineering* next = engineeringBuilder.getEngineering(NEXT);

    Strategist* strategist = strategistBuilder.getStrategist();
    Logistics* logistics = logisticsBuilder.getLogistics();
    Testing* testing = testingBuilder.getTesting();

    TeamItems items = {car1, car2, (CurrentEngineering*) current, (NextEngineering*) next, strategist, logistics, testing};
    return items;
}