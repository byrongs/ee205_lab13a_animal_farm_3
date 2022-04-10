///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <cstdlib>
#include <cassert>
#include <cstring>
#include <iostream>
#include <exception>

#include "config.h"
#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"


using namespace std ;


int main() {
    cout << "Starting" << PROGRAM_TITLE << endl ;

    initializeDatabase() ;


#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
/// @returns true if everything worked correctly. false if something goes
/// wrong


    bool Cat::print() const noexcept {
        assert( validate() ) ;
        cout << setw(80) << setfill( '=' ) << "" << endl ;
        cout << setfill( ' ' ) ;
        cout << left ;
        cout << boolalpha ;
        FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
        FORMAT_LINE( "Cat", "gender" ) << genderName( getGender() ) << endl ;
        FORMAT_LINE( "Cat", "breed" ) << breedName( getBreed() ) << endl ;
        FORMAT_LINE( "Cat", "isFixed" ) << isFixed() << endl ;
        FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
        return true ;
    }

    cout << "Done with" <<  PROGRAM_TITLE << endl ;

    return( EXIT_SUCCESS );
}
