option(SFSE_COPY_OUTPUT "Copies output files to the starfield directory" OFF)

if (SFSE_COPY_OUTPUT)
	add_custom_command(
		TARGET ${PROJECT_NAME}
		POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${PROJECT_NAME}> "$ENV{StarfieldPath}"
		COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_PDB_FILE:${PROJECT_NAME}> "$ENV{StarfieldPath}"
	)
endif()
