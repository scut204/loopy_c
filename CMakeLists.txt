cmake_minimum_required(VERSION 3.28)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled
        malloc.c
        dsf.c
        random.c
        penrose.c
        loopgen.c
        loopy.c
        tree234.c
        grid.c
        misc.c
        main.c
)
