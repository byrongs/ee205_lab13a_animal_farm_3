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



#ifndef EE205_LAB_10D_ANIMAL_FARM_2_NODE_H
#define EE205_LAB_10D_ANIMAL_FARM_2_NODE_H
#endif //EE205_LAB_10D_ANIMAL_FARM_2_NODE_H

#pragma once

#include <iostream>
#include <iomanip>
#include "config.h"


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
            throw std::invalid_argument("Recursive pointing loop detected");
        }
        return true;
    }

    virtual bool operator>(const Node &rightSide) {
        return compareByAddress(this, &(Node&)rightSide);
    }


protected: ///// Static Protected Member Functions ////

    Node* next = nullptr;

    static bool compareByAddress(const Node *node1,const Node *node2) {
        if(node1 > node2 ) {
            return true;
        }
        return false;
    }
};
