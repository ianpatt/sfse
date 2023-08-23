if (MSVC)
	set(COMPILE_OPTIONS_DEBUG
		/JMC	# Just My Code debugging
		/ZI	# Debug Information Format
	)
	
	set(COMPILE_OPTIONS_RELEASE
		/Oi	# Generate Intrinsic Functions
		/Zi	# Debug Information Format
	)

	target_compile_options(
		${PROJECT_NAME}
		PRIVATE
			/MP	# Build with Multiple Processes
			/W3	# Warning level
			
			"$<$<CONFIG:Debug>:${COMPILE_OPTIONS_DEBUG}>"
			"$<$<CONFIG:Release>:${COMPILE_OPTIONS_RELEASE}>"
	)
	
	set(LINK_OPTIONS_DEBUG
		/INCREMENTAL	# Link Incrementally
	)
	
	set(LINK_OPTIONS_RELEASE
		/DEBUG:FULL	# Generate Debug Info
		/INCREMENTAL:NO	# Link Incrementally
		/OPT:REF	# Optimizations (eliminate functions/data never referenced)
		/OPT:ICF	# Optimizations (perform identical COMDAT folding)
	)
	
	target_link_options(
		${PROJECT_NAME}
		PRIVATE
			"$<$<CONFIG:Debug>:${LINK_OPTIONS_DEBUG}>"
			"$<$<CONFIG:Release>:${LINK_OPTIONS_RELEASE}>"
	)
endif()
