#ifndef CPP_ADDNOTE_H
#define CPP_ADDNOTE_H

#include "../../commands/AbstractCommand.h"

class AddNote : public AbstractCommand {
public:
    AddNote() {
        name = "/add_node";
    }
};

#endif //CPP_ADDNOTE_H
