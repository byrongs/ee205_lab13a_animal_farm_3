cmake_minimum_required(VERSION 3.21)
project(ee205_lab_10d_animal_farm_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(ee205_lab_10d_animal_farm_2 main.cpp config.h catClass.cpp catClass.h Animal.cpp Animal.h Color.h Gender.h List.cpp List.h Mammal.cpp Mammal.h Node.h SinglyLinkedList.cpp SinglyLinkedList.h Weight.cpp Weight.h Node.cpp)
