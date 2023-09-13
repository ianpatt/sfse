#ifndef __SFSE_VERSION_H__
#define __SFSE_VERSION_H__

// these have to be macros so they can be used in the .rc
#define SFSE_VERSION_INTEGER		0
#define SFSE_VERSION_INTEGER_MINOR	1
#define SFSE_VERSION_INTEGER_BETA	1
#define SFSE_VERSION_VERSTRING		"0, 0, 1, 1"
#define SFSE_VERSION_PADDEDSTRING	"0001"
#define SFSE_VERSION_RELEASEIDX		2

#define MAKE_EXE_VERSION_EX(major, minor, build, sub)	((((major) & 0xFF) << 24) | (((minor) & 0xFF) << 16) | (((build) & 0xFFF) << 4) | ((sub) & 0xF))
#define MAKE_EXE_VERSION(major, minor, build)			MAKE_EXE_VERSION_EX(major, minor, build, 0)

#define GET_EXE_VERSION_MAJOR(a)	(((a) & 0xFF000000) >> 24)
#define GET_EXE_VERSION_MINOR(a)	(((a) & 0x00FF0000) >> 16)
#define GET_EXE_VERSION_BUILD(a)	(((a) & 0x0000FFF0) >> 4)
#define GET_EXE_VERSION_SUB(a)		(((a) & 0x0000000F) >> 0)

#define RUNTIME_TYPE_BETHESDA	0
#define RUNTIME_TYPE_GOG		1
#define	RUNTIME_TYPE_EPIC		2
#define	RUNTIME_TYPE_MSSTORE	3

#define RUNTIME_VERSION_0_0_3	MAKE_EXE_VERSION(0, 0, 3)	// 0x00000030	ms store early versions (no one has these)
#define RUNTIME_VERSION_1_0_17	MAKE_EXE_VERSION(1, 0, 17)	// 0x01000110	ms store early versions (no one has these)
#define RUNTIME_VERSION_1_2_20	MAKE_EXE_VERSION(1, 2, 20)	// 0x01020140	ms store early versions (no one has these)
#define RUNTIME_VERSION_1_6_35	MAKE_EXE_VERSION(1, 6, 35)	// 0x01060230	version reported by ms store before release (no one has these)
#define RUNTIME_VERSION_1_7_23	MAKE_EXE_VERSION(1, 7, 23)	// 0x01070170	early access/wide release patch
#define RUNTIME_VERSION_1_7_29	MAKE_EXE_VERSION(1, 7, 29)	// 0x010701D0

#define PACKED_SFSE_VERSION		MAKE_EXE_VERSION(SFSE_VERSION_INTEGER, SFSE_VERSION_INTEGER_MINOR, SFSE_VERSION_INTEGER_BETA)

// information about the state of the game at the time of release
#define SFSE_TARGETING_BETA_VERSION	0
#define CURRENT_RELEASE_RUNTIME		RUNTIME_VERSION_1_7_29
#define CURRENT_RELEASE_SFSE_STR	"0.1.1"

#if GET_EXE_VERSION_SUB(RUNTIME_VERSION) == RUNTIME_TYPE_BETHESDA
#define SAVE_FOLDER_NAME "Starfield"
#elif GET_EXE_VERSION_SUB(RUNTIME_VERSION) == RUNTIME_TYPE_GOG
#define SAVE_FOLDER_NAME "Starfield GOG"
#elif GET_EXE_VERSION_SUB(RUNTIME_VERSION) == RUNTIME_TYPE_EPIC
#define SAVE_FOLDER_NAME "Starfield EPIC"
#elif GET_EXE_VERSION_SUB(RUNTIME_VERSION) == RUNTIME_TYPE_MSSTORE
#define SAVE_FOLDER_NAME "Starfield MS"
#else
#error unknown runtime type
#endif

#endif /* __SFSE_VERSION_H__ */
