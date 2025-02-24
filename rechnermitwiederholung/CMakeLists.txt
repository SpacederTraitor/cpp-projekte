cmake_minimum_required(VERSION 3.5)

project(rechnermitwiederholung LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(rechnermitwiederholung main.cpp)

install(TARGETS rechnermitwiederholung
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
