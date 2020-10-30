+#include "BalancedStrategy.h"

using namespace std;

BalancedStrategy::BalancedStrategy(){}

vector<Tyre*> BalancedStrategy::strategy(){
    vector<Tyre*> tyres;
    Tyres* temp;
    for(int i=0;i<5;i++){
        if(i<2){
            temp = new SoftTyre();
            tyres.push_back(temp);
        }
        else if(i==2 || i==3){
            temp = new MediumTyre();
            tyres.push_back(temp);
        }
        else{
            temp = new HardTyre();
            tyres.push_back(temp);
        }

    }
    temp = NULL;
    return tyres;
}
