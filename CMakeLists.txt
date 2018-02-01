cmake_minimum_required(VERSION 3.5)
project( LinkedList VERSION 0.1.0 )

add_library(LinkedList STATIC src/LinkedList.c)

target_include_directories( LinkedList PUBLIC ${PROJECT_SOURCE_DIR}/include )
target_sources( LinkedList PRIVATE ${PROJECT_SOURCE_DIR}/src/LinkedList )
target_sources( LinkedList PUBLIC ${PROJECT_SOURCE_DIR}/include/LinkedList )

set_target_properties(LinkedList
	PROPERTIES
	ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib"
	LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib"
	RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin"
)
