#include "PracticeTest.h"

using namespace std;

PracticeTest::PracticeTest() : Testing() {}

void PracticeTest::test(Engineering* engineering, TestType type) {
    // go through each component from components vector, use switch to check ComponentType
    // randomise number betweeen 0 and 3 and cast random int to TestResult

    if(type == PRACTICE) {
        TestResult result;
        result = NOCHANGE;
        vector<Component*> Components = engineering->getComponents();
        cout<<"Practice Test: Start..."<<endl;
        for (int i = 0; i < Components.size(); i++){
            if (Components.at(i)==Aerodynamics){
                cout<<"Practice Test: Aerodynamics testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    result = UPGRADE;
                    cout<<"Practice Test: Aerodynamics failed..."<<endl;
                }
                else
                    cout<<"Practice Test: Aerodynamics passed..."<<endl;
            }
            if (Components.at(i)==Electronics){
                cout<<"Practice Test: Electronics testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    result = UPGRADE;
                    cout<<"Practice Test: Electronics failed..."<<endl;
                }
                else
                    cout<<"Practice Test: Electronics passed..."<<endl;
            }
            if (Components.at(i)==Engine){
                cout<<"Practice Test: Engine testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    result = UPGRADE;
                    cout<<"Practice Test: Engine failed..."<<endl;
                }
                    cout<<"Practice Test: Engine passed..."<<endl;
            }
            if (Components.at(i)==Chassis){
                cout<<"Practice Test: Chassis testing in progress..."<<endl;
                if (Components.at(i)->getPerformance()-5 <= 0){
                    result = UPGRADE;
                    cout<<"Practice Test: Chassis failed..."<<endl;
                }
                else
                    cout<<"Practice Test: Chassis passed..."<<endl;
            }
        }
        cout<<"Practice Test: End"<<endl;
        notify(engineering, result);
    }
        
    else if(next)
        next->test(engineering, type);
}
