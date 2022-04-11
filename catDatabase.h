///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 2.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   7_April_2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <cstddef>

#include "catClass.h"


///////////////////////////////////////// TYPEDEFS //////////////////////////////////////////////////////////////////
typedef float Weight ; //Typedef declaration of float->weight//

typedef size_t NumCats; //Typedef declaration of size_t NumCats



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

enum Breed {UNKNOWN_BREED=0, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX } ;

enum Gender {UNKNOWN_GENDER=0, MALE, FEMALE} ;



extern Cat* catDataBaseHeadPointer ;


extern NumCats numCats ;

extern void initializeDatabase() ;

extern bool isCatInDatabase( const Cat* presentCat ) ;

extern bool validateDatabase();


