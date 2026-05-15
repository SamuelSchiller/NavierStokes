cmake_minimum_required(VERSION 3.22)

project(MyFTXUIProject
    VERSION 1.0.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)

FetchContent_Declare(ftxui
    GIT_REPOSITORY https://github.com/ArthurSonzogni/FTXUI
    GIT_TAG main 
)

FetchContent_MakeAvailable(ftxui)

file(GLOB_RECURSE SRC_FILES
    "${CMAKE_SOURCE_DIR}/src/*.cpp"
)

add_executable(my_app ${SRC_FILES})

target_include_directories(my_app PRIVATE
    ${CMAKE_SOURCE_DIR}/headers
)

target_link_libraries(my_app
    PRIVATE ftxui::screen
    PRIVATE ftxui::dom
    PRIVATE ftxui::component
)