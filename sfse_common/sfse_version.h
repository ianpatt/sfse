#ifndef __SFSE_VERSION_H__
#define __SFSE_VERSION_H__

// these have to be macros so they can be used in the .rc
#define SFSE_VERSION_INTEGER		0
#define SFSE_VERSION_INTEGER_MINOR	2
#define SFSE_VERSION_INTEGER_BETA	18
#define SFSE_VERSION_VERSTRING		"0, 0, 2, 18"
#define SFSE_VERSION_PADDEDSTRING	"0001"
#define SFSE_VERSION_RELEASEIDX		24

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

#define RUNTIME_VERSION_0_0_3		MAKE_EXE_VERSION(0, 0, 3)		// 0x00000030	ms store early versions (no one has these)
#define RUNTIME_VERSION_1_0_17		MAKE_EXE_VERSION(1, 0, 17)		// 0x01000110	ms store early versions (no one has these)
#define RUNTIME_VERSION_1_2_20		MAKE_EXE_VERSION(1, 2, 20)		// 0x01020140	ms store early versions (no one has these)
#define RUNTIME_VERSION_1_6_35		MAKE_EXE_VERSION(1, 6, 35)		// 0x01060230	version reported by ms store before release (no one has these)
#define RUNTIME_VERSION_1_7_23		MAKE_EXE_VERSION(1, 7, 23)		// 0x01070170	early access/wide release patch
#define RUNTIME_VERSION_1_7_29		MAKE_EXE_VERSION(1, 7, 29)		// 0x010701D0
#define RUNTIME_VERSION_1_7_33		MAKE_EXE_VERSION(1, 7, 33)		// 0x01070210
#define RUNTIME_VERSION_1_7_36		MAKE_EXE_VERSION(1, 7, 36)		// 0x01070240
#define RUNTIME_VERSION_1_8_83		MAKE_EXE_VERSION(1, 8, 83)		// 0x01080530	beta
#define RUNTIME_VERSION_1_8_84		MAKE_EXE_VERSION(1, 8, 84)		// 0x01080540	beta
#define RUNTIME_VERSION_1_8_86		MAKE_EXE_VERSION(1, 8, 86)		// 0x01080560	beta released to main branch
#define RUNTIME_VERSION_1_8_87		MAKE_EXE_VERSION(1, 8, 87)		// 0x01080570	beta
#define RUNTIME_VERSION_1_8_88		MAKE_EXE_VERSION(1, 8, 88)		// 0x01080580	(very) small patch
#define RUNTIME_VERSION_1_9_51		MAKE_EXE_VERSION(1, 9, 51)		// 0x01090330
#define RUNTIME_VERSION_1_9_67		MAKE_EXE_VERSION(1, 9, 67)		// 0x01090430	beta released to main branch
#define RUNTIME_VERSION_1_9_71		MAKE_EXE_VERSION(1, 9, 71)		// 0x01090470	hotfix
#define RUNTIME_VERSION_1_10_30		MAKE_EXE_VERSION(1, 10, 30)		// 0x010A01E0	beta
#define RUNTIME_VERSION_1_10_31		MAKE_EXE_VERSION(1, 10, 31)		// 0x010A01F0	
#define RUNTIME_VERSION_1_10_32		MAKE_EXE_VERSION(1, 10, 32)		// 0x010A0200	hotfix
#define RUNTIME_VERSION_1_11_33		MAKE_EXE_VERSION(1, 11, 33)		// 0x010B0210	beta
#define RUNTIME_VERSION_1_11_36		MAKE_EXE_VERSION(1, 11, 36)		// 0x010B0240	
#define RUNTIME_VERSION_1_12_30		MAKE_EXE_VERSION(1, 12, 30)		// 0x010C01E0	editor released
#define RUNTIME_VERSION_1_12_32		MAKE_EXE_VERSION(1, 12, 32)		// 0x010C0200	hotfix
#define RUNTIME_VERSION_1_12_36		MAKE_EXE_VERSION(1, 12, 36)		// 0x010C0240
#define RUNTIME_VERSION_1_13_61		MAKE_EXE_VERSION(1, 13, 61)		// 0x010D03D0	car
#define RUNTIME_VERSION_1_14_70		MAKE_EXE_VERSION(1, 14, 70)		// 0x010E0460	xp1
#define RUNTIME_VERSION_1_14_74		MAKE_EXE_VERSION(1, 14, 74)		// 0x010E04A0	beta released to main branch
#define RUNTIME_VERSION_1_15_214	MAKE_EXE_VERSION(1, 15, 214)	// 0x010F0D60	beta
#define RUNTIME_VERSION_1_15_215	MAKE_EXE_VERSION(1, 15, 215)	// 0x010F0D70	beta
#define RUNTIME_VERSION_1_15_216	MAKE_EXE_VERSION(1, 15, 216)	// 0x010F0D80	inlining options changed
#define RUNTIME_VERSION_1_15_222	MAKE_EXE_VERSION(1, 15, 222)	// 0x010F0DE0	beta released to main branch

#define PACKED_SFSE_VERSION		MAKE_EXE_VERSION(SFSE_VERSION_INTEGER, SFSE_VERSION_INTEGER_MINOR, SFSE_VERSION_INTEGER_BETA)

// information about the state of the game at the time of release
#define SFSE_TARGETING_BETA_VERSION	0
#define CURRENT_RELEASE_RUNTIME		RUNTIME_VERSION_1_15_222
#define CURRENT_RELEASE_SFSE_STR	"0.2.18"

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

#define LOADER_VERSION_1_0_0	MAKE_EXE_VERSION(1, 0, 0)
#define LOADER_VERSION_1_1_0	MAKE_EXE_VERSION(1, 1, 0)	// code signing
#define LOADER_VERSION_1_1_1	MAKE_EXE_VERSION(1, 1, 1)	// code signing bugfix
#define LOADER_VERSION			LOADER_VERSION_1_1_1

#endif /* __SFSE_VERSION_H__ */
