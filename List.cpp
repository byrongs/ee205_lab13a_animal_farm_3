//
// Created by Alice Soriano on 4/19/22.
//
#include <cassert>

#include "List.h"

















////////// Delete All Nodes ////////////////
void List::deleteAllNodes() noexcept {
    assert(validate() );

    while(head != nullptr ) {
        pop_front();
    }


#ifdef DEBUG

    cout << PROGRAM_NAME << ":All Nodes have been deleted! " << endl;
#endif
    assert(validate() );
}

bool List::empty() const noexcept {
    return false;
}
