cmake_minimum_required(VERSION 3.31)
project(OSNP2024)

set(CMAKE_CXX_STANDARD 20)

# Main app
add_executable(Main2024A A/main.cpp
        A/jawaban.cpp)
add_executable(Main2024B B/main.cpp
        B/jawaban.cpp)
add_executable(Main2024C C/main.cpp
        C/jawaban.cpp)
add_executable(Main2024D D/main.cpp
        D/jawaban.cpp)
add_executable(Main2024E E/main.cpp
        E/jawaban.cpp)
add_executable(Main2024F F/main.cpp
        F/jawaban.cpp)

# Test
enable_testing()

## 2024
add_executable(OSNP2024A A/main.test.cpp
        A/jawaban.cpp)
add_test(NAME Jawaban2024A COMMAND OSNP2024A)
add_executable(OSNP2024B B/main.test.cpp
        B/jawaban.cpp)
add_test(NAME Jawaban2024B COMMAND OSNP2024B)
add_executable(OSNP2024C C/main.test.cpp
        C/jawaban.cpp)
add_test(NAME Jawaban2024C COMMAND OSNP2024C)
add_executable(OSNP2024D D/main.test.cpp
        D/jawaban.cpp)
add_test(NAME Jawaban2024D COMMAND OSNP2024D)
add_executable(OSNP2024E E/main.test.cpp
        E/jawaban.cpp)
add_test(NAME Jawaban2024E COMMAND OSNP2024E)
add_executable(OSNP2024F F/main.test.cpp
        F/jawaban.cpp)
add_test(NAME Jawaban2024F COMMAND OSNP2024F)