///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   19_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include <iostream>  // For strcpy
#include <cassert>


#include "config.h"
#include "catDatabase.h"
#include "addCats.h"
#include "catClass.h"

using namespace std;


bool addCat(Cat* newCat ) {
    assert( newCat != nullptr );
    newCat->validation() ;

    if(isCatInDatabase( newCat) ) {
        throw logic_error(PROGRAM_NAME ": This cat is already in the database! ") ;
    }

    assert(validateDatabase() );

    /////adds a cat if database is validated/////

    newCat->next = catDataBaseHeadPointer;
    catDataBaseHeadPointer = newCat ;
    numCats++;

    assert(validateDatabase() );

#ifdef DEBUG
    cout << PROGRAM_NAME << ": Successfully added cat: " << newCat->getName() << endl;
#endif
    return true;

}