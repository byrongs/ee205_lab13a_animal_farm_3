///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file List.h
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#ifndef EE205_LAB_10D_ANIMAL_FARM_2_LIST_H
#define EE205_LAB_10D_ANIMAL_FARM_2_LIST_H
#endif //EE205_LAB_10D_ANIMAL_FARM_2_LIST_H

#include "Node.h"

class List {

public: ////Public Functiohns ////

    bool empty() const noexcept;

    unsigned int size() const noexcept;

    bool isIn (Node* aNode) const;

    bool isSorted() const noexcept;

    Node* get_first() const noexcept;

    void deleteAllNodes() noexcept;

    virtual Node* pop_front()= 0;

    virtual void dump() const noexcept= 0;

    virtual bool validate() const noexcept= 0;


    //////// Static Public Functions ///////

    static Node* get_next( const Node *currentNode );


protected: /////// Protected attributes ////////

    Node* head = nullptr;

    unsigned int count = 0;




















};