#include "simpleFactory.h"
#include "PizzaStore.h"

int main(int argc, char const *argv[])
{
    PizzaFactory pizzaFactory;
    PizzaStore pizzaStore(pizzaFactory);
    Pizza * pizza = pizzaStore.orderPizza("salt");
    return 0;
}
