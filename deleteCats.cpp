///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Project - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 2.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include <cassert>
#include <iostream>
#include <stdexcept>

#include "deleteCats.h"
#include "catDatabase.h"
#include "catClass.h"

using namespace std ;

bool deleteCat( Cat* deletePointedCat ) {
    assert( deletePointedCat != nullptr ) ;
    assert( validateCatDatabase() ) ;
    }

    Cat *findCat = catDataBaseHeadPointer;
    while (findCat != nullptr) {
        if (findCat->next == deletePointedCat) {
            findCat->next = deletePointedCat->next;
            delete deletePointedCat;
            numCats--;

            assert(validateDatabase());

            return true;

        }
        findCat = findCat->next;
    }

    assert(validateDatabase());

    throw invalid_argument(PROGRAM_NAME ": Unable to find cat ");
}
bool deleteAllCats() {
    while(catDatabaseHeadPointer != nullptr ) {
        deleteCat(catDatabaseHeadPointer);
    }



#ifdef DEBUG
    cout << PROGRAM_NAME << ":All cats have been deleted" << endl ;
#endif

    return true ;

}