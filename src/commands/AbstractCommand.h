#ifndef CPP_ABSTRACTCOMMAND_H
#define CPP_ABSTRACTCOMMAND_H

#include "iostream"
#include "string"
#include "vector"

using namespace std;

class AbstractCommand {
public:
    virtual ~AbstractCommand() = default;

    string getName();

    virtual void init(const string &currentCommand) = 0;

protected:
    string name = "example_command";
};

string AbstractCommand::getName() {
    return this->name;
}

#endif //CPP_ABSTRACTCOMMAND_H
