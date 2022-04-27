///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Mammal.h
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#ifndef EE205_LAB_10D_ANIMAL_FARM_2_MAMMAL_H
#define EE205_LAB_10D_ANIMAL_FARM_2_MAMMAL_H
#endif //EE205_LAB_10D_ANIMAL_FARM_2_MAMMAL_H

#include "Animal.h"
#include "Color.h"

class Mammal: public Animal {
    friend class Animal ;

public: //// Public Member Functions ////

    Mammal(const Weight::t_weight newMaxWeight, const std::string& newSpecies )
     : Animal( newMaxWeight, MAMMAL_NAME, newSpecies ) {} ; //Mammal with minimum fields

    Mammal(const Color newColor,const Gender newGender,const Weight::t_weight newWeight,const Weight::t_weight newMaxWeight,
           const std::string &newSpecies ) : Animal( newGender, newWeight, newMaxWeight, MAMMAL_NAME, newSpecies ) {
        setColor( newColor );
    }; // Mammal with maximum fields

    ////// Getters and Setters /////////
    Color getColor()  const noexcept { return color; }

    void setColor(const Color newColor ) noexcept { color = newColor; }

    //// dump ////

    void dump() const noexcept override ;

    //// Static Public Attributes ////
    static const std::string MAMMAL_NAME;

protected: /// Protected Member Attributes ///

    Color color = Color::UNKNOWN_COLOR;

};