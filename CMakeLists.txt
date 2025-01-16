cmake_minimum_required(VERSION 3.29)
project(cp)

set(CMAKE_CXX_STANDARD 20)

add_executable(cp main.cpp
        "2033/Sakurako and Kosuke/2033A.cpp"
        "2033/sakuro and water/2033B.cpp")

# Add the /usr/local/include directory to the include search path
include_directories(/usr/local/include)