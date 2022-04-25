///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file catClass.cpp
/// @version 2.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <cstring>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <cassert>

#include "catClass.h"
#include "Animal.h"
#include "Weight.h"
#include "Mammal.h"
#include "Color.h"




///////////////////////////// Cat constructor with fields /////////////////////////////////////////////////



static const Weight::t_weight MAX_WEIGHT = 40;

static const std::string SPECIES_NAME = "Felis Catus" ;



void Cat::initializeData() {
    memset( name, 0);
    gender = UNKNOWN_GENDER ;
    breed = UNKNOWN_BREED ;
    isCatFixed = false ;
    weight = UNKNOWN_WEIGHT ;
    next = nullptr ;
}

Cat::Cat() {
    zeroOutMemberData() ;
}


void Cat::setName(const char *newName) { // Names can be changed
    validateName( newName ) ;

    memset( name, 0, MAX_CAT_NAME );
    strcpy( name, newName );
}

Gender Cat::getGender() const noexcept {
    return gender;
}

Color Cat::getColor() const noexcept {
    return color;
}


bool Cat::isFixed() const noexcept {
    return isCatFixed;
}

std::string Cat::GetName() const noexcept {
    return std::string( newName );
}


Weight Cat::getWeight() const noexcept {
    return weight;
}


/////////////// Validation method //////////////////////
bool Cat::validation() const noexcept {
    try {
        validateName( name ) ;
        validateGender( gender ) ;
        validateBreed( breed ) ;
        validateWeight( weight ) ;

        validateColor( color ) ;
    } catch (exception const &e) {
        cout << e.what() << endl ; //return a null terminated character sequence that is used to identify the exception.
        return false ;
    }

    return true;
}

///////// Name Validation ////////////////
bool Cat::validateName(const char *newName) {
    if( newName == nullptr ) {
        throw invalid_argument(PROGRAM_NAME ": name must not be NULL");
    }

    if( strlen( newName ) <= 0 ) {
        throw length_error( PROGRAM_NAME ": name length must be > 0");
    }

    if( strlen( newName ) >= MAX_CAT_NAME ) {
        throw length_error( PROGRAM_NAME ": name must be < MAX_CAT_NAME" );
    }

    return true;
}

//////////////////// Gender Validation ///////////////////////
bool Cat::validateGender(const Gender newGender) {
    if( newGender == UNKNOWN_GENDER ) {
        throw invalid_argument( PROGRAM_NAME ": Gender must be known") ;
    }

    return true;
}


///////////////// Color Validation ///////////////////////
bool Cat::validateColor(const Color newColor ) {
    if( newColor == UNKNOWN_COLOR ) {
        throw invalid_argument( PROGRAM_NAME ": The cat's color must be known" ) ;
    }

    return true ;
}

///////////////// Weight Validation /////////////////////
bool Cat::validateWeight(const Weight newWeight) {
    if( newWeight <= 0 ) {
        throw invalid_argument( PROGRAM_NAME ": The cat's weight must be > 0" ) ;
    }

    return true;
}

/////////////////////// Setters ////////////////////////
// Fixed cat cannot be unfixed //
void Cat::fixCat() noexcept {
    Cat::isCatFixed = true;
}

// Setting the weight must be validated to be > 0 //
void Cat::setWeight(Weight newWeight) {
    validateWeight( newWeight ) ;
    Cat::weight = newWeight;
}

// Cat gender cannot be changed //
void Cat::setGender(Gender newGender) {
    if( gender != UNKNOWN_GENDER ) {
        throw logic_error( PROGRAM_NAME ": Cat's gender cannot be set" ) ;
    }

    validateGender( newGender );
    Cat::gender = newGender ;
}

void Color::setColor(Color newColor) { // Cat's color will not be set //
    if( color != UNKNOWN_COLOR ) {
        throw logic_error( PROGRAM_NAME ": Cat's color cannot be set ") ;
    }

    validateColor( newColor );
    Cat::color = newColor ;
}

// Cat's breed cannot be set once it is known from getBreed //////////
void Cat::setBreed(Breed newBreed) {
    if( breed != UNKNOWN_BREED ) {
        throw logic_error( PROGRAM_NAME ": The breed is already set, you can't change it" ) ;
    }

    validateBreed( newBreed ) ;
    Cat::breed = newBreed;

    validation();
}