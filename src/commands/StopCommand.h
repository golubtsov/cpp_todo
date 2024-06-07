#ifndef TODO_STOPCOMMAND_H
#define TODO_STOPCOMMAND_H

#include "AbstractCommand.h"

class StopCommand : public AbstractCommand {
public:
    static inline string label = "/stop";

    StopCommand() {
        name = StopCommand::label;
    }

    void init(const string &currentCommand) override;

    static string getLabel() {
        return StopCommand::label;
    }
};

void StopCommand::init(const string &currentCommand) {
}

#endif //TODO_STOPCOMMAND_H
