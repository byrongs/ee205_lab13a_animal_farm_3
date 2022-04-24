//
// Created by Alice Soriano on 4/19/22.
//
#include <string>
#include <cassert>

#include "config.h"
#include "Mammal.h"

using namespace std;

static const std::string MAMMAL_NAME = "Mammalian" ;


void Mammal::dump() const noexcept {

    Animal::dump();

    FORMAT_LINE_FOR_DUMP( "Mammal", "Color" ) << color << endl;

}
