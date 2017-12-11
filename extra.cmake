

get_filename_component(MODULE_DIR ${CMAKE_CURRENT_LIST_FILE} DIRECTORY)

#include(${MODULE_DIR}/lib/CMakeLists.txt)
add_subdirectory(${MODULE_DIR}/lib/ ${CMAKE_BINARY_DIR}/external/)

list(APPEND EXTERNAL_LIBS demo)
