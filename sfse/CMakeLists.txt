cmake_minimum_required(VERSION 3.18)

# ---- Project ----

include(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/versioning.cmake)

project(
	sfse
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

if (NOT TARGET xbyak)
	add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../xbyak xbyak)	# bundled
endif()

# ---- Add source files ----

file(GLOB headers CONFIGURE_DEPENDS *.h)
file(GLOB sources CONFIGURE_DEPENDS *.cpp)

source_group(
	${PROJECT_NAME}
	FILES
		sfse.cpp
		sfse.def
		${sfse_common_SOURCE_DIR}/sfse_version.rc
)

source_group(
	${PROJECT_NAME}/api
	FILES
		GameReflection.h
)

source_group(
	${PROJECT_NAME}/hooks
	FILES
		Hooks_Version.cpp
		Hooks_Version.h
)

source_group(
	${PROJECT_NAME}/internal
	FILES
		PluginAPI.h
		PluginManager.cpp
		PluginManager.h
)

source_group(
	${PROJECT_NAME}/netimmerse
	FILES
)

source_group(
	${PROJECT_NAME}/papyrus/functions
	FILES
)

source_group(
	${PROJECT_NAME}/papyrus/vm
	FILES
)

source_group(
	${PROJECT_NAME}/scaleform
	FILES
)

# ---- Create library ----

add_library(
	${PROJECT_NAME}
	SHARED
	${headers}
	${sources}
	sfse.def
	${sfse_common_SOURCE_DIR}/sfse_version.rc
)

add_library(sfse64::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

include(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/configuration.cmake)

set_target_properties(
	${PROJECT_NAME}
	PROPERTIES
		OUTPUT_NAME "${PROJECT_NAME}_${RUNTIME_VERSION_MAJOR}_${RUNTIME_VERSION_MINOR}_${RUNTIME_VERSION_PATCH}"
)

target_compile_definitions(
	${PROJECT_NAME}
	PRIVATE
		RUNTIME
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
		xbyak::xbyak
)

# ---- Configure all targets ----

set_target_properties(
	${PROJECT_NAME}
	sfse_common
	PROPERTIES
		MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>"
)

# ---- Create an installable target ----

include(GNUInstallDirs)

install(
	TARGETS
		${PROJECT_NAME}
	EXPORT
		${PROJECT_NAME}-targets
)

install(
	FILES
		${headers}
	DESTINATION
		${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}
)

configure_file(
	cmake/config.cmake.in
	${PROJECT_NAME}-config.cmake
	@ONLY
)

install(
	FILES
		${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake
	DESTINATION
		${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

install(
	EXPORT
		${PROJECT_NAME}-targets
	NAMESPACE
		sfse::
	DESTINATION
		${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
)

include(${CMAKE_CURRENT_SOURCE_DIR}/../cmake/installation.cmake)
