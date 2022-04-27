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


using namespace std;

///////////////////////////// Cat consts /////////////////////////////////////////////////

static const Weight::t_weight MAX_WEIGHT = 40;

static const std::string SPECIES_NAME = "Felis Catus" ;



/////// Getters and Setters /////////

string Cat::getName() const noexcept {
    return name;
}


void Cat::setName(const string& newName) { // Names can be changed
    if( !validateName( newName )) {
        throw invalid_argument( "Cat must have a name ");
    }
    name = newName;

}

void Cat::fixCat() noexcept {
    Cat::isCatFixed = true; //will set cat to be fixed and never unfixed
}

bool Cat::isFixed() const noexcept {
    return isCatFixed;
}




/////////////// Validation method //////////////////////
bool Cat::validate() const noexcept {

    Mammal::validate();

    return true;
}


///////// Name Validation ////////////////
    bool Cat::validateName(const std::string &newName) {
        if (newName.empty()) {
            throw invalid_argument(PROGRAM_NAME ":The cat must have a name!");
        }
        return true;
    }



//////////////////// Speak ///////////////////////
    std::string Cat::speak() const noexcept {
        return "Meow"; //A cat meows...
    }


 //////// Dump ////////////

 void Cat::dump() const noexcept {
        assert( validate() ) ;

        Mammal::dump() ;

        FORMAT_LINE_FOR_DUMP( "Cat", "Name" ) << getName() << endl; //for cat's name
        FORMAT_LINE_FOR_DUMP( "Cat", "isFIxed") << isFixed() << endl; // for cat's fix
    }


}
