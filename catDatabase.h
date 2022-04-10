///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 2.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   7_April_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <cstddef>

#include "catClass.h"


///////////////////////////////////////// TYPEDEFS /////////////////////////////////////////////////////////////////////
typedef float Weight ; //Typedef declaration of float->weight//

typedef unsigned long NumCats; //Typedef declaration of unsigned long ->NumCats

typedef enum Gender; //Typedef declaration of gender

typedef enum Breed ;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Gender gender { UNKNOWN_GENDER=0, MALE, FEMALE } ;

Breed breed {UNKNOWN_BREED=0, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX } ;


extern Cat* catDataBaseHeadPointer ;


extern NumCats numCats ;  /// This points to the next available cat we can add to database


extern void initializeDatabase() ;


extern bool isCatInDatabase( const Cat* aCat ) ;


extern bool validateDatabase();


