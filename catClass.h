///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catClass.h
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "config.h"
#include "addCats.h"
#include "catDatabase.h"

// Maximum characters for a cat's name
#define MAX_CAT_NAME (50)


class Cat {

protected: ////////////Protected Cat Members /////////////////////
    char name[MAX_CAT_NAME];
    enum Gender gender;
    enum Breed breed;
    bool isCatFixed;
    Weight weight;
/////////////////////////////////////////////////////////////////

public:
    Cat *next;

private:
    void destructMemberData();

public:  /////////////// Constructors ///////////////////////////
    Cat();

    Cat(const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight);

    virtual ~Cat();

public:
    const char *getName() const noexcept;

    void setName(const char *newName);

    Gender getGender() const noexcept;

    Breed getBreed() const noexcept;

    bool isFixed() const noexcept;

    void fixCat() const noexcept;

    Weight getWeight() const noexcept;

    void setWeight(Weight newWeight);

protected:
public:
    void setGender(Gender newGender);

    void setBreed(Breed newBreed);

public:
    bool print() const noexcept;

    bool validation() const noexcept;

public:
    static bool validateName(const char *newName);

    static bool validateGender(const Gender newGender);

    static bool vaidateBreed(const Breed newBreed);

    static bool validateWeight(const Weight newWeight);
};








