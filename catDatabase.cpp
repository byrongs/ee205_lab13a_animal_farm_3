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

#include <stdexcept>
#include <iostream>
#include <cassert>

#include "catDatabase.h"
#include "catClass.h"
#include "config.h"
#include "reportCats.h"

using namespace std ;


Cat* catDatabaseHeadPointer = nullptr;

NumCats numCats = 0 ; //default number of cats

void initializeDataBase() {
    if(catDatabaseHeadPointer != nullptr ) {
        throw logic_error(PROGRAM_NAME ": Must delete old database!") ;
    }
    assert(validateDatabase() );

#ifdef DEBUG
    cout << PROGRAM_NAME << ": The database has been initialized" << endl;
#endif

}

bool isCatInDataBase(const Cat* presentCat ) {
    assert( presentCat != nullptr );

    assert(validateDatabase() );

    for(Cat* findCat = catDatabaseHeadPointer ; findCat != nullptr; findCat = findCat->next ) {
        if( findCat == presentCat ) {
            return true;
        }
    }
    assert(validateDatabase() );
    cout << PROGRAM_NAME << "The cat was not found." << endl;
    return false;


}

extern bool validateDatabase() {
    int catCount = 0;

    for(Cat* findCat = catDatabaseHeadPointer ; findCat != nullptr ; findCat = findCat->next ) {
        if(!findCat->validation() ) {
            return false;
        }
        Cat* foundCat = findCatName( findCat ->getName() );
        if(foundCat != findCat ) {
            cout << PROGRAM_NAME " There are duplicate cat names! [" << findCat->getName() << "]" << endl;
        }
        catCount++ ;
    }
    if( catCount != numCats ) {
        cout << PROGRAM_NAME << "Error! the number of cats " << numCats << "is not equal to the cat count " << catCount << endl;
        return false;
    }
#ifdef DEBUG
    cout << PROGRAM_NAME << ": Valid database " << endl;
#endif
    return true ; //indicates a healthy database
}

