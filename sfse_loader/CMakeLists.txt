cmake_minimum_required(VERSION 3.18)

# ---- Project ----

include(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/versioning.cmake)

project(
	sfse_loader
	VERSION ${SFSE_VERSION_MAJOR}.${SFSE_VERSION_MINOR}.${SFSE_VERSION_PATCH}
	LANGUAGES CXX
)

# ---- Include guards ----

if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
	message(
		FATAL_ERROR
			"In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there."
)
endif()

# ---- Build options ----

set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION_DEBUG OFF)

# ---- Dependencies ----

if (NOT TARGET sfse_common)
	add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../sfse_common sfse_common)	# bundled
endif()

# ---- Add source files ----

file(GLOB headers CONFIGURE_DEPENDS *.h)
file(GLOB sources CONFIGURE_DEPENDS *.cpp)

source_group(
	${PROJECT_NAME}
	FILES
		${headers}
		${sources}
		${sfse_common_SOURCE_DIR}/sfse_version.rc
)

# ---- Create library ----

add_executable(
	${PROJECT_NAME}
	${headers}
	${sources}
	${sfse_common_SOURCE_DIR}/sfse_version.rc
)

add_executable(sfse::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

include(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/configuration.cmake)

target_compile_definitions(
	${PROJECT_NAME}
	PRIVATE
		RUNTIME_VERSION=${RUNTIME_VERSION_PACKED}
)

target_compile_features(
	${PROJECT_NAME}
	PUBLIC
		cxx_std_11
)

target_include_directories(
	${PROJECT_NAME}
	PUBLIC
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
		$<INSTALL_INTERFACE:include>
)

target_link_libraries(
	${PROJECT_NAME}
	PUBLIC
		sfse::sfse_common
		Shlwapi.lib
		Version.lib
)

# ---- Configure all targets ----

set_target_properties(
	${PROJECT_NAME}
	sfse_common
	PROPERTIES
		MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>"
)

include(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/installation.cmake)
