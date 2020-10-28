#ifndef TYRE_H
#define TYRE_H

// Abstract prototype class
// 3 different dry tyre compounds: soft, medium. hard

class Tyre {
    private:
        int durability;

    public:
        virtual Tyre* clone() = 0;
};

#endif