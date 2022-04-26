///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <cassert>

#include "List.h"
#include "config.h"

using namespace std;

unsigned int List::size() const noexcept {
    return count ; /// for the size of the list
}

bool List::empty() const noexcept {
    return (head == nullptr) // for an empty list
}

bool List::isIn(Node *aNode) const {
    if ( aNode == nullptr ) {
        throw invalid_argument("aNode must have a value!")
    }
    Node* currentNode = head;

    while( currentNode != nullptr ) {
        if( aNode == currentNode )
            return true;
        currentNode = currentNode->next; //points to next
    }
    return false; // if aNode wasn't found
}


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

bool List::isSorted() const noexcept {
    if( count <= 1 ) {
        return true;
    }
    for( Node* i = head ; i->next != nullptr ; i = i->next ) {
        if( *i > *i->next )
            return false;
    }
    return true;
}

Node *List::get_first() const noexcept { //returns the first node in list
    return head;
}

Node *List::get_next(const Node *currentNode) {
    if( currentNode == nullptr ) {
        throw invalid_argument( "Current node cannot be nullptr");
    }
    return currentNode->next; //For currentNode with a value
}






