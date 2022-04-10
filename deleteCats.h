///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  Project - EE 205 - Spr 2022
///
/// @file deleteCats.h
/// @version 2.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <cstdlib>

#include "catClass.h"

extern bool deleteAllCats() ;

extern bool deleteCat( Cat* deletePointedCat ); // Deletes the pointed cat
