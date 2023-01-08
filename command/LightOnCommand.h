#ifndef _LIGHT_ON_COMMAND_H
#define _LIGHT_ON_COMMAND_H

#include "Command.h"
#include "Light.h"

class LightOnCommand : public Command{
public:
    LightOnCommand(Light & light):m_light(light){
        setName("LightOnCommand");
    }

    void execute() override{
        m_light.lightOn();
    }
    
    void undo() override{
        m_light.lightOff();
    }
private:
    Light & m_light;
};

#endif