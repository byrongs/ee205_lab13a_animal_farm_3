//
// Created by Alice Soriano on 4/19/22.
//

#include "Animal.h"
#include "Weight.h"
#include "Gender.h"
#include "Mammal.h"

///////////// Constructors /////////////////////////////////////////////////////////////
Animal::Animal(const Weight::t_weight newMaxWeight, const std::string &newClassification,
               const std::string &newSpecies) {

}

Animal::Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
               const std::string &newClassification, const std::string &newSpecies) {

}
//////////////// Getters /////////////////////////////////////////////////////////////
std::string Animal::getKingdom() const noexcept {
    return std::string();
}

std::string Animal::getClassification() const noexcept {
    return std::string();
}

std::string Animal::getSpecies() const noexcept {
    return std::string();
}

Gender Animal::getGender() const noexcept {
    return Gender::UNKNOWN_GENDER;
}

Weight::t_weight Animal::getWeight() const noexcept {
    return 0;
}


//////////////// Setters ////////////////////////////////////////////////

void Animal::setGender(const Gender newGender) {

}


//////////////// Booleans //////////////////////////////////////////////

bool Animal::validate() const noexcept {
    return false;
}

bool Animal::validateClassification(const std::string &checkClassification) noexcept {
    return false;
}

bool Animal::validateSpecies(const std::string &checkSpecies) noexcept {
    return false;
}



//// Operators ////
bool Animal::operator>(const Node &rightSide) {
    return false;
}

//// Validation Methods ////

bool Animal::valdiate() const noexcept {
    return false;
}













