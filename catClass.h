///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catClass.h
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "config.h"

// Maximum characters for a cat's name
#define MAX_CAT_NAME (50)


class Cat {

public:
    Cat* next ;

public:
    Cat() ;
    ////////////////////////// Creates cat with required fields ///////////////////////////////////////
    Cat( const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight );

public: // Public Cat Constructor //
    const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight );

public: // Public Getters and Setters //
    const char *getName() const noexcept; //Cat name getter and setter
    void setName( const char* newName );

    Gender getGender() const noexcept;// Cat gender getter

    Breed getBreed() const noexcept; // Cat breed getter

    bool isFixed() const noexcept; //return true if cat is fixed

    Weight getWeight() const noexcept; //Cat weight getter
    void setWeight(Weight newWeight); //Cat weight setter due to constant weight change

public: // Public Methods //
    bool print() const noexcept;
    bool validate() const noexcept;

public: // Static Public Methods //

    static bool validateName( const char* newName ) ;
    static bool validateGender( const Gender newGender );
    static bool validateBreed(const Breed newBreed );
    static bool validateWeight(const Weight newWeight );

protected: // Protected Getters and Setters //
    void setGender( Gender, newGender ); //Set cat gender
    void setGender( Breed, newBreed ); //Set cat Breed

protected: ////////////Protected Cat Members /////////////////////
    char name[MAX_CAT_NAME] ;
    enum Gender gender ;
    enum Breed breed ;
    bool isCatFixed ;
    Weight weight;



























};


