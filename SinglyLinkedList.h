//


#ifndef EE205_LAB_10D_ANIMAL_FARM_2_SINGLYLINKEDLIST_H
#define EE205_LAB_10D_ANIMAL_FARM_2_SINGLYLINKEDLIST_H
#endif //EE205_LAB_10D_ANIMAL_FARM_2_SINGLYLINKEDLIST_H

#include "Node.h"
#include "List.h"

class SinglyLinkedList {

public: //// Public Member Functions ////

    SinglyLinkedList();

    void push_front(Node *newNode );

    Node* pop_front() noexcept override;

    void insert_after (Node *currentNode, Node *newNode );

    void dump() const noexcept override;

    bool validate() const noexcept override;

















};