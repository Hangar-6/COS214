#include "EngineeringBuilder.h"

EngineeringBuilder::~EngineeringBuilder() {
    current = nullptr;
    next = nullptr;
}

void EngineeringBuilder::build() {
    current = new CurrentEngineering();
    next = new NextEngineering();
}

Engineering* EngineeringBuilder::getEngineering(EngineeringType type) {
    if(type == CURRENT) 
        return current;
    else
        return next;
}