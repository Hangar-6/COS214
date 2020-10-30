#include "BaseCar.h"

BaseCar::BaseCar() : Car() {
    performance = 0;
}

BaseCar::~BaseCar(){
    //DEALLOCATE TYRES AND COMPONENTS
    // vectors should already be empty by this point
    // in case, still clear
    components.clear();
    tyres.clear();
}

void BaseCar::add(Car* component) {
    //Add component to vector
    //Add performance to base performance
    components.push_back(component);
    performance += component->getPerformance();
}

Car* BaseCar::clone() {
    return new BaseCar();
}

void BaseCar::setTyres(vector<Tyre *> _tyres) {
    //set tyres vector
    tyres = _tyres;
}

void BaseCar::setComponents(vector<Car*> _components) {
    //set components vector
    components = _components;
}

void BaseCar::clearComponents() {
    // delete components and clear vector
    vector<Car*>::iterator it;
    for(it = components.begin(); it != components.end(); ++it)
        delete *it;
    components.clear();

    // delete tyres and clear vector
    vector<Tyre*>::iterator itr;
    for(itr = tyres.begin(); itr != tyres.end(); ++itr)
        delete *itr;
    tyres.clear();
}