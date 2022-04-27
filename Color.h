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

inline std::ostream& operator<<( std::ostream& lhs_stream, const Color& rhs_Color ) {
    switch( rhs_Color ) {
        case Color::UNKNOWN_COLOR:
            lhs_stream << "UNKNOWN COLOR";
            break;
        case Color::BLACK:
            lhs_stream << "BLACK";
            break;
        case Color::BROWN:
            lhs_stream << "BROWN";
            break;
        case Color::WHITE:
            lhs_stream << "WHITE";
            break;
        case Color::RED:
            lhs_stream << "RED";
            break;
        case Color::BLUE:
            lhs_stream << "BLUE";
            break;
        case Color::GREEN:
            lhs_stream << "GREEN";
            break;
        case Color::GINGER:
            lhs_stream << "GINGER";
            break;
        case Color::CREAM:
            lhs_stream << "CREAM";
            break;
        case Color::CINNAMON:
            lhs_stream << "CINNAMON";
            break;
        case Color::CALICO:
            lhs_stream << "CALICO";
            break;
        default:
            throw std::out_of_range( PROGRAM_NAME ": The color is not mapped to any string");

    }

    return lhs_stream;

}

