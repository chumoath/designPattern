#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck{
public:
    Duck(){
        m_flyBehavior = nullptr;
        m_quackBehavior = nullptr;
    };

    virtual ~Duck() {
        delete m_flyBehavior;
        delete m_quackBehavior;
    }

    void performFly(){
        m_flyBehavior->fly();
    }
    void performQuack(){
        m_quackBehavior->quack();
    }
    void setFlyBehavior(FlyBehavior * flyBehavior){
        this->m_flyBehavior = flyBehavior;
    }
    void setQuackBehavior(QuackBehavior * quackBehavior){
        this->m_quackBehavior = quackBehavior;
    }

private:
    FlyBehavior *m_flyBehavior;
    QuackBehavior *m_quackBehavior;
};


class RubberDuck : public Duck{
};