#include "StrategistBuilder.h"

StrategistBuilder::~StrategistBuilder() {
    strategist = nullptr;
}

void StrategistBuilder::build() {
    strategist = new Strategist();
}

Strategist* StrategistBuilder::getStrategist() {
    return strategist;
}