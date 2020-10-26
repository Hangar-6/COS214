#include "WeekendFactory.h"

using namespace std;

void WeekendFactory::setVenue(string v){
    this->venue = v;
}

void WeekendFactory::setLocation(string l){
    this->location = l;
}

void WeekendFactory::setType(int t){
    this->type = t;
}

void WeekendFactory::setScoresheet(){
    
}

void WeekendFactory::setCar(Car* racecar){
    this->car = racecar;
}

string WeekendFactory::getVenue(){
    return this->venue;
}

string WeekendFactory::getLocation(){
    return this->location;
}

int WeekendFactory::getType(){
    return this->type;
}

ScoreSheet* WeekendFactory::getVenue(){
    return this->results;
}

Car* WeekendFactory::getCar(){
    return this->car;
}
