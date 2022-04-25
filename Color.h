///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Color.h
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////




#ifndef EE205_LAB_10D_ANIMAL_FARM_2_COLOR_H
#define EE205_LAB_10D_ANIMAL_FARM_2_COLOR_H
#endif //EE205_LAB_10D_ANIMAL_FARM_2_COLOR_H

#include <iostream>
#include <string>

#include "config.h"

///////// Enums ////////////

enum class Color {
    UNKNOWN_COLOR = 0,
    BLACK,
    BROWN,
    WHITE,
    RED,
    BLUE,
    GREEN,
    GINGER,
    CREAM,
    CINNAMON,
    CALICO,
};


//////// Ostream ///////

std::ostream & operator<<(std::ostream & lhs_stream,
        const Color & rhs_color );


