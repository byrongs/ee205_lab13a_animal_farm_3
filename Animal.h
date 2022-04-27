///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab10d_animal_farm_3 - EE 205 - Spr 2022
///
///
///
/// @file Animal.h
/// @version 1.0
///
/// @author Byron Soriano <byrongs@hawaii.edu>
/// @date   19_April_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <string>

#include "config.h"
#include "Weight.h"
#include "Node.h"
#include "Gender.h"


////////// Animal Class /////////////////
class Animal: public Node {
public:
    static const std::string KINGDOM_NAME;

    //////// Public Member Functions ///
    Animal(Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies) ;

    Animal(Gender newGender, Weight::t_weight newWeight, Weight::t_weight newMaxWeight, const
    std::string &newClassification, const std::string &newSpecies) ;

    //// Getters ////
    std::string getKingdom() const noexcept ;
    std::string getClassification() const noexcept ;
    std::string getSpecies() const noexcept ;

    Gender getGender() const noexcept ;

    Weight::t_weight getWeight() const noexcept ;
    void setWeight(const Weight::t_weight newWeight );

    //// dump /////
    void dump() const noexcept override ;

    //// speak ////
    virtual std::string speak() const noexcept=0;

    //// validate ////
    bool validate() const noexcept override ;



    //// Static Public Member Functions ////
    static bool validateClassification(const std::string &checkClassification) noexcept  ;
    static bool validateSpecies(const std::string &checkSpecies )  noexcept ;

    //// Static Public Attributes ////


protected: //// Protected Member Functions ////
    void setGender(Gender newGender);


    Node* next = nullptr;

private: //// Private Attributes ////
    std::string species;
    std::string classification;
    Gender gender = Gender::UNKNOWN_GENDER;
    Weight weight;

};




