#include "ConservativeStrategy.h"

using namespace std;

ConservativeStrategy::ConservativeStrategy(){}

vector<Tyre*> ConservativeStrategy::strategy(){
  vector<Tyre*> tyres;
  Tyres* temp;
  for(int i=0;i<5;i++){
    if(i==0){
      temp = new SoftTyre();
      tyres.push_back(temp);
    }
    else if(i>=1 && i<=3){
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
