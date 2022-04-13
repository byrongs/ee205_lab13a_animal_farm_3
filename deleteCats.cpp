///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <cassert>
#include <iostream>
#include <stdexcept>

#include "config.h"
#include "deleteCats.h"
#include "catDatabase.h"
#include "catClass.h"

using namespace std ;


bool deleteCat( Cat* deleteThisCat ) {
    assert( deleteThisCat != nullptr ) ;

    assert( validateDatabase() ) ;


    if( deleteThisCat == headPointer ) {
        headPointer = headPointer->next ;
        delete deleteThisCat ;
        numCats--;

        assert( validateDatabase() ) ;
        return true ;
    }

    // Finds specific cat to delete in linked list //
    Cat* findCat = headPointer ;
    while( findCat != nullptr ) {
        if( findCat->next == deleteThisCat ) {
            findCat->next = deleteThisCat->next ;
            delete deleteThisCat ;
            numCats--;

            assert( validateDatabase() ) ;

            return true ;
        }
        findCat = findCat->next ;
    }

    assert( validateDatabase() ) ;

    throw invalid_argument( PROGRAM_NAME ": Unable to delete cat.  Not in database" );
}


/// @returns true if the cats were successfully deleted.
///          false if something bad happened
bool deleteAllCats() {
    // Keep deleting cats until there are no more cats...
    while(headPointer != nullptr ) {
        deleteCat(headPointer ) ;
    }



#ifdef DEBUG
    cout << PROGRAM_NAME << ": All cats have been deleted" << endl ;
#endif

    return true ;
}


