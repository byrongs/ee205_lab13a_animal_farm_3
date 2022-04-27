///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once


#include <iostream>
#include <iomanip>

#include "config.h"

using namespace std;

class Node {
    friend class List ;
    friend class SinglyLinkedList ;

public: /////// Public Member Functions /////
    virtual void dump() const {
        FORMAT_LINE_FOR_DUMP("Node", "this") << this << std::endl;
        FORMAT_LINE_FOR_DUMP("Node", "next") << next << std::endl;
    }

    virtual bool validate() const noexcept {
        if( next == nullptr ) {
            return true;
        }
        if( next ==next-> next ) {
            cout << "Recursive pointing loop detected" ;
        }
        return true;
    }

    ///// Operator ///////

    virtual bool operator>(const Node &rightSide) {
        return compareByAddress(this, &(Node&)rightSide);
    }


protected: ///// Static Protected Member Functions ////

    Node* next = nullptr;

protected:

    static bool compareByAddress(const Node *node1,const Node *node2) {
        if(node1 > node2 ) {
            return true;
        }
        return false;
    }


};
