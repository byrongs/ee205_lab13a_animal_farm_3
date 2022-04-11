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




    cout << "Done with" <<  PROGRAM_TITLE << endl ;

    return( EXIT_SUCCESS );
}
