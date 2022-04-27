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


#ifdef TRACE
    static void TRACE_OUT( const string operation, const string functionName ) {
        cout << PROGRAM_NAME << operation << " " << functionName << endl;

    }

#define TRACE_START TRACE_OUT("START", __FUNCTION__);
#define TRACE_END TRACE_OUT("END", __FUNCTION__);

#else
#define TRACE_START
#define TRACE_END
#endif

#define PRINT_HEADING_FOR_DUMP std::cout \
    << std::setw(80) << std::setfill( '=' ) << "" << std::endl

#define FORMAT_LINE_FOR_DUMP( className, member) std::cout \
    << std::setw(8) << (className)                         \
    << std::setw(20) << (member)                           \
    << std::setw(52)







