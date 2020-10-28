#ifndef STORAGE_H
#define STORAGE_H

#include "Container.h"

class Storage {
    private:
        Container* container;

    public:
        Storage(Container* _container);     // stores a Container with Equipment of type CAR, GARAGE or CATERING
        Container* getContainer();
};

#endif