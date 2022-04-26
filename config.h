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

#include <iostream>

#include <stdexcept>
#include <iomanip>

///////////////////////// Definitions /////////////////////////
#define PROGRAM_TITLE "Animal Farm 3"

#define PROGRAM_NAME  "animal_farm_3"

#define PRINT_HEADING_FOR_DUMP
std::coutm<<mstd::setw(80) << std::setfill( '=' ) << "" << std::endl
#define FORMAT_LINE_FOR_DUMP(className, member)
    std::cout << std::setfill( ' ' )
              << std::left
              << std::boolalpha
              << std::setw(8) << (className)
              << std::setw(20) << (member)
              << std::setw(52)

#ifdef TRACE

static void TRACE_OUT( const std::string operation, const std::string functionName ) {
    std::cout << PROGRAM_NAME << ": " << operation " " << functionName << std::endl ;
}

#define TRACE_START TRACE_OUT( "Start", __FUNCTION__ ) ;
#define TRACE_END TRACE_OUT( "End", __FUNCTIOn__ ) ;
#else
#define TRACE_START
#define TRACE_END
#endif




