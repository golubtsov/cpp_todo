#ifndef CPP_LISTNOTE_H
#define CPP_LISTNOTE_H

#include "../../commands/AbstractCommand.h"

class ListNotes : public AbstractCommand {
public:
    ListNotes() {
        name = "/list_notes";
    }
};

#endif //CPP_LISTNOTE_H
