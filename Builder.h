#ifndef BUILDER_H
#define BUILDER_H

class Builder {
    public:
        virtual ~Builder();
        virtual void build() = 0;
};

#endif