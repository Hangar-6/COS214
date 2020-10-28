#include "AggressiveStrategy.h"

using namespace std;

AggressiveStrategy::AggressiveStrategy(){}

vector<Tyre*> AggressiveStrategy::strategy(){
  vector<Tyre*> tyres;
  Tyres* temp;
  for(int i=0;i<5;i++){
    if(i<3){
      temp = new SoftTyre();
      tyres.push_back(temp);
    }
    else{
      temp = new MediumTyre();
      tyres.push_back(temp);
    }
  }
  temp = NULL;
  return tyres;
}
