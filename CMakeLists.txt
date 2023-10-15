cmake_minimum_required(VERSION 3.26)
project(clionproj C)

set(CMAKE_C_STANDARD 11)

add_executable(clionproj 08/main.c
        08/extractDigits.c
        08/compareArrays.c
        08/findInArr.c
        08/maxInArr.c
        08/printArr.c
        08/revertArr.c
        08/scanArr.c
        07/main.c)
