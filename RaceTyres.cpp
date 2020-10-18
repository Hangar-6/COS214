#include "RaceTyres.h"

using namespace std;

RaceTyres::RaceTyres(){
    this->Tyres[5];
    for (int i = 0; i < 5; i++){
        Tyres[i] = "";
    }
}

string* RaceTyres::getTyres(){
    return this->Tyres;
}

void RaceTyres::setTyres(string* NewSet){
    this->Tyres = NewSet;
}

string RaceTyres::getTyre(int index){return this->Tyres[index];}

void RaceTyres::setTyre(int index, string NewTyre){
    this->Tyres[index] = NewTyre;
}