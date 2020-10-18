#ifndef TYREMEDIUM_H
#define TYREMEDIUM_H

#include "Tyres.h"
#include <string>

class TyreMedium : public Tyres {
    private:
        std::string type;

    public:
        TyreMedium();
        Tyres* clone();
        string getType();
};

#endif
