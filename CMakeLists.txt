cmake_minimum_required(VERSION 3.20)
project(zero_day_fuzzer CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(ENABLE_SANITIZERS "Build with AddressSanitizer + UBSan" ON)
if(ENABLE_SANITIZERS AND NOT MSVC)
  add_compile_options(-fsanitize=address,undefined -fno-omit-frame-pointer -g)
  add_link_options(-fsanitize=address,undefined)
endif()

add_executable(vuln_target targets/vuln_target.cpp)
