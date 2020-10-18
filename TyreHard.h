#ifndef TYREHARD_H
#define TYREHARD_H

#include "Tyres.h"
#include <string>

class TyreHard : public Tyres {
    private:    
        int durability;
        std::string type;
        
    public:
        TyreHard();
        Tyres* clone();
};

#endif
