



#include <string>
#include "config.h"
#include "Weight.h"
#include "Node.h"
#include "Gender.h"

#ifndef EE205_LAB_10D_ANIMAL_FARM_2_ANIMAL_H
#define EE205_LAB_10D_ANIMAL_FARM_2_ANIMAL_H
////////// Animal Class /////////////////
class Animal {
public:
    //////// Public Member Functions ///
    Animal(const Weight::t_weight newMaxWeight, const std::string &newClassification, const std::string &newSpecies) ;

    Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight, const
    std::string &newClassification, const std::string &newSpecies) ;

    //// Getters ////
    std::string getKingdom() const noexcept ;
    std::string getClassification() const noexcept ;
    std::string getSpecies() const noexcept ;

    Gender getGender() const noexcept ;

    Weight::t_weight getWeight() const noexcept ;

    //// dump ////
    void dump() const noexcept override ;
    virtual void dump() const
    //// speak ////
    virtual std::string speak() const noexcept=0;

    //// validate ////
    bool validate() const noexcept override;
    virtual bool valdiate() const noexcept;

    //// operator > ////
    virtual bool operator>(const Node &rightSide);


    //// Static Public Member Functions ////
    static bool validateClassification(const std::string &checkClassification) noexcept ;
    static bool validateSpecies(const std::string &checkSpecies ) noexcept;

    //// Static Public Attributes ////
    static const std::string KINGDOM_NAME;

protected: //// Protected Member Functions ////
    void setGender(const Gender newGender);

    static bool compareByAddress(const Node *node1, const Node *node2);

    Node* next = nullptr;

private: //// Private Attributes ////
    std::string species;
    std::string classification;
    Gender gender = Gender::UNKNOWN_GENDER;
    Weight weight;

























};











#endif //EE205_LAB_10D_ANIMAL_FARM_2_ANIMAL_H
