#ifndef _COMMAND_H
#define _COMMAND_H

#include <string>
using namespace std;

class Command{
public:
    virtual void execute() = 0;
    virtual void undo() = 0;
    
    void setName(const string & s){
        name = s;
    }

    string & getName(){
        return name;
    }

private:
    string name;
};
#endif