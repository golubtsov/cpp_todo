#include "src/commands/CommandHandle.h"
#include "src/notes/commands/AddNote.h"
#include "src/notes/commands/ListNotes.h"

int main() {
    AddNote add_note_command;
    ListNotes list_notes_command;

    CommandHandle::add_command(add_note_command);
    CommandHandle::add_command(list_notes_command);

    CommandHandle::handle();

    return 0;
}