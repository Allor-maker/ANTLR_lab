cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(samples_antlr)
set(CMAKE_CXX_STANDARD 17)
set(TARGET parser)
set(ANTLR_DIR "C:/antlr/ANTLR/antlr_runtime") 
set(ANTLR_INCLUDE "/include/antlr4-runtime") 
set(ANTLR_LIB "/lib/antlr4-runtime.lib")
    
file(GLOB TARGET_SRC "*.c*")
file(GLOB TARGET_HD "*.h*")


add_executable(${TARGET} ${TARGET_SRC} ${TARGET_HD})

target_include_directories(${TARGET} PUBLIC ${ANTLR_DIR}${ANTLR_INCLUDE})

target_link_libraries(${TARGET} ${ANTLR_DIR}${ANTLR_LIB})