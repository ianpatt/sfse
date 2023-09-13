#pragma once

#include "sfse/GameForms.h"
#include "sfse/NiTypes.h"

class BGSLocation;
class TESTopicInfo;
class BGSScene;
class TESRace;
class TESObjectCELL;
class CombatGroup;

class TESObjectREFR : public TESForm
{
public:
	~TESObjectREFR() override;  // 00

	// add
	virtual void         Predestroy();                                                                                                                      // 062
	virtual bool         Unk_63();                                                                                                                          // 063 - { return extraList.HasExtraData(14);};
	virtual bool         GetEditorLocation(NiPoint3& a_originalLocation, NiPoint3& a_originalAngle, TESForm*& a_locationFormOut);                           // 064 - new
	virtual void         Unk_65();                                                                                                                          // 065
	virtual BGSLocation* GetEditorLocation() const;                                                                                                         // 066
	virtual bool         GetEditorLocation(NiPoint3& a_originalLocation, NiPoint3& a_originalAngle, TESForm*& a_locationFormOut, TESForm* a_locationForm);  // 067
	virtual bool         IsTalking() const;                                                                                                                 // 068
	virtual void         ForceEditorLocation(BGSLocation* a_location);                                                                                      // 069
	virtual void         Unk_6A();                                                                                                                          // 06A
	virtual void         UpdateSoundCallBack(bool a_endSceneAction);                                                                                        // 06B
	virtual bool         SetDialoguewithPlayer(bool a_flag, bool a_forceGreet, TESTopicInfo* a_topicInfo);                                                  // 06C
	virtual void         Unk_6D();                                                                                                                          // 06D
	virtual void         Unk_6E();                                                                                                                          // 06E
	virtual void         Unk_6F();                                                                                                                          // 06F
	virtual void         Unk_70();                                                                                                                          // 070
	virtual void         Unk_71();                                                                                                                          // 071
	virtual void         Unk_72();                                                                                                                          // 072
	virtual void         Unk_73();                                                                                                                          // 073
	virtual void         Unk_74();                                                                                                                          // 074
	virtual void         Unk_75();                                                                                                                          // 075
	virtual void         Unk_76();                                                                                                                          // 076
	virtual void         Unk_77();                                                                                                                          // 077
	virtual void         Unk_78();                                                                                                                          // 078
	virtual void         Unk_79();                                                                                                                          // 079
	virtual BGSScene* GetCurrentScene() const;                                                                                                           // 07A
	virtual void         Unk_7B();                                                                                                                          // 07B
	virtual void         Unk_7C();                                                                                                                          // 07C
	virtual void         Unk_7D();                                                                                                                          // 07D
	virtual void         Unk_7E();                                                                                                                          // 07E
	virtual void         Unk_7F();                                                                                                                          // 07F
	virtual void         Unk_80();                                                                                                                          // 080
	virtual void         Unk_81();                                                                                                                          // 081
	virtual void         Unk_82();                                                                                                                          // 082
	virtual void         Unk_83();                                                                                                                          // 083
	virtual void         Unk_84();                                                                                                                          // 084
	virtual void         Unk_85();                                                                                                                          // 085
	virtual void         Unk_86();                                                                                                                          // 086
	virtual void         Unk_87();                                                                                                                          // 087
	virtual void         Unk_88();                                                                                                                          // 088
	virtual void         Unk_89();                                                                                                                          // 089
	virtual void         Unk_8A();                                                                                                                          // 08A
	virtual void         Unk_8B();                                                                                                                          // 08B
	virtual void         Unk_8C();                                                                                                                          // 08C
	virtual void         Unk_8D();                                                                                                                          // 08D
	virtual void         Unk_8E();                                                                                                                          // 08E
	virtual void         Unk_8F();                                                                                                                          // 08F
	virtual void         Unk_90();                                                                                                                          // 090
	virtual void         Unk_91();                                                                                                                          // 091
	virtual void         Unk_92();                                                                                                                          // 092
	virtual void         Unk_93();                                                                                                                          // 093
	virtual void         Unk_94();                                                                                                                          // 094
	virtual void         Unk_95();                                                                                                                          // 095
	virtual void         Unk_96();                                                                                                                          // 096
	virtual void         Unk_97();                                                                                                                          // 097
	virtual float        GetGravityScale();                                                                                                                 // 098 - new
	virtual void         Unk_99();                                                                                                                          // 099
	virtual void         Unk_9A();                                                                                                                          // 09A
	virtual void         Unk_9B();                                                                                                                          // 09B
	virtual void         Unk_9C();                                                                                                                          // 09C
	virtual void         Unk_9D();                                                                                                                          // 09D
	virtual void         Unk_9E();                                                                                                                          // 09E
	virtual bool         IsChild() const;                                                                                                                   // 09F
	virtual void         Unk_A0();                                                                                                                          // 0A0
	virtual void         Unk_A1();                                                                                                                          // 0A1
	virtual void         Unk_A2();                                                                                                                          // 0A2
	virtual void         Unk_A3();                                                                                                                          // 0A3
	virtual void         Unk_A4();                                                                                                                          // 0A4
	virtual void         Unk_A5();                                                                                                                          // 0A5
	virtual void         Unk_A6();                                                                                                                          // 0A6
	virtual void         Unk_A7();                                                                                                                          // 0A7
	virtual void         Unk_A8();                                                                                                                          // 0A8
	virtual void         Unk_A9();                                                                                                                          // 0A9
	virtual void         Unk_AA();                                                                                                                          // 0AA
	virtual void         Unk_AB();                                                                                                                          // 0AB - { return Get3D(a_objectOut) };?
	virtual void         Unk_AC();                                                                                                                          // 0AC - Get3D(NiPointer<NiAVObject>&)?
	virtual void         Unk_AD();                                                                                                                          // 0AD
	virtual void         Unk_AE();                                                                                                                          // 0AE
	virtual void         Unk_AF();                                                                                                                          // 0AF
	virtual TESRace* GetVisualsRace() const;                                                                                                            // 0B0
	virtual void         Unk_B1();                                                                                                                          // 0B1
	virtual void         Unk_B2();                                                                                                                          // 0B2
	virtual void         Unk_B3();                                                                                                                          // 0B3
	virtual NiPoint3     GetBoundMin() const;                                                                                                               // 0B4
	virtual NiPoint3     GetBoundMax() const;                                                                                                               // 0B5
	virtual void         Unk_B6();                                                                                                                          // 0B6
	virtual void         Unk_B7();                                                                                                                          // 0B7
	virtual void         Unk_B8();                                                                                                                          // 0B8
	virtual void         Unk_B9();                                                                                                                          // 0B9
	virtual void         Unk_BA();                                                                                                                          // 0BA
	virtual void         Unk_BB();                                                                                                                          // 0BB
	virtual void         Unk_BC();                                                                                                                          // 0BC
	virtual void         Unk_BD();                                                                                                                          // 0BD
	virtual void         Unk_BE();                                                                                                                          // 0BE
	virtual void         Unk_BF();                                                                                                                          // 0BF
	virtual void         Unk_C0();                                                                                                                          // 0C0
	virtual void         Unk_C1();                                                                                                                          // 0C1
	virtual void         Unk_C2();                                                                                                                          // 0C2
	virtual void         Unk_C3();                                                                                                                          // 0C3
	virtual void         Unk_C4();                                                                                                                          // 0C4
	virtual void         Unk_C5();                                                                                                                          // 0C5
	virtual void         Unk_C6();                                                                                                                          // 0C6
	virtual void         Unk_C7();                                                                                                                          // 0C7
	virtual void         Unk_C8();                                                                                                                          // 0C8
	virtual void         Unk_C9();                                                                                                                          // 0C9
	virtual void         Unk_CA();                                                                                                                          // 0CA
	virtual void         Unk_CB();                                                                                                                          // 0CB
	virtual void         Unk_CC();                                                                                                                          // 0CC
	virtual void         Unk_CD();                                                                                                                          // 0CD
	virtual void         Unk_CE();                                                                                                                          // 0CE
	virtual void         Unk_CF();                                                                                                                          // 0CF
	virtual void         Unk_D0();                                                                                                                          // 0D0
	virtual void         Unk_D1();                                                                                                                          // 0D1
	virtual void         Unk_D2();                                                                                                                          // 0D2
	virtual void         Unk_D3();                                                                                                                          // 0D3
	virtual void         Unk_D4();                                                                                                                          // 0D4
	virtual void         Unk_D5();                                                                                                                          // 0D5
	virtual void         Unk_D6();                                                                                                                          // 0D6
	virtual void         Unk_D7();                                                                                                                          // 0D7
	virtual void         Unk_D8();                                                                                                                          // 0D8
	virtual void         Unk_D9();                                                                                                                          // 0D9
	virtual void         Unk_DA();                                                                                                                          // 0DA
	virtual void         Unk_DB();                                                                                                                          // 0DB
	virtual void         Unk_DC();                                                                                                                          // 0DC
	virtual void         Unk_DD();                                                                                                                          // 0DD
	virtual void         Unk_DE();                                                                                                                          // 0DE
	virtual void         Unk_DF();                                                                                                                          // 0DF
	virtual void         Unk_E0();                                                                                                                          // 0E0
	virtual void         Unk_E1();                                                                                                                          // 0E1
	virtual void         Unk_E2();                                                                                                                          // 0E2
	virtual void         Unk_E3();                                                                                                                          // 0E3
	virtual void         Unk_E4();                                                                                                                          // 0E4
	virtual void         Unk_E5();                                                                                                                          // 0E5
	virtual void         Unk_E6();                                                                                                                          // 0E6
	virtual void         Unk_E7();                                                                                                                          // 0E7
	virtual void         Unk_E8();                                                                                                                          // 0E8
	virtual void         Unk_E9();                                                                                                                          // 0E9
	virtual void         Unk_EA();                                                                                                                          // 0EA
	virtual void         Unk_EB();                                                                                                                          // 0EB
	virtual void         Unk_EC();                                                                                                                          // 0EC
	virtual void         Unk_ED();                                                                                                                          // 0ED
	virtual void         Unk_EE();                                                                                                                          // 0EE
	virtual void         Unk_EF();                                                                                                                          // 0EF
	virtual void         Unk_F0();                                                                                                                          // 0F0
	virtual void         Unk_F1();                                                                                                                          // 0F1
	virtual void         Unk_F2();                                                                                                                          // 0F2
	virtual void         Unk_F3();                                                                                                                          // 0F3
	virtual void         Unk_F4();                                                                                                                          // 0F4
	virtual void         Unk_F5();                                                                                                                          // 0F5
	virtual void         Unk_F6();                                                                                                                          // 0F6
	virtual void         Unk_F7();                                                                                                                          // 0F7
	virtual void         Unk_F8();                                                                                                                          // 0F8
	virtual void         Unk_F9();                                                                                                                          // 0F9
	virtual void         Unk_FA();                                                                                                                          // 0FA
	virtual void         Unk_FB();                                                                                                                          // 0FB
	virtual void         Unk_FC();                                                                                                                          // 0FC
	virtual void         Unk_FD();                                                                                                                          // 0FD
	virtual void         Unk_FE();                                                                                                                          // 0FE
	virtual void         Unk_FF();                                                                                                                          // 0FF
	virtual void         Unk_100();                                                                                                                         // 100
	virtual void         Unk_101();                                                                                                                         // 101
	virtual void         Unk_102();                                                                                                                         // 102
	virtual void         Unk_103();                                                                                                                         // 103
	virtual void         Unk_104();                                                                                                                         // 104
	virtual void         Unk_105();                                                                                                                         // 105
	virtual void         Unk_106();                                                                                                                         // 106
	virtual void         Unk_107();                                                                                                                         // 107
	virtual void         Unk_108();                                                                                                                         // 108
	virtual void         Unk_109();                                                                                                                         // 109
	virtual void         Unk_10A();                                                                                                                         // 10A
	virtual void         Unk_10B();                                                                                                                         // 10B
	virtual void         Unk_10C();                                                                                                                         // 10C
	virtual bool         IsDead(bool a_notEssential) const;                                                                                                 // 10D
	virtual bool         ProcessInWater(u32 a_bodyID, float a_waterHeight, float a_deltaTime);                                                    // 10E
	virtual void         Unk_10F();                                                                                                                         // 10F
	virtual void         Unk_110();                                                                                                                         // 110
	virtual void         Unk_111();                                                                                                                         // 111
	virtual void         Unk_112();                                                                                                                         // 112
	virtual void         Unk_113();                                                                                                                         // 113
	virtual void         Unk_114();                                                                                                                         // 114
	virtual void         Unk_115();                                                                                                                         // 115
	virtual void         Unk_116();                                                                                                                         // 116
	virtual void         Unk_117();                                                                                                                         // 117
	virtual void         Unk_118();                                                                                                                         // 118
	virtual void         Unk_119();                                                                                                                         // 119
	virtual void         Unk_11A();                                                                                                                         // 11A
	virtual void         Unk_11B();                                                                                                                         // 11B
	virtual void         Unk_11C();                                                                                                                         // 11C
	virtual void         Unk_11D();                                                                                                                         // 11D
	virtual void         Unk_11E();                                                                                                                         // 11E
	virtual void         Unk_11F();                                                                                                                         // 11F
	virtual void         Unk_120();                                                                                                                         // 120
	virtual void         Unk_121();                                                                                                                         // 121
	virtual void         Unk_122();                                                                                                                         // 122
	virtual void         Unk_123();                                                                                                                         // 123
	virtual void         Unk_124();                                                                                                                         // 124
	virtual void         Unk_125();                                                                                                                         // 125
	virtual void         Unk_126();                                                                                                                         // 126
	virtual void         Unk_127();                                                                                                                         // 127
	virtual void         Unk_128();                                                                                                                         // 128
	virtual void         Unk_129();                                                                                                                         // 129
	virtual void         Unk_12A();                                                                                                                         // 12A
	virtual void         Unk_12B();                                                                                                                         // 12B
	virtual void         Unk_12C();                                                                                                                         // 12C
	virtual void         Unk_12D();                                                                                                                         // 12D
	virtual void         Unk_12E();                                                                                                                         // 12E
	virtual void         Unk_12F();                                                                                                                         // 12F

	// the following should be inherited when decoded properly
	void* BSTransformDeltaEvent;               // 38
	void* IMovementProcessMessageInterface;    // 40
	void* IPostAnimationChannelUpdateFunctor;  // 48
	void* BSAnimationGraphEvent;               // 50
	void* BGSInventoryListEvent;               // 58
	void* IAnimationGraphManagerHolder;        // 60
	void* IKeywordFormBase;                    // 68
	void* ActorValueOwner;                     // 70
	void* ActorValueChangedEvent;              // 78

	// members
	u32				unk80;          // 80
	u32				unk84;          // 84
	u64				unk88;          // 88
	u64				unk90;          // 90
	u32				unk98;          // 98
	u8				pad9C[4];       // 9C
	OBJ_REFR		data;           // A0
	u64				unkD0;          // D0
	u64				unkD8;          // D8
	TESObjectCELL*	parentCell;     // E0
	void*			loadedData;     // E8
	u64				unkF0;          // F0
	u64				extraDataList;  // F8
	u64				unk100;         // 100
	u16				scale;          // 108
	u8				unk10A;         // 10A
	u8				unk10B;         // 10B

	MEMBER_FN_PREFIX(TESObjectREFR);
	DEFINE_MEMBER_FN(IsInSpaceship, bool, 0x02B3A714)
	DEFINE_MEMBER_FN(IsInSpace, bool, 0x01A0E1C8)
	DEFINE_MEMBER_FN(HasKeyword, bool, 0x0139EDB8, BGSKeyword*);
};
static_assert(sizeof(TESObjectREFR) == 0x110);

class Actor : public TESObjectREFR
{
public:
	~Actor() override;  // 00

	// add
	virtual void         Unk_130();                                     // 130
	virtual void         Unk_131();                                     // 131
	virtual void         Unk_132();                                     // 132
	virtual void         Unk_133();                                     // 133
	virtual void         Unk_134();                                     // 134
	virtual void         Unk_135();                                     // 135
	virtual void         Unk_136();                                     // 136
	virtual void         Unk_137();                                     // 137
	virtual void         Unk_138();                                     // 138
	virtual void         Unk_139();                                     // 139
	virtual void         Unk_13A();                                     // 13A
	virtual void         Unk_13B();                                     // 13B
	virtual void         Unk_13C();                                     // 13C
	virtual void         Unk_13D();                                     // 13D
	virtual void         Unk_13E();                                     // 13E
	virtual void         Update(float a_delta);                         // 13F
	virtual void         Unk_140();                                     // 140
	virtual void         Unk_141();                                     // 141
	virtual void         Unk_142();                                     // 142
	virtual void         Unk_143();                                     // 143
	virtual void         Unk_144();                                     // 144
	virtual void         Unk_145();                                     // 145
	virtual void         Unk_146();                                     // 146
	virtual void         Unk_147();                                     // 147
	virtual void         Unk_148();                                     // 148
	virtual void         Unk_149();                                     // 149
	virtual void         Unk_14A();                                     // 14A
	virtual void         Unk_14B();                                     // 14B
	virtual void         Unk_14C();                                     // 14C
	virtual void         Unk_14D();                                     // 14D
	virtual void         Unk_14E();                                     // 14E
	virtual void         Unk_14F();                                     // 14F
	virtual void         Unk_150();                                     // 150
	virtual void         Unk_151();                                     // 151
	virtual void         Unk_152();                                     // 152
	virtual void         Unk_153();                                     // 153
	virtual void         Unk_154();                                     // 154
	virtual void         Unk_155();                                     // 155
	virtual void         Unk_156();                                     // 156
	virtual void         Unk_157();                                     // 157
	virtual void         Unk_158();                                     // 158
	virtual void         Unk_159();                                     // 159
	virtual void         Unk_15A();                                     // 15A
	virtual void         Unk_15B();                                     // 15B
	virtual void         Unk_15C();                                     // 15C
	virtual void         Unk_15D();                                     // 15D
	virtual void         Unk_15E();                                     // 15E
	virtual void         Unk_15F();                                     // 15F
	virtual CombatGroup* GetCombatGroup();                              // 160
	virtual void         SetCombatGroup(CombatGroup* a_group);          // 161
	virtual bool         CheckValidTarget(TESObjectREFR& a_ref) const;  // 162
	virtual void         Unk_163();                                     // 163
	virtual void         Unk_164();                                     // 164
	virtual void         Unk_165();                                     // 165
	virtual void         Unk_166();                                     // 166
	virtual void         Unk_167();                                     // 167
	virtual void         Unk_168();                                     // 168
	virtual void         Unk_169();                                     // 169
	virtual void         Unk_16A();                                     // 16A
	virtual void         Unk_16B();                                     // 16B
	virtual bool         IsInCombat() const;                            // 16C
	virtual void         Unk_16D();                                     // 16D
	virtual void         Unk_16E();                                     // 16E
	virtual void         Unk_16F();                                     // 16F
	virtual void         SetLifeState(u32 a_state);           // 170
	virtual void         Unk_171();                                     // 171
	virtual void         Unk_172();                                     // 172
	virtual void         Unk_173();                                     // 173
	virtual void         Unk_174();                                     // 174
	virtual void         Unk_175();                                     // 175
	virtual void         Unk_176();                                     // 176
	virtual void         Unk_177();                                     // 177
	virtual void         Unk_178();                                     // 178
	virtual void         Unk_179();                                     // 179
	virtual void         Unk_17A();                                     // 17A
	virtual void         Unk_17B();                                     // 17B
	virtual void         Unk_17C();                                     // 17C
	virtual void         Unk_17D();                                     // 17D
	virtual void         Unk_17E();                                     // 17E
	virtual void         Unk_17F();                                     // 17F
	virtual void         Unk_180();                                     // 180
	virtual void         Unk_181();                                     // 181
	virtual void         Unk_182();                                     // 182
	virtual void         Unk_183();                                     // 183
	virtual void         Unk_184();                                     // 184
	virtual void         Unk_185();                                     // 185
	virtual void         Unk_186();                                     // 186
	virtual void         Unk_187();                                     // 187
	virtual void         Unk_188();                                     // 188
	virtual void         Unk_189();                                     // 189
	virtual void         Unk_18A();                                     // 18A
	virtual void         Unk_18B();                                     // 18B
	virtual void         Unk_18C();                                     // 18C
	virtual void         Unk_18D();                                     // 18D
	virtual void         Unk_18E();                                     // 18E
	virtual void         Unk_18F();                                     // 18F
	virtual void         Unk_190();                                     // 190
	virtual void         Unk_191();                                     // 191
	virtual void         Unk_192();                                     // 192
	virtual void         Unk_193();                                     // 193
	virtual void         Unk_194();                                     // 194
	virtual void         Unk_195();                                     // 195
	virtual void         Unk_196();                                     // 196
	virtual void         Unk_197();                                     // 197
	virtual void         Unk_198();                                     // 198
	virtual void         Unk_199();                                     // 199
	virtual void         Unk_19A();                                     // 19A
	virtual void         Unk_19B();                                     // 19B
	virtual void         Unk_19C();                                     // 19C
	virtual void         Unk_19D();                                     // 19D
	virtual void         Unk_19E();                                     // 19E
	virtual void         Unk_19F();                                     // 19F
	virtual void         Unk_1A0();                                     // 1A0
	virtual void         Unk_1A1();                                     // 1A1

	// More...
};

//inline RelocPtr<Actor*>     g_playerCharacter(0x05595BA8);
