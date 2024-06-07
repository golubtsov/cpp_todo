#ifndef CPP_LISTNOTE_H
#define CPP_LISTNOTE_H

#include "../../commands/AbstractCommand.h"

class ListNotes : public AbstractCommand {
public:
    ListNotes() {
        name = "/list_notes";
    }

    void init(const string &currentCommand) override;
};

void ListNotes::init(const string &currentCommand) {
    if (currentCommand == name) {
        string note;

        cout << "List notes:" << endl;
    }
}

#endif //CPP_LISTNOTE_H
