#include "Strategist.h"

using namespace std;

Strategist::Strategist(){}

void Strategist::strategy(Car* car1, Car* car2, RaceWeekend* race) {
    // rather implement using switch
    switch(race->getStrategy()) {
        case AGGRESSIVE:
            break;
        case BALANCED:
            break;
        case CONSERVATIVE:
            break;
    }
    // if(race->strategy==AGGRESSIVE){
    //     AggressiveStrategy* a = new AggressiveStrategy();
    //     car1->setTyres(a->strategy());
    //     car2->setTyres(a->strategy());
    // }
    // else if(race->strategy==BALANCED){
    //     BalancedStrategy* b = new BalancedStrategy();
    //     car1->setTyres(b->strategy());
    //     car2->setTyres(b->strategy());
    // }
    // else if(race->strategy==CONSERVATIVE){
    //     ConservativeStrategy* c = new ConservativeStrategy();
    //     car1->setTyres(c->strategy());
    //     car2->setTyres(c->strategy());
    // }
}
