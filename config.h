///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3- EE 205 - Spr 2022
///
/// @file config.h
/// @version 3.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <iomanip>
#include <iostream>
#include <stdexcept>

///////////////////////// Definitions /////////////////////////
#define PROGRAM_TITLE "Animal Farm 3"

#define PROGRAM_NAME  "animal_farm_3"

using namespace std;

#define PRINT_HEADING_FOR_DUMP
    std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl

#define FORMAT_LINE_FOR_DUMP(className, member)
    std::cout << std::setfill(' ')
              << std::left
              << std::boolalpha
              << std::setw(8) << (className)
              << std::setw(20) << (member)
              << std::setw(52)

#ifdef TRACE

#else
    #define TRACE_START
    #define TRACE_END
#endif




