#include "Turkey.h"
#include "TurkeyAdapter.h"
#include "Duck.h"


void test(Duck & duck){
    duck.quack();
    duck.fly();
}

int main(int argc, char const *argv[])
{
    Turkey turkey;
    TurkeyAdapter ta(turkey);
    
    test(ta);

    return 0;
}

