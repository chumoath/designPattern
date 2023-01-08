#ifndef _BEVERAGE_H
#define _BEVERAGE_H

#include <string>
#include <iostream>

class Beverage{

public:
    /* 所有的beverage 都静态绑定该函数  */
    /* 所有的decorator 都重新实现该函数 */
    /* error => 必须是虚函数，否则，使用 beverage 一定只会调用 Beverage 的 getDescription */
    virtual std::string getDescription(){
        return description;
    }

    /* 不可以 声明为 纯虚函数，因为纯虚函数必须要重写，即 Milk 必须有 ~Beverage */
    virtual ~Beverage(){

    };

    virtual double cost() = 0;


protected:
    std::string description = "unknown beverage";
};



class Milk : public Beverage{

public:
    Milk(){
        description = "Milk";
    }

    ~Milk() override{
        std::cout << "milk delete" << std::endl;
    }

    double cost() override{
        return 2.5;
    }
};

#endif