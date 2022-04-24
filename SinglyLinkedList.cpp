//
// Created by Alice Soriano on 4/19/22.
//

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



