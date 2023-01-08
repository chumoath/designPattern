#include "Duck.h"

int main(int argc, char const *argv[])
{
    RubberDuck d;
    
    d.setFlyBehavior(new RocketFly());
    d.setQuackBehavior(new ZhiQuack());

    d.performFly();
    d.performQuack();
    return 0;
}
