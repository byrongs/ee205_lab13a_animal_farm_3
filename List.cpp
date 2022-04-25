///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_3 - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author @Byron Soriano <@byrongs@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include "List.h"

















////////// Delete All Nodes ////////////////
void List::deleteAllNodes() noexcept {
    assert(validate() );

    while(head != nullptr ) {
        pop_front();
    }
#ifdef DEBUG
    cout << PROGRAM_NAME << ":All Nodes have been deleted! " << endl;
#endif
    assert(validate() );
}