//

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

std::osteam & operator<<(std::ostream & lhs_stream,
        const Color & rhs_color );

