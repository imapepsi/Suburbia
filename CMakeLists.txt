cmake_minimum_required(VERSION 3.22)
project(Suburbia)

set(CMAKE_CXX_STANDARD 20)

add_executable(Suburbia main.cpp Tile.hpp Effects/Effect.hpp Effects/EachOfYourEffect.h Effects/ForEachAdjacentEffect.hpp Effects/OnceEffect.hpp)
