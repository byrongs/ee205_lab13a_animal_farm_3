//

#ifndef EE205_LAB_10D_ANIMAL_FARM_2_NODE_H
#define EE205_LAB_10D_ANIMAL_FARM_2_NODE_H
#endif //EE205_LAB_10D_ANIMAL_FARM_2_NODE_H

#include <iostream>

#include "config.h"


class Node {
public: /////// Public Member Functions /////
    virtual dump() const;

    virtual bool validate() const noexcept;

    virtual bool operator>(const Node &rightSide);

protected: ///// Static Protected Member Functions ////

    static bool compareByAddress(const Node *node1,const Node *node2);

    //// Protected Attributes ////

    Node* next = nullptr;


};

bool Node::compareByAddress(const Node *node1, const Node *node2) {
    if( node1 > node2) {
        return true;
    }
    return false;
}


