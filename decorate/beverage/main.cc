#include "Beverage.h"
#include "Decorator.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Beverage * beverage = new Milk();

    // error => 不能自动调用 milk 的析构函数，必须顺序调用

    // Milk milk;
    // Beverage * beverage = &milk;

    beverage = new Sugar(beverage);
    beverage = new Salt(beverage);

    cout << beverage->getDescription() << ": " << beverage->cost() << endl;

    // delete beverage; => 会自动调用 milk 的析构函数   error => 必须从外往内调用
    
    delete beverage;
    return 0;
}
