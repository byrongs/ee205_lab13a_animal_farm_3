cmake_minimum_required(VERSION 3.21)
project(ee205_lab_10d_animal_farm_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(ee205_lab_10d_animal_farm_2 main.cpp addCats.cpp addCats.h config.h catDatabase.cpp catDatabase.h deleteCats.cpp deleteCats.h reportCats.cpp reportCats.h catClass.cpp catClass.h)
