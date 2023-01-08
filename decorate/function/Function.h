#ifndef FUNCTION_H
#define FUNCTION_H
#include <iostream>

class Function{
public:
    virtual ~Function(){}
    virtual void operator()() = 0;
};


class MainFunction : public Function{
public:
    ~MainFunction(){
        std::cout << "MainFunction delete" << std::endl;
    }
    
    void operator()() override{
        std::cout << "main function" << std::endl;
    }
};

#endif