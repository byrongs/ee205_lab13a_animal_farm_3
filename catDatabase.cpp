///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include <stdexcept>  // For logic_errors
#include <iostream>
#include <cassert>

#include "config.h"
#include "catDatabase.h"
#include "catClass.h"
#include "reportCats.h"

using namespace std;



Cat* headPointer = nullptr ; // head pointer that is NULL

NumCats numCats = 0 ; // Using typedef


/// Initialize the catabase
///
/// @throws logic_error If the old database isn't empty
void initializeDatabase() {
    if(headPointer != nullptr ) {
        throw logic_error( PROGRAM_NAME ": Delete the old database first") ;
    }

    assert( validateDatabase() ) ;

#ifdef DEBUG
    cout << PROGRAM_NAME << ": Database has been initialized" << endl ;
#endif
}


/// Finds findCat in the database ///
bool isCatInDatabase( const Cat* presentCat ) {
    assert( presentCat != nullptr ) ;

    assert( validateDatabase() ) ;

    for(Cat* findCat = headPointer ; findCat != nullptr ; findCat = findCat->next ) {
        if( findCat == presentCat ) {
            return true ;
        }
    }

    assert( validateDatabase() ) ;

    return false ;  // If the cat was not found //
}



extern bool validateDatabase() {
    int catCount = 0 ; // Takes the attendance of cats //

    for(Cat* findCat = headPointer ; findCat != nullptr ; findCat = findCat->next ) {
        if( !findCat->validation() ) {
            return false ;
        }

        Cat* foundCat = findCatByName( findCat->getName() ) ;
        if( foundCat != findCat ) {
            cout << PROGRAM_NAME ": Warning:  Found a duplicate cat name [" << findCat->getName() << "]" << endl ;
        }

        catCount++ ;
    }

    if( catCount != numCats ) { // If the cat attendance was off //
        cout << PROGRAM_NAME << ": The number of cats in attendance " << numCats
             << " does not equal " << catCount << endl ;
        return false ;
    }

#ifdef DEBUG
    cout << PROGRAM_NAME << ": The database is valid." << endl ;
#endif

    return true ;  // Healthy database
}