class QuackBehavior{
public:
    virtual void quack() = 0;
};


class Quack : public QuackBehavior{
public:
    void quack() override;
};

class ZhiQuack : public QuackBehavior{
public:
    void quack() override;
};