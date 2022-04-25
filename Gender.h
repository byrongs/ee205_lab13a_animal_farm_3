///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Gender.h
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#ifndef EE205_LAB_10D_ANIMAL_FARM_2_GENDER_H
#define EE205_LAB_10D_ANIMAL_FARM_2_GENDER_H
#endif //EE205_LAB_10D_ANIMAL_FARM_2_GENDER_H

#include <iostream>
#include <string>

#include "config.h"

enum class Gender{ UNKNOWN_GENDER=0, MALE, FEMALE };

std::ostream & operator<<(std::ostream &lhs_stream, const Gender & rhs_Gender);

