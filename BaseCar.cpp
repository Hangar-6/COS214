#include "BaseCar.h"

BaseCar::BaseCar() : Car() {
    performance = 0;
}

BaseCar::~BaseCar(){
    //DEALLOCATE TYRES AND COMPONENTS
    for(int i=0; i<components.size(); i++)
    {
        delete components[i];
    }

    for(int i=0; i<tyres.size(); i++)
    {
        delete tyres[i];
    }
}


void BaseCar::add(Car *component) {
    //Add component to vector
    //Add performance to base performance
    components[componentCount++] = component;
    performance+=component->performance;
}

Car * BaseCar::clone() {
    BaseCar* copy = new BaseCar();
    copy->setTyres(tyres);
    for(int i=0; i<components.size(); i++)
    {
        copy->add(components[i]);
    }
    copy->performance = performance;
    copy->componentCount = componentCount;

    return copy;
}

void BaseCar::setTyres(vector<Tyre *> _tyres) {
    //set tyres vector
    tyres = _tyres;
}

void BaseCar::setComponents(vector<Component *> _components) {
    //set components vector
    components=_components;
}

void BaseCar::clearComponents() {
    components.clear();
}