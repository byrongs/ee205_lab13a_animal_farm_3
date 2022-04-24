//

#ifndef EE205_LAB_10D_ANIMAL_FARM_2_NODE_H
#define EE205_LAB_10D_ANIMAL_FARM_2_NODE_H
#endif //EE205_LAB_10D_ANIMAL_FARM_2_NODE_H

#pragma once

#include <iostream>

#include "config.h"


class Node {
    friend class List ;
    friend class SinglyLinkedList ;

public: /////// Public Member Functions /////
    virtual dump() const {
    FORMAT_LINE_FOR_DUMP( "Node", "this" ) << this << std::endl ;
    FORMAT_LINE_FOR_DUMP( "Node", "next" ) << next << std::endl ;
}

    virtual bool validate() const noexcept {
        if( next == nullptr ) {
            return true;
        }

        if( next == next->next ) {
            std::cout << PROGRAM_NAME << ": Recursive next pointed to itself!" ;
            return false;
        }

        return true;
    }

    virtual bool operator>(const Node &rightSide)  {

        return compareByAddress( this, &(Node&)rightSide );
    }


protected: ///// Static Protected Member Functions ////

    static bool compareByAddress(const Node *node1,const Node *node2) {
        if (node1 > node2) {
            return true;
            return false;
        }

        //// Protected Attributes ////

        Node *next = nullptr;

    }

};