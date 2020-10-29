#include "Engineering.h"

Engineering::Engineering(){
}                      // creates Departments

Engineering::~Engineering(){

}             // deletes departments and components

vector<Component*> Engineering::getComponents(){

}

void Engineering::upgrade(TestResult result){

}       // creates new Component with new performance value if result is UPGRADE

void Engineering::buildCars(Car* car1, Car* car2){

}   // clones components and adds them to the cars

void Engineering::disassemble(Car* car1, Car* car2){

}     // clears vector<Component*> of cars

void Engineering::service(Car* car1, Car* car2){

}     // service both cars
