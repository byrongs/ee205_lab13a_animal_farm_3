///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file catClass.cpp
/// @version 1.0
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
#include "reportCats.h"

using namespace std ;



///////////////////////////// Cat constructor with fields /////////////////////////////////////////////////
Cat::Cat(const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight) : Cat() {
    setName( newName ) ;
    setGender( newGender ) ;
    setBreed( newBreed ) ;
    setWeight( newWeight ) ;

    assert( validation() ) ;
}

///////////////// Cat Class destructor //////////////////
void Cat::destructMemberData()  {
    memset( name, 0, MAX_CAT_NAME );
    gender = UNKNOWN_GENDER ;
    breed = UNKNOWN_BREED ;
    isCatFixed = false ;
    weight = UNKNOWN_WEIGHT ;
    next = nullptr ;
}

Cat::Cat() {
    destructMemberData();
}









Cat::~Cat() {
    destructMemberData() ;
}

////////////////////// Cat name getter ///////////////////////////////////
const char *Cat::getName() const noexcept {
    return name;
}

void Cat::setName(const char *newName) { // Names can be changed
    validateName( newName ) ;

    memset( name, 0, MAX_CAT_NAME );
    strcpy( name, newName );
}


///////////////// Cat gender getter /////////////////////////////
Gender Cat::getGender() const noexcept {
    return gender;
}

//////////////// Cat breed getter //////////////////////////////
Breed Cat::getBreed() const noexcept {
    return breed;
}

////////////// Cat isFixed ////////////////////////////////////
bool Cat::isFixed() const noexcept {
    return isCatFixed;
}

//////////////// Cat weight getter ////////////////////////////
Weight Cat::getWeight() const noexcept {
    return weight;
}

/// Format a line for printing the members of a class (From pdf) ///
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)

/// @returns true if everything worked correctly.  false if something goes
///          wrong
bool Cat::print() const noexcept {
    assert( validation() ) ;

    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" )         << getName()   << endl ;
    FORMAT_LINE( "Cat", "gender" )       << genderName( getGender() ) << endl ;
    FORMAT_LINE( "Cat", "breed" )        << breedName( getBreed() )   << endl ;
    FORMAT_LINE( "Cat", "isFixed" )      << isFixed()   << endl ;
    FORMAT_LINE( "Cat", "weight" )       << getWeight() << endl ;

    return true ;
}

/////////////// Validation method //////////////////////
bool Cat::validation() const noexcept {
    try {
        validateName( name ) ;
        validateGender( gender ) ;
        validateBreed( breed ) ;
        validateWeight( weight ) ;
    } catch (exception const &e) {
        cout << e.what() << endl ; //return a null terminated character sequence that is used to identify the exception.
        return false ;
    }

    return true;
}


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


bool Cat::validateGender(const Gender newGender) {
    if( newGender == UNKNOWN_GENDER ) {
        throw invalid_argument( PROGRAM_NAME ": Gender must be known") ;
    }

    return true;
}



bool Cat::validateBreed(const Breed newBreed) {
    if( newBreed == UNKNOWN_BREED ) {
        throw invalid_argument( PROGRAM_NAME ":The cat's breed must be known" ) ;
    }

    return true;
}



bool Cat::validateWeight(const Weight newWeight) {
    if( newWeight <= 0 ) {
        throw invalid_argument( PROGRAM_NAME ": The cat's weight must be > 0" ) ;
    }

    return true;
}

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

// Cat's breed cannot be set once it is known from getBreed //////////
void Cat::setBreed(Breed newBreed) {
    if( breed != UNKNOWN_BREED ) {
        throw logic_error( PROGRAM_NAME ": The breed is already set, you can't change it" ) ;
    }


    validateBreed( newBreed ) ;
    Cat::breed = newBreed;



    validation();
}