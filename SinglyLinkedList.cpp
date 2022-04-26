///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////




#include <cassert>
#include <iostream>

#include "SinglyLinkedList.h"
#include "config.h"

using namespace std;

SinglyLinkedList::SinglyLinkedList() {

}
//////////////////// Push Front /////////////
void SinglyLinkedList::push_front(Node *newNode) {
    TRACE_START

    if(*newNode == nullptr){
        throw invalid_argument(" newNode cannot be nullpter ");
    }

    if( isIn( newNode ) ) {
        throw logic_error( "The node is already in the containter");
    }

    newNode->next = head;// for a filled list
    count++;
    head = newNode;
    newNode->dump();

}
////// Pop Front ////////////////////////////
Node *SinglyLinkedList::pop_front() noexcept {
    TRACE_START

    if( head == nullptr ){
        return nullptr;

        Node* returnValue = head;

    }
    if( head->next != nullptr ) {
        head = head->next;
    } else {
        head = nullptr;
    }

    returnValue->next = nullptr;

    count--;
    TRACE_END

    return returnValue;

}
//////////////// insert after //////////////

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    TRACE_START

    if (head == nullptr)
        throw logic_error("Insert_after won't work with empty list!");
}

    if( currentNode == nullptr ) {
    throw invalid_argument( "The currentNode must have a value!");
}

    if( !isIn( currentNode )) {
    throw logic_error(" The currentNode must be in list!");
}

    if( newNode == nullptr ) {
        throw invalid_argument( "The newNode must have a value");
    }
    if( isIn( newNode )) {
        throw logic_error(" The newNode is already in list!");
    }

newNode->next = currentNode->next;
currentNode->next = newNode;


void SinglyLinkedList::dump() const noexcept {
    cout << "SinglyLinkedList: head = " << head << "" << endl;
    for( Node* currentNode = head ; currentNode != nullptr; currentNode = currentNode->next ){
        currentNode->dump();
    }

}

bool SinglyLinkedList::validate() const noexcept {
    if(head == nullptr ) {
        assert( count == 0 );
        assert( empty() );
    } else {
        assert( count != 0 );
        assert( !empty() );
    }
    if( head != nullptr ) {
        if( head->next == nullptr ) {
            assert( count == 1);
        }
    }
    unsigned int countUp = 0;
    Node* currentNode = head;

    while( currentNode != nullptr ) {
        assert( currentNode->validate() );
        countUp++;
        currentNode = currentNode->next
    }
    return true;
}



