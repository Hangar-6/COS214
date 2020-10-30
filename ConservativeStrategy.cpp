#include "ConservativeStrategy.h"

using namespace std;

vector<Tyre*> ConservativeStrategy::setTyres() {
    vector<Tyre*> tyres;
    for(int i=0;i<5;i++) {
        if(i==0)
            tyres.push_back(new SoftTyre());
        
        else if(i>=1 && i<=3)
            tyres.push_back(new MediumTyre());
        
        else
            tyres.push_back(new HardTyre());
    }
    return tyres;
}
