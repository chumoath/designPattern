#ifndef _FUNCTION_DECORATOR_H
#define _FUNCTION_DECORATOR_H
#include "Function.h"
#include <iostream>
class FunctionDecorator:public Function{
public:
    virtual void operator()() = 0;
};


class LogDecorator: public FunctionDecorator{
public:
    LogDecorator(Function * function) : m_function(function){}
    ~LogDecorator(){
        std::cout << "Log Dectorator delete" << std::endl;
        delete m_function;
    }

    void operator()() override{
        std::cout << "start" << std::endl;
        
        (*m_function)();

        std::cout << "end" << std::endl;
    }
private:
    Function * m_function;
};


#endif