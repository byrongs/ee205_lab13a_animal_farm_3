///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stdexcept>

#include "Node.h"
#include "config.h"

using namespace std;
////////// Bools ///////////////////
bool Node::compareByAddress (const Node* node1, const Node* node2 ) {
    if (node1 > node2)
        return true;

    return false;
}

bool Node::operator>(const Node &rightSide ) {

    return compareByAddress( this, &(Node&)rightSide );
}

bool Node::validate() const noexcept {
    if(next == nullptr ) {
        return true;
    }
    if( next == next->next ) {
        cout << "A recursive pointing detected!" ;
        return false;
    }
    return true;
}
///////// Node Dump /////////////
void Node::dump() const {
    FORMAT_LINE_FOR_DUMP( "Node", "this") << this << endl;
    FORMAT_LINE_FOR_DUMP( "Node", "next") << next << endl;
}