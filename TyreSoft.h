#ifndef TYRESOFT_H
#define TYRESOFT_H

#include "Tyres.h"
#include <string>

class TyreSoft : public Tyres {
    private:
        std::string type;

    public:
        TyreSoft();
        Tyres* clone();
        string getType();
};

#endif
