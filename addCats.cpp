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

#include <cassert>
#include <iostream>

#include "config.h"
#include "catDatabase.h"
#include "addCats.h"

using namespace std;

// Adding (newCat) must not be nullptr //
// Validation test when new cat is added
bool addCat(Cat* newCat) {
    assert( newCat != nullptr ) ;

    newCat->validation() ;

    if( isCatInDatabase( newCat ) ) { // checks for existing cats
        throw logic_error( PROGRAM_NAME ": The cat is already in the database. " );
    }

    assert( validateDatabase() ) ;

    //// Adds cat to the linked list if validated ////

    newCat->next = headPointer ;
    headPointer = newCat ;
    numCats++;

    assert( validateDatabase() ) ;


#ifdef DEBUG
    cout << PROGRAM_NAME << ":Cat added successfully" << newCat->getName() << endl ;
#endif

    return true;
}





