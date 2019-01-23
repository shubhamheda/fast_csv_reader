cmake_minimum_required(VERSION 3.12)
project(untitled)

find_package(PythonLibs 2.7 REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

find_package(Boost COMPONENTS filesystem python REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})


set(CMAKE_CXX_STANDARD 17)

#add_executable(untitled main.cpp)
#add_library(funct_ext SHARED MathFunction.cpp)
add_library(csv_reader SHARED CSVReader.cpp CSVReader.h) # Creating library for other files within the project
add_library(fast_csv SHARED main.cpp)


target_link_libraries(fast_csv ${Boost_LIBRARIES} csv_reader) # very important to link the libraries
set_target_properties(fast_csv PROPERTIES PREFIX "")
