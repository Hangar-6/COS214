#include "AggressiveStrategy.h"

using namespace std;

vector<Tyre*> AggressiveStrategy::setTyres() {
    vector<Tyre*> tyres;
    for(int i=0;i<5;i++) {
        if(i<3)
            tyres.push_back(new SoftTyre());
        
        else
            tyres.push_back(new MediumTyre());
    }
    return tyres;
}
