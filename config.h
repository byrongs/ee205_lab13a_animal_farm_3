///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2- EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

/////////////////////////Definitions /////////////////////////
#define PROGRAM_TITLE "Animal Farm 2"


#define PROGRAM_NAME  "animal_farm_2"

////////////////////////////////////// ENUMS ///////////////////////////////////////////////////
enum Gender { UNKNOWN_GENDER=0, MALE, FEMALE } ;

enum Breed  { UNKNOWN_BREED=0, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX } ;

enum Color  { UNKNOWN_COLOR=-1, BLACK=0, WHITE, RED, BLUE, GREEN, PINK } ;

//////////////////////////////// Typedefs /////////////////////////////////////////////////////
typedef float Weight ;

typedef int NumCats;


const Weight UNKNOWN_WEIGHT = -1 ;  ///< Set when the Weight is unknown
