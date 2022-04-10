///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "catDatabase.h"
#include "catClass.h"

extern Cat* findCatName( const char* name) ; // Finds cat by Name //

extern bool  printAllCats() ; // Prints all cats //

extern const char* genderName( enum Gender gender ) ; // Returns cat's gender

extern const char* breedName( enum Breed breed ) ; // Returns cat's breed

extern const char* colorName( enum Color color ) ; // Returns cat's collar color


