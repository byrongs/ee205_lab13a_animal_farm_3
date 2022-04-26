///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Weight.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////




#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <cassert>

#include "Weight.h"
#include "catClass.h"
#include "config.h"


using namespace std;


/////////// Weight Values ///////////////////////////////////////////////
const Weight::t_weight Weight::UNKNOWN_WEIGHT = -1 ;
const Weight::t_weight Weight::KILOS_IN_A_POUND = 0.453592 ;
const Weight::t_weight Weight::SLUGS_IN_A_POUND = 0.031081 ;




/////////// Weight Constructors //////////////////////////////////////////////

Weight::Weight() noexcept {
    unitOfWeight = POUND;
    weight = UNKNOWN_WEIGHT ;
    maxWeight = UNKNOWN_WEIGHT ;
    bIsKnown = false;
}

Weight::Weight(const Weight::t_weight newWeight) {
    setWeight( newWeight);
    bIsKnown = true; /// Weight is known
}

Weight::Weight(const Weight::UnitOfWeight newUnitOfWeight) noexcept { ///// unit of weight
    unitOfWeight= newUnitOfWeight ;
}

Weight::Weight(const Weight::t_weight newWeight, const Weight::UnitOfWeight newUnitOfWeight): Weight( newUnitOfWeight ) {
    setWeight( newWeight ) ;
    setWeight( newUnitOfWeight );
}

Weight::Weight(const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight) {
    setWeight( newWeight );
    setMaxWeight( newMaxWeight );
    bHasMax = true;
}


Weight::Weight(const Weight::UnitOfWeight newUnitOfWeight, const Weight::t_weight newMaxWeight) :Weight ( newUnitOfWeight ) {
    setMaxWeight( newMaxWeight );
    if(newMaxWeight <= 0) {
        throw std::out_of_range("The new max weight cannot be less than or equal to zero");
    }
}

Weight::Weight(const Weight::t_weight newWeight, const Weight::UnitOfWeight newUnitOfWeight, const Weight::t_weight newMaxWeight):Weight( newUnitOfWeight, newMaxWeight ) {
    setWeight(newWeight);
    setMaxWeight(newMaxWeight);
}

const Weight::t_weight Cat::MAX_WEIGHT = 40;




/// Once UnitOfWeight is set, it can't be changed.
/// Once maxWeight is set, it can't be changed.

/////////////// dump /////////////////

void Weight::dump() const noexcept {

#define FORMAT_LINE(className, member) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
    cout << setw(80) << setfill('=') << "" << endl;
    cout << setfill(' ');
    cout << left;
    cout << boolalpha;

    FORMAT_LINE( "Weight", "this" )  << this << endl ;
    FORMAT_LINE("Weight", "isKnown") << isWeightKnown() << endl;
    FORMAT_LINE("Weight", "weight") << getWeight() << endl;
    FORMAT_LINE("Weight", "unitOfWeight") << getWeightUnit() << endl;
    FORMAT_LINE("Weight", "hasMax") << hasMaxWeight() << endl;
    FORMAT_LINE("Weight", "maxWeight") << getMaxWeight() << endl;

}


/////////////////// Weight Conversions //////////////////////

float Weight::fromKilogramToPound(const float kilogram) noexcept {
    return kilogram / KILOS_IN_A_POUND;
}

float Weight::fromPoundToKilogram(const float pound) noexcept {
    return pound * KILOS_IN_A_POUND;
}

float Weight::fromSlugToPound(const float slug) noexcept {
    return slug / SLUGS_IN_A_POUND;
}

float Weight::fromPoundToSlug(const float pound) noexcept {
    return pound * SLUGS_IN_A_POUND;
}

/////////////////////// Convert to Common Weight ///////////////////////////////////////////



Weight::t_weight Weight::convertWeight(float fromWeight, Weight::UnitOfWeight fromUnit, Weight::UnitOfWeight toUnit) noexcept {
    float commonWeight = UNKNOWN_WEIGHT;

    switch( fromUnit ) {
        case POUND: commonWeight = fromWeight ;
            break;
        case KILO: commonWeight = fromKilogramToPound( fromWeight ) ;
            break;
        case SLUG: commonWeight = fromSlugToPound( fromWeight ) ;
            break;
        default: assert( false );
    }
    float toWeight = UNKNOWN_WEIGHT;

    switch( toUnit ) {
        case POUND: toWeight = commonWeight ;  //Pound is the common weight already//
            break;
        case KILO: toWeight = fromPoundToKilogram( commonWeight );
            break;
        case SLUG: toWeight = fromPoundToSlug( commonWeight );
            break;
        default: assert( false );
    }

    return toWeight ;
}


///////// Labels ///////////////////

const string Weight::KILO_LABEL = "Kilo";

const string Weight::POUND_LABEL = "Pound";

const string Weight::SLUG_LABEL = "Slug";

/////////////////// Weight Getters //////////////////

Weight::t_weight Weight::getWeight() const noexcept {
    if (!bIsKnown) {
        return UNKNOWN_WEIGHT;
    }
    return weight;
}

Weight::t_weight Weight::getWeight(UnitOfWeight weightUnits) const noexcept {
    if (bIsKnown) {
        cout << "Weight cannot be converted" << endl;
    }
    return convertWeight(getWeight(), getWeightUnit(), weightUnits);
}


Weight::t_weight Weight::getMaxWeight() const noexcept {
    if (!bHasMax) {
        return UNKNOWN_WEIGHT;
    }
    return maxWeight;
}

Weight::UnitOfWeight Weight::getWeightUnit() const noexcept {
    return unitOfWeight;
}


/////////// Booleans ///////////

bool Weight::isWeightKnown() const {
    if (!bIsKnown) {
        return false;
    }
    return true;
}

bool Weight::hasMaxWeight() const {
    if (!bHasMax) {
        return false;
    }
    return true;
}

bool Weight::isWeightValid(const Weight::t_weight checkWeight) const noexcept {
    if (checkWeight <= 0 && checkWeight < maxWeight) {
        cout << "Weight is not valid" << endl;
    }
    return true;
}

///////////////// Operators /////////////////////////////////////////////
bool Weight::operator==(const Weight &rhs_Weight) const {

    Weight::t_weight lhs_weight = (bIsKnown) ? getWeight(Weight::POUND) : 0;
    Weight::t_weight rhs_weight = (rhs_Weight.bIsKnown) ?
                       rhs_Weight.getWeight(Weight::POUND) : 0;

    return lhs_weight == rhs_weight;
}

bool Weight::operator<(const Weight &rhs_Weight) const {

    Weight::t_weight lhs_weight = (bIsKnown) ? getWeight(Weight::POUND) : 0;
    Weight::t_weight rhs_weight = (rhs_Weight.bIsKnown) ?
                       rhs_Weight.getWeight(Weight::POUND) : 0;

    return lhs_weight < rhs_weight;
}


Weight& Weight::operator+=( const Weight::t_weight rhs_addToWeight ) {
    if( !bIsKnown ) {
        throw out_of_range( "The weight is unknown" ) ;
    }

    setWeight( weight + rhs_addToWeight );

    return *this;
}


///////////////////// Ostream ///////////////////////
std::ostream &Weight::operator<<(ostream &lhs_stream, const Weight::UnitOfWeight rhs_UnitOfWeight) {
    switch( rhs_UnitOfWeight ) {
        case Weight::POUND:
            return lhs_stream << Weight::POUND_LABEL ;
        case Weight::KILO:
            return lhs_stream << Weight::KILO_LABEL ;
        case Weight::SLUG:
            return lhs_stream << Weight::SLUG_LABEL ;
        default: throw out_of_range( "Unit can't be converted into a string");
    }
}


std::ostream& operator<<( std::ostream& lhs_stream, const Weight& rhs_Weight ) {
    if( !rhs_Weight.isWeightKnown() && !rhs_Weight.hasMaxWeight() ) {
        lhs_stream << "Weight is unknown" ;
        return lhs_stream;
    }
    else if( rhs_Weight.isWeightKnown() ) {
        lhs_stream << rhs_Weight.getWeight();
    } else {
        lhs_stream << "Weight is unknown";
    }

    if( rhs_Weight.hasMaxWeight() ) {
        lhs_stream << "OUT OF" << rhs_Weight.getMaxWeight();
    }

    lhs_stream << " " << rhs_Weight.getWeightUnit() ;

    if(    ( !rhs_Weight.hasMaxWeight() && rhs_Weight.getWeight() > 1 )
           || ( rhs_Weight.hasMaxWeight() && rhs_Weight.getMaxWeight() > 1 ) ) {
        lhs_stream << "s";
    }

    return lhs_stream;
}





////////////////// Setters  ////////////////////////////////////

void Weight::setWeight(Weight::t_weight newWeight) {
    assert(validate() );
    if( !isWeightValid(newWeight)) {
        throw out_of_range("Weight is out of range");
    }
    weight = newWeight;
    bIsKnown = true;
}

void Weight::setWeight(const Weight::t_weight newWeight, const Weight::UnitOfWeight weightUnits ) {
    setWeight(convertWeight(newWeight, weightUnits, unitOfWeight));
}



void Weight::setMaxWeight(const Weight::t_weight newMaxWeight) {
    assert( !bHasMax );
    if( !isWeightValid( newMaxWeight)){
        throw out_of_range("The maximum weight is out of range!");
    }
    maxWeight = newMaxWeight;
    bHasMax = true;
}


bool Weight::validate() const noexcept {
    if (weight <= 0) {
        throw invalid_argument("The weight must be greater than 0");
    }
    if( !isWeightValid((maxWeight))) {
        cout << "Max weight is <= 0" << endl;
        return false;
    }
    assert( maxWeight > 0);
    return true;
}


//// Weight dump ////

void Weight::dump() const noexcept {
    FORMAT_LINE_FOR_DUMP( "Weight", "this") << this << endl ;
    FORMAT_LINE_FOR_DUMP( "Weight", "isKnown") << bIsKnown << endl;
    FORMAT_LINE_FOR_DUMP( "Weight", "weight") << weight << endl;
    FORMAT_LINE_FOR_DUMP( "Weight", "unitOfWeight") << unitOfWeight << endl;
    FORMAT_LINE_FOR_DUMP( "Weight", "hasMax") << bHasMax << endl;
    FORMAT_LINE_FOR_DUMP( "Weight", "maxWeight") << maxWeight << endl;

}


