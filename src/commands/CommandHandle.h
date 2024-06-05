#ifndef CPP_COMMANDHANDLE_H
#define CPP_COMMANDHANDLE_H

#include "vector"

#include "AbstractCommand.h"

class CommandHandle {
public:
    static void add_command(const AbstractCommand &command) {
        commands.push_back(command);
    }

    static void handle() {
        while (state) {
            cout << "Commands:" << endl;

            for (AbstractCommand command: commands) {
                cout << command.get_name() << endl;
            }


            cout << "\nCommand: " << endl;
            cin >> current_command;
        }
    }

protected:
    static inline bool state = true;
    static inline string current_command;
    static inline vector<AbstractCommand> commands;
};

#endif //CPP_COMMANDHANDLE_H
