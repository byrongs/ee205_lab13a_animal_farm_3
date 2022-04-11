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


extern Cat* catDataBaseHeadPointer ;


extern NumCats numCats ;

extern void initializeDatabase() ;

extern bool isCatInDatabase( const Cat* presentCat ) ;

extern bool validateDatabase();


