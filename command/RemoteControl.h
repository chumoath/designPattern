#ifndef _REMOTE_CONTROL_H
#define _REMOTE_CONTROL_H

#include "Command.h"
#include <memory>
#include "NoCommand.h"
#include <string>
#include <sstream>

using namespace std;

class RemoteControl{
public:
    RemoteControl(){
        for(int i = 0; i < slots; ++i){
            onCommands[i] = shared_ptr<Command>(new NoCommand());
            offCommands[i] = shared_ptr<Command>(new NoCommand());
            undoCommand = shared_ptr<Command>(new NoCommand());
        }
    }


    void onButtonPushed(int slot){
        undoCommand = onCommands[slot];
        onCommands[slot]->execute();
    }

    void offButtonPushed(int slot){
        undoCommand = offCommands[slot];
        offCommands[slot]->execute();
    }


    void undoButtonPushed(){

        undoCommand->undo();
    }

    void setCommand(int slot, shared_ptr<Command> onCommand, shared_ptr<Command> offCommand){
        onCommands[slot] = onCommand;
        offCommands[slot] = offCommand;
    }

    string toString(){
        ostringstream ret;

        for(int i = 0; i < slots; ++i){
            ret << "slot[";
            ret << i;
            ret << "] ";
            ret << onCommands[i]->getName();
            ret << " ";
            ret << offCommands[i]->getName();
            ret << endl; 
        }

        ret << "undoSlot";
        ret << " ";
        ret << undoCommand->getName();
        ret << endl;
        ret << endl;
        return ret.str();
    }

private:
    static const int  slots = 5;
    shared_ptr<Command> onCommands[slots];
    shared_ptr<Command> offCommands[slots];
    shared_ptr<Command> undoCommand;
};

#endif