
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
#include <string>

#include "Animal.h"
#include "config.h"
#include "Node.h"

using namespace std;

const std::string Animal::KINGDOM_NAME = "Animalia" ;

///////////// Constructors /////////////////////////////////////////////////////////////
Animal::Animal(const Weight::t_weight newMaxWeight, const std::string &newClassification,
               const std::string &newSpecies) : Node(), weight( Weight::POUND, newMaxWeight ) {
    classification = newClassification ;
}


Animal::Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
               const std::string &newClassification, const std::string &newSpecies) : Node(), weight() {

    classification = newClassification;
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

}
//////////////// Booleans //////////////////////////////////////////////

    bool Animal::validate() const noexcept {
        assert(validateClassification(getClassification()));
        assert(validateSpecies(getSpecies()));
        return true;
    }



    bool Animal::validateClassification(const std::string &checkClassification) noexcept {
        if (checkClassification.empty()) {
            throw invalid_argument(PROGRAM_NAME ":Animal's classification cannot be empty");
            return false;
        }
        return true;
    }


    bool Animal::validateSpecies(const std::string &checkSpecies) noexcept {
        if (checkSpecies.empty()) {
            throw invalid_argument(PROGRAM_NAME ":Animal's species cannot be empty");
            return false;

        }
        return true;
    }




//// Animal Dump ////

void Animal::dump() const noexcept {

    PRINT_HEADING_FOR_DUMP

    Node::dump();

    FORMAT_LINE_FOR_DUMP("Animal", "this" ) << this << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "kingdom" ) << getKingdom() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "classification" ) << getClassification() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "species" ) << getSpecies() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "gender" ) << getGender() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "weight" ) << weight << endl;

}

void Animal::setWeight(const Weight::t_weight newWeight) {
    weight = newWeight;
}
