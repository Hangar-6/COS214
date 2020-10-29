#include "PracticeTest.h"
#include <iostream>
#include <vector>

using namespace std;

PracticeTest::PracticeTest() {
    //TestType ThisTest = PRACTICE;
}

void PracticeTest::test(Engineering* engineering, TestType type) {
    TestType ThisTest = PRACTICE;
    //if (type != "PRACTICE" || type != 2)
    if (type != ThisTest)
        this->next->test(engineering, type);
    else{
        TestResult PTResult;
        PTResult = NOCHANGE;
        vector<Component*> Components = engineering->getComponents();
        cout<<"Practice Test: Start..."<<endl;
        for (int i = 0; i < Components.size(); i++){
            if (Components.at(i)==Aerodynamics){
                cout<<"Practice Test: Aerodynamics testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    PTResult = UPGRADE;
                    cout<<"Practice Test: Aerodynamics failed..."<<endl;
                }
                else
                    cout<<"Practice Test: Aerodynamics passed..."<<endl;
            }
            if (Components.at(i)==Electronics){
                cout<<"Practice Test: Electronics testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    PTResult = UPGRADE;
                    cout<<"Practice Test: Electronics failed..."<<endl;
                }
                else
                    cout<<"Practice Test: Electronics passed..."<<endl;
            }
            if (Components.at(i)==Engine){
                cout<<"Practice Test: Engine testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    PTResult = UPGRADE;
                    cout<<"Practice Test: Engine failed..."<<endl;
                }
                    cout<<"Practice Test: Engine passed..."<<endl;
            }
            if (Components.at(i)==Chassis){
                cout<<"Practice Test: Chassis testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    PTResult = UPGRADE;
                    cout<<"Practice Test: Chassis failed..."<<endl;
                }
                else
                    cout<<"Practice Test: Chassis passed..."<<endl;
            }
        }
        cout<<"Practice Test: End"<<endl;
        notify(engineering, PTResult);
    }
}