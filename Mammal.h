//
// Created by Alice Soriano on 4/19/22.
//

#ifndef EE205_LAB_10D_ANIMAL_FARM_2_MAMMAL_H
#define EE205_LAB_10D_ANIMAL_FARM_2_MAMMAL_H
#endif //EE205_LAB_10D_ANIMAL_FARM_2_MAMMAL_H

#include "Animal.h"
#include "Color.h"

class Mammal: public Animal {

public: //// Public Member Functions ////

    Mammal(const Weight::t_weight newMaxWeight, const std::string &newSpecies )
    : Animal( newMaxWeight, MAMMAL_NAME, newSpecies ) {};

    Mammal(const Color newColor,const Gender newGender,const Weight::t_weight newWeight,const Weight::t_weight newMaxWeight,
           const std::string &newSpecies ) : Animal( newGender, newWeight, newMaxWeight, MAMMAL_NAME, newSpecies ) {
        setColor( newColor );
    };

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