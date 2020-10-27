#include "LogisticsBuilder.h"

LogisticsBuilder::~LogisticsBuilder() {
    logistics = nullptr;
}

void LogisticsBuilder::build() {
    // logistics = new Truck();
}

Logistics* LogisticsBuilder::getLogistics() {
    return logistics;
}