///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <string>
#include <cassert>
#include <iomanip>
#include <iostream>

#include "config.h"
#include "Mammal.h"
#include "Animal.h"

using namespace std;

const string Mammal::MAMMAL_NAME = "Mammalian" ;





/////// Mammal dump ////////
void Mammal::dump() const noexcept {
    Animal::dump() ;

    FORMAT_LINE_FOR_DUMP( "Mammal", "Color" ) << color << endl;
}



