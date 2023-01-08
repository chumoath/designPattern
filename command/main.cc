#include "RemoteControl.h"
#include <iostream>
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "Light.h"

using namespace std;

int main(int argc, char const *argv[])
{
    RemoteControl remote;

    cout << remote.toString();

    Light * kitchenLight = new Light("kitchen");

    remote.setCommand(0, make_shared<LightOnCommand>(*kitchenLight), 
                         make_shared<LightOffCommand>(*kitchenLight));
    
    remote.onButtonPushed(0);

    cout << remote.toString();
    
    remote.undoButtonPushed();

    delete kitchenLight;
    
    return 0;
}