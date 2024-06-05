#ifndef CPP_ABSTRACTCOMMAND_H
#define CPP_ABSTRACTCOMMAND_H

#include "iostream"
#include "string"
#include "vector"

using namespace std;

class AbstractCommand {
public:
    string get_name();

protected:
    string name = "example_command";
};

string AbstractCommand::get_name() {
    return this->name;
}

#endif //CPP_ABSTRACTCOMMAND_H
