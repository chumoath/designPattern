#include "Pizza.h"
#include "PizzaStore.h"

int main(int argc, char const *argv[])
{
    PizzaStore * southPizzaStore = new SouthPizzaStore();

    southPizzaStore->orderPizza("salt");

    delete southPizzaStore;
    return 0;
}
