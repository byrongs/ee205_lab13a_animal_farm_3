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
class Cat {


public:  // Public Member Variables //
    Cat(const std::string &newName);


public:  //////////////////////////// Constructors /////////////////////////////
    Cat();


    Cat(const std::string &newName,
        const Color newColor,
        const bool newIsFixed,
        const Gender newGender,
        const Weight::t_weight newWeight);

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

    bool validate() const;

    bool validateName(const std::string &newName);


};