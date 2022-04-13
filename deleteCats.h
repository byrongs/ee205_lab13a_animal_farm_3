///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file deleteCats.h
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "catClass.h"

/// Delete all of the cats in the database.
extern bool deleteAllCats() ;

/// Delete a cat in the database.
extern bool deleteCat( Cat* deleteThisCat ) ;