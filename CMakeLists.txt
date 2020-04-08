cmake_minimum_required(VERSION 3.12.3)

project (matrix)

set(SOURCE_FILES
        ${CMAKE_CURRENT_LIST_DIR}/src/matrix_allocate.c
        ${CMAKE_CURRENT_LIST_DIR}/src/matrix_deallocate.c
        ${CMAKE_CURRENT_LIST_DIR}/src/matrix_copy.c
        ${CMAKE_CURRENT_LIST_DIR}/src/matrix_mul.c
        ${CMAKE_CURRENT_LIST_DIR}/src/matrix_mul_scalar.c
        ${CMAKE_CURRENT_LIST_DIR}/src/matrix_add.c
        ${CMAKE_CURRENT_LIST_DIR}/src/matrix_sub.c
        ${CMAKE_CURRENT_LIST_DIR}/src/matrix_print.c
        )


set(HEADER_FILES
        ${CMAKE_CURRENT_LIST_DIR}/inc/
        )


add_library(matrix STATIC ${HEADER_FILES} ${SOURCE_FILES})

target_include_directories(matrix PRIVATE ${HEADER_FILES})