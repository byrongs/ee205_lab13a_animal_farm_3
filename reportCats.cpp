///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <cstring>
#include <stdexcept>
#include <iostream>
#include <cassert>

#include "catDatabase.h"
#include "reportCats.h"
#include "config.h"
#include "catClass.h"

using namespace std;


///////////// Prints all existing cats in the database ////////////////////////
bool printAllCats() {
    NumCats numCats = 0 ;

    assert( validateDatabase() ) ;

    for(Cat* findCat = headPointer ; findCat != nullptr ; findCat = findCat->next ) {
        findCat->print() ;
        numCats++ ;
    }
#ifdef DEBUG
    cout << "numCats = [" << numCats << "]" << endl ;
#endif

    assert( validateDatabase() ) ;

    return true;
}


//////// Finds a cat by its name //////////
Cat* findCatByName( const char* name ) {
    assert( Cat().validateName( name ) );



    for(Cat* findCat = headPointer ; findCat != nullptr ; findCat = findCat->next ) {
        if( strcmp( name, findCat->getName() ) == 0 ) {
            return findCat ;
        }
    }



    return nullptr ;
}


///////////////////// Switch Statements ///////////////////////////////////////////////////////
const char* genderName( const enum Gender gender ) {
    switch( gender ) {
        case UNKNOWN_GENDER: return "UNKNOWN" ;
        case MALE:           return "MALE"    ;
        case FEMALE:         return "FEMALE"  ;
    }
    throw logic_error(PROGRAM_NAME ": The gender name is not mapped to a string value");
}



const char* breedName( const enum Breed breed ) {
    switch( breed ) {
        case UNKNOWN_BREED: return "UNKNOWN"    ;
        case MAINE_COON   : return "MAINE COON" ;
        case MANX         : return "MANX"       ;
        case SHORTHAIR    : return "SHORTHAIR"  ;
        case PERSIAN      : return "PERSIAN"    ;
        case SPHYNX       : return "SPHYNX"     ;
    }
    throw logic_error(PROGRAM_NAME ": The breed is not mapped to any string value");
}

const char* colorName( const enum Color color ) {
    switch( color ) {
        case UNKNOWN_COLOR: return "UNKNOWN COLOR" ;
        case BLACK: return "BLACK" ;
        case WHITE: return "WHITE" ;
        case RED: return "RED" ;
        case BLUE: return "BLUE" ;
        case GREEN: return "GREEN" ;
        case PINK: return "PINK" ;
    }
    throw logic_error(PROGRAM_NAME ": The color is not mapped to any string value");
}
