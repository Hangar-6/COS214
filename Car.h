#ifndef CAR_H
#define CAR_H

using namespace std;

class Car {
    protected:
        int performance;

    public:
        Car();
        virtual ~Car(); //IMPLEMENT
        virtual void add(Car* component) = 0;
        virtual Car* clone() = 0;
};

#endif