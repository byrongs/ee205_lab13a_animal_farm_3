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


#define MAX_CAT_NAME (50) /// Max chars in a cat's name

//////////////////// The Cat Class ////////////////////////////////////////
class Cat {


public:  // Public Member Variables //
    Cat*        next ;       //Cat pointer for linked list



public:  //////////////////////////// Constructors /////////////////////////////
    Cat();



    Cat( const char *newName,
         const Gender newGender,
         const Breed newBreed,
         const Weight newWeight,
         const Color newColor );


    virtual ~Cat(); //Virtual function

public:  ///////////// Public Getters & Setters //////////////////////////
    const char *getName() const noexcept ; /// Name getter
    void setName( const char* newName );   /// Name setter


    Gender getGender() const noexcept ; // Gender getter
    Breed getBreed() const noexcept ; // Breed getter

    bool isFixed() const noexcept ; // Fixed Cat getter
    void fixCat() noexcept ; // fix cat defined function
    Weight getWeight() const noexcept ; // Weight getter

    void setWeight(Weight newWeight) ; // Weight setter

    Color getColor() const noexcept ; // Color getter


public: //////////////// Static Public Methods ////////////////////////

    static bool validateName( const char* newName ) ;
    static bool validateGender( const Gender newGender ) ;
    static bool validateBreed( const Breed newBreed ) ;
    static bool validateWeight( const Weight newWeight ) ;

    static bool validateColor(const Color newColor ) ;

public:  /////////////////////////// Public Methods ////////////////////////////
    bool print() const noexcept ;
    bool validation() const noexcept;



private:  /////////////////////////// Private Methods //////////////////////////
    void destructMemberData();




//////////////// Protected Cat Members ///////////////////////
protected:
    char        name[MAX_CAT_NAME] ;
    enum Gender gender ;
    enum Breed  breed ;
    bool        isCatFixed ;
    Weight      weight ;

    enum Color color ;
protected: ////////////////////// Protected Methods (Will be Public for now) ///////////////////////////
public:
    void setGender(Gender newGender);
    void setBreed(Breed newBreed);

    void setColor(Color newColor ) ;
};

