#ifndef _NO_COMMAND_H
#define _NO_COMMAND_H

#include "Command.h"
class NoCommand : public Command{
public:
    NoCommand(){
        setName("NoCommand");
    }

    void execute() override{};
    void undo() override {};
};

#endif