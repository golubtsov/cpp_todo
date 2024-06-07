#ifndef CPP_ADDNOTE_H
#define CPP_ADDNOTE_H

#include "../../commands/AbstractCommand.h"

class AddNote : public AbstractCommand {
public:
    AddNote() {
        name = "/add_note";
    }

    void init(const string &currentCommand) override;
};

void AddNote::init(const string &currentCommand) {
    if (currentCommand == name) {
        string note;

        cout << "Enter new note:" << endl;
        cin >> note;
        cout << note + "\n" << endl;
    }
}

#endif //CPP_ADDNOTE_H
