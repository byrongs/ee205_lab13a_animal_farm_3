///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#ifndef EE205_LAB_10D_ANIMAL_FARM_2_WEIGHT_H
#define EE205_LAB_10D_ANIMAL_FARM_2_WEIGHT_H

#endif //EE205_LAB_10D_ANIMAL_FARM_2_WEIGHT_H
#pragma once

#include <string>
#include <ostream>

using namespace std;

class Weight {
//////////////////////// Public Types /////////////////////////////
public:
    typedef float t_weight; // typedef to replace floats

    enum UnitOfWeight {
        POUND, KILO, SLUG
    };


    Weight() noexcept; /// a default weight
    Weight(Weight::t_weight newWeight); /// a weight with value
    Weight(UnitOfWeight newUnitOfWeight) noexcept; /// a weight with unit of weight
    Weight(Weight::t_weight newWeight, UnitOfWeight newUnitOfWeight); /// a weight with a value and new unit of weight
    Weight(Weight::t_weight newWeight, Weight::t_weight newMaxWeight); /// a weight with value and maximum weight
    Weight(UnitOfWeight newUnitOfWeight, Weight::t_weight newMaxWeight); /// A weight with a UnitOfWeight and a maximum weight
    Weight(Weight::t_weight newWeight, UnitOfWeight newUnitOfWeight,
           Weight::t_weight newMaxWeight); /// A weight with a value, UnitOfWeight and a maximum weight

public:

    bool isWeightKnown() const;

    bool hasMaxWeight() const;

    void dump() const noexcept;

public: ////////////////// Getters and Setters //////////////////////

    float getWeight() const noexcept;

    float getWeight(UnitOfWeight weightUnits) const noexcept;

    float getMaxWeight() const noexcept;

    UnitOfWeight getWeightUnit() const noexcept;

    void setWeight(Weight::t_weight newWeight);

    void setWeight(Weight::t_weight newWeight, UnitOfWeight weightUnits);

    bool isWeightValid(Weight::t_weight checkWeight) const noexcept;

    bool validate() const noexcept;

    void dump() const noexcept override;


    ///////////////////// Overrides //////////////////////////////
public:

    bool operator==(const Weight &rhs_Weight) const;

    bool operator<(const Weight &rhs_Weight) const;

    Weight &operator+=(float rhs_addToWeight);

    //////////////////////////// Operators ////////////////////

    std::ostream& operator<<( std::ostream& lhs_stream, const Weight& rhs_Weight) ;

    std::ostream& operator<<( std::ostream& lhs_stream, Weight::UnitOfWeight rhs_UnitOfWeight ) ;



public: /////////// Static Public Member Functions ////////////////////

    static float 	fromKilogramToPound (float kilogram) noexcept ;

    static float 	fromPoundToKilogram (float pound) noexcept ;

    static float 	fromSlugToPound (float slug) noexcept ;

    static float 	fromPoundToSlug (float pound) noexcept ;

    static float 	convertWeight (float fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit) noexcept ;


public: ////////// Static Public Attributes //////////////////////////

    static const float 	UNKNOWN_WEIGHT;
    static const float 	KILOS_IN_A_POUND;
    static const float 	SLUGS_IN_A_POUND;
    static const std::string POUND_LABEL;
    static const std::string KILO_LABEL;
    static const std::string SLUG_LABEL;

private: ///////////// Private Member Functions ////////////////////

    void 	setMaxWeight (float newMaxWeight) ;

private: //////////// Private Attributes //////////////////////////

    bool 	bIsKnown = false ;
    bool 	bHasMax = false ;

    enum UnitOfWeight unitOfWeight = POUND ;

    float 	weight {} ;
    float 	maxWeight {} ;

};

















