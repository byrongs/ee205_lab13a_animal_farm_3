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

////Zeroing out Cat() members////
void Cat::destructMemberData() {
    memset( name, 0, MAX_CAT_NAME ) ;
    gender = UNKNOWN_GENDER ;
    breed = UNKNOWN_BREED ;
    isCatFixed = false ;
    weight = UNKNOWN_WEIGHT ;
    next = nullptr;
}

Cat::Cat() {
destructMemberData() ;
}

const char *Cat::getName() const noexcept {
    return name;
}

void Cat::setName(const char *newName){
    validateName (newName) ;
    memset( name, 0, MAX_CAT_NAME );
    strcpy( name, newName );
}

Gender Cat::getGender() const noexcept {
return gender;
}

Breed Cat::getBreed() const noexcept {
return breed;
}

bool Cat::isFixed() const noexcept {
return isCatFixed;
}

Weight Cat::getWeight() const noexcept {
return weight;
}

/// Format a line for printing the members of a class ///
#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
/// @returns true if everything worked correctly. false if something goes
/// wrong
bool Cat::print() const noexcept {
    assert( validate() ) ;
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;
    cout << left ;
    cout << boolalpha ;
    FORMAT_LINE( "Cat", "name" ) << getName() << endl ;
    FORMAT_LINE( "Cat", "gender" ) << genderName( getGender() ) << endl ;
    FORMAT_LINE( "Cat", "breed" ) << breedName( getBreed() ) << endl ;
    FORMAT_LINE( "Cat", "isFixed" ) << isFixed() << endl ;
    FORMAT_LINE( "Cat", "weight" ) << getWeight() << endl ;
    return true ;
}


////Creating a validation method////

bool Cat::validation() const noexcept {
try {
    validateName( name ) ;
    validateGender( gender ) ;
    validateBreed( breed ) ;
    validateWeight( weight ) ;
}
    catch (exception const& e) {
    cout << "Valid" << endl ;
    return false ;
}

return true;

}








////////////// Cat name validation //////////////
bool Cat::ValidateName(const char *newName ) {
    if( newName == nullptr ) {
        throw invalid_argument(PROGRAM_NAME ": Name cannot be Null");
    }

    if( strlen( newName ) <= 0 ) {
        throw invalid_argument(PROGRAM_NAME ":The length cannot be 0 or less than 0" );
    }

    if(strlen( newName ) > MAX_CAT_NAME ) {
        throw invalid_argument(PROGRAM_NAME ": The name must be less than MAX_CAT_NAME" );
    }

    return true;
}


////////// Cat Gender Validation /////////////
bool Cat::ValidateGender( const Gender newGender) {
    if( newGender == UNKNOWN_GENDER ) {
        throw invalid_argument(PROGRAM_NAME ": The gender must be known") ;
    }

    return true;

}