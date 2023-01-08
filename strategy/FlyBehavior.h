#include <iostream>

class FlyBehavior{
public:
    virtual void fly() = 0;
};


class Fly: public FlyBehavior{
public:
    void fly() override;
};


class RocketFly:public FlyBehavior{
public:
    void fly() override;
};