#ifndef STORAGE_H
#define STORAGE_H

#include "Container.h"

class Storage {
    private:
        Container* container;

    public:
        Storage(Container* _container);
        Container* getContainer();
};

#endif