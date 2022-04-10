///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "config.h"
#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"

int main() {
    printf( "Starting %s\n", PROGRAM_TITLE );

    /// Format a line for printing the members of a class
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

    printf( "Done with %s\n", PROGRAM_TITLE );

    return( EXIT_SUCCESS );
}
