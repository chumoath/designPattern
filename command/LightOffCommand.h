#ifndef _LIGHT_OFF_COMMAND_H
#define _LIGHT_OFF_COMMAND_H

#include "Command.h"
#include "Light.h"

using namespace std;

class LightOffCommand : public Command{
    
public:
    LightOffCommand(Light & light):m_light(light){
        setName("LightOffCommand");
    }

    void execute() override{
        m_light.lightOff();
    }

    void undo() override{
        m_light.lightOn();
    }

private:
    Light & m_light;
};

#endif