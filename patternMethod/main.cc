#include "Coffee.h"

int main(int argc, char const *argv[])
{
    CoffeeJuice * coffee = new Coffee();

    coffee->prepare();

    return 0;
}
