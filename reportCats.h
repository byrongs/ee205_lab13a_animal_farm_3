///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "config.h"
#include "catClass.h"

/// Print all present cats in the database //
extern bool   printAllCats() ;


extern Cat* findCatByName( const char* name ) ;

/// Returns the string for the cat's gender //
extern const char* genderName( enum Gender gender ) ;

/// Returns the string for the cat's breed //
extern const char* breedName( enum Breed breed ) ;

/// Returns the string for the cat's color //
extern const char* colorName( enum Color color ) ;
