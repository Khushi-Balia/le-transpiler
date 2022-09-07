cmake_minimum_required(VERSION 3.16.3)

project(le-transpiler 
        DESCRIPTION "Compiler for our custom syntax, compiles our custom syntax code down to PRU-C"
        HOMEPAGE_URL "https://github.com/Khushi-Balia/le-transpiler")
enable_language(C)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

# Check for required packages

find_package(BISON REQUIRED)
find_package(FLEX REQUIRED)

######## SOURCES ########

# Add source files and header files
file(GLOB PROJECT_HEADERS include/*.h third-party/vec/*.h third-party/klib/*.h)
file(GLOB PROJECT_SOURCES src/*.c  third-party/vec/*.c)
set(PROJECT_FILES
    ${PROJECT_HEADERS}
    ${PROJECT_SOURCES})


# Add bison and flex targets

bison_target(parser
            src/par.y
            ${CMAKE_CURRENT_SOURCE_DIR}/src/parser.c)
flex_target(lexer
            src/lexer.l
            ${CMAKE_CURRENT_SOURCE_DIR}/src/lexer.c)
ADD_FLEX_BISON_DEPENDENCY(lexer parser)


# Add executables
add_executable(${PROJECT_NAME}-${CMAKE_PROJECT_VERSION} ${PROJECT_FILES} ${BISON_parser_OUTPUTS} ${FLEX_lexer_OUTPUTS})
target_compile_definitions(${PROJECT_NAME}-${CMAKE_PROJECT_VERSION} PRIVATE INSTALL_PATH=${CMAKE_INSTALL_PREFIX} VERSION_NUMBER=${CMAKE_PROJECT_VERSION})
target_include_directories(${PROJECT_NAME}-${CMAKE_PROJECT_VERSION} PUBLIC 
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/third-party>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>)