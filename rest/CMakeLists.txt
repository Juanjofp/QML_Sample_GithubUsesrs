message(STATUS ">>>> Building rest")

set(MODULE_NAME apiRest)
set(LIB_NAME ${MODULE_NAME}Lib)

qt_add_library(${LIB_NAME} STATIC)

set_target_properties(${LIB_NAME} PROPERTIES AUTOMOC ON)
find_package(Qt6 6.5 REQUIRED COMPONENTS Quick Core)
target_link_libraries(${LIB_NAME} PRIVATE Qt6::Quick Qt6::Core)

list(APPEND MODULE_SRC_FILES apirest.h apirest.cpp gituser.h modelview.h modelview.cpp)

qt_add_qml_module(${LIB_NAME}
  URI ${MODULE_NAME}
  VERSION 1.0
  RESOURCE_PREFIX /
  SOURCES
  ${MODULE_SRC_FILES}
  OUTPUT_DIRECTORY
  "${CMAKE_BINARY_DIR}/${MODULE_NAME}"
)

