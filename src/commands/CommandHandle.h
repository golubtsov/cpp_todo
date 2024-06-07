#ifndef CPP_COMMANDHANDLE_H
#define CPP_COMMANDHANDLE_H

#include <memory>
#include <vector>

#include "AbstractCommand.h"
#include "StopCommand.h"
#include "../notes/commands/AddNote.h"
#include "../notes/commands/ListNotes.h"

class CommandHandle {
public:
    static void addCommand(unique_ptr<AbstractCommand> command);

    static void handle();

protected:
    static inline bool state = true;
    static inline string currentCommand;
    static inline vector<std::unique_ptr<AbstractCommand>> commands;

    static void checkExit();
};

void CommandHandle::addCommand(std::unique_ptr<AbstractCommand> command) {
    commands.push_back(std::move(command));
}


void CommandHandle::handle() {

    std::unique_ptr<AddNote> addNoteCommand = std::make_unique<AddNote>();
    std::unique_ptr<ListNotes> listNotesCommand = std::make_unique<ListNotes>();
    std::unique_ptr<StopCommand> stopCommand = std::make_unique<StopCommand>();

    CommandHandle::addCommand(reinterpret_cast<unique_ptr<AbstractCommand> &&>(addNoteCommand));
    CommandHandle::addCommand(reinterpret_cast<unique_ptr<AbstractCommand> &&>(listNotesCommand));
    CommandHandle::addCommand(reinterpret_cast<unique_ptr<AbstractCommand> &&>(stopCommand));

    while (CommandHandle::state) {
        cout << "Commands:" << endl;

        for (const auto &command: commands) {
            cout << command->getName() << endl;
        }


        cout << "\nEnter command: " << endl;
        cin >> currentCommand;

        CommandHandle::checkExit();

        for (const auto &command: commands) {
            command->init(currentCommand);
        }
    }
}

void CommandHandle::checkExit() {
    if (currentCommand == StopCommand::getLabel()) {
        CommandHandle::state = false;
        cout << "Exit." << endl;
        return;
    }
}

#endif //CPP_COMMANDHANDLE_H
