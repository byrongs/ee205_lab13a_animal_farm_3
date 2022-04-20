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
#include "Mammal.H"



//////////////////// The Cat Class /////////////////////////////////////
class Cat {


public:  // Public Member Variables //
    Cat::Cat( const std::string &newName );


public:  //////////////////////////// Constructors /////////////////////////////
    Cat();


    Cat( const std::string     &newName,
         const Color            newColor,
         const bool             newIsFixed,
         const Gender           newGender,
         const Weight::t_weight newWeight );

/////// dump ///////
void Cat::dump() const noexcept override;

///// fixCat ////////
void Cat::fixCat() ;



///// Speak ////////
std::string Cat::speak() const;


public:  ///////////// Public Member Functions //////////////////////////

    void Cat::setName( const std::string & newName);


    Cat (const std::string &newName, const Color newColor, const bool newIsFixed, const Gender newGender,
         const Weight::t_weight newWeight);

    std::string GetName() const noexcept;

    void

public:  /////////////////////////// Public Methods ////////////////////////////
    bool Cat::validate() const;
    bool Cat::validateName( const std::string & newName);


