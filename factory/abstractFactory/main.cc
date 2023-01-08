#include <iostream>
#include "PizzaStore.h"
using namespace std;

int main(int argc, char const *argv[])
{
    PizzaStore * pizzaStore = new NorthPizzaStore();

    Pizza * pizza = pizzaStore->orderPizza("salt");
    cout << "I ordered " 
         << pizza->getName() << endl;

    delete pizzaStore;
    delete pizza;
    return 0;
}
