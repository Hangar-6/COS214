#include "BalancedStrategy.h"

using namespace std;

vector<Tyre*> BalancedStrategy::setTyres() {
    vector<Tyre*> tyres;
    for(int i=0;i<5;i++){
        if(i<2)
            tyres.push_back(new SoftTyre());
        
        else if(i==2 || i==3)
            tyres.push_back(new MediumTyre());
            
        else
            tyres.push_back(new HardTyre());
    }
    return tyres;
}
