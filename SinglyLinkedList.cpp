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

SinglyLinkedList::SinglyLinkedList() {

}

void SinglyLinkedList::push_front(Node *newNode) {

    if(*newNode == nullptr){
        throw invalid_argument(" newNode cannot be nullpointer ")
    }
    *newNode = Node

}

Node *SinglyLinkedList::pop_front() noexcept {
    return nullptr;
}


void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {

}

void SinglyLinkedList::dump() const noexcept {

}

bool SinglyLinkedList::validate() const noexcept {
    return false;
}



