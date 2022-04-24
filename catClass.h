///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file catClass.h
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"
#include "Mammal.h"
#include "catClass.h"
#include "Gender.h"
#include "Weight.h"
#include "Animal.h"


//////////////////// The Cat Class /////////////////////////////////////
class Cat : public Mammal {


public:  // Public Member Variables //
    explicit Cat(const std::string &newName) : Mammal( MAX_WEIGHT, SPECIES_NAME ) {
        if (!validateName(newName)) {
            throw std::out_of_range("Cats must have a name");
        }
        name = newName;
        isCatFixed = false;

        Cat::validate();
    }

    static const std::string SPECIES_NAME;
    static const Weight::t_weight MAX_WEIGHT;



public:  //////////////////////////// Constructors /////////////////////////////

    Cat(const std::string &newName,
        const Color newColor,
        const bool newIsFixed,
        const Gender newGender,
        const Weight::t_weight newWeight) :
        Mammal( newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME ) {
        if( !validateName( newName) ) {
            throw std::out_of_range( "Cats must have a name" );
        }
        name = newName;
        isCatFixed = newIsFixed;
        Cat::validate();
    }

/////// dump ///////
    void dump() const noexcept override;

///// fixCat ////////
    void fixCat() const noexcept;


///// Speak ////////
    std::string speak() const noexcept override ;


public:  ///////////// Public Member Functions //////////////////////////


    std::string GetName() const noexcept;

    void setName(const std::string &newName);

    bool isFixed() const noexcept;

    bool validate() const noexcept override;

    static bool validateName(const std::string &newName);


protected:
    std::string name;
    bool isCatFixed;

public:
    void initializeData();

};