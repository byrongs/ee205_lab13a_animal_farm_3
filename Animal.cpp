
///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include <cassert>
#include <iostream>
#include <stdexcept>
#include <iomanip>

#include "Animal.h"
#include "config.h"

using namespace std;

const std::string Animal::KINGDOM_NAME = "Animalia" ;

///////////// Constructors /////////////////////////////////////////////////////////////
Animal::Animal(const Weight::t_weight newMaxWeight, const std::string &newClassification,
               const std::string &newSpecies) : Node(), weight( Weight::POUND, newMaxWeight ) {
    if (!validateClassification() ) {
        throw invalid_argument(" Invalid classification");
    }
    classification = newClassification ;
}


Animal::Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
               const std::string &newClassification, const std::string &newSpecies) : Node(), weight() {
    if (!validateClassification() ) {
        throw invalid_argument( "Invalid classification");
    }
    classification = newClassification;

    if (!validateSpecies() ) {
        throw invalid_argument( "Invalid species");
    }
    species = newSpecies;
}
//////////////// Getters /////////////////////////////////////////////////////////////
std::string Animal::getKingdom() const noexcept {
    return KINGDOM_NAME;
}

std::string Animal::getClassification() const noexcept {
    return classification;
}

std::string Animal::getSpecies() const noexcept {
    return species;
}

Gender Animal::getGender() const noexcept {
    return gender;
}

Weight::t_weight Animal::getWeight() const noexcept {
    return weight.getWeight();
}


//////////////// Setters ////////////////////////////////////////////////

void Animal::setGender(const Gender newGender) {
    if (gender != Gender::UNKNOWN_GENDER) {
        throw logic_error(PROGRAM_NAME ":Animal's gender cannot be set");
    }
    gender = newGender;


//////////////// Booleans //////////////////////////////////////////////

    bool Animal::validate() noexcept {
        if (!validateClassification()) {
            return false;
        }
        if (!validateSpecies()) {
            return false
        }

    }

    static bool Animal::validateClassification(const std::string &checkClassification) noexcept {
        if (checkClassification.empty()) {
            throw invalid_argument(PROGRAM_NAME ":Animal's classification cannot be empty");
            return false;
        }
        return true;
    }


    static bool Animal::validateSpecies(const std::string &checkSpecies) noexcept {
        if (checkSpecies.empty()) {
            throw invalid_agrument(PROGRAM_NAME ":Animal's species cannot be empty");
            return false;

        }
        return true;
    }



//// Operators ////
    bool Animal::operator>(const Node &rightSide) {
        return false;
    }


}


