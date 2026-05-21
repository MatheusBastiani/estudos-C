cmake_minimum_required(VERSION 3.20)
project(estudos_C C)

# Isso aqui avisa o CLion para usar C99 e faz o erro do <stdint.h> sumir
set(CMAKE_C_STANDARD 99)

# Encontra todos os seus .c nas pastas e diz para o CLion ler eles
file(GLOB_RECURSE SOURCES "*.c")

foreach(SOURCE_FILE ${SOURCES})
    file(RELATIVE_PATH RELATIVE_FILE ${CMAKE_SOURCE_DIR} ${SOURCE_FILE})
    string(REPLACE ".c" "" TARGET_NAME ${RELATIVE_FILE})
    string(REPLACE "/" "_" TARGET_NAME ${TARGET_NAME})
    string(REPLACE "\\" "_" TARGET_NAME ${TARGET_NAME})

    add_executable(${TARGET_NAME} ${SOURCE_FILE})
endforeach()