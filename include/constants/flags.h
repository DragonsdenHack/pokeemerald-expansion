#ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"

// Temporary Flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)
#define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)  // Unused Flag
#define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)  // Unused Flag
#define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)  // Unused Flag
#define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)  // Unused Flag
#define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)  // Unused Flag
#define FLAG_TEMP_F      (TEMP_FLAGS_START + 0xF)  // Unused Flag
#define FLAG_TEMP_10     (TEMP_FLAGS_START + 0x10) // Unused Flag
#define FLAG_TEMP_11     (TEMP_FLAGS_START + 0x11)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + 0x12)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + 0x13)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + 0x14)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + 0x15)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + 0x16)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + 0x17)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + 0x18)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + 0x19)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + 0x1A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + 0x1B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + 0x1C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + 0x1D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + 0x1E)
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + 0x1F)
#define TEMP_FLAGS_END   FLAG_TEMP_1F
        
#define FLAG_SYS_NO_COLLISION       0x20 // Unused Flag //DEBUG
#define FLAG_SYS_NO_ENCOUNTER       0x21 // Unused Flag //DEBUG
#define FLAG_SYS_NO_TRAINER_SEE     0x22 // Unused Flag //DEBUG
#define FLAG_SYS_NO_BAG_USE         0x23 // Unused Flag //DEBUG
#define FLAG_SYS_NO_CATCHING        0x24 // Unused Flag //DEBUG
#define FLAG_SYS_PC_FROM_DEBUG_MENU 0x25 // Unused Flag //DEBUG
#define FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES    0x26 // Unused Flag
#define FOUND_FIRST_SWITCH    0x27 // Unused Flag
#define FLAG_UNUSED_0x028    0x28 // Unused Flag
#define FLAG_UNUSED_0x029    0x29 // Unused Flag
#define FLAG_UNUSED_0x02A    0x2A // Unused Flag
#define FLAG_UNUSED_0x02B    0x2B // Unused Flag
#define FLAG_UNUSED_0x02C    0x2C // Unused Flag
#define FLAG_UNUSED_0x02D    0x2D // Unused Flag
#define FLAG_UNUSED_0x02E    0x2E // Unused Flag
#define FLAG_UNUSED_0x02F    0x2F // Unused Flag
#define FLAG_UNUSED_0x030    0x30 // Unused Flag
#define FLAG_UNUSED_0x031    0x31 // Unused Flag
#define FLAG_UNUSED_0x032    0x32 // Unused Flag
#define FLAG_UNUSED_0x033    0x33 // Unused Flag
#define FLAG_UNUSED_0x034    0x34 // Unused Flag
#define FLAG_UNUSED_0x035    0x35 // Unused Flag
#define FLAG_UNUSED_0x036    0x36 // Unused Flag
#define FLAG_UNUSED_0x037    0x37 // Unused Flag
#define FLAG_UNUSED_0x038    0x38 // Unused Flag
#define FLAG_UNUSED_0x039    0x39 // Unused Flag
#define FLAG_UNUSED_0x03A    0x3A // Unused Flag
#define FLAG_UNUSED_0x03B    0x3B // Unused Flag
#define FLAG_UNUSED_0x03C    0x3C // Unused Flag
#define FLAG_UNUSED_0x03D    0x3D // Unused Flag
#define FLAG_UNUSED_0x03E    0x3E // Unused Flag
#define FLAG_UNUSED_0x03F    0x3F // Unused Flag
#define FLAG_UNUSED_0x040    0x40 // Unused Flag
#define FLAG_UNUSED_0x041    0x41 // Unused Flag
#define FLAG_UNUSED_0x042    0x42 // Unused Flag
#define FLAG_UNUSED_0x043    0x43 // Unused Flag
#define FLAG_UNUSED_0x044    0x44 // Unused Flag
#define FLAG_UNUSED_0x045    0x45 // Unused Flag
#define FLAG_UNUSED_0x046    0x46 // Unused Flag
#define FLAG_UNUSED_0x047    0x47 // Unused Flag
#define FLAG_UNUSED_0x048    0x48 // Unused Flag
#define FLAG_UNUSED_0x049    0x49 // Unused Flag
#define FLAG_UNUSED_0x04A    0x4A // Unused Flag
#define FLAG_UNUSED_0x04B    0x4B // Unused Flag
#define FLAG_UNUSED_0x04C    0x4C // Unused Flag
#define FLAG_UNUSED_0x04D    0x4D // Unused Flag
#define FLAG_UNUSED_0x04E    0x4E // Unused Flag
#define FLAG_UNUSED_0x04F    0x4F // Unused Flag

// Scripts
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL  0x50
#define FLAG_SET_WALL_CLOCK                      0x51
#define FLAG_RESCUED_BIRCH                       0x52
#define FLAG_LEGENDARIES_IN_SOOTOPOLIS           0x53

#define FLAG_UNUSED_0x054                    0x54  // Unused Flag
#define FLAG_UNUSED_0x055                    0x55  // Unused Flag

#define FLAG_HIDE_CONTEST_POKE_BALL          0x56  // Always set after new game, object it hides is added directly
#define FLAG_MET_RIVAL_MOM                   0x57
#define FLAG_BIRCH_AIDE_MET                  0x58
#define FLAG_DECLINED_BIKE                   0x59
#define FLAG_RECEIVED_BIKE                   0x5A
#define FLAG_WATTSON_REMATCH_AVAILABLE       0x5B
#define FLAG_COLLECTED_ALL_SILVER_SYMBOLS    0x5C
#define FLAG_GOOD_LUCK_SAFARI_ZONE           0x5D // Set after talking to NPC blocking Safari Zone entrance/exit once.
#define FLAG_RECEIVED_WAILMER_PAIL           0x5E
#define FLAG_RECEIVED_POKEBLOCK_CASE         0x5F
#define FLAG_RECEIVED_SECRET_POWER           0x60
#define FLAG_MET_TEAM_AQUA_HARBOR            0x61
#define FLAG_TV_EXPLAINED                    0x62
#define FLAG_MAUVILLE_GYM_BARRIERS_STATE     0x63
#define FLAG_MOSSDEEP_GYM_SWITCH_1           0x64 // Leftover from the RS version of Mossdeep Gym, functionally unused
#define FLAG_MOSSDEEP_GYM_SWITCH_2           0x65 //
#define FLAG_MOSSDEEP_GYM_SWITCH_3           0x66 //
#define FLAG_MOSSDEEP_GYM_SWITCH_4           0x67 //



#define FLAG_OCEANIC_MUSEUM_MET_REPORTER     0x69
#define FLAG_RECEIVED_HM04                   0x6A
#define FLAG_RECEIVED_HM06                   0x6B
#define FLAG_WHITEOUT_TO_LAVARIDGE           0x6C // Set after defeating Flannery, so the player cant white out from poison before receiving Go Goggles
#define FLAG_RECEIVED_HM05                   0x6D
#define FLAG_RECEIVED_HM02                   0x6E
#define FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT  0x6F
#define FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE  0x70
#define FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE 0x71 // Unused Flag. Used in R/S to indicate whether player defeated or caught Groudon/Kyogre in Cave of Origin.
#define FLAG_SCOTT_CALL_BATTLE_FRONTIER      0x72 // Used in order to activate a phone call from Scott, inviting the player to the SS Tidal.
#define FLAG_RECEIVED_METEORITE              0x73
#define FLAG_ADVENTURE_STARTED               0x74 // RECEIVED Pokédex.
#define FLAG_DEFEATED_MAGMA_SPACE_CENTER     0x75 // Set when Team Magma is defeated at Mossdeep's Space Center.
#define FLAG_MET_HIDDEN_POWER_GIVER          0x76

#define FLAG_CANCEL_BATTLE_ROOM_CHALLENGE    0x77

#define FLAG_LANDMARK_MIRAGE_TOWER           0x78
#define FLAG_RECEIVED_TM31                   0x79
#define FLAG_RECEIVED_HM03                   0x7A
#define FLAG_RECEIVED_HM08                   0x7B
#define FLAG_REGISTER_RIVAL_POKENAV          0x7C
#define FLAG_DEFEATED_RIVAL_ROUTE_104        0x7D
#define FLAG_DEFEATED_WALLY_VICTORY_ROAD     0x7E
#define FLAG_MET_PRETTY_PETAL_SHOP_OWNER     0x7F
#define FLAG_ENABLE_ROXANNE_FIRST_CALL       0x80 // Set after defeating Brawly. This will activate a call with Roxanne in order to register her.
#define FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN  0x81
#define FLAG_DEFEATED_RIVAL_ROUTE103         0x82
#define FLAG_RECEIVED_DOLL_LANETTE           0x83
#define FLAG_RECEIVED_POTION_OLDALE          0x84
#define FLAG_RECEIVED_AMULET_COIN            0x85
#define FLAG_PENDING_DAYCARE_EGG             0x86
#define FLAG_THANKED_FOR_PLAYING_WITH_WALLY  0x87
#define FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL 0x88 // Set after defeating Wally outside Mauville Gym. Will activate a call later to register Wally.
#define FLAG_RECEIVED_HM01                   0x89
#define FLAG_SCOTT_CALL_FORTREE_GYM          0x8A // Triggers call from Scott after defeating Winona
#define FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY   0x8B
#define FLAG_RECEIVED_6_SODA_POP             0x8C
#define FLAG_DEFEATED_SEASHORE_HOUSE         0x8D
#define FLAG_DEVON_GOODS_STOLEN              0x8E
#define FLAG_RECOVERED_DEVON_GOODS           0x8F
#define FLAG_RETURNED_DEVON_GOODS            0x90
#define FLAG_CAUGHT_LUGIA                    0x91
#define FLAG_CAUGHT_HO_OH                    0x92
#define FLAG_MR_BRINEY_SAILING_INTRO         0x93
#define FLAG_DOCK_REJECTED_DEVON_GOODS       0x94
#define FLAG_DELIVERED_DEVON_GOODS           0x95
#define FLAG_RECEIVED_CONTEST_PASS           0x96 // Unused, leftover from R/S
#define FLAG_RECEIVED_CASTFORM               0x97
#define FLAG_RECEIVED_SUPER_ROD              0x98
#define FLAG_RUSTBORO_NPC_TRADE_COMPLETED    0x99
#define FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED  0x9A
#define FLAG_FORTREE_NPC_TRADE_COMPLETED     0x9B
#define FLAG_BATTLE_FRONTIER_TRADE_DONE      0x9C
#define FLAG_FORCE_MIRAGE_TOWER_VISIBLE      0x9D
#define FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE   0x9E
#define FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN 0x9F
#define FLAG_COOL_PAINTING_MADE              0xA0
#define FLAG_BEAUTY_PAINTING_MADE            0xA1
#define FLAG_CUTE_PAINTING_MADE              0xA2
#define FLAG_SMART_PAINTING_MADE             0xA3
#define FLAG_TOUGH_PAINTING_MADE             0xA4
#define FLAG_RECEIVED_TM39                   0xA5
#define FLAG_RECEIVED_TM08                   0xA6
#define FLAG_RECEIVED_TM34                   0xA7
#define FLAG_RECEIVED_TM50                   0xA8
#define FLAG_RECEIVED_TM42                   0xA9
#define FLAG_RECEIVED_TM40                   0xAA
#define FLAG_RECEIVED_TM04                   0xAB
#define FLAG_RECEIVED_TM03                   0xAC
#define FLAG_DECORATION_0                    0xAD
#define FLAG_DECORATION_1                    0xAE
#define FLAG_DECORATION_2                    0xAF
#define FLAG_DECORATION_3                    0xB0
#define FLAG_DECORATION_4                    0xB1
#define FLAG_DECORATION_5                    0xB2
#define FLAG_DECORATION_6                    0xB3
#define FLAG_DECORATION_7                    0xB4
#define FLAG_DECORATION_8                    0xB5
#define FLAG_DECORATION_9                    0xB6
#define FLAG_DECORATION_10                   0xB7
#define FLAG_DECORATION_11                   0xB8
#define FLAG_DECORATION_12                   0xB9
#define FLAG_DECORATION_13                   0xBA
#define FLAG_DECORATION_14                   0xBB
#define FLAG_RECEIVED_POKENAV                0xBC
#define FLAG_DELIVERED_STEVEN_LETTER         0xBD
#define FLAG_DEFEATED_WALLY_MAUVILLE         0xBE
#define FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F  0xBF
#define FLAG_RECEIVED_SUN_STONE_MOSSDEEP     0xC0
#define FLAG_WALLY_SPEECH                    0xC1
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1   0xC2 // Leftover from the RS version of Puzzle Room 7, functionally unused
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2   0xC3 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3   0xC4 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4   0xC5 //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5   0xC6 //
#define FLAG_RUSTURF_TUNNEL_OPENED           0xC7
#define FLAG_RECEIVED_RED_SCARF              0xC8
#define FLAG_RECEIVED_BLUE_SCARF             0xC9
#define FLAG_RECEIVED_PINK_SCARF             0xCA
#define FLAG_RECEIVED_GREEN_SCARF            0xCB
#define FLAG_RECEIVED_YELLOW_SCARF           0xCC
#define FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER    0xCD
#define FLAG_ENCOUNTERED_LATIAS_OR_LATIOS    0xCE
#define FLAG_MET_ARCHIE_METEOR_FALLS         0xCF
#define FLAG_GOT_BASEMENT_KEY_FROM_WATTSON   0xD0
#define FLAG_GOT_TM24_FROM_WATTSON           0xD1
#define FLAG_FAN_CLUB_STRENGTH_SHARED        0xD2 // Set when you rate the strength of another trainer in Lilycove's Trainer Fan Club.
#define FLAG_DEFEATED_RIVAL_RUSTBORO         0xD3
#define FLAG_RECEIVED_RED_OR_BLUE_ORB        0xD4
#define FLAG_RECEIVED_PREMIER_BALL_RUSTBORO  0xD5
#define FLAG_ENABLE_WALLY_MATCH_CALL         0xD6
#define FLAG_ENABLE_SCOTT_MATCH_CALL         0xD7
#define FLAG_ENABLE_MOM_MATCH_CALL           0xD8
#define FLAG_MET_DIVING_TREASURE_HUNTER      0xD9
#define FLAG_MET_WAILMER_TRAINER             0xDA
#define FLAG_EVIL_LEADER_PLEASE_STOP         0xDB

#define FLAG_NEVER_SET_0x0DC                 0xDC // This flag is read, but never written to

#define FLAG_RECEIVED_GO_GOGGLES             0xDD
#define FLAG_WINGULL_SENT_ON_ERRAND          0xDE
#define FLAG_RECEIVED_MENTAL_HERB            0xDF
#define FLAG_WINGULL_DELIVERED_MAIL          0xE0
#define FLAG_RECEIVED_20_COINS               0xE1
#define FLAG_RECEIVED_STARTER_DOLL           0xE2
#define FLAG_RECEIVED_GOOD_ROD               0xE3
#define FLAG_REGI_DOORS_OPENED               0xE4
#define FLAG_RECEIVED_TM27                   0xE5
#define FLAG_RECEIVED_TM36                   0xE6
#define FLAG_RECEIVED_TM05                   0xE7
#define FLAG_RECEIVED_TM19                   0xE8

#define FLAG_UNUSED_0x0E9                    0xE9 // Unused Flag

#define FLAG_RECEIVED_TM44                   0xEA
#define FLAG_RECEIVED_TM45                   0xEB
#define FLAG_RECEIVED_GLASS_ORNAMENT         0xEC
#define FLAG_RECEIVED_SILVER_SHIELD          0xED
#define FLAG_RECEIVED_GOLD_SHIELD            0xEE
#define FLAG_USED_STORAGE_KEY                0xEF
#define FLAG_USED_ROOM_1_KEY                 0xF0
#define FLAG_USED_ROOM_2_KEY                 0xF1
#define FLAG_USED_ROOM_4_KEY                 0xF2
#define FLAG_USED_ROOM_6_KEY                 0xF3
#define FLAG_MET_PROF_COZMO                  0xF4
#define FLAG_RECEIVED_WAILMER_DOLL           0xF5
#define FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104 0xF6
#define FLAG_DEFEATED_SS_TIDAL_TRAINERS      0xF7
#define FLAG_RECEIVED_SPELON_BERRY           0xF8
#define FLAG_RECEIVED_PAMTRE_BERRY           0xF9
#define FLAG_RECEIVED_WATMEL_BERRY           0xFA
#define FLAG_RECEIVED_DURIN_BERRY            0xFB
#define FLAG_RECEIVED_BELUE_BERRY            0xFC
#define FLAG_ENABLE_RIVAL_MATCH_CALL         0xFD
#define FLAG_RECEIVED_CHARCOAL               0xFE
#define FLAG_LATIOS_OR_LATIAS_ROAMING        0xFF
#define FLAG_RECEIVED_REPEAT_BALL            0x100
#define FLAG_RECEIVED_OLD_ROD                0x101
#define FLAG_RECEIVED_COIN_CASE              0x102
#define FLAG_RETURNED_RED_OR_BLUE_ORB        0x103
#define FLAG_RECEIVED_TM49                   0x104
#define FLAG_RECEIVED_TM28                   0x105
#define FLAG_RECEIVED_TM09                   0x106
#define FLAG_ENTERED_ELITE_FOUR              0x107
#define FLAG_RECEIVED_TM10                   0x108
#define FLAG_RECEIVED_TM41                   0x109
#define FLAG_RECEIVED_LAVARIDGE_EGG          0x10A
#define FLAG_RECEIVED_REVIVED_FOSSIL_MON     0x10B
#define FLAG_SECRET_BASE_REGISTRY_ENABLED    0x10C
#define FLAG_RECEIVED_TM46                   0x10D
#define FLAG_CONTEST_SKETCH_CREATED          0x10E  // Set but never read
#define FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE   0x10F
#define FLAG_RECEIVED_EXP_SHARE              0x110
#define FLAG_POKERUS_EXPLAINED               0x111
#define FLAG_RECEIVED_RUNNING_SHOES          0x112
#define FLAG_RECEIVED_QUICK_CLAW             0x113
#define FLAG_RECEIVED_KINGS_ROCK             0x114
#define FLAG_RECEIVED_MACHO_BRACE            0x115
#define FLAG_RECEIVED_SOOTHE_BELL            0x116
#define FLAG_RECEIVED_WHITE_HERB             0x117
#define FLAG_RECEIVED_SOFT_SAND              0x118
#define FLAG_ENABLE_PROF_BIRCH_MATCH_CALL    0x119
#define FLAG_RECEIVED_CLEANSE_TAG            0x11A
#define FLAG_RECEIVED_FOCUS_BAND             0x11B
#define FLAG_DECLINED_WALLY_BATTLE_MAUVILLE  0x11C
#define FLAG_RECEIVED_DEVON_SCOPE            0x11D
#define FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE  0x11E
#define FLAG_MET_DEVON_EMPLOYEE              0x11F
#define FLAG_MET_RIVAL_RUSTBORO              0x120
#define FLAG_RECEIVED_SILK_SCARF             0x121
#define FLAG_NOT_READY_FOR_BATTLE_ROUTE_120  0x122
#define FLAG_RECEIVED_SS_TICKET              0x123
#define FLAG_MET_RIVAL_LILYCOVE              0x124
#define FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE 0x125
#define FLAG_EXCHANGED_SCANNER               0x126
#define FLAG_KECLEON_FLED_FORTREE            0x127
#define FLAG_PETALBURG_MART_EXPANDED_ITEMS   0x128
#define FLAG_RECEIVED_MIRACLE_SEED           0x129
#define FLAG_RECEIVED_BELDUM                 0x12A
#define FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK   0x12B
#define FLAG_MET_FANCLUB_YOUNGER_BROTHER     0x12C
#define FLAG_RIVAL_LEFT_FOR_ROUTE103         0x12D
#define FLAG_OMIT_DIVE_FROM_STEVEN_LETTER    0x12E
#define FLAG_HAS_MATCH_CALL                  0x12F
#define FLAG_ADDED_MATCH_CALL_TO_POKENAV     0x130
#define FLAG_REGISTERED_STEVEN_POKENAV       0x131
#define FLAG_ENABLE_NORMAN_MATCH_CALL        0x132
#define FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN 0x133 // Set after you follow Steven to the entrance of the Cave of Origin.
#define FLAG_MET_ARCHIE_SOOTOPOLIS           0x134
#define FLAG_MET_MAXIE_SOOTOPOLIS            0x135
#define FLAG_MET_SCOTT_RUSTBORO              0x136
#define FLAG_WALLACE_GOES_TO_SKY_PILLAR      0x137 // Set after speaking to Wallace within the Cave of Origin.
#define FLAG_RECEIVED_HM07                   0x138
#define FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS    0x139
#define FLAG_RECEIVED_AURORA_TICKET          0x13A
#define FLAG_RECEIVED_MYSTIC_TICKET          0x13B
#define FLAG_RECEIVED_OLD_SEA_MAP            0x13C
#define FLAG_WONDER_CARD_UNUSED_1            0x13D // These Wonder Card flags are referenced but never set
#define FLAG_WONDER_CARD_UNUSED_2            0x13E
#define FLAG_WONDER_CARD_UNUSED_3            0x13F
#define FLAG_WONDER_CARD_UNUSED_4            0x140
#define FLAG_WONDER_CARD_UNUSED_5            0x141
#define FLAG_WONDER_CARD_UNUSED_6            0x142
#define FLAG_WONDER_CARD_UNUSED_7            0x143
#define FLAG_WONDER_CARD_UNUSED_8            0x144
#define FLAG_WONDER_CARD_UNUSED_9            0x145
#define FLAG_WONDER_CARD_UNUSED_10           0x146
#define FLAG_WONDER_CARD_UNUSED_11           0x147
#define FLAG_WONDER_CARD_UNUSED_12           0x148
#define FLAG_WONDER_CARD_UNUSED_13           0x149
#define FLAG_WONDER_CARD_UNUSED_14           0x14A
#define FLAG_WONDER_CARD_UNUSED_15           0x14B
#define FLAG_WONDER_CARD_UNUSED_16           0x14C
#define FLAG_WONDER_CARD_UNUSED_17           0x14D
#define NUM_WONDER_CARD_FLAGS                (1 + FLAG_WONDER_CARD_UNUSED_17 - FLAG_RECEIVED_AURORA_TICKET)

#define FLAG_MIRAGE_TOWER_VISIBLE            0x14E
#define FLAG_CHOSE_ROOT_FOSSIL               0x14F
#define FLAG_CHOSE_CLAW_FOSSIL               0x150
#define FLAG_RECEIVED_POWDER_JAR             0x151

#define FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER 0x152

#define FLAG_MET_BATTLE_FRONTIER_BREEDER     0x153
#define FLAG_MET_BATTLE_FRONTIER_MANIAC      0x154
#define FLAG_ENTERED_CONTEST                 0x155
#define FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN  0x156
#define FLAG_MET_BATTLE_FRONTIER_GAMBLER     0x157
#define FLAG_ENABLE_MR_STONE_POKENAV         0x158
#define FLAG_NURSE_MENTIONS_GOLD_CARD        0x159
#define FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR  0x15A
#define FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR 0x15B

// Trainer Rematch Flags
#define FLAG_MATCH_CALL_REGISTERED           0x15C
#define FLAG_REMATCH_ROSE                    0x15D
#define FLAG_REMATCH_ANDRES                  0x15E
#define FLAG_REMATCH_DUSTY                   0x15F
#define FLAG_REMATCH_LOLA                    0x160
#define FLAG_REMATCH_RICKY                   0x161
#define FLAG_REMATCH_LILA_AND_ROY            0x162
#define FLAG_REMATCH_CRISTIN                 0x163
#define FLAG_REMATCH_BROOKE                  0x164
#define FLAG_REMATCH_WILTON                  0x165
#define FLAG_REMATCH_VALERIE                 0x166
#define FLAG_REMATCH_CINDY                   0x167
#define FLAG_REMATCH_THALIA                  0x168
#define FLAG_REMATCH_JESSICA                 0x169
#define FLAG_REMATCH_WINSTON                 0x16A
#define FLAG_REMATCH_STEVE                   0x16B
#define FLAG_REMATCH_TONY                    0x16C
#define FLAG_REMATCH_NOB                     0x16D
#define FLAG_REMATCH_KOJI                    0x16E
#define FLAG_REMATCH_FERNANDO                0x16F
#define FLAG_REMATCH_DALTON                  0x170
#define FLAG_REMATCH_BERNIE                  0x171
#define FLAG_REMATCH_ETHAN                   0x172
#define FLAG_REMATCH_JOHN_AND_JAY            0x173
#define FLAG_REMATCH_JEFFREY                 0x174
#define FLAG_REMATCH_CAMERON                 0x175
#define FLAG_REMATCH_JACKI                   0x176
#define FLAG_REMATCH_WALTER                  0x177
#define FLAG_REMATCH_KAREN                   0x178
#define FLAG_REMATCH_JERRY                   0x179
#define FLAG_REMATCH_ANNA_AND_MEG            0x17A
#define FLAG_REMATCH_ISABEL                  0x17B
#define FLAG_REMATCH_MIGUEL                  0x17C
#define FLAG_REMATCH_TIMOTHY                 0x17D
#define FLAG_REMATCH_SHELBY                  0x17E
#define FLAG_REMATCH_CALVIN                  0x17F
#define FLAG_REMATCH_ELLIOT                  0x180
#define FLAG_REMATCH_ISAIAH                  0x181
#define FLAG_REMATCH_MARIA                   0x182
#define FLAG_REMATCH_ABIGAIL                 0x183
#define FLAG_REMATCH_DYLAN                   0x184
#define FLAG_REMATCH_KATELYN                 0x185
#define FLAG_REMATCH_BENJAMIN                0x186
#define FLAG_REMATCH_PABLO                   0x187
#define FLAG_REMATCH_NICOLAS                 0x188
#define FLAG_REMATCH_ROBERT                  0x189
#define FLAG_REMATCH_LAO                     0x18A
#define FLAG_REMATCH_CYNDY                   0x18B
#define FLAG_REMATCH_MADELINE                0x18C
#define FLAG_REMATCH_JENNY                   0x18D
#define FLAG_REMATCH_DIANA                   0x18E
#define FLAG_REMATCH_AMY_AND_LIV             0x18F
#define FLAG_REMATCH_ERNEST                  0x190
#define FLAG_REMATCH_CORY                    0x191
#define FLAG_REMATCH_EDWIN                   0x192
#define FLAG_REMATCH_LYDIA                   0x193
#define FLAG_REMATCH_ISAAC                   0x194
#define FLAG_REMATCH_GABRIELLE               0x195
#define FLAG_REMATCH_CATHERINE               0x196
#define FLAG_REMATCH_JACKSON                 0x197
#define FLAG_REMATCH_HALEY                   0x198
#define FLAG_REMATCH_JAMES                   0x199
#define FLAG_REMATCH_TRENT                   0x19A
#define FLAG_REMATCH_SAWYER                  0x19B
#define FLAG_REMATCH_KIRA_AND_DAN            0x19C
#define FLAG_REMATCH_WALLY                   0x19D
#define FLAG_REMATCH_ROXANNE                 0x19E
#define FLAG_REMATCH_BRAWLY                  0x19F
#define FLAG_REMATCH_WATTSON                 0x1A0
#define FLAG_REMATCH_FLANNERY                0x1A1
#define FLAG_REMATCH_NORMAN                  0x1A2
#define FLAG_REMATCH_WINONA                  0x1A3
#define FLAG_REMATCH_TATE_AND_LIZA           0x1A4
// Note: FLAG_REMATCH_JUAN is handled by FLAG_ENABLE_JUAN_MATCH_CALL instead.
#define FLAG_REMATCH_SIDNEY                  0x1A5
#define FLAG_REMATCH_PHOEBE                  0x1A6
#define FLAG_REMATCH_GLACIA                  0x1A7
#define FLAG_REMATCH_DRAKE                   0x1A8
#define FLAG_REMATCH_WALLACE                 0x1A9



#define FLAG_DEFEATED_DEOXYS                 0x1AC
#define FLAG_BATTLED_DEOXYS                  0x1AD
#define FLAG_SHOWN_EON_TICKET                0x1AE
#define FLAG_SHOWN_AURORA_TICKET             0x1AF
#define FLAG_SHOWN_OLD_SEA_MAP               0x1B0
#define FLAG_MOVE_TUTOR_TAUGHT_SWAGGER       0x1B1
#define FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT       0x1B2
#define FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER   0x1B3
#define FLAG_MOVE_TUTOR_TAUGHT_MIMIC         0x1B4
#define FLAG_MOVE_TUTOR_TAUGHT_METRONOME     0x1B5
#define FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK    0x1B6
#define FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE    0x1B7
#define FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH  0x1B8
#define FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE   0x1B9
#define FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION     0x1BA
#define FLAG_DEFEATED_REGIROCK               0x1BB // COMBATE GUZZLORD
#define FLAG_DEFEATED_REGICE                 0x1BC // COMBATE BLACEPHALON
#define FLAG_DEFEATED_REGISTEEL              0x1BD
#define FLAG_DEFEATED_KYOGRE                 0x1BE
#define FLAG_DEFEATED_GROUDON                0x1BF
#define FLAG_DEFEATED_RAYQUAZA               0x1C0
#define FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE 0x1C1
#define FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE 0x1C2
#define FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE 0x1C3
#define FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT 0x1C4
#define FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT 0x1C5
#define FLAG_DEFEATED_SUDOWOODO              0x1C6
#define FLAG_DEFEATED_MEW                    0x1C7
#define FLAG_DEFEATED_LATIAS_OR_LATIOS       0x1C8
#define FLAG_CAUGHT_LATIAS_OR_LATIOS         0x1C9
#define FLAG_CAUGHT_MEW                      0x1CA
#define FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE 0x1CB
#define FLAG_MET_SCOTT_IN_VERDANTURF         0x1CC
#define FLAG_MET_SCOTT_IN_FALLARBOR          0x1CD
#define FLAG_MET_SCOTT_IN_LILYCOVE           0x1CE
#define FLAG_MET_SCOTT_IN_EVERGRANDE         0x1CF
#define FLAG_MET_SCOTT_ON_SS_TIDAL           0x1D0
#define FLAG_SCOTT_GIVES_BATTLE_POINTS       0x1D1
#define FLAG_COLLECTED_ALL_GOLD_SYMBOLS      0x1D2
#define FLAG_ENABLE_ROXANNE_MATCH_CALL       0x1D3
#define FLAG_ENABLE_BRAWLY_MATCH_CALL        0x1D4
#define FLAG_ENABLE_WATTSON_MATCH_CALL       0x1D5
#define FLAG_ENABLE_FLANNERY_MATCH_CALL      0x1D6
#define FLAG_ENABLE_WINONA_MATCH_CALL        0x1D7
#define FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL 0x1D8
#define FLAG_ENABLE_JUAN_MATCH_CALL          0x1D9

#define FLAG_UNUSED_0x1DA                    0x1DA // Unused Flag

#define FLAG_SHOWN_MYSTIC_TICKET             0x1DB
#define FLAG_DEFEATED_HO_OH                  0x1DC
#define FLAG_DEFEATED_LUGIA                  0x1DD

#define FLAG_UNUSED_0x1DE                    0x1DE // Unused Flag
#define FLAG_UNUSED_0x1DF                    0x1DF // Unused Flag
#define FLAG_UNUSED_0x1E0                    0x1E0 // Unused Flag
#define FLAG_UNUSED_0x1E1                    0x1E1 // Unused Flag
#define FLAG_UNUSED_0x1E2                    0x1E2 // Unused Flag

// Mystery Gift Flags (Unknown)
#define FLAG_MYSTERY_GIFT_DONE               0x1E4
#define FLAG_MYSTERY_GIFT_1                  0x1E5
#define FLAG_MYSTERY_GIFT_2                  0x1E6
#define FLAG_MYSTERY_GIFT_3                  0x1E7
#define FLAG_MYSTERY_GIFT_4                  0x1E8
#define FLAG_MYSTERY_GIFT_5                  0x1E9
#define FLAG_MYSTERY_GIFT_6                  0x1EA
#define FLAG_MYSTERY_GIFT_7                  0x1EB
#define FLAG_MYSTERY_GIFT_8                  0x1EC
#define FLAG_MYSTERY_GIFT_9                  0x1ED
#define FLAG_MYSTERY_GIFT_10                 0x1EE
#define FLAG_MYSTERY_GIFT_11                 0x1EF
#define FLAG_MYSTERY_GIFT_12                 0x1F0
#define FLAG_MYSTERY_GIFT_13                 0x1F1
#define FLAG_MYSTERY_GIFT_14                 0x1F2
#define FLAG_MYSTERY_GIFT_15                 0x1F3

// Hidden Items
#define FLAG_HIDDEN_ITEMS_START                                                         0x1F4
#define FLAG_HIDDEN_ITEM_LAVARIDGE_TOWN_ICE_HEAL             (FLAG_HIDDEN_ITEMS_START + 0x00)
#define FLAG_HIDDEN_ITEM_TRICK_HOUSE_NUGGET                  (FLAG_HIDDEN_ITEMS_START + 0x01)
#define FLAG_HIDDEN_ITEM_ROUTE_111_STARDUST                  (FLAG_HIDDEN_ITEMS_START + 0x02)
#define FLAG_HIDDEN_ITEM_ROUTE_113_ETHER                     (FLAG_HIDDEN_ITEMS_START + 0x03)
#define FLAG_HIDDEN_ITEM_ROUTE_114_CARBOS                    (FLAG_HIDDEN_ITEMS_START + 0x04)
#define FLAG_HIDDEN_ITEM_ROUTE_119_CALCIUM                   (FLAG_HIDDEN_ITEMS_START + 0x05)
#define FLAG_HIDDEN_ITEM_ROUTE_119_ULTRA_BALL                (FLAG_HIDDEN_ITEMS_START + 0x06)
#define FLAG_HIDDEN_ITEM_ROUTE_123_SUPER_REPEL               (FLAG_HIDDEN_ITEMS_START + 0x07)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_CARBOS               (FLAG_HIDDEN_ITEMS_START + 0x08)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_GREEN_SHARD          (FLAG_HIDDEN_ITEMS_START + 0x09)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x0A)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_BIG_PEARL            (FLAG_HIDDEN_ITEMS_START + 0x0B)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BLUE_SHARD           (FLAG_HIDDEN_ITEMS_START + 0x0C)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_1        (FLAG_HIDDEN_ITEMS_START + 0x0D)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_HEART_SCALE          (FLAG_HIDDEN_ITEMS_START + 0x0E)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_ULTRA_BALL           (FLAG_HIDDEN_ITEMS_START + 0x0F)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_STARDUST             (FLAG_HIDDEN_ITEMS_START + 0x10)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x11)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_YELLOW_SHARD         (FLAG_HIDDEN_ITEMS_START + 0x12)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_IRON                 (FLAG_HIDDEN_ITEMS_START + 0x13)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BIG_PEARL            (FLAG_HIDDEN_ITEMS_START + 0x14)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_STAR_PIECE           (FLAG_HIDDEN_ITEMS_START + 0x15)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_HP_UP                (FLAG_HIDDEN_ITEMS_START + 0x16)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_HEART_SCALE          (FLAG_HIDDEN_ITEMS_START + 0x17)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_RED_SHARD            (FLAG_HIDDEN_ITEMS_START + 0x18)
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_PROTEIN              (FLAG_HIDDEN_ITEMS_START + 0x19)
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x1A)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_HEART_SCALE           (FLAG_HIDDEN_ITEMS_START + 0x1B)
#define FLAG_HIDDEN_ITEM_FALLARBOR_TOWN_NUGGET               (FLAG_HIDDEN_ITEMS_START + 0x1C)
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_ULTRA_BALL         (FLAG_HIDDEN_ITEMS_START + 0x1D)
#define FLAG_HIDDEN_ITEM_ROUTE_113_TM_32                     (FLAG_HIDDEN_ITEMS_START + 0x1E)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_1_KEY             (FLAG_HIDDEN_ITEMS_START + 0x1F)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_2_KEY             (FLAG_HIDDEN_ITEMS_START + 0x20)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_4_KEY             (FLAG_HIDDEN_ITEMS_START + 0x21)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_6_KEY             (FLAG_HIDDEN_ITEMS_START + 0x22)
#define FLAG_HIDDEN_ITEM_SS_TIDAL_LOWER_DECK_LEFTOVERS       (FLAG_HIDDEN_ITEMS_START + 0x23)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_CALCIUM              (FLAG_HIDDEN_ITEMS_START + 0x24)
#define FLAG_HIDDEN_ITEM_ROUTE_104_POTION                    (FLAG_HIDDEN_ITEMS_START + 0x25)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_2        (FLAG_HIDDEN_ITEMS_START + 0x26)
#define FLAG_HIDDEN_ITEM_ROUTE_121_HP_UP                     (FLAG_HIDDEN_ITEMS_START + 0x27)
#define FLAG_HIDDEN_ITEM_ROUTE_121_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x28)
#define FLAG_HIDDEN_ITEM_ROUTE_123_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x29)
#define FLAG_HIDDEN_ITEM_ROUTE_113_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x2A)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_PP_UP                 (FLAG_HIDDEN_ITEMS_START + 0x2B)
#define FLAG_HIDDEN_ITEM_ROUTE_104_SUPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x2C)
#define FLAG_HIDDEN_ITEM_ROUTE_116_SUPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x2D)
#define FLAG_HIDDEN_ITEM_ROUTE_106_STARDUST                  (FLAG_HIDDEN_ITEMS_START + 0x2E)
#define FLAG_HIDDEN_ITEM_ROUTE_106_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x2F)
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_1        (FLAG_HIDDEN_ITEMS_START + 0x30)
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_2        (FLAG_HIDDEN_ITEMS_START + 0x31)
#define FLAG_HIDDEN_ITEM_ROUTE_109_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x32)
#define FLAG_HIDDEN_ITEM_ROUTE_109_GREAT_BALL                (FLAG_HIDDEN_ITEMS_START + 0x33)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x34)
#define FLAG_HIDDEN_ITEM_ROUTE_110_GREAT_BALL                (FLAG_HIDDEN_ITEMS_START + 0x35)
#define FLAG_HIDDEN_ITEM_ROUTE_110_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x36)
#define FLAG_HIDDEN_ITEM_ROUTE_110_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x37)
#define FLAG_HIDDEN_ITEM_ROUTE_111_PROTEIN                   (FLAG_HIDDEN_ITEMS_START + 0x38)
#define FLAG_HIDDEN_ITEM_ROUTE_111_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x39)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POTION              (FLAG_HIDDEN_ITEMS_START + 0x3A)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_1     (FLAG_HIDDEN_ITEMS_START + 0x3B)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_2     (FLAG_HIDDEN_ITEMS_START + 0x3C)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POKE_BALL           (FLAG_HIDDEN_ITEMS_START + 0x3D)
#define FLAG_HIDDEN_ITEM_ROUTE_104_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x3E)
#define FLAG_HIDDEN_ITEM_ROUTE_106_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x3F)
#define FLAG_HIDDEN_ITEM_ROUTE_109_ETHER                     (FLAG_HIDDEN_ITEMS_START + 0x40)
#define FLAG_HIDDEN_ITEM_ROUTE_110_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x41)
#define FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x42)
#define FLAG_HIDDEN_ITEM_ROUTE_118_IRON                      (FLAG_HIDDEN_ITEMS_START + 0x43)
#define FLAG_HIDDEN_ITEM_ROUTE_119_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x44)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_2              (FLAG_HIDDEN_ITEMS_START + 0x45)
#define FLAG_HIDDEN_ITEM_ROUTE_120_ZINC                      (FLAG_HIDDEN_ITEMS_START + 0x46)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1              (FLAG_HIDDEN_ITEMS_START + 0x47)
#define FLAG_HIDDEN_ITEM_ROUTE_117_REPEL                     (FLAG_HIDDEN_ITEMS_START + 0x48)
#define FLAG_HIDDEN_ITEM_ROUTE_121_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x49)
#define FLAG_HIDDEN_ITEM_ROUTE_123_HYPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x4A)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_POKE_BALL             (FLAG_HIDDEN_ITEMS_START + 0x4B)
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_GREAT_BALL              (FLAG_HIDDEN_ITEMS_START + 0x4C)
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_FULL_HEAL               (FLAG_HIDDEN_ITEMS_START + 0x4D)
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_MAX_ETHER          (FLAG_HIDDEN_ITEMS_START + 0x4E)
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_ZINC                 (FLAG_HIDDEN_ITEMS_START + 0x4F)
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x50)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_1F_ULTRA_BALL          (FLAG_HIDDEN_ITEMS_START + 0x51)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_ELIXIR             (FLAG_HIDDEN_ITEMS_START + 0x52)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_MAX_REPEL          (FLAG_HIDDEN_ITEMS_START + 0x53)
#define FLAG_HIDDEN_ITEM_ROUTE_120_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x54)
#define FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE                  (FLAG_HIDDEN_ITEMS_START + 0x55)
#define FLAG_HIDDEN_ITEM_ROUTE_108_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x56)
#define FLAG_HIDDEN_ITEM_ROUTE_119_MAX_ETHER                 (FLAG_HIDDEN_ITEMS_START + 0x57)
#define FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x58)
#define FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x59)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x5A)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_3             (FLAG_HIDDEN_ITEMS_START + 0x5B)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x5C)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x5D)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_3             (FLAG_HIDDEN_ITEMS_START + 0x5E)
#define FLAG_HIDDEN_ITEM_PETALBURG_CITY_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x5F)
#define FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES             (FLAG_HIDDEN_ITEMS_START + 0x60)
#define FLAG_HIDDEN_ITEM_ROUTE_115_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x61)
#define FLAG_HIDDEN_ITEM_ROUTE_113_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x62)
#define FLAG_HIDDEN_ITEM_ROUTE_123_PP_UP                     (FLAG_HIDDEN_ITEMS_START + 0x63)
#define FLAG_HIDDEN_ITEM_ROUTE_121_MAX_REVIVE                (FLAG_HIDDEN_ITEMS_START + 0x64)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_CALCIUM            (FLAG_HIDDEN_ITEMS_START + 0x65)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_ZINC               (FLAG_HIDDEN_ITEMS_START + 0x66)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_PROTEIN            (FLAG_HIDDEN_ITEMS_START + 0x67)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_IRON               (FLAG_HIDDEN_ITEMS_START + 0x68)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE (FLAG_HIDDEN_ITEMS_START + 0x69)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY   (FLAG_HIDDEN_ITEMS_START + 0x6A)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC         (FLAG_HIDDEN_ITEMS_START + 0x6B)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP        (FLAG_HIDDEN_ITEMS_START + 0x6C)
#define FLAG_HIDDEN_ITEM_NAVEL_ROCK_TOP_SACRED_ASH           (FLAG_HIDDEN_ITEMS_START + 0x6D)
#define FLAG_HIDDEN_ITEM_ROUTE_123_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x6E)
#define FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL                 (FLAG_HIDDEN_ITEMS_START + 0x6F)

#define FLAG_UNUSED_0x264  0x264 // TM86 COLA DRAGON
#define FLAG_UNUSED_0x265  0x265 // TM112 ESFERA AURAL
#define FLAG_UNUSED_0x266  0x266 // TM CABEZAHIERRO
#define FLAG_UNUSED_0x267  0x267 // MAESTRO BELLSPRUT ROUTE49_PAGODA_P5
#define FLAG_UNUSED_0x268  0x268 // PIEDRA SAGRADA PAGODA P5
#define FLAG_UNUSED_0x269  0x269 // CENIZA SAGRADA PAGODA P7
#define FLAG_UNUSED_0x26A  0x26A // ANDRA Y EUSINE PAGODA P7
#define FLAG_UNUSED_0x26B  0x26B // PIEDRA SAGRADA PAGODA P14
#define FLAG_UNUSED_0x26C  0x26C // PIEDRA ROCKET JOHTO BASE
#define FLAG_UNUSED_0x26D  0x26D // EJECUTIVOS DEVON BASE S9
#define FLAG_UNUSED_0x26E  0x26E // ALTO RANGO ISLA INTA
#define FLAG_UNUSED_0x26F  0x26F // EJECUTIVO ISLA INTA
#define FLAG_UNUSED_0x270  0x270 // DISCOXTRAÑO CIENTIFICO SILPH S2
#define FLAG_UNUSED_0x271  0x271 // CONDENSADOR GAS UNDERGROUND 7F
#define FLAG_UNUSED_0x272  0x272 // OBREROS MISION VIAS
#define FLAG_UNUSED_0x273  0x273 // FUJI CEMENTERIO S2
#define FLAG_UNUSED_0x274  0x274 // TOXTRICITITA
#define FLAG_UNUSED_0x275  0x275 // ANDRA COMBATE RUTA 49
#define FLAG_UNUSED_0x276  0x276 // MAXIPEPITA TRIGAL 4
#define FLAG_UNUSED_0x277  0x277 // PERLA GRANDE LAGO
#define FLAG_UNUSED_0x278  0x278 // VELO AURORA CUEVA ISLA CUARTA NORTE
#define FLAG_UNUSED_0x279  0x279 // RUIN VALLEY - CARAMELORARO
#define FLAG_UNUSED_0x27A  0x27A // ANCIANOS CASA CARBON MAHOGANY
#define FLAG_UNUSED_0x27B  0x27B // Unused Flag
#define FLAG_UNUSED_0x27C  0x27C // Unused Flag
#define FLAG_UNUSED_0x27D  0x27D // Unused Flag
#define FLAG_UNUSED_0x27E  0x27E // Unused Flag
#define FLAG_UNUSED_0x27F  0x27F // Unused Flag
#define FLAG_UNUSED_0x280  0x280 // Unused Flag
#define FLAG_UNUSED_0x281  0x281 // Unused Flag
#define FLAG_UNUSED_0x282  0x282 // Unused Flag
#define FLAG_UNUSED_0x283  0x283 // Unused Flag
#define FLAG_UNUSED_0x284  0x284 // Unused Flag
#define FLAG_UNUSED_0x285  0x285 // Unused Flag
#define FLAG_UNUSED_0x286  0x286 // Unused Flag
#define FLAG_UNUSED_0x287  0x287 // Unused Flag
#define FLAG_UNUSED_0x288  0x288 // Unused Flag
#define FLAG_UNUSED_0x289  0x289 // Unused Flag
#define FLAG_UNUSED_0x28A  0x28A // Unused Flag
#define FLAG_UNUSED_0x28B  0x28B // Unused Flag
#define FLAG_UNUSED_0x28C  0x28C // Unused Flag
#define FLAG_UNUSED_0x28D  0x28D // Unused Flag
#define FLAG_UNUSED_0x28E  0x28E // Unused Flag
#define FLAG_UNUSED_0x28F  0x28F // Unused Flag
#define FLAG_UNUSED_0x290  0x290 // Unused Flag
#define FLAG_UNUSED_0x291  0x291 // Unused Flag
#define FLAG_UNUSED_0x292  0x292 // Unused Flag
#define FLAG_UNUSED_0x293  0x293 // Unused Flag
#define FLAG_UNUSED_0x294  0x294 // Unused Flag
#define FLAG_UNUSED_0x295  0x295 // Unused Flag
#define FLAG_UNUSED_0x296  0x296 // Unused Flag
#define FLAG_UNUSED_0x297  0x297 // Unused Flag
#define FLAG_UNUSED_0x298  0x298 // Unused Flag
#define FLAG_UNUSED_0x299  0x299 // Unused Flag
#define FLAG_UNUSED_0x29A  0x29A // Unused Flag
#define FLAG_UNUSED_0x29B  0x29B // Unused Flag
#define FLAG_UNUSED_0x29C  0x29C // Unused Flag
#define FLAG_UNUSED_0x29D  0x29D // Unused Flag
#define FLAG_UNUSED_0x29E  0x29E // Unused Flag
#define FLAG_UNUSED_0x29F  0x29F // Unused Flag
#define FLAG_UNUSED_0x2A0  0x2A0 // Unused Flag
#define FLAG_UNUSED_0x2A1  0x2A1 // Unused Flag
#define FLAG_UNUSED_0x2A2  0x2A2 // Unused Flag
#define FLAG_UNUSED_0x2A3  0x2A3 // Unused Flag
#define FLAG_UNUSED_0x2A4  0x2A4 // Unused Flag
#define FLAG_UNUSED_0x2A5  0x2A5 // Unused Flag
#define FLAG_UNUSED_0x2A6  0x2A6 // Unused Flag
#define FLAG_UNUSED_0x2A7  0x2A7 // Unused Flag
#define FLAG_UNUSED_0x2A8  0x2A8 // Unused Flag
#define FLAG_UNUSED_0x2A9  0x2A9 // Unused Flag
#define FLAG_UNUSED_0x2AA  0x2AA // Unused Flag
#define FLAG_UNUSED_0x2AB  0x2AB // Unused Flag
#define FLAG_UNUSED_0x2AC  0x2AC // Unused Flag
#define FLAG_UNUSED_0x2AD  0x2AD // Unused Flag
#define FLAG_UNUSED_0x2AE  0x2AE // Unused Flag
#define FLAG_UNUSED_0x2AF  0x2AF // Unused Flag
#define FLAG_UNUSED_0x2B0  0x2B0 // Unused Flag
#define FLAG_UNUSED_0x2B1  0x2B1 // Unused Flag
#define FLAG_UNUSED_0x2B2  0x2B2 // Unused Flag
#define FLAG_UNUSED_0x2B3  0x2B3 // Unused Flag
#define FLAG_UNUSED_0x2B4  0x2B4 // Unused Flag
#define FLAG_UNUSED_0x2B5  0x2B5 // Unused Flag
#define FLAG_UNUSED_0x2B6  0x2B6 // Unused Flag
#define FLAG_UNUSED_0x2B7  0x2B7 // Unused Flag
#define FLAG_UNUSED_0x2B8  0x2B8 // Unused Flag
#define FLAG_UNUSED_0x2B9  0x2B9 // Unused Flag
#define FLAG_UNUSED_0x2BA  0x2BA // Unused Flag
#define FLAG_UNUSED_0x2BB  0x2BB // Unused Flag

// Event Flags
#define FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG                      0x2BC // RECLUTAS ROCKET INTA // AZUL INTA //ROCKETS CASA CONSUL // ESCENA 1// Rojo y Surge CARMIN//Rockets Celeste// policias casa bill// clear Lance ssanne//clear Azul Ruta 22 // clear kyogre y groudon
#define FLAG_HIDE_APPRENTICE                                        0x2BD
#define FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN                0x2BE
#define FLAG_HIDE_UNION_ROOM_PLAYER_1                               0x2BF // ANDRA CASA CONSUL set// clear andra carmin //clear fósiles cient.Mtmoon //clear atlas jardin bill //andra alto rango primera vez
#define FLAG_HIDE_UNION_ROOM_PLAYER_2                               0x2C0 // ANDRA PUERTO ISLA INTA set // clear motero carmin // clear Miguel Mt.moon //clear blaine b.rocket 
#define FLAG_HIDE_UNION_ROOM_PLAYER_3                               0x2C1 // ANDRA SUBTERRANEO // clear Rojo Mt.moon// clear marineros ssanne //clear cultistas torre pkmn// clear Ruby //clear zeus magno aquiles // clear Oak entrevista lavanda
#define FLAG_HIDE_UNION_ROOM_PLAYER_4                               0x2C2 // CLEAR FLAG MISION EEVEES
#define FLAG_HIDE_UNION_ROOM_PLAYER_5                               0x2C3 // ANDRA GUARDERIA //clear koga b.rocket //clear cazabichos casa pescador//clear PROTON casa fuji// clear Andra admin rocket f8 // clear Ariana III reun.trigal
#define FLAG_HIDE_UNION_ROOM_PLAYER_6                               0x2C4 // ANDRA CUARTEL PETREL // clear andra b.rocket //clear guarda casa pescador//clear giovanni y plata ruta 22
#define FLAG_HIDE_UNION_ROOM_PLAYER_7                               0x2C5 // RECLUTA CELESTE EXCAVAR //SET PATENTE BILL // clear lance b.rocket //clear Lance y polis Silph
#define FLAG_HIDE_UNION_ROOM_PLAYER_8                               0x2C6 // ROCKETS MTMOON 2F // clear azul b.rocket// CLEAR AZUL ROCKET HIDEOUT 8F
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1               0x2C7 // CONSUL set// clear motero 2 carmin/clear atlas despacho Petrel/clear clefairy proton torre 7F
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2               0x2C8 // AZUL MTMOON // clear lance escena 2//clear Oak y Dalia Pueblo paleta // clear Zinnia 
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3               0x2C9 // FOSIL AZUL MTMOON// clear marineros 2 ssanne //clear andra alto rango// clear rockets torre pkmn 7F// clear giovanni rojo gymnasio verde//clear giovanni 2 ruta 22
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4               0x2CA // Rockets MTMOON 3F //bill jardin //set proton escena 8//clear andra C.Victoria// clear Blaine Rocket 8F
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5               0x2CB // BILL CASA BILL // proton y fuji P7 torre pkmn//CLEAR RECLUTA ROCKET HIDEOUT 8F//clear giovanni base verde
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6               0x2CC // LT.SURGE SSANNE // BALL TUNEL ROCA //proton torre pkmn 6F// Rockets castigo base 4F //Giovanni indigo escena
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS            0x2CD // ANDRA DESPACHO ATLAS //clearflag rockets post derrota rojo mt.moon// policias casa bill // Rojo Liga pkmn
#define FLAG_HIDE_MEW                                               0x2CE
#define FLAG_HIDE_ROUTE_104_RIVAL                                   0x2CF // 
#define FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE                  0x2D0 
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH                  0x2D1 
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM          0x2D2 // CLEARFLAG ANDRA RUTA 10 //clearflag Koga afueras fucsia// //clear ltsurgue y policias casa fuji // clear ditto escena lance
#define FLAG_HIDE_ROUTE_103_RIVAL                                   0x2D3 // ANDRA IDA SSANNE //GIOVANNI BASE PROFUNDA//ANDRA ADMIN ROCKET 8F
#define FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE                    0x2D4 // GENTE TAPANDO ACCESO SSANNE 3F + AZUL//clear Azul Silph 2 // clear Mewtwo escena lance
#define FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT                        0x2D5 // ANDRA DENTRO SSANNE 3F // ROCKETS ESCENA LANCE // PERSONAJES ESCENA GUERRA
#define FLAG_HIDE_PETALBURG_CITY_WALLY                              0x2D6 // ROCKETS ESCENA LANCE BASE RUTA 5
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY   0x2D7 // CLEARFLAG CIENTIFICO FUCSIA LAPRAS
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM                         0x2D8 // ANDRA Y CAPITAN SSANNE 8F


#define FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER                     0x2DA // CONSUL
#define FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT                          0x2DB // ANDRA CASA CONSUL //PROTON TUNEL ROCA // FUJI P1 TORRE PKMN// clear oak y blaine Escena 7
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1                    0x2DC // CLEARFLAG ENTRENADORA GUAY BLOQUEA PASO LIGA POKEMON
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP              0x2DD // KYOGRE ASLEEP CUEVA PUNTEADA // policia oculto tuneles
#define FLAG_HIDE_PLAYERS_HOUSE_DAD                                 0x2DE // CLEARFLAG EJECUTIVO ROCKET GIMNASIO VERDE
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING      0x2DF // POLICIAS CENTRAL RUTA 10
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING          0x2E0 // ESTAFADOR MAGIKARP RUTA 4
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE             0x2E1 // ANDRA ROCKET S4// //clear niños bosque baya // clear frank base profunda // clear lorelei silph S2
#define FLAG_HIDE_ROUTE_104_MR_BRINEY                               0x2E2 // MIGUEL TUNEL ROCA//clear Giovanni Sala Entreno
#define FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY                           0x2E3 // KANGASKHAN TUNEL ROCA//clear ARCEUSP
#define FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN                            0x2E4 // FUJI CASA PUEBLO LAVANDA
#define FLAG_HIDE_ROUTE_109_MR_BRINEY                               0x2E5 // CLEAR GENTE EN TORRE QUEMADA PENSADORES Y ZEUS//clear morfeo bosque baya
#define FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT                          0x2E6
#define FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN                       0x2E7
#define FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT                          0x2E8
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN            0x2E9 // CLEARFLAG MT 26 TERREMOTO DESPUES DE DERROTAR A ATLAS EN BASE CIUDAD VERDE
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY                    0x2EA // CLEAR CROM GIMNASIO OLIVO
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION                  0x2EB // LIBRE PARA USAR SET
#define FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER                0x2EC // CLEAR MIRTO PASO DINDON// clear fuji S2 cementerio
#define FLAG_HIDE_SLATEPORT_CITY_SCOTT                              0x2ED
#define FLAG_HIDE_ROUTE_101_ZIGZAGOON                               0x2EE // ENTRENADORES GUAYS RUTA 10// clear mew cementerio
#define FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY                           0x2EF // CLEAR MUJER ANIBAL DESPUES MTMORTERO
#define FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE                       0x2F0 // CAMPEONA FANTASMA CASA VIAS TREN
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN              0x2F1 // ROCKETS ESCENA 3// GUAYS TUNEL ROCA//JONES MUERTO
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1          0x2F2 
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2          0x2F3
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA          0x2F4 // CLEARFLAG USADA HABITANTES AZAFRAN DESPUES INVASION SILPH
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM               0x2F5 // MOTORISTA SECUNDARIA AZAFRAN
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM                0x2F6 // FUJI BLAINE MANSION Y ROCKET Y POLICIAS EN CIUDAD AZAFRAN 
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM                    0x2F7 // TRXATU BALL
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM      0x2F8 // CLEAR EUSINE DLC RUTA 47
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK              0x2F9 // FUJI P2 TORRE RADIO LAVANDA
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK                  0x2FA // AZUL CEMENTERIO LAVANDA S2
#define FLAG_HIDE_DEOXYS                                            0x2FB
#define FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE                      0x2FC
#define FLAG_HIDE_MAUVILLE_CITY_SCOTT                               0x2FD // LIBRE ANDRA JOHTO
#define FLAG_HIDE_VERDANTURF_TOWN_SCOTT                             0x2FE // ANDRA RUTA 50// clear eusine neolavanda
#define FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT                  0x2FF // EUSINE PAGODA RUTA 49 P3
#define FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE                        0x300 // EUSINE ANDRA RUTA 49 PAGODA FINAL
#define FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE                      0x301 // EX CAMPEON VENENO MTPLATEADO
#define FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE                          0x302 // OBRAS VIAS TRIGAL
#define FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE                         0x303 // M.IRIS Y M.DRAGON REUNION TRIGAL
#define FLAG_HIDE_PETALBURG_GYM_NORMAN                              0x304 // GUAY PISO 1 TORRE RADIO
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA                           0x305
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1         0x306 
#define FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR                           0x307
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1                          0x308 // POLICIAS CUEVA DIGGLET // CLEAR ANDRA SSANNE VUELTA
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2                          0x309 // EUSINE ORQUIDEA MUESTRA CAMINO SECRETO DLC RUTA 47
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3                          0x30A
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4                          0x30B
#define FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS                          0x30C
#define FLAG_HIDE_PETALBURG_GYM_GREETER                             0x30D // ESCUELA MALVA DESPUES GANAR GYM
#define FLAG_HIDE_MARINE_CAVE_KYOGRE                                0x30E
#define FLAG_HIDE_TERRA_CAVE_GROUDON                                0x30F
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM          0x310 // AZUL TORRE PKMN 2F // clear cientificos torre radio
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM              0x311 // TORRE RADIO FINAL OAK
#define FLAG_HIDE_ROUTE_119_SCOTT                                   0x312 // CUBONE TORRE PKMN 5F //clear Miguel y Bill Silph//clear Ladron Mansion// clear ball groudon
#define FLAG_HIDE_LILYCOVE_MOTEL_SCOTT                              0x313 // FUJI TORRE PKMN 5F//clear Andra y Giovanni Silph // clear Andra canon sete
#define FLAG_HIDE_MOSSDEEP_CITY_SCOTT                               0x314 // ANDRA BASE PROFUNDA //clear Atlas Silph //científico mansion canela
#define FLAG_HIDE_FANCLUB_OLD_LADY                                  0x315 // PROTON ROCKET HIDEOUT 4F //clear surge power plant
#define FLAG_HIDE_FANCLUB_BOY                                       0x316 // PETREL CIUDAD PLATEADA //clear azul Silph
#define FLAG_HIDE_FANCLUB_LITTLE_BOY                                0x317 // GORDOS BLOQUEANDO ACCESO BOSQUE VERDE, CMIGUEL, FOSIL Y PETREL MUSEO PLATEADA
#define FLAG_HIDE_FANCLUB_LADY                                      0x318 // ENTRENADORES GUAY BOSQUE VERDE
#define FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT               0x319 // GIOVANNI ROCKET HIDEOUT 4F
#define FLAG_HIDE_LITTLEROOT_TOWN_RIVAL                             0x31A // BULBASAUR LABORATORIO OAK PALETA
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCH                             0x31B // GIOVANNI ROCKET HIDEOUT 8F
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1                          0x31C // PROTON ROCKET HIDEOUT 8F
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1                          0x31D // ANDRA ROCKET HIDEOUT 8F
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1                          0x31E // AZUL RUTA 15
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3                          0x31F // BRUNO Y KOGA ENTRADA FUCSIA//clear ANDRA DLC Ruta 47
#define FLAG_HIDE_LUGIA                                             0x320
#define FLAG_HIDE_HO_OH                                             0x321 // BRUNO Y POLICIA CAMINO BICIS // clear policias liga // clear cultista sacrificado
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER                    0x322 // MOTEROS CAMINO BICIS //clear oak liga // clear aquiles-magno 1er encuentro // clear yveltal
#define FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER                   0x323 // PETREL POWER PLANT //clear andra liga 2 // clear ball yveltal
#define FLAG_HIDE_MAUVILLE_CITY_WALLY                               0x324 // POLICIA ANDRA ATLAS LORELEI POWERPLANT // clear giovanni hall fama
#define FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE                        0x325 // ANDRA Y PETREL CIUDAD AZAFRAN // clear lance hall fama
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY                0x326 // SECUNDARIA CIENTIFICO LABORATORIO CANELA
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND                   0x327 // SECUNDARIA LADRONES MANSION POKEMON
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND     0x328 // PROTON BASE CIUDAD VERDE
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE         0x329 // PETREL BASE CIUDAD VERDE
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT                           0x32A // ATLAS BASE CIUDAD VERDE
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL     0x32B // CIENTIFICOS Y CABALLERO DEVON EN CENTRO PKMN ISLA PRIMA
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE      0x32C // GUZZLORD CUEVATESORO4
#define FLAG_HIDE_ROUTE_116_DROPPED_GLASSES_MAN                     0x32D // NIHILEGO CUEVATESORO4
#define FLAG_HIDE_RUSTBORO_CITY_RIVAL                               0x32E // MINIS DE DEVON EN CUEVA TESORO
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL     0x32F // COMBATE GLASTRIER
#define FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE                           0x330 // ANCIANA CAJAS ISLA SETIMA
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL       0x331 // ANDRA BLOQUEO RUINAS SETE // MAESTRO CIMA TORRE
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL           0x332 // PRIMER ENCUENTRO ZEUS EN ISLA CUARTA // ZEUS CTORRE
#define FLAG_HIDE_ROUTE_112_TEAM_MAGMA                              0x333 // ZEUS ENCUENTRO CUEVA CAMBIANTE // GROUDON CTORRE
#define FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE                        0x334 // AQUILES Y TOLO PUERTA ZAFIRO // BALL GROUDON CTORRE
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE         0x335 // MAGNO Y TATIANO PUERTA RUBY // HOOH CTORRE
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE         0x336 // MAGNO COMBATE FINAL // BALL HOOH CTORRE
#define FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA                          0x337 // AQUILES COMBATE FINAL // POKEMON LAGO MISION
#define FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD                          0x338 // CLEAR CIERRE TORRE LAVANDA
#define FLAG_HIDE_LEGEND_MON_CAVE_OF_ORIGIN                         0x339 // Unused, leftover from R/S
#define FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE                            0x33A // ADMIN TOLO COMBATE // Clear Andra isla origen //
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE                             0x33B // CULTISTAS LAVANDA ENCUENTRO 1RA VEZ// clear giovanni roca ombligo// cientificos roca ombligo
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE                     0x33C // OAK Y RESTO EN LAB CANELA
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE                      0x33D // ROCKET SALA POTENCIAL MAXIMO
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD                         0x33E // GIOVANNI SALA POTENCIAL MAXIMO// clear chicos malva //clear motero sectrigal
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS               0x33F // ELM PRIMER ENCUENTRO ROUTE 29 // clear mirto orquidea
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER                0x340 // PEGASO PADRE ESCUELA //clear agatha paso dindon
#define FLAG_HIDE_GRANITE_CAVE_STEVEN                               0x341 // ZEUS TORRE BELLSPROUT // clear pensador paso dindon// clear Kyurem normal
#define FLAG_HIDE_ROUTE_128_STEVEN                                  0x342 // PEGASO TORRE BELLSPROUT
#define FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY                       0x343 // PEGASO GIMNASIO
#define FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT              0x344 // MONTANEROS BLOQUEO CUEVA UNION RUTA 32
#define FLAG_HIDE_ROUTE_110_BIRCH                                   0x345 // ELM CUEVA UNION// CLEAR MIRTO POZO SLOWPOKE // clear ball t.quemada
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA     0x346 // MIRTO CASA CESAR BLOQUEO CUEVA OSCURA // clear atlas torre radio //clear groudon t.quemada
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1                             0x347 // CESAR CASA // clear andra torre radio
#define FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN                      0x348 // BLOQUEO ENCINAR // clear mirto teatro danza
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN               0x349 // BLOQUEO GYM TRIGAL // clear pensador senda dindon // clear mirto torre campana
#define FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO                         0x34A // ATLAS TORRE RADIO P1 // clear Elm primavera// clear atlas indigo // clear mdragon torre campana// clear agatha torre campana
#define FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY                      0x34B // VALERIA GIMNASIO TRIGAL
#define FLAG_HIDE_RUSTBORO_CITY_SCIENTIST                           0x34C // SUDOWOODO BLOQUEO CIUDAD IRIS //clear jaden t.quemada // clear rocket orquidea
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT                  0x34D // MILTANK BLOQUEO CIUDAD OLIVO// ROCKETS REUNION TRIGAL// YVELTAL RUINAS
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE                      0x34E // FARERO Y AMPHAROS FARO
#define FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD                           0x34F // LIDER CROM FARO // CLEAR MIRTO FINAL// CLEAR CULTISTA FINAL
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW            0x350 // CAPITAN SSANNE Y BLOQUEO CAMAROTE// ANCIANOS CASA MISION AZALEA
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL          0x351 // ANCIANOS BLOQUEO CIUDAD IRIS// clear andra pelea unown
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP                   0x352 
#define FLAG_HIDE_ROUTE_119_RIVAL                                   0x353 // ANIBAL Y MACHOKE MTMORTERO, BLOQUEO GYM ORQUIDEA//ZEUS MUERTO
#define FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS                         0x354 // PEGASO ENTRENANDO SUR CEREZO
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON                          0x355 // USADO CON GROUDON Y ADMIN TATIANO
#define FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS                         0x356 // ESTAFADORES KANTO EN BASE JOHTO
#define FLAG_HIDE_SKY_PILLAR_WALLACE                                0x357 // PRIMER LADRON ESTAFADOR 
#define FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE                              0x358 // CIENTIFICO BLOQUEO CIUDAD IRIS
#define FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS                              0x359 // CIENTIFICOS DENTRO LAB CIUDAD IRIS
#define FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY                       0x35A // TRABAJADOR LAVANDA 
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE                     0x35B 
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL                    0x35C // NPCS SECUNDARIA MISION TRIGAL
#define FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL                           0x35D // MOTORISTA BLOQUEO SUBTERRANEO TRIGAL
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA          0x35E // PRESIDENTE TORRE RADIO
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN              0x35F // REUNION TORRE RADIO //HASTA AQUI INCLUIDO DESPUES DE CLEAR EN MTEMBER 5F
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1           0x360 // BALL DEOXYS
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2           0x361 // BALL REGIS
#define FLAG_HIDE_PETALBURG_GYM_WALLY                               0x362 // BLOQUEO PUEBLO CAOBA
#define FLAG_UNKNOWN_0x363                                          0x363 // FUJI NEO RUTA 10 SECUNDARIA MTMOON
#define FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN                           0x364 // ROCKET PUEBLO CAOBA // clears ninjas base
#define FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY          0x365 // BLOQUEO GYM CAOBA Y FREDO LAGO
#define FLAG_HIDE_LANETTES_HOUSE_LANETTE                            0x366 // INVASORES BASE CAOBA // DRAGON INCOMPLETO
#define FLAG_HIDE_FALLORBOR_POKEMON_CENTER_LANETTE                  0x367 // PESCADOR LAGO FURIA
#define FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN                          0x368 // POLICIA BLOQUEO CUEVA HELADA// ZEUS GYM DRAGON// ZEUS FINAL
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT    0x369 // ANCIANO TRAMPILLA GUARIDA DRAGON //BALL KYUREM
#define FLAG_HIDE_DESERT_UNDERPASS_FOSSIL                           0x36A // MAESTRO DRAGON GIMNASIO// clear jefe devon lago
#define FLAG_HIDE_ROUTE_111_PLAYER_DESCENT                          0x36B // UNOWN DORADO SALA 1
#define FLAG_HIDE_ROUTE_111_DESERT_FOSSIL                           0x36C // RESHIRAM Y ZEKROM
#define FLAG_HIDE_MT_CHIMNEY_TRAINERS                               0x36D // UNOWN FINAL
#define FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT                         0x36E // JONES FINAL
#define FLAG_HIDE_RUSTURF_TUNNEL_BRINEY                             0x36F // CIENTIFICOS DEVON MISION LAGO
#define FLAG_HIDE_RUSTURF_TUNNEL_PEEKO                              0x370 // PEGASO MISION VIAS TREN
#define FLAG_HIDE_BRINEYS_HOUSE_PEEKO                               0x371 // PEGASO FINAL MISION VIAS TREN
#define FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA                          0x372 // ANDRA BASE HOENN
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS         0x373 // ANDRA BASE HOENN S2
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1     0x374 // ANDRA RUTA 111
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2     0x375 // DESERT RUINS
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE           0x376 // ANDRA, EJECUTIVO Y MAXIMO REGIROCK/ clear atlas vias tren// ANDRA RADIO LAVANDA P6
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN    0x377 // OAK NEO CINNABAR// CLEAR ESCENA MANSION
#define FLAG_HIDE_BATTLE_TOWER_OPPONENT                             0x378 // PRESIDENTE VIAS TREN
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL                  0x379 // MEWTWO MANSION// clear agatha discusion
#define FLAG_HIDE_ROUTE_119_TEAM_AQUA                               0x37A // ZAPDOS VIAS TREN 5 
#define FLAG_HIDE_ROUTE_116_MR_BRINEY                               0x37B // ZAPDOS NEO POWER PLANT
#define FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS                      0x37C // AGATHA SECUNDARIA VIAS BOSQUE
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS                      0x37D // ANCIANA CAMPEONA MTSILVER
#define FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND                        0x37E // REUNION P6 RADIO LAVANDA
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2         0x37F // BILL P6 RADIO LAVANDA
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380          0x380 // libre
#define FLAG_HIDE_ROUTE_101_BIRCH                                   0x381 // KANGASKHAN Y GUARDIA FIN SECUNDARIA NEO SAFARI
#define FLAG_HIDE_ROUTE_103_BIRCH                                   0x382 // libre clearflag
#define FLAG_HIDE_TRICK_HOUSE_END_MAN                               0x383 // MORFEO CUEVA 4
#define FLAG_HIDE_ROUTE_110_TEAM_AQUA                               0x384 // MORFEO GYM 1
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2                          0x385 // policia bloqueo neo tuneles
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2                          0x386 // policias guia entrada refugio
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2                          0x387 // motero que activa llave para zona sur
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3                          0x388 // libre clearflag
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS                     0x389 // flag libre
#define FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST                      0x38A // libre clearflag
#define FLAG_HIDE_FALLARBOR_AZURILL                                 0x38B // flag libre
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_ATTENDANT                   0x38C // flag libre
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR                      0x38D // SECUNDARIA SECUNDA RECREATIVOS
#define FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE                         0x38E
#define FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON              0x38F
#define FLAG_HIDE_MAUVILLE_CITY_WATTSON                             0x390
#define FLAG_HIDE_MAUVILLE_GYM_WATTSON                              0x391
#define FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS                        0x392
#define FLAG_UNKNOWN_0x393                                          0x393 // Set, however has no purpose.
#define FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE                             0x394
#define FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA                          0x395
#define FLAG_HIDE_BATTLE_TOWER_REPORTER                             0x396
#define FLAG_HIDE_ROUTE_110_RIVAL                                   0x397
#define FLAG_HIDE_CHAMPIONS_ROOM_RIVAL                              0x398
#define FLAG_HIDE_CHAMPIONS_ROOM_BIRCH                              0x399
#define FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE                           0x39A
#define FLAG_HIDE_ROUTE_119_RIVAL_ON_BIKE                           0x39B
#define FLAG_HIDE_AQUA_HIDEOUT_GRUNTS                               0x39C
#define FLAG_HIDE_LILYCOVE_MOTEL_GAME_DESIGNERS                     0x39D
#define FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA                              0x39E
#define FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA                             0x39F
#define FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO                        0x3A0
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL                              0x3A1
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE                      0x3A2
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_1                             0x3A3
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2                             0x3A4
#define FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL                      0x3A5
#define FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL                     0x3A6
#define FLAG_HIDE_REGIROCK                                          0x3A7
#define FLAG_HIDE_REGICE                                            0x3A8
#define FLAG_HIDE_REGISTEEL                                         0x3A9
#define FLAG_HIDE_METEOR_FALLS_TEAM_AQUA                            0x3AA
#define FLAG_HIDE_METEOR_FALLS_TEAM_MAGMA                           0x3AB
#define FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN                      0x3AC
#define FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT               0x3AD
#define FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO                          0x3AE
#define FLAG_HIDE_AQUA_HIDEOUT_B2F_SUBMARINE_SHADOW                 0x3AF
#define FLAG_HIDE_ROUTE_128_ARCHIE                                  0x3B0
#define FLAG_HIDE_ROUTE_128_MAXIE                                   0x3B1
#define FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS                       0x3B2
#define FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE                          0x3B3
#define FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN                        0x3B4
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE              0x3B5
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY                       0x3B6
#define FLAG_HIDE_SS_TIDAL_ROOMS_SNATCH_GIVER                       0x3B7
#define FLAG_RECEIVED_SHOAL_SALT_1                                  0x3B8 // MAESTRO TORRE CAMPANA P9
#define FLAG_RECEIVED_SHOAL_SALT_2                                  0x3B9 // ROCKETS BASE CAOBA
#define FLAG_RECEIVED_SHOAL_SALT_3                                  0x3BA // AGATHA IRIS// OAK BASE HOENN
#define FLAG_RECEIVED_SHOAL_SALT_4                                  0x3BB // DEVON LAGO FURIA
#define FLAG_RECEIVED_SHOAL_SHELL_1                                 0x3BC // DOCUMENTOS MISIONES DLC DESPACHO PRIVADO
#define FLAG_RECEIVED_SHOAL_SHELL_2                                 0x3BD // CLEAR EX CAMPEON VENENO CASA RUTA 50
#define FLAG_RECEIVED_SHOAL_SHELL_3                                 0x3BE // CLEAR NEO POWER ANTES DERROTAR ZAPDOS
#define FLAG_RECEIVED_SHOAL_SHELL_4                                 0x3BF // INVITADOS 2DA REUNION TRIGAL
#define FLAG_HIDE_ROUTE_111_SECRET_POWER_MAN                        0x3C0
#define FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION                       0x3C1
#define FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN      0x3C2
#define FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL                          0x3C3
#define FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL                          0x3C4
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT 0x3C5
#define FLAG_HIDE_ROUTE_118_STEVEN                                  0x3C6
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN                0x3C7
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL       0x3C8
#define FLAG_HIDE_FORTREE_CITY_KECLEON                              0x3C9
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE                          0x3CA
#define FLAG_HIDE_LILYCOVE_CITY_RIVAL                               0x3CB
#define FLAG_HIDE_ROUTE_120_STEVEN                                  0x3CC
#define FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN                            0x3CD
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1                            0x3CE
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2                            0x3CF
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3                            0x3D0
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1                      0x3D1
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2                      0x3D2
#define FLAG_HIDE_OLDALE_TOWN_RIVAL                                 0x3D3
#define FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE      0x3D4
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_SHADOW                   0x3D5
#define FLAG_HIDE_ROUTE_120_KECLEON_1                               0x3D6
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDA                              0x3D7
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA                0x3D8
#define FLAG_HIDE_ROUTE_120_KECLEON_2                               0x3D9
#define FLAG_HIDE_ROUTE_120_KECLEON_3                               0x3DA
#define FLAG_HIDE_ROUTE_120_KECLEON_4                               0x3DB
#define FLAG_HIDE_ROUTE_120_KECLEON_5                               0x3DC
#define FLAG_HIDE_ROUTE_119_KECLEON_1                               0x3DD
#define FLAG_HIDE_ROUTE_119_KECLEON_2                               0x3DE
#define FLAG_HIDE_ROUTE_101_BOY                                     0x3DF
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M                 0x3E0
#define FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON          0x3E1
#define FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY                       0x3E2
#define FLAG_HIDE_PETALBURG_CITY_SCOTT                              0x3E3
#define FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA                          0x3E4
#define FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE                            0x3E5
#define FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON                           0x3E6
#define FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT                0x3E7

// Item Ball Flags
#define FLAG_ITEM_ROUTE_102_POTION                                  0x3E8
#define FLAG_ITEM_ROUTE_116_X_SPECIAL                               0x3E9
#define FLAG_ITEM_ROUTE_104_PP_UP                                   0x3EA
#define FLAG_ITEM_ROUTE_105_IRON                                    0x3EB
#define FLAG_ITEM_ROUTE_106_PROTEIN                                 0x3EC
#define FLAG_ITEM_ROUTE_109_PP_UP                                   0x3ED
#define FLAG_ITEM_ROUTE_109_RARE_CANDY                              0x3EE
#define FLAG_ITEM_ROUTE_110_DIRE_HIT                                0x3EF
#define FLAG_ITEM_ROUTE_111_TM_37                                   0x3F0
#define FLAG_ITEM_ROUTE_111_STARDUST                                0x3F1
#define FLAG_ITEM_ROUTE_111_HP_UP                                   0x3F2
#define FLAG_ITEM_ROUTE_112_NUGGET                                  0x3F3
#define FLAG_ITEM_ROUTE_113_MAX_ETHER                               0x3F4
#define FLAG_ITEM_ROUTE_113_SUPER_REPEL                             0x3F5
#define FLAG_ITEM_ROUTE_114_RARE_CANDY                              0x3F6
#define FLAG_ITEM_ROUTE_114_PROTEIN                                 0x3F7
#define FLAG_ITEM_ROUTE_115_SUPER_POTION                            0x3F8
#define FLAG_ITEM_ROUTE_115_TM_01                                   0x3F9
#define FLAG_ITEM_ROUTE_115_IRON                                    0x3FA
#define FLAG_ITEM_ROUTE_116_ETHER                                   0x3FB
#define FLAG_ITEM_ROUTE_116_REPEL                                   0x3FC
#define FLAG_ITEM_ROUTE_116_HP_UP                                   0x3FD
#define FLAG_ITEM_ROUTE_117_GREAT_BALL                              0x3FE
#define FLAG_ITEM_ROUTE_117_REVIVE                                  0x3FF
#define FLAG_ITEM_ROUTE_119_SUPER_REPEL                             0x400
#define FLAG_ITEM_ROUTE_119_ZINC                                    0x401
#define FLAG_ITEM_ROUTE_119_ELIXIR_1                                0x402
#define FLAG_ITEM_ROUTE_119_LEAF_STONE                              0x403
#define FLAG_ITEM_ROUTE_119_RARE_CANDY                              0x404
#define FLAG_ITEM_ROUTE_119_HYPER_POTION_1                          0x405
#define FLAG_ITEM_ROUTE_120_NUGGET                                  0x406
#define FLAG_ITEM_ROUTE_120_FULL_HEAL                               0x407
#define FLAG_ITEM_ROUTE_123_CALCIUM                                 0x408
#define FLAG_ITEM_ROUTE_123_RARE_CANDY                              0x409 // Unused Flag, leftover from R/S. In Emerald this is a hidden item and uses a different flag
#define FLAG_ITEM_ROUTE_127_ZINC                                    0x40A
#define FLAG_ITEM_ROUTE_127_CARBOS                                  0x40B
#define FLAG_ITEM_ROUTE_132_RARE_CANDY                              0x40C
#define FLAG_ITEM_ROUTE_133_BIG_PEARL                               0x40D
#define FLAG_ITEM_ROUTE_133_STAR_PIECE                              0x40E
#define FLAG_ITEM_PETALBURG_CITY_MAX_REVIVE                         0x40F
#define FLAG_ITEM_PETALBURG_CITY_ETHER                              0x410
#define FLAG_ITEM_RUSTBORO_CITY_X_DEFEND                            0x411
#define FLAG_ITEM_LILYCOVE_CITY_MAX_REPEL                           0x412
#define FLAG_ITEM_MOSSDEEP_CITY_NET_BALL                            0x413
#define FLAG_ITEM_METEOR_FALLS_1F_1R_TM_23                          0x414
#define FLAG_ITEM_METEOR_FALLS_1F_1R_FULL_HEAL                      0x415
#define FLAG_ITEM_METEOR_FALLS_1F_1R_MOON_STONE                     0x416
#define FLAG_ITEM_METEOR_FALLS_1F_1R_PP_UP                          0x417
#define FLAG_ITEM_RUSTURF_TUNNEL_POKE_BALL                          0x418
#define FLAG_ITEM_RUSTURF_TUNNEL_MAX_ETHER                          0x419
#define FLAG_ITEM_GRANITE_CAVE_1F_ESCAPE_ROPE                       0x41A
#define FLAG_ITEM_GRANITE_CAVE_B1F_POKE_BALL                        0x41B
#define FLAG_ITEM_MT_PYRE_5F_LAX_INCENSE                            0x41C
#define FLAG_ITEM_GRANITE_CAVE_B2F_REPEL                            0x41D
#define FLAG_ITEM_GRANITE_CAVE_B2F_RARE_CANDY                       0x41E
#define FLAG_ITEM_PETALBURG_WOODS_X_ATTACK                          0x41F
#define FLAG_ITEM_PETALBURG_WOODS_GREAT_BALL                        0x420
#define FLAG_ITEM_ROUTE_104_POKE_BALL                               0x421
#define FLAG_ITEM_PETALBURG_WOODS_ETHER                             0x422
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_3R_ECAPE_ROPE                    0x423
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_1_ORANGE_MAIL                  0x424
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_HARBOR_MAIL                  0x425
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_WAVE_MAIL                    0x426
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_SHADOW_MAIL                  0x427
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_WOOD_MAIL                    0x428
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_4_MECH_MAIL                    0x429
#define FLAG_ITEM_ROUTE_124_YELLOW_SHARD                            0x42A
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_6_GLITTER_MAIL                 0x42B
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_7_TROPIC_MAIL                  0x42C
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_8_BEAD_MAIL                    0x42D
#define FLAG_ITEM_JAGGED_PASS_BURN_HEAL                             0x42E
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MAX_ELIXIR                       0x42F
#define FLAG_ITEM_AQUA_HIDEOUT_B2F_NEST_BALL                        0x430
#define FLAG_ITEM_MT_PYRE_EXTERIOR_MAX_POTION                       0x431
#define FLAG_ITEM_MT_PYRE_EXTERIOR_TM_48                            0x432
#define FLAG_ITEM_NEW_MAUVILLE_ULTRA_BALL                           0x433
#define FLAG_ITEM_NEW_MAUVILLE_ESCAPE_ROPE                          0x434
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_6_LUXURY_BALL    0x435
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_4_SCANNER        0x436
#define FLAG_ITEM_SCORCHED_SLAB_TM_11                               0x437
#define FLAG_ITEM_METEOR_FALLS_B1F_2R_TM_02                         0x438
#define FLAG_ITEM_SHOAL_CAVE_ENTRANCE_BIG_PEARL                     0x439
#define FLAG_ITEM_SHOAL_CAVE_INNER_ROOM_RARE_CANDY                  0x43A
#define FLAG_ITEM_SHOAL_CAVE_STAIRS_ROOM_ICE_HEAL                   0x43B
#define FLAG_ITEM_VICTORY_ROAD_1F_MAX_ELIXIR                        0x43C
#define FLAG_ITEM_VICTORY_ROAD_1F_PP_UP                             0x43D
#define FLAG_ITEM_VICTORY_ROAD_B1F_TM_29                            0x43E
#define FLAG_ITEM_VICTORY_ROAD_B1F_FULL_RESTORE                     0x43F
#define FLAG_ITEM_VICTORY_ROAD_B2F_FULL_HEAL                        0x440
#define FLAG_ITEM_MT_PYRE_6F_TM_30                                  0x441
#define FLAG_ITEM_SEAFLOOR_CAVERN_ROOM_9_TM_26                      0x442
#define FLAG_ITEM_FIERY_PATH_TM06                                   0x443
#define FLAG_ITEM_ROUTE_124_RED_SHARD                               0x444
#define FLAG_ITEM_ROUTE_124_BLUE_SHARD                              0x445
#define FLAG_ITEM_SAFARI_ZONE_NORTH_WEST_TM_22                      0x446
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_1F_HARBOR_MAIL               0x447
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_ESCAPE_ROPE              0x448
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_B1F_DIVE_BALL              0x449
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_TM_13                    0x44A
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_1F_REVIVE                  0x44B
#define FLAG_ITEM_ABANDONED_SHIP_CAPTAINS_OFFICE_STORAGE_KEY        0x44C
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_3_WATER_STONE    0x44D
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_1_TM_18          0x44E
#define FLAG_ITEM_ROUTE_121_CARBOS                                  0x44F
#define FLAG_ITEM_ROUTE_123_ULTRA_BALL                              0x450
#define FLAG_ITEM_ROUTE_126_GREEN_SHARD                             0x451
#define FLAG_ITEM_ROUTE_119_HYPER_POTION_2                          0x452
#define FLAG_ITEM_ROUTE_120_HYPER_POTION                            0x453
#define FLAG_ITEM_ROUTE_120_NEST_BALL                               0x454
#define FLAG_ITEM_ROUTE_123_ELIXIR                                  0x455
#define FLAG_ITEM_NEW_MAUVILLE_THUNDER_STONE                        0x456
#define FLAG_ITEM_FIERY_PATH_FIRE_STONE                             0x457
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_TM_07                         0x458
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_NEVER_MELT_ICE                0x459
#define FLAG_ITEM_ROUTE_103_GUARD_SPEC                              0x45A
#define FLAG_ITEM_ROUTE_104_X_ACCURACY                              0x45B
#define FLAG_ITEM_MAUVILLE_CITY_X_SPEED                             0x45C
#define FLAG_ITEM_PETALBURD_WOODS_PARALYZE_HEAL                     0x45D
#define FLAG_ITEM_ROUTE_115_GREAT_BALL                              0x45E
#define FLAG_ITEM_SAFARI_ZONE_NORTH_CALCIUM                         0x45F
#define FLAG_ITEM_MT_PYRE_3F_SUPER_REPEL                            0x460
#define FLAG_ITEM_ROUTE_118_HYPER_POTION                            0x461
#define FLAG_ITEM_NEW_MAUVILLE_FULL_HEAL                            0x462
#define FLAG_ITEM_NEW_MAUVILLE_PARALYZE_HEAL                        0x463
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MASTER_BALL                      0x464
#define FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MASTER_BALL                 0x465 // Unused Flag, leftover from the Ruby Magma hideout
#define FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MAX_ELIXIR                  0x466 // Unused Flag, leftover from the Ruby Magma hideout
#define FLAG_ITEM_OLD_MAGMA_HIDEOUT_B2F_NEST_BALL                   0x467 // Unused Flag, leftover from the Ruby Magma hideout
#define FLAG_UNUSED_0x468                                           0x468 // Unused Flag
#define FLAG_ITEM_MT_PYRE_2F_ULTRA_BALL                             0x469
#define FLAG_ITEM_MT_PYRE_4F_SEA_INCENSE                            0x46A
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE                 0x46B
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_NUGGET                           0x46C
#define FLAG_ITEM_MOSSDEEP_STEVENS_HOUSE_HM08                       0x46D // Unused Flag, leftover from R/S. HM08 is given to the player directly in Emerald
#define FLAG_ITEM_ROUTE_119_NUGGET                                  0x46E
#define FLAG_ITEM_ROUTE_104_POTION                                  0x46F
#define FLAG_UNUSED_0x470                                           0x470 // Unused Flag
#define FLAG_ITEM_ROUTE_103_PP_UP                                   0x471
#define FLAG_UNUSED_0x472                                           0x472 // Unused Flag
#define FLAG_ITEM_ROUTE_108_STAR_PIECE                              0x473
#define FLAG_ITEM_ROUTE_109_POTION                                  0x474
#define FLAG_ITEM_ROUTE_110_ELIXIR                                  0x475
#define FLAG_ITEM_ROUTE_111_ELIXIR                                  0x476
#define FLAG_ITEM_ROUTE_113_HYPER_POTION                            0x477
#define FLAG_ITEM_ROUTE_115_HEAL_POWDER                             0x478
#define FLAG_UNUSED_0x479                                           0x479 // Unused Flag
#define FLAG_ITEM_ROUTE_116_POTION                                  0x47A
#define FLAG_ITEM_ROUTE_119_ELIXIR_2                                0x47B
#define FLAG_ITEM_ROUTE_120_REVIVE                                  0x47C
#define FLAG_ITEM_ROUTE_121_REVIVE                                  0x47D
#define FLAG_ITEM_ROUTE_121_ZINC                                    0x47E
#define FLAG_ITEM_MAGMA_HIDEOUT_1F_RARE_CANDY                       0x47F
#define FLAG_ITEM_ROUTE_123_PP_UP                                   0x480
#define FLAG_ITEM_ROUTE_123_REVIVAL_HERB                            0x481
#define FLAG_ITEM_ROUTE_125_BIG_PEARL                               0x482
#define FLAG_ITEM_ROUTE_127_RARE_CANDY                              0x483
#define FLAG_ITEM_ROUTE_132_PROTEIN                                 0x484
#define FLAG_ITEM_ROUTE_133_MAX_REVIVE                              0x485
#define FLAG_ITEM_ROUTE_134_CARBOS                                  0x486
#define FLAG_ITEM_ROUTE_134_STAR_PIECE                              0x487
#define FLAG_ITEM_ROUTE_114_ENERGY_POWDER                           0x488
#define FLAG_ITEM_ROUTE_115_PP_UP                                   0x489
#define FLAG_ITEM_ARTISAN_CAVE_B1F_HP_UP                            0x48A
#define FLAG_ITEM_ARTISAN_CAVE_1F_CARBOS                            0x48B
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_MAX_ELIXIR                    0x48C
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_FULL_RESTORE                  0x48D
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_1R_NUGGET                        0x48E
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_2R_PP_MAX                        0x48F
#define FLAG_ITEM_MAGMA_HIDEOUT_4F_MAX_REVIVE                       0x490
#define FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET                     0x491
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL                  0x492

#define FLAG_UNUSED_0x493                                           0x493 // VIRIDIAN POCION
#define FLAG_UNUSED_0x494                                           0x494 // PLATEADA POKE BALL - INVISIBLE
#define FLAG_UNUSED_0x495                                           0x495 // CELESTE CARAMELO RARO - INVISIBLE
#define FLAG_UNUSED_0x496                                           0x496 // COLMILLO AGUDO - PASS_ROUTE47
#define FLAG_UNUSED_0x497                                           0x497 // Unused Flag
#define FLAG_UNUSED_0x498                                           0x498 // Unused Flag
#define FLAG_UNUSED_0x499                                           0x499 // Unused Flag
#define FLAG_UNUSED_0x49A                                           0x49A // Unused Flag
#define FLAG_UNUSED_0x49B                                           0x49B // Unused Flag
#define FLAG_UNUSED_0x49C                                           0x49C // Unused Flag
#define FLAG_UNUSED_0x49D                                           0x49D // Unused Flag
#define FLAG_UNUSED_0x49E                                           0x49E // Unused Flag
#define FLAG_UNUSED_0x49F                                           0x49F // Unused Flag
#define FLAG_UNUSED_0x4A0                                           0x4A0 // Unused Flag
#define FLAG_UNUSED_0x4A1                                           0x4A1 // Unused Flag
#define FLAG_UNUSED_0x4A2                                           0x4A2 // Unused Flag
#define FLAG_UNUSED_0x4A3                                           0x4A3 // Unused Flag
#define FLAG_UNUSED_0x4A4                                           0x4A4 // Unused Flag
#define FLAG_UNUSED_0x4A5                                           0x4A5 // Unused Flag
#define FLAG_UNUSED_0x4A6                                           0x4A6 // Unused Flag
#define FLAG_UNUSED_0x4A7                                           0x4A7 // Unused Flag
#define FLAG_UNUSED_0x4A8                                           0x4A8 // Unused Flag
#define FLAG_UNUSED_0x4A9                                           0x4A9 // Unused Flag
#define FLAG_UNUSED_0x4AA                                           0x4AA // Unused Flag
#define FLAG_UNUSED_0x4AB                                           0x4AB // Unused Flag
#define FLAG_UNUSED_0x4AC                                           0x4AC // Unused Flag
#define FLAG_UNUSED_0x4AD                                           0x4AD // Unused Flag
#define FLAG_UNUSED_0x4AE                                           0x4AE // Unused Flag
#define FLAG_UNUSED_0x4AF                                           0x4AF // Unused Flag
#define FLAG_UNUSED_0x4B0                                           0x4B0 // Unused Flag
#define FLAG_UNUSED_0x4B1                                           0x4B1 // Unused Flag
#define FLAG_UNUSED_0x4B2                                           0x4B2 // Unused Flag
#define FLAG_UNUSED_0x4B3                                           0x4B3 // Unused Flag
#define FLAG_UNUSED_0x4B4                                           0x4B4 // Unused Flag
#define FLAG_UNUSED_0x4B5                                           0x4B5 // Unused Flag
#define FLAG_UNUSED_0x4B6                                           0x4B6 // Unused Flag
#define FLAG_UNUSED_0x4B7                                           0x4B7 // Unused Flag
#define FLAG_UNUSED_0x4B8                                           0x4B8 // Unused Flag
#define FLAG_UNUSED_0x4B9                                           0x4B9 // Unused Flag
#define FLAG_UNUSED_0x4BA                                           0x4BA // Unused Flag
#define FLAG_UNUSED_0x4BB                                           0x4BB // Unused Flag
#define FLAG_UNUSED_0x4BC                                           0x4BC // Unused Flag
#define FLAG_UNUSED_0x4BD                                           0x4BD // Unused Flag
#define FLAG_UNUSED_0x4BE                                           0x4BE // Unused Flag
#define FLAG_UNUSED_0x4BF                                           0x4BF // Unused Flag
#define FLAG_UNUSED_0x4C0                                           0x4C0 // Unused Flag
#define FLAG_UNUSED_0x4C1                                           0x4C1 // Unused Flag
#define FLAG_UNUSED_0x4C2                                           0x4C2 // Unused Flag
#define FLAG_UNUSED_0x4C3                                           0x4C3 // Unused Flag
#define FLAG_UNUSED_0x4C4                                           0x4C4 // Unused Flag
#define FLAG_UNUSED_0x4C5                                           0x4C5 // Unused Flag
#define FLAG_UNUSED_0x4C6                                           0x4C6 // Unused Flag
#define FLAG_UNUSED_0x4C7                                           0x4C7 // Unused Flag
#define FLAG_UNUSED_0x4C8                                           0x4C8 // Unused Flag
#define FLAG_UNUSED_0x4C9                                           0x4C9 // Unused Flag
#define FLAG_UNUSED_0x4CA                                           0x4CA // Unused Flag
#define FLAG_UNUSED_0x4CB                                           0x4CB // Unused Flag
#define FLAG_UNUSED_0x4CC                                           0x4CC // Unused Flag
#define FLAG_UNUSED_0x4CD                                           0x4CD // Unused Flag
#define FLAG_UNUSED_0x4CE                                           0x4CE // Unused Flag
#define FLAG_UNUSED_0x4CF                                           0x4CF // Unused Flag
#define FLAG_UNUSED_0x4D0                                           0x4D0 // Unused Flag
#define FLAG_UNUSED_0x4D1                                           0x4D1 // Unused Flag
#define FLAG_UNUSED_0x4D2                                           0x4D2 // Unused Flag
#define FLAG_UNUSED_0x4D3                                           0x4D3 // Unused Flag
#define FLAG_UNUSED_0x4D4                                           0x4D4 // Unused Flag
#define FLAG_UNUSED_0x4D5                                           0x4D5 // Unused Flag
#define FLAG_UNUSED_0x4D6                                           0x4D6 // Unused Flag
#define FLAG_UNUSED_0x4D7                                           0x4D7 // Unused Flag
#define FLAG_UNUSED_0x4D8                                           0x4D8 // Unused Flag
#define FLAG_UNUSED_0x4D9                                           0x4D9 // Unused Flag
#define FLAG_UNUSED_0x4DA                                           0x4DA // Unused Flag
#define FLAG_UNUSED_0x4DB                                           0x4DB // Unused Flag
#define FLAG_UNUSED_0x4DC                                           0x4DC // Unused Flag
#define FLAG_UNUSED_0x4DD                                           0x4DD // Unused Flag
#define FLAG_UNUSED_0x4DE                                           0x4DE // Unused Flag
#define FLAG_UNUSED_0x4DF                                           0x4DF // Unused Flag
#define FLAG_UNUSED_0x4E0                                           0x4E0 // Unused Flag
#define FLAG_UNUSED_0x4E1                                           0x4E1 // Unused Flag
#define FLAG_UNUSED_0x4E2                                           0x4E2 // Unused Flag
#define FLAG_UNUSED_0x4E3                                           0x4E3 // Unused Flag
#define FLAG_UNUSED_0x4E4                                           0x4E4 // Unused Flag
#define FLAG_UNUSED_0x4E5                                           0x4E5 // Unused Flag
#define FLAG_UNUSED_0x4E6                                           0x4E6 // Unused Flag
#define FLAG_UNUSED_0x4E7                                           0x4E7 // Unused Flag
#define FLAG_UNUSED_0x4E8                                           0x4E8 // Unused Flag
#define FLAG_UNUSED_0x4E9                                           0x4E9 // Unused Flag
#define FLAG_UNUSED_0x4EA                                           0x4EA // Unused Flag
#define FLAG_UNUSED_0x4EB                                           0x4EB // Unused Flag
#define FLAG_UNUSED_0x4EC                                           0x4EC // Unused Flag
#define FLAG_UNUSED_0x4ED                                           0x4ED // Unused Flag
#define FLAG_UNUSED_0x4EE                                           0x4EE // Unused Flag
#define FLAG_UNUSED_0x4EF                                           0x4EF // Unused Flag

#define FLAG_DEFEATED_RUSTBORO_GYM                                  0x4F0
#define FLAG_DEFEATED_DEWFORD_GYM                                   0x4F1
#define FLAG_DEFEATED_MAUVILLE_GYM                                  0x4F2
#define FLAG_DEFEATED_LAVARIDGE_GYM                                 0x4F3
#define FLAG_DEFEATED_PETALBURG_GYM                                 0x4F4
#define FLAG_DEFEATED_FORTREE_GYM                                   0x4F5
#define FLAG_DEFEATED_MOSSDEEP_GYM                                  0x4F6
#define FLAG_DEFEATED_SOOTOPOLIS_GYM                                0x4F7
#define FLAG_DEFEATED_METEOR_FALLS_STEVEN                           0x4F8

#define FLAG_DEFEATED_ELITE_4_SIDNEY                                0x4FB
#define FLAG_DEFEATED_ELITE_4_PHOEBE                                0x4FC
#define FLAG_DEFEATED_ELITE_4_GLACIA                                0x4FD
#define FLAG_DEFEATED_ELITE_4_DRAKE                                 0x4FE

#define FLAG_CUSTOM_SEAGALLOP                                           0x4FF // Unused Flag

// Trainer Flags
// Trainer flags occupy 0x500 - 0x85F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

// #define TRAINER_FLAGS_START                                         0x500
// #define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x85F
// System Flags

#define SYSTEM_FLAGS                                   (0x85F + 1) // 0x860

#define FLAG_SYS_POKEMON_GET                         (SYSTEM_FLAGS + 0x0) // FLAG_0x860
#define FLAG_SYS_POKEDEX_GET                         (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_POKENAV_GET                         (SYSTEM_FLAGS + 0x2)
#define FLAG_EXPAND_MAX_LEVEL                            (SYSTEM_FLAGS + 0x3) // Unused Flag
#define FLAG_SYS_GAME_CLEAR                          (SYSTEM_FLAGS + 0x4)
#define FLAG_SYS_CHAT_USED                           (SYSTEM_FLAGS + 0x5)
#define FLAG_SYS_HIPSTER_MEET                        (SYSTEM_FLAGS + 0x6)

// Badges

//kanto
#define FLAG_BADGE01_GET                             (SYSTEM_FLAGS + 0x7)
#define FLAG_BADGE02_GET                             (SYSTEM_FLAGS + 0x8)
#define FLAG_BADGE03_GET                             (SYSTEM_FLAGS + 0x9)
#define FLAG_BADGE04_GET                             (SYSTEM_FLAGS + 0xA)
#define FLAG_BADGE05_GET                             (SYSTEM_FLAGS + 0xB)
#define FLAG_BADGE06_GET                             (SYSTEM_FLAGS + 0xC)
#define FLAG_BADGE07_GET                             (SYSTEM_FLAGS + 0xD)
#define FLAG_BADGE08_GET                             (SYSTEM_FLAGS + 0xE)

//johto
#define FLAG_BADGE09_GET                                (SYSTEM_FLAGS + 0x21) // Unused Flag
#define FLAG_BADGE10_GET                                (SYSTEM_FLAGS + 0x22) // Unused Flag
#define FLAG_BADGE11_GET                                (SYSTEM_FLAGS + 0x23) // Unused Flag
#define FLAG_BADGE12_GET                               (SYSTEM_FLAGS + 0x24) // Unused Flag
#define FLAG_BADGE13_GET                                (SYSTEM_FLAGS + 0x25) // Unused Flag
#define FLAG_BADGE14_GET                               (SYSTEM_FLAGS + 0x26) // Unused Flag
#define FLAG_BADGE15_GET                               (SYSTEM_FLAGS + 0x27) // Unused Flag
#define FLAG_SYS_CAVE_SHIP                          (SYSTEM_FLAGS + 0x37) // Unused Flag, leftover from R/S debug, presumably used by Emerald's debug too

//hoenn
#define FLAG_SYS_CAVE_WONDER                        (SYSTEM_FLAGS + 0x38) // Unused Flag, same as above
#define FLAG_SYS_CAVE_BATTLE                        (SYSTEM_FLAGS + 0x39) // Unused Flag, same as above
#define FLAG_UNUSED_8                           (SYSTEM_FLAGS + 0x2E) // Unused Flag
#define FLAG_UNUSED_9                           (SYSTEM_FLAGS + 0x2F) // Unused Flag
#define FLAG_UNUSED_0x8E3                           (SYSTEM_FLAGS + 0x83) // Unused Flag
#define FLAG_UNUSED_0x068                    0x68  // Unused Flag
#define FLAG_UNUSED_0x2D9                                           0x2D9 // Unused Flag
#define FLAG_UNUSED_0x1E3                    0x1E3 // Unused Flag

//especiales
#define FLAG_UNUSED_0x4F9                                           0x4F9 // Unused Flag
#define FLAG_UNUSED_0x4FA                                           0x4FA // Unused Flag
#define FLAG_UNUSED_0x1AA                    0x1AA // Unused Flag
#define FLAG_UNUSED_0x1AB                    0x1AB // Unused Flag

//#define NUM_BADGES                                   (1 + FLAG_BADGE08_GET - FLAG_BADGE01_GET)
#define NUM_BADGES                                   29

// Towns and Cities
#define FLAG_VISITED_LITTLEROOT_TOWN                (SYSTEM_FLAGS + 0xF)
#define FLAG_VISITED_OLDALE_TOWN                    (SYSTEM_FLAGS + 0x10)
#define FLAG_VISITED_DEWFORD_TOWN                   (SYSTEM_FLAGS + 0x11)
#define FLAG_VISITED_LAVARIDGE_TOWN                 (SYSTEM_FLAGS + 0x12)
#define FLAG_VISITED_FALLARBOR_TOWN                 (SYSTEM_FLAGS + 0x13)
#define FLAG_VISITED_VERDANTURF_TOWN                (SYSTEM_FLAGS + 0x14)
#define FLAG_VISITED_PACIFIDLOG_TOWN                (SYSTEM_FLAGS + 0x15)
#define FLAG_VISITED_PETALBURG_CITY                 (SYSTEM_FLAGS + 0x16)
#define FLAG_VISITED_SLATEPORT_CITY                 (SYSTEM_FLAGS + 0x17)
#define FLAG_VISITED_MAUVILLE_CITY                  (SYSTEM_FLAGS + 0x18)
#define FLAG_VISITED_RUSTBORO_CITY                  (SYSTEM_FLAGS + 0x19)
#define FLAG_VISITED_FORTREE_CITY                   (SYSTEM_FLAGS + 0x1A)
#define FLAG_VISITED_LILYCOVE_CITY                  (SYSTEM_FLAGS + 0x1B)
#define FLAG_VISITED_MOSSDEEP_CITY                  (SYSTEM_FLAGS + 0x1C)
#define FLAG_VISITED_SOOTOPOLIS_CITY                (SYSTEM_FLAGS + 0x1D)
#define FLAG_VISITED_EVER_GRANDE_CITY               (SYSTEM_FLAGS + 0x1E)

#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1F) // Seems to be related to linking.
#define FLAG_NURSE_UNION_ROOM_REMINDER              (SYSTEM_FLAGS + 0x20)

#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x29)
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x2D)


#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x30)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x31)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x32)
#define FLAG_SYS_CHANGED_DEWFORD_TREND              (SYSTEM_FLAGS + 0x33)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x34)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x35)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x36)

#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x3A)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x3B)

#define FLAG_LANDMARK_FLOWER_SHOP                   (SYSTEM_FLAGS + 0x3C)
#define FLAG_LANDMARK_MR_BRINEY_HOUSE               (SYSTEM_FLAGS + 0x3D)
#define FLAG_LANDMARK_ABANDONED_SHIP                (SYSTEM_FLAGS + 0x3E)
#define FLAG_LANDMARK_SEASHORE_HOUSE                (SYSTEM_FLAGS + 0x3F)
#define FLAG_LANDMARK_NEW_MAUVILLE                  (SYSTEM_FLAGS + 0x40)
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP            (SYSTEM_FLAGS + 0x41)
#define FLAG_LANDMARK_TRICK_HOUSE                   (SYSTEM_FLAGS + 0x42)
#define FLAG_LANDMARK_WINSTRATE_FAMILY              (SYSTEM_FLAGS + 0x43)
#define FLAG_LANDMARK_GLASS_WORKSHOP                (SYSTEM_FLAGS + 0x44)
#define FLAG_LANDMARK_LANETTES_HOUSE                (SYSTEM_FLAGS + 0x45)
#define FLAG_LANDMARK_POKEMON_DAYCARE               (SYSTEM_FLAGS + 0x46)
#define FLAG_LANDMARK_SEAFLOOR_CAVERN               (SYSTEM_FLAGS + 0x47)
#define FLAG_LANDMARK_BATTLE_FRONTIER               (SYSTEM_FLAGS + 0x48)
#define FLAG_LANDMARK_SOUTHERN_ISLAND               (SYSTEM_FLAGS + 0x49)
#define FLAG_LANDMARK_FIERY_PATH                    (SYSTEM_FLAGS + 0x4A)

#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x4B)
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x52)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x53)

#define FLAG_LANDMARK_POKEMON_LEAGUE                (SYSTEM_FLAGS + 0x54)
#define FLAG_LANDMARK_ISLAND_CAVE                   (SYSTEM_FLAGS + 0x55)
#define FLAG_LANDMARK_DESERT_RUINS                  (SYSTEM_FLAGS + 0x56)
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE          (SYSTEM_FLAGS + 0x57)
#define FLAG_LANDMARK_SCORCHED_SLAB                 (SYSTEM_FLAGS + 0x58)
#define FLAG_LANDMARK_ANCIENT_TOMB                  (SYSTEM_FLAGS + 0x59)
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE          (SYSTEM_FLAGS + 0x5A)
#define FLAG_LANDMARK_HUNTERS_HOUSE                 (SYSTEM_FLAGS + 0x5B)
#define FLAG_LANDMARK_SEALED_CHAMBER                (SYSTEM_FLAGS + 0x5C)

#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x5D)

#define FLAG_LANDMARK_SKY_PILLAR                    (SYSTEM_FLAGS + 0x5E)

#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x60) // RECEIVED Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x62)

#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE           (SYSTEM_FLAGS + 0x63)

#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x65)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x66)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x67)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x68)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x69)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x6A)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x6C)
#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x6E)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x6F)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x70)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x71)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x72)

#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x73)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x74)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x75)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x76)

#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x77)

#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x78)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x79)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x7A)

#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x7B)

#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x7C)
#define FLAG_LANDMARK_ALTERING_CAVE                 (SYSTEM_FLAGS + 0x7D)
#define FLAG_LANDMARK_DESERT_UNDERPASS              (SYSTEM_FLAGS + 0x7E)
#define FLAG_LANDMARK_ARTISAN_CAVE                  (SYSTEM_FLAGS + 0x7F)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x80)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x81)
#define FLAG_LANDMARK_TRAINER_HILL                  (SYSTEM_FLAGS + 0x82)



#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x84)

#define FLAG_VISITED_PALLET_TOWN                           (SYSTEM_FLAGS + 0x85) // Unused Flag
#define FLAG_VISITED_VIRIDIAN_CITY                           (SYSTEM_FLAGS + 0x86) // Unused Flag
#define FLAG_VISITED_PEWTER_CITY                           (SYSTEM_FLAGS + 0x87) // Unused Flag
#define FLAG_VISITED_CERULEAN_CITY                             (SYSTEM_FLAGS + 0x88) // Unused Flag
#define FLAG_VISITED_LAVENDER_TOWN                           (SYSTEM_FLAGS + 0x89) // Unused Flag
#define FLAG_VISITED_VERMILION_CITY                           (SYSTEM_FLAGS + 0x8A) // Unused Flag
#define FLAG_VISITED_CELADON_CITY                          (SYSTEM_FLAGS + 0x8B) // Unused Flag
#define FLAG_VISITED_FUCHSIA_CITY                         (SYSTEM_FLAGS + 0x8C) // Unused Flag
#define FLAG_VISITED_CINNABAR_ISLAND                           (SYSTEM_FLAGS + 0x8D) // Unused Flag
#define FLAG_VISITED_INDIGO_PLATEAU                           (SYSTEM_FLAGS + 0x8E) // Unused Flag
#define FLAG_VISITED_SAFFRON_CITY                           (SYSTEM_FLAGS + 0x8F) // Unused Flag
#define FLAG_VISITED_ROUTE_4_FLY                           (SYSTEM_FLAGS + 0x90) // Unused Flag
#define FLAG_VISITED_ROUTE_10_FLY                           (SYSTEM_FLAGS + 0x91) // Unused Flag
#define FLAG_VISITED_ONE_ISLAND                           (SYSTEM_FLAGS + 0x92) // Unused Flag
#define FLAG_VISITED_TWO_ISLAND                           (SYSTEM_FLAGS + 0x93) // Unused Flag
#define FLAG_VISITED_THREE_ISLAND                           (SYSTEM_FLAGS + 0x94) // Unused Flag
#define FLAG_VISITED_FOUR_ISLAND                           (SYSTEM_FLAGS + 0x95) // Unused Flag
#define FLAG_VISITED_FIVE_ISLAND                           (SYSTEM_FLAGS + 0x96) // Unused Flag
#define FLAG_VISITED_SIX_ISLAND                           (SYSTEM_FLAGS + 0x97) // Unused Flag
#define FLAG_VISITED_SEVEN_ISLAND                           (SYSTEM_FLAGS + 0x98) // Unused Flag
#define FLAG_VISITED_ROCKET_HIDEOUT_JOHTO                           (SYSTEM_FLAGS + 0x99) // Unused Flag
#define FLAG_VISITED_CHERRYGROVE_CITY                           (SYSTEM_FLAGS + 0x9A) // Unused Flag
#define FLAG_VISITED_AZALEA_TOWN                           (SYSTEM_FLAGS + 0x9B) // Unused Flag
#define FLAG_VISITED_ECRUTEAK_CITY                           (SYSTEM_FLAGS + 0x9C) // Unused Flag
#define FLAG_VISITED_OLIVINE_CITY                           (SYSTEM_FLAGS + 0x9D) // Unused Flag
#define FLAG_VISITED_GOLDENROD_CITY                           (SYSTEM_FLAGS + 0x9E) // Unused Flag
#define FLAG_VISITED_CIANWOOD_CITY                           (SYSTEM_FLAGS + 0x9F) // Unused Flag
#define FLAG_VISITED_MAHOGANY_CITY                           (SYSTEM_FLAGS + 0xA0) // Unused Flag
#define FLAG_VISITED_VIOLET_CITY                          (SYSTEM_FLAGS + 0xA1) // Unused Flag
#define FLAG_VISITED_MT_SILVER                           (SYSTEM_FLAGS + 0xA2) // Unused Flag
#define FLAG_VISITED_NEW_BARK_TOWN                          (SYSTEM_FLAGS + 0xA3) // Unused Flag
#define FLAG_VISITED_BLACKTHORN_CITY                           (SYSTEM_FLAGS + 0xA4) // Unused Flag
#define FLAG_UNUSED_0x905                           (SYSTEM_FLAGS + 0xA5) // Unused Flag
#define FLAG_UNUSED_0x906                           (SYSTEM_FLAGS + 0xA6) // Unused Flag
#define FLAG_UNUSED_0x907                           (SYSTEM_FLAGS + 0xA7) // Unused Flag
#define FLAG_UNUSED_0x908                           (SYSTEM_FLAGS + 0xA8) // Unused Flag
#define FLAG_UNUSED_0x909                           (SYSTEM_FLAGS + 0xA9) // Unused Flag
#define FLAG_UNUSED_0x90A                           (SYSTEM_FLAGS + 0xAA) // Unused Flag
#define FLAG_UNUSED_0x90B                           (SYSTEM_FLAGS + 0xAB) // Unused Flag
#define FLAG_UNUSED_0x90C                           (SYSTEM_FLAGS + 0xAC) // Unused Flag
#define FLAG_UNUSED_0x90D                           (SYSTEM_FLAGS + 0xAD) // Unused Flag
#define FLAG_UNUSED_0x90E                           (SYSTEM_FLAGS + 0xAE) // Unused Flag
#define FLAG_UNUSED_0x90F                           (SYSTEM_FLAGS + 0xAF) // Unused Flag
#define FLAG_UNUSED_0x910                           (SYSTEM_FLAGS + 0xB0) // Unused Flag
#define FLAG_UNUSED_0x911                           (SYSTEM_FLAGS + 0xB1) // Unused Flag
#define FLAG_UNUSED_0x912                           (SYSTEM_FLAGS + 0xB2) // Unused Flag
#define FLAG_UNUSED_0x913                           (SYSTEM_FLAGS + 0xB3) // Unused Flag
#define FLAG_UNUSED_0x914                           (SYSTEM_FLAGS + 0xB4) // Unused Flag
#define FLAG_UNUSED_0x915                           (SYSTEM_FLAGS + 0xB5) // Unused Flag
#define FLAG_UNUSED_0x916                           (SYSTEM_FLAGS + 0xB6) // Unused Flag
#define FLAG_UNUSED_0x917                           (SYSTEM_FLAGS + 0xB7) // Unused Flag
#define FLAG_UNUSED_0x918                           (SYSTEM_FLAGS + 0xB8) // Unused Flag
#define FLAG_UNUSED_0x919                           (SYSTEM_FLAGS + 0xB9) // Unused Flag
#define FLAG_UNUSED_0x91A                           (SYSTEM_FLAGS + 0xBA) // Unused Flag
#define FLAG_UNUSED_0x91B                           (SYSTEM_FLAGS + 0xBB) // Unused Flag
#define FLAG_UNUSED_0x91C                           (SYSTEM_FLAGS + 0xBC) // Unused Flag
#define FLAG_UNUSED_0x91D                           (SYSTEM_FLAGS + 0xBD) // Unused Flag
#define FLAG_UNUSED_0x91E                           (SYSTEM_FLAGS + 0xBE) // Unused Flag
#define FLAG_UNUSED_0x91F                           (SYSTEM_FLAGS + 0xBF) // Unused Flag

// Daily Flags
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_UNUSED_0x91F + (8 - FLAG_UNUSED_0x91F % 8))
#define FLAG_UNUSED_0x920                           (DAILY_FLAGS_START + 0x0)  // Unused Flag
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x2)
#define FLAG_UNUSED_0x923                           (DAILY_FLAGS_START + 0x3)  // Unused Flag
#define FLAG_UNUSED_0x924                           (DAILY_FLAGS_START + 0x4)  // Unused Flag
#define FLAG_UNUSED_0x925                           (DAILY_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_UNUSED_0x926                           (DAILY_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_UNUSED_0x927                           (DAILY_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_UNUSED_0x928                           (DAILY_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_UNUSED_0x929                           (DAILY_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_DAILY_PICKED_LOTO_TICKET               (DAILY_FLAGS_START + 0xA)
#define FLAG_DAILY_ROUTE_114_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xB)
#define FLAG_DAILY_ROUTE_111_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xC)
#define FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY      (DAILY_FLAGS_START + 0xD)
#define FLAG_DAILY_ROUTE_120_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xE)
#define FLAG_DAILY_LILYCOVE_RECEIVED_BERRY          (DAILY_FLAGS_START + 0xF)
#define FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY       (DAILY_FLAGS_START + 0x10)
#define FLAG_DAILY_BERRY_MASTERS_WIFE               (DAILY_FLAGS_START + 0x11)
#define FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY        (DAILY_FLAGS_START + 0x12)
#define FLAG_UNUSED_0x933                           (DAILY_FLAGS_START + 0x13) // Unused Flag
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x14)

#define FLAG_UNUSED_0x935                           (DAILY_FLAGS_START + 0x15) // Unused Flag
#define FLAG_UNUSED_0x936                           (DAILY_FLAGS_START + 0x16) // Unused Flag
#define FLAG_UNUSED_0x937                           (DAILY_FLAGS_START + 0x17) // Unused Flag
#define FLAG_UNUSED_0x938                           (DAILY_FLAGS_START + 0x18) // Unused Flag
#define FLAG_UNUSED_0x939                           (DAILY_FLAGS_START + 0x19) // Unused Flag
#define FLAG_UNUSED_0x93A                           (DAILY_FLAGS_START + 0x1A) // Unused Flag
#define FLAG_UNUSED_0x93B                           (DAILY_FLAGS_START + 0x1B) // Unused Flag
#define FLAG_UNUSED_0x93C                           (DAILY_FLAGS_START + 0x1C) // Unused Flag
#define FLAG_UNUSED_0x93D                           (DAILY_FLAGS_START + 0x1D) // Unused Flag
#define FLAG_UNUSED_0x93E                           (DAILY_FLAGS_START + 0x1E) // Unused Flag
#define FLAG_UNUSED_0x93F                           (DAILY_FLAGS_START + 0x1F) // Unused Flag
#define FLAG_UNUSED_0x940                           (DAILY_FLAGS_START + 0x20) // Unused Flag
#define FLAG_UNUSED_0x941                           (DAILY_FLAGS_START + 0x21) // Unused Flag
#define FLAG_UNUSED_0x942                           (DAILY_FLAGS_START + 0x22) // Unused Flag
#define FLAG_UNUSED_0x943                           (DAILY_FLAGS_START + 0x23) // Unused Flag
#define FLAG_UNUSED_0x944                           (DAILY_FLAGS_START + 0x24) // Unused Flag
#define FLAG_UNUSED_0x945                           (DAILY_FLAGS_START + 0x25) // Unused Flag
#define FLAG_UNUSED_0x946                           (DAILY_FLAGS_START + 0x26) // Unused Flag
#define FLAG_UNUSED_0x947                           (DAILY_FLAGS_START + 0x27) // Unused Flag
#define FLAG_UNUSED_0x948                           (DAILY_FLAGS_START + 0x28) // Unused Flag
#define FLAG_UNUSED_0x949                           (DAILY_FLAGS_START + 0x29) // Unused Flag
#define FLAG_UNUSED_0x94A                           (DAILY_FLAGS_START + 0x2A) // Unused Flag
#define FLAG_UNUSED_0x94B                           (DAILY_FLAGS_START + 0x2B) // Unused Flag
#define FLAG_UNUSED_0x94C                           (DAILY_FLAGS_START + 0x2C) // Unused Flag
#define FLAG_UNUSED_0x94D                           (DAILY_FLAGS_START + 0x2D) // Unused Flag
#define FLAG_UNUSED_0x94E                           (DAILY_FLAGS_START + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x94F                           (DAILY_FLAGS_START + 0x2F) // Unused Flag
#define FLAG_UNUSED_0x950                           (DAILY_FLAGS_START + 0x30) // Unused Flag
#define FLAG_UNUSED_0x951                           (DAILY_FLAGS_START + 0x31) // Unused Flag
#define FLAG_UNUSED_0x952                           (DAILY_FLAGS_START + 0x32) // Unused Flag
#define FLAG_UNUSED_0x953                           (DAILY_FLAGS_START + 0x33) // Unused Flag
#define FLAG_UNUSED_0x954                           (DAILY_FLAGS_START + 0x34) // Unused Flag
#define FLAG_UNUSED_0x955                           (DAILY_FLAGS_START + 0x35) // Unused Flag
#define FLAG_UNUSED_0x956                           (DAILY_FLAGS_START + 0x36) // Unused Flag
#define FLAG_UNUSED_0x957                           (DAILY_FLAGS_START + 0x37) // Unused Flag
#define FLAG_UNUSED_0x958                           (DAILY_FLAGS_START + 0x38) // Unused Flag
#define FLAG_UNUSED_0x959                           (DAILY_FLAGS_START + 0x39) // Unused Flag
#define FLAG_UNUSED_0x95A                           (DAILY_FLAGS_START + 0x3A) // Unused Flag
#define FLAG_UNUSED_0x95B                           (DAILY_FLAGS_START + 0x3B) // Unused Flag
#define FLAG_UNUSED_0x95C                           (DAILY_FLAGS_START + 0x3C) // Unused Flag
#define FLAG_UNUSED_0x95D                           (DAILY_FLAGS_START + 0x3D) // Unused Flag
#define FLAG_UNUSED_0x95E                           (DAILY_FLAGS_START + 0x3E) // Unused Flag
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // Unused Flag
#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))
#define TRAINER_FLAGS_START 0x961
#define TRAINER_FLAGS_END (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1)


//flags para hoenn

#define FLAG_HOENN_1 (TRAINER_FLAGS_END + 1) // MONTE CENIZO DEVON
#define FLAG_HOENN_2 (TRAINER_FLAGS_END + 2) // ERICO Y DEVON HABLANDO DE MALVALANOVA AL ENTRAR A LA CIUDAD
#define FLAG_HOENN_3 (TRAINER_FLAGS_END + 3) // DEVON EN MALVALANOVA
#define FLAG_HOENN_4 (TRAINER_FLAGS_END + 4) // TRISTANA EN CASINO MALVALONA
#define FLAG_HOENN_5 (TRAINER_FLAGS_END + 5) // BLASCO Y TRISTANA ESCENA VERDEGAL
#define FLAG_HOENN_6 (TRAINER_FLAGS_END + 6) // BLOQUEO ACCESO CIUDAD PORTUAL
#define FLAG_HOENN_7 (TRAINER_FLAGS_END + 7) // BLOQUEO RUTA 118
#define FLAG_HOENN_8 (TRAINER_FLAGS_END + 8) // BLOQUEO TUNEL VERDEGAL
#define FLAG_HOENN_9 (TRAINER_FLAGS_END + 9) // ENTREVISTA PRESIDENTE DEVON MUSEO OCEÁNICO
#define FLAG_HOENN_10 (TRAINER_FLAGS_END + 10) // NORMAN MUSEO OCEÁNICO
#define FLAG_HOENN_11 (TRAINER_FLAGS_END + 11) // PRESIDENTE MUSEO OCEÁNICO
#define FLAG_HOENN_12 (TRAINER_FLAGS_END + 12) // BLOQUEO PERIODISTAS CIUDAD PETALIA
#define FLAG_HOENN_13 (TRAINER_FLAGS_END + 13) // TRISTANA CUEVA GRANITO 3F - ARIANA CASINO
#define FLAG_HOENN_14 (TRAINER_FLAGS_END + 14) // BLOQUEO PUERTO PORTUAL
#define FLAG_HOENN_15 (TRAINER_FLAGS_END + 15) // DEVON EN SUBMARINO 
#define FLAG_HOENN_16 (TRAINER_FLAGS_END + 16) // DEVON EN PUNTANEVA
#define FLAG_HOENN_17 (TRAINER_FLAGS_END + 17) // REGIGIGAS PUNTANEVA
#define FLAG_HOENN_18 (TRAINER_FLAGS_END + 18) // ARIANA ENTRADA PUNTANEVA
#define FLAG_HOENN_19 (TRAINER_FLAGS_END + 19) // ARIANA ENTRADA TEMPLO
#define FLAG_HOENN_20 (TRAINER_FLAGS_END + 20) // ELECTIVIRE X DESPACHO HOENN
#define FLAG_HOENN_21 (TRAINER_FLAGS_END + 21) // RED ORB DESPACHO HOENN
#define FLAG_HOENN_22 (TRAINER_FLAGS_END + 22) // BLUE ORB DESPACHO HOENN
#define FLAG_HOENN_23 (TRAINER_FLAGS_END + 23) // AMATISTA SALA GROUDON
#define FLAG_HOENN_24 (TRAINER_FLAGS_END + 24) // DERROTA GROUDON MAGMA HIDEOUT 4F, CIENTIFICOS BLOQUEO MALVALONA
#define FLAG_HOENN_25 (TRAINER_FLAGS_END + 25) // HOMBRE ESTRATEGA RUTA 111
#define FLAG_HOENN_26 (TRAINER_FLAGS_END + 26) // NIETO ESTRATEGA CASA RUTA 111
#define FLAG_HOENN_27 (TRAINER_FLAGS_END + 27) // NORMAN RUTA 119
#define FLAG_HOENN_28 (TRAINER_FLAGS_END + 28) // DEVON INSTITUTO METEOROLOGICO
#define FLAG_HOENN_29 (TRAINER_FLAGS_END + 29) // ABEDUL BLOQUEO RUTA 103
#define FLAG_HOENN_30 (TRAINER_FLAGS_END + 30) // ROPA ASCENSO ADMIN JEFE JEFE
#define FLAG_HOENN_31 (TRAINER_FLAGS_END + 31) // PEEKO BLOQUEO BOSQUE PETALIA
#define FLAG_HOENN_32 (TRAINER_FLAGS_END + 32) // ESCANER VERDADERO - TRISTANA BLOQUEO CUEVA GRANITO - NAO ABANDONADA DEVON
#define FLAG_HOENN_33 (TRAINER_FLAGS_END + 33) // CHICA CASA PLAYA RUTA 109
#define FLAG_HOENN_34 (TRAINER_FLAGS_END + 34) // CHICA DENTRO CASA PLAYA RUTA 109
#define FLAG_HOENN_35 (TRAINER_FLAGS_END + 35) // PADRE CASA PLAYA RUTA 109
#define FLAG_HOENN_36 (TRAINER_FLAGS_END + 36) // NINO CASA AZULINA FINAL SECUNDARIA CASA PLAYA
#define FLAG_HOENN_37 (TRAINER_FLAGS_END + 37) // DUENO MUSEO VERDEGAL
#define FLAG_HOENN_38 (TRAINER_FLAGS_END + 38) // DUENO MUSEO PORTUAL
#define FLAG_HOENN_39 (TRAINER_FLAGS_END + 39) // CABALLERO MUSEO PORTUAL
#define FLAG_HOENN_40 (TRAINER_FLAGS_END + 40) // SECUNDARIA TUNEL ROCA, FUJI 1
#define FLAG_HOENN_41 (TRAINER_FLAGS_END + 41) // SECUNDARIA TUNEL ROCA, SACHIKO Y FUJI
#define FLAG_HOENN_42 (TRAINER_FLAGS_END + 42) // SECUNDARIA TUNEL ROCA, SACHIKO Y FUJI 2
#define FLAG_HOENN_43 (TRAINER_FLAGS_END + 43) // SECUNDARIA TUNEL ROCA, SACHIKO Y FUJI 3
#define FLAG_HOENN_44 (TRAINER_FLAGS_END + 44) // SECUNDARIA TUNEL ROCA, SACHIKO Y FUJI 4
#define FLAG_HOENN_45 (TRAINER_FLAGS_END + 45) // ARIANA SS TIDAL
#define FLAG_HOENN_46 (TRAINER_FLAGS_END + 46) // ANDRA Y TRISTANA EN CUEVA METEORO
#define FLAG_HOENN_47 (TRAINER_FLAGS_END + 47) // ARIANA SOTANO SS TIDAL
#define FLAG_HOENN_48 (TRAINER_FLAGS_END + 48) // ARIANA SOTANO SS TIDAL 2
#define FLAG_HOENN_49 (TRAINER_FLAGS_END + 49) // ARIANA SUBMARINO DEVON
#define FLAG_HOENN_50 (TRAINER_FLAGS_END + 50) // ANDRA CIUDAD ALGARIA
#define FLAG_HOENN_51 (TRAINER_FLAGS_END + 51) // RASMUS PUNTANEVA S5 PRINCIPIO
#define FLAG_HOENN_52 (TRAINER_FLAGS_END + 52) // DEVON RUTA 120
#define FLAG_HOENN_53 (TRAINER_FLAGS_END + 53) // ANDRA MONTE PIRICO
#define FLAG_HOENN_54 (TRAINER_FLAGS_END + 54) // AQUILES Y TOLO CIUDAD CALAGUA
#define FLAG_HOENN_55 (TRAINER_FLAGS_END + 55) // ????
#define FLAG_HOENN_56 (TRAINER_FLAGS_END + 56) // KYOGRE ASLEEP SEAFLOOR 9
#define FLAG_HOENN_57 (TRAINER_FLAGS_END + 57) // ANDRA, VALENTE Y ADM.RUBY EN PUEBLO OROMAR
#define FLAG_HOENN_58 (TRAINER_FLAGS_END + 58) // ANDRA CAMARA SELLADA
#define FLAG_HOENN_59 (TRAINER_FLAGS_END + 59) // AMATISTA Y TODA DEVON CAMARA SELLADA
#define FLAG_HOENN_60 (TRAINER_FLAGS_END + 60) // ANDRA VS DEVON CAMARA SELLADA S3
#define FLAG_HOENN_61 (TRAINER_FLAGS_END + 61) // ANDRA VS DEVON CAMARA SELLADA S5, 2
#define FLAG_HOENN_62 (TRAINER_FLAGS_END + 62) // ANDRA VS DEVON CAMARA SELLADA S6 & RASMUS Y MIGUEL CAMARA SELLADA S7
#define FLAG_HOENN_63 (TRAINER_FLAGS_END + 63) // ANDRA VS DEVON CAMARA SELLADA S4
#define FLAG_HOENN_64 (TRAINER_FLAGS_END + 64) // VALENTE CAMARA SELLADA S4
#define FLAG_HOENN_65 (TRAINER_FLAGS_END + 65) // ANDRA CAMARA SELLADA S5
#define FLAG_HOENN_66 (TRAINER_FLAGS_END + 66) // clearflag
#define FLAG_HOENN_67 (TRAINER_FLAGS_END + 67) // REGIGIGAS CAMARA SELLADA S8
#define FLAG_HOENN_68 (TRAINER_FLAGS_END + 68) // ANDRA CAMARA SELLADA S8
#define FLAG_HOENN_69 (TRAINER_FLAGS_END + 69) // AMATISTA CAMARA SELLADA S8
#define FLAG_HOENN_70 (TRAINER_FLAGS_END + 70) // AGATHA, MORFEO Y LIDER EN PUERTA GIMNASIO LAVANDA PASADO
#define FLAG_HOENN_71 (TRAINER_FLAGS_END + 71) // LAVENDER PASADO GYM, TODOS MENOS OAK
#define FLAG_HOENN_72 (TRAINER_FLAGS_END + 72) // MENTA MODESTA JARDIN BILL
#define FLAG_HOENN_73 (TRAINER_FLAGS_END + 73) // MENTA CAUTA JARDIN BELL
#define FLAG_HOENN_74 (TRAINER_FLAGS_END + 74) // BAYA 1 REDUCTORA EVS, SECUNDARIA KANTO
#define FLAG_HOENN_75 (TRAINER_FLAGS_END + 75) // BAYA 2 REDUCTORA EVS, SECUNDARIA KANTO
#define FLAG_HOENN_76 (TRAINER_FLAGS_END + 76) // BAYA 3 REDUCTORA EVS, SECUNDARIA KANTO
#define FLAG_HOENN_77 (TRAINER_FLAGS_END + 77) // BAYA 4 REDUCTORA EVS, SECUNDARIA KANTO
#define FLAG_HOENN_78 (TRAINER_FLAGS_END + 78) // BAYA 5 REDUCTORA EVS, SECUNDARIA KANTO
#define FLAG_HOENN_79 (TRAINER_FLAGS_END + 79) // BAYA 6 REDUCTORA EVS, SECUNDARIA KANTO
#define FLAG_HOENN_80 (TRAINER_FLAGS_END + 80) // PRESIDENTE SILPH S2
#define FLAG_HOENN_81 (TRAINER_FLAGS_END + 81) // CAMPEONA FANTASMA LAVENDER SECTA PASADIZO
#define FLAG_HOENN_82 (TRAINER_FLAGS_END + 82) // CAMPEONA FANTASMA LAVENDER SECTA PASADIZO 3
#define FLAG_HOENN_83 (TRAINER_FLAGS_END + 83) // ESENCIA SECTA PASADIZO 2
#define FLAG_HOENN_84 (TRAINER_FLAGS_END + 84) // SECUNDARIA PLATEADA, CASA CARMIN JARDIN
#define FLAG_HOENN_85 (TRAINER_FLAGS_END + 85) // PRESIDENTE SILPH 11F
#define FLAG_HOENN_86 (TRAINER_FLAGS_END + 86) // SECUNDARIA PLATEADA CAZABICHOS
#define FLAG_HOENN_87 (TRAINER_FLAGS_END + 87) // SECUNDARIA PLATEADA, CASA CARMIN MOTEROS
#define FLAG_HOENN_88 (TRAINER_FLAGS_END + 88) 
#define FLAG_HOENN_89 (TRAINER_FLAGS_END + 89) 
#define FLAG_HOENN_90 (TRAINER_FLAGS_END + 90) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 1
#define FLAG_HOENN_91 (TRAINER_FLAGS_END + 91) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 1
#define FLAG_HOENN_92 (TRAINER_FLAGS_END + 92) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 1
#define FLAG_HOENN_93 (TRAINER_FLAGS_END + 93) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 1
#define FLAG_HOENN_94 (TRAINER_FLAGS_END + 94) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 1
#define FLAG_HOENN_95 (TRAINER_FLAGS_END + 95) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 1
#define FLAG_HOENN_96 (TRAINER_FLAGS_END + 96) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 1
#define FLAG_HOENN_97 (TRAINER_FLAGS_END + 97) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 1
#define FLAG_HOENN_98 (TRAINER_FLAGS_END + 98) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 1
#define FLAG_HOENN_99 (TRAINER_FLAGS_END + 99) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 1
#define FLAG_HOENN_100 (TRAINER_FLAGS_END + 100) // MAXIPEPITA DESPACHO PRESIDENTE SILPH S2
#define FLAG_HOENN_101 (TRAINER_FLAGS_END + 101) // MASTER BALL DESPACHO PRESIDENTE SILPH S2
#define FLAG_HOENN_102 (TRAINER_FLAGS_END + 102)
#define FLAG_HOENN_103 (TRAINER_FLAGS_END + 103)
#define FLAG_HOENN_104 (TRAINER_FLAGS_END + 104)
#define FLAG_HOENN_105 (TRAINER_FLAGS_END + 105)
#define FLAG_HOENN_106 (TRAINER_FLAGS_END + 106)
#define FLAG_HOENN_107 (TRAINER_FLAGS_END + 107)
#define FLAG_HOENN_108 (TRAINER_FLAGS_END + 108)
#define FLAG_HOENN_109 (TRAINER_FLAGS_END + 109)
#define FLAG_HOENN_110 (TRAINER_FLAGS_END + 110)
#define FLAG_HOENN_111 (TRAINER_FLAGS_END + 111)
#define FLAG_HOENN_112 (TRAINER_FLAGS_END + 112)
#define FLAG_HOENN_113 (TRAINER_FLAGS_END + 113)
#define FLAG_HOENN_114 (TRAINER_FLAGS_END + 114)
#define FLAG_HOENN_115 (TRAINER_FLAGS_END + 115)
#define FLAG_HOENN_116 (TRAINER_FLAGS_END + 116)
#define FLAG_HOENN_117 (TRAINER_FLAGS_END + 117)
#define FLAG_HOENN_118 (TRAINER_FLAGS_END + 118)
#define FLAG_HOENN_119 (TRAINER_FLAGS_END + 119)
#define FLAG_HOENN_120 (TRAINER_FLAGS_END + 120)
#define FLAG_HOENN_121 (TRAINER_FLAGS_END + 121)
#define FLAG_HOENN_122 (TRAINER_FLAGS_END + 122)
#define FLAG_HOENN_123 (TRAINER_FLAGS_END + 123)
#define FLAG_HOENN_124 (TRAINER_FLAGS_END + 124)
#define FLAG_HOENN_125 (TRAINER_FLAGS_END + 125)
#define FLAG_HOENN_126 (TRAINER_FLAGS_END + 126)
#define FLAG_HOENN_127 (TRAINER_FLAGS_END + 127)
#define FLAG_HOENN_128 (TRAINER_FLAGS_END + 128)
#define FLAG_HOENN_129 (TRAINER_FLAGS_END + 129)
#define FLAG_HOENN_130 (TRAINER_FLAGS_END + 130)
#define FLAG_HOENN_131 (TRAINER_FLAGS_END + 131)
#define FLAG_HOENN_132 (TRAINER_FLAGS_END + 132)
#define FLAG_HOENN_133 (TRAINER_FLAGS_END + 133)
#define FLAG_HOENN_134 (TRAINER_FLAGS_END + 134)
#define FLAG_HOENN_135 (TRAINER_FLAGS_END + 135)
#define FLAG_HOENN_136 (TRAINER_FLAGS_END + 136)
#define FLAG_HOENN_137 (TRAINER_FLAGS_END + 137)
#define FLAG_HOENN_138 (TRAINER_FLAGS_END + 138)
#define FLAG_HOENN_139 (TRAINER_FLAGS_END + 139)
#define FLAG_HOENN_140 (TRAINER_FLAGS_END + 140)
#define FLAG_HOENN_141 (TRAINER_FLAGS_END + 141)
#define FLAG_HOENN_142 (TRAINER_FLAGS_END + 142)
#define FLAG_HOENN_143 (TRAINER_FLAGS_END + 143)
#define FLAG_HOENN_144 (TRAINER_FLAGS_END + 144)
#define FLAG_HOENN_145 (TRAINER_FLAGS_END + 145)
#define FLAG_HOENN_146 (TRAINER_FLAGS_END + 146)
#define FLAG_HOENN_147 (TRAINER_FLAGS_END + 147)
#define FLAG_HOENN_148 (TRAINER_FLAGS_END + 148)
#define FLAG_HOENN_149 (TRAINER_FLAGS_END + 149)
#define FLAG_HOENN_150 (TRAINER_FLAGS_END + 150)
#define FLAG_HOENN_151 (TRAINER_FLAGS_END + 151)
#define FLAG_HOENN_152 (TRAINER_FLAGS_END + 152)
#define FLAG_HOENN_153 (TRAINER_FLAGS_END + 153)
#define FLAG_HOENN_154 (TRAINER_FLAGS_END + 154)
#define FLAG_HOENN_155 (TRAINER_FLAGS_END + 155)
#define FLAG_HOENN_156 (TRAINER_FLAGS_END + 156)
#define FLAG_HOENN_157 (TRAINER_FLAGS_END + 157)
#define FLAG_HOENN_158 (TRAINER_FLAGS_END + 158)
#define FLAG_HOENN_159 (TRAINER_FLAGS_END + 159)
#define FLAG_HOENN_160 (TRAINER_FLAGS_END + 160)
#define FLAG_HOENN_161 (TRAINER_FLAGS_END + 161)
#define FLAG_HOENN_162 (TRAINER_FLAGS_END + 162)
#define FLAG_HOENN_163 (TRAINER_FLAGS_END + 163)
#define FLAG_HOENN_164 (TRAINER_FLAGS_END + 164)
#define FLAG_HOENN_165 (TRAINER_FLAGS_END + 165)
#define FLAG_HOENN_166 (TRAINER_FLAGS_END + 166)
#define FLAG_HOENN_167 (TRAINER_FLAGS_END + 167)
#define FLAG_HOENN_168 (TRAINER_FLAGS_END + 168)
#define FLAG_HOENN_169 (TRAINER_FLAGS_END + 169)
#define FLAG_HOENN_170 (TRAINER_FLAGS_END + 170)
#define FLAG_HOENN_171 (TRAINER_FLAGS_END + 171)
#define FLAG_HOENN_172 (TRAINER_FLAGS_END + 172)
#define FLAG_HOENN_173 (TRAINER_FLAGS_END + 173)
#define FLAG_HOENN_174 (TRAINER_FLAGS_END + 174)
#define FLAG_HOENN_175 (TRAINER_FLAGS_END + 175)
#define FLAG_HOENN_176 (TRAINER_FLAGS_END + 176)
#define FLAG_HOENN_177 (TRAINER_FLAGS_END + 177)
#define FLAG_HOENN_178 (TRAINER_FLAGS_END + 178)
#define FLAG_HOENN_179 (TRAINER_FLAGS_END + 179)
#define FLAG_HOENN_180 (TRAINER_FLAGS_END + 180)
#define FLAG_HOENN_181 (TRAINER_FLAGS_END + 181)
#define FLAG_HOENN_182 (TRAINER_FLAGS_END + 182)
#define FLAG_HOENN_183 (TRAINER_FLAGS_END + 183)
#define FLAG_HOENN_184 (TRAINER_FLAGS_END + 184)
#define FLAG_HOENN_185 (TRAINER_FLAGS_END + 185)
#define FLAG_HOENN_186 (TRAINER_FLAGS_END + 186)
#define FLAG_HOENN_187 (TRAINER_FLAGS_END + 187)
#define FLAG_HOENN_188 (TRAINER_FLAGS_END + 188)
#define FLAG_HOENN_189 (TRAINER_FLAGS_END + 189)
#define FLAG_HOENN_190 (TRAINER_FLAGS_END + 190)
#define FLAG_HOENN_191 (TRAINER_FLAGS_END + 191)
#define FLAG_HOENN_192 (TRAINER_FLAGS_END + 192)
#define FLAG_HOENN_193 (TRAINER_FLAGS_END + 193)
#define FLAG_HOENN_194 (TRAINER_FLAGS_END + 194)
#define FLAG_HOENN_195 (TRAINER_FLAGS_END + 195)
#define FLAG_HOENN_196 (TRAINER_FLAGS_END + 196)
#define FLAG_HOENN_197 (TRAINER_FLAGS_END + 197)
#define FLAG_HOENN_198 (TRAINER_FLAGS_END + 198)
#define FLAG_HOENN_199 (TRAINER_FLAGS_END + 199)
#define FLAG_HOENN_200 (TRAINER_FLAGS_END + 200)
#define FLAG_HOENN_201 (TRAINER_FLAGS_END + 201)
#define FLAG_HOENN_202 (TRAINER_FLAGS_END + 202)
#define FLAG_HOENN_203 (TRAINER_FLAGS_END + 203)
#define FLAG_HOENN_204 (TRAINER_FLAGS_END + 204)
#define FLAG_HOENN_205 (TRAINER_FLAGS_END + 205)
#define FLAG_HOENN_206 (TRAINER_FLAGS_END + 206)
#define FLAG_HOENN_207 (TRAINER_FLAGS_END + 207)
#define FLAG_HOENN_208 (TRAINER_FLAGS_END + 208)
#define FLAG_HOENN_209 (TRAINER_FLAGS_END + 209)
#define FLAG_HOENN_210 (TRAINER_FLAGS_END + 210)
#define FLAG_HOENN_211 (TRAINER_FLAGS_END + 211)
#define FLAG_HOENN_212 (TRAINER_FLAGS_END + 212)
#define FLAG_HOENN_213 (TRAINER_FLAGS_END + 213)
#define FLAG_HOENN_214 (TRAINER_FLAGS_END + 214)
#define FLAG_HOENN_215 (TRAINER_FLAGS_END + 215)
#define FLAG_HOENN_216 (TRAINER_FLAGS_END + 216)
#define FLAG_HOENN_217 (TRAINER_FLAGS_END + 217)
#define FLAG_HOENN_218 (TRAINER_FLAGS_END + 218)
#define FLAG_HOENN_219 (TRAINER_FLAGS_END + 219)
#define FLAG_HOENN_220 (TRAINER_FLAGS_END + 220)
#define FLAG_HOENN_221 (TRAINER_FLAGS_END + 221)
#define FLAG_HOENN_222 (TRAINER_FLAGS_END + 222)
#define FLAG_HOENN_223 (TRAINER_FLAGS_END + 223)
#define FLAG_HOENN_224 (TRAINER_FLAGS_END + 224)
#define FLAG_HOENN_225 (TRAINER_FLAGS_END + 225)
#define FLAG_HOENN_226 (TRAINER_FLAGS_END + 226)
#define FLAG_HOENN_227 (TRAINER_FLAGS_END + 227)
#define FLAG_HOENN_228 (TRAINER_FLAGS_END + 228)
#define FLAG_HOENN_229 (TRAINER_FLAGS_END + 229)
#define FLAG_HOENN_230 (TRAINER_FLAGS_END + 230)
#define FLAG_HOENN_231 (TRAINER_FLAGS_END + 231)
#define FLAG_HOENN_232 (TRAINER_FLAGS_END + 232)
#define FLAG_HOENN_233 (TRAINER_FLAGS_END + 233)
#define FLAG_HOENN_234 (TRAINER_FLAGS_END + 234)
#define FLAG_HOENN_235 (TRAINER_FLAGS_END + 235)
#define FLAG_HOENN_236 (TRAINER_FLAGS_END + 236)
#define FLAG_HOENN_237 (TRAINER_FLAGS_END + 237)
#define FLAG_HOENN_238 (TRAINER_FLAGS_END + 238)
#define FLAG_HOENN_239 (TRAINER_FLAGS_END + 239)
#define FLAG_HOENN_240 (TRAINER_FLAGS_END + 240)
#define FLAG_HOENN_241 (TRAINER_FLAGS_END + 241)
#define FLAG_HOENN_242 (TRAINER_FLAGS_END + 242)
#define FLAG_HOENN_243 (TRAINER_FLAGS_END + 243)
#define FLAG_HOENN_244 (TRAINER_FLAGS_END + 244)
#define FLAG_HOENN_245 (TRAINER_FLAGS_END + 245)
#define FLAG_HOENN_246 (TRAINER_FLAGS_END + 246)
#define FLAG_HOENN_247 (TRAINER_FLAGS_END + 247)
#define FLAG_HOENN_248 (TRAINER_FLAGS_END + 248)
#define FLAG_HOENN_249 (TRAINER_FLAGS_END + 249)
#define FLAG_HOENN_250 (TRAINER_FLAGS_END + 250)
#define FLAG_HOENN_251 (TRAINER_FLAGS_END + 251)
#define FLAG_HOENN_252 (TRAINER_FLAGS_END + 252)
#define FLAG_HOENN_253 (TRAINER_FLAGS_END + 253)
#define FLAG_HOENN_254 (TRAINER_FLAGS_END + 254)
#define FLAG_HOENN_255 (TRAINER_FLAGS_END + 255)
#define FLAG_HOENN_256 (TRAINER_FLAGS_END + 256)
#define FLAG_HOENN_257 (TRAINER_FLAGS_END + 257)
#define FLAG_HOENN_258 (TRAINER_FLAGS_END + 258)
#define FLAG_HOENN_259 (TRAINER_FLAGS_END + 259)
#define FLAG_HOENN_260 (TRAINER_FLAGS_END + 260)
#define FLAG_HOENN_261 (TRAINER_FLAGS_END + 261)
#define FLAG_HOENN_262 (TRAINER_FLAGS_END + 262)
#define FLAG_HOENN_263 (TRAINER_FLAGS_END + 263)
#define FLAG_HOENN_264 (TRAINER_FLAGS_END + 264)
#define FLAG_HOENN_265 (TRAINER_FLAGS_END + 265)
#define FLAG_HOENN_266 (TRAINER_FLAGS_END + 266)
#define FLAG_HOENN_267 (TRAINER_FLAGS_END + 267)
#define FLAG_HOENN_268 (TRAINER_FLAGS_END + 268)
#define FLAG_HOENN_269 (TRAINER_FLAGS_END + 269)
#define FLAG_HOENN_270 (TRAINER_FLAGS_END + 270)
#define FLAG_HOENN_271 (TRAINER_FLAGS_END + 271)
#define FLAG_HOENN_272 (TRAINER_FLAGS_END + 272)
#define FLAG_HOENN_273 (TRAINER_FLAGS_END + 273)
#define FLAG_HOENN_274 (TRAINER_FLAGS_END + 274)
#define FLAG_HOENN_275 (TRAINER_FLAGS_END + 275)
#define FLAG_HOENN_276 (TRAINER_FLAGS_END + 276)
#define FLAG_HOENN_277 (TRAINER_FLAGS_END + 277)
#define FLAG_HOENN_278 (TRAINER_FLAGS_END + 278)
#define FLAG_HOENN_279 (TRAINER_FLAGS_END + 279)
#define FLAG_HOENN_280 (TRAINER_FLAGS_END + 280)
#define FLAG_HOENN_281 (TRAINER_FLAGS_END + 281)
#define FLAG_HOENN_282 (TRAINER_FLAGS_END + 282)
#define FLAG_HOENN_283 (TRAINER_FLAGS_END + 283)
#define FLAG_HOENN_284 (TRAINER_FLAGS_END + 284)
#define FLAG_HOENN_285 (TRAINER_FLAGS_END + 285)
#define FLAG_HOENN_286 (TRAINER_FLAGS_END + 286)
#define FLAG_HOENN_287 (TRAINER_FLAGS_END + 287)
#define FLAG_HOENN_288 (TRAINER_FLAGS_END + 288)
#define FLAG_HOENN_289 (TRAINER_FLAGS_END + 289)
#define FLAG_HOENN_290 (TRAINER_FLAGS_END + 290)
#define FLAG_HOENN_291 (TRAINER_FLAGS_END + 291)
#define FLAG_HOENN_292 (TRAINER_FLAGS_END + 292)
#define FLAG_HOENN_293 (TRAINER_FLAGS_END + 293)
#define FLAG_HOENN_294 (TRAINER_FLAGS_END + 294)
#define FLAG_HOENN_295 (TRAINER_FLAGS_END + 295)
#define FLAG_HOENN_296 (TRAINER_FLAGS_END + 296)
#define FLAG_HOENN_297 (TRAINER_FLAGS_END + 297)
#define FLAG_HOENN_298 (TRAINER_FLAGS_END + 298)
#define FLAG_HOENN_299 (TRAINER_FLAGS_END + 299)
#define FLAG_HOENN_300 (TRAINER_FLAGS_END + 300) // MOTORISTAS Y NPCS UNDERGROUND 5F
#define FLAG_HOENN_301 (TRAINER_FLAGS_END + 301)
#define FLAG_HOENN_302 (TRAINER_FLAGS_END + 302)
#define FLAG_HOENN_303 (TRAINER_FLAGS_END + 303)
#define FLAG_HOENN_304 (TRAINER_FLAGS_END + 304)
#define FLAG_HOENN_305 (TRAINER_FLAGS_END + 305)
#define FLAG_HOENN_306 (TRAINER_FLAGS_END + 306)
#define FLAG_HOENN_307 (TRAINER_FLAGS_END + 307)
#define FLAG_HOENN_308 (TRAINER_FLAGS_END + 308)
#define FLAG_HOENN_309 (TRAINER_FLAGS_END + 309)
#define FLAG_HOENN_310 (TRAINER_FLAGS_END + 310)
#define FLAG_HOENN_311 (TRAINER_FLAGS_END + 311)
#define FLAG_HOENN_312 (TRAINER_FLAGS_END + 312)
#define FLAG_HOENN_313 (TRAINER_FLAGS_END + 313)
#define FLAG_HOENN_314 (TRAINER_FLAGS_END + 314)
#define FLAG_HOENN_315 (TRAINER_FLAGS_END + 315)
#define FLAG_HOENN_316 (TRAINER_FLAGS_END + 316)
#define FLAG_HOENN_317 (TRAINER_FLAGS_END + 317)
#define FLAG_HOENN_318 (TRAINER_FLAGS_END + 318)
#define FLAG_HOENN_319 (TRAINER_FLAGS_END + 319)
#define FLAG_HOENN_320 (TRAINER_FLAGS_END + 320)
#define FLAG_HOENN_321 (TRAINER_FLAGS_END + 321)
#define FLAG_HOENN_322 (TRAINER_FLAGS_END + 322)
#define FLAG_HOENN_323 (TRAINER_FLAGS_END + 323)
#define FLAG_HOENN_324 (TRAINER_FLAGS_END + 324)
#define FLAG_HOENN_325 (TRAINER_FLAGS_END + 325)
#define FLAG_HOENN_326 (TRAINER_FLAGS_END + 326)
#define FLAG_HOENN_327 (TRAINER_FLAGS_END + 327)
#define FLAG_HOENN_328 (TRAINER_FLAGS_END + 328)
#define FLAG_HOENN_329 (TRAINER_FLAGS_END + 329)
#define FLAG_HOENN_330 (TRAINER_FLAGS_END + 330)
#define FLAG_HOENN_331 (TRAINER_FLAGS_END + 331)
#define FLAG_HOENN_332 (TRAINER_FLAGS_END + 332)
#define FLAG_HOENN_333 (TRAINER_FLAGS_END + 333)
#define FLAG_HOENN_334 (TRAINER_FLAGS_END + 334)
#define FLAG_HOENN_335 (TRAINER_FLAGS_END + 335)
#define FLAG_HOENN_336 (TRAINER_FLAGS_END + 336)
#define FLAG_HOENN_337 (TRAINER_FLAGS_END + 337)
#define FLAG_HOENN_338 (TRAINER_FLAGS_END + 338)
#define FLAG_HOENN_339 (TRAINER_FLAGS_END + 339)
#define FLAG_HOENN_340 (TRAINER_FLAGS_END + 340)
#define FLAG_HOENN_341 (TRAINER_FLAGS_END + 341)
#define FLAG_HOENN_342 (TRAINER_FLAGS_END + 342)
#define FLAG_HOENN_343 (TRAINER_FLAGS_END + 343)
#define FLAG_HOENN_344 (TRAINER_FLAGS_END + 344)
#define FLAG_HOENN_345 (TRAINER_FLAGS_END + 345)
#define FLAG_HOENN_346 (TRAINER_FLAGS_END + 346)
#define FLAG_HOENN_347 (TRAINER_FLAGS_END + 347)
#define FLAG_HOENN_348 (TRAINER_FLAGS_END + 348)
#define FLAG_HOENN_349 (TRAINER_FLAGS_END + 349)
#define FLAG_HOENN_350 (TRAINER_FLAGS_END + 350)
#define FLAG_HOENN_351 (TRAINER_FLAGS_END + 351)
#define FLAG_HOENN_352 (TRAINER_FLAGS_END + 352)
#define FLAG_HOENN_353 (TRAINER_FLAGS_END + 353)
#define FLAG_HOENN_354 (TRAINER_FLAGS_END + 354)
#define FLAG_HOENN_355 (TRAINER_FLAGS_END + 355)
#define FLAG_HOENN_356 (TRAINER_FLAGS_END + 356)
#define FLAG_HOENN_357 (TRAINER_FLAGS_END + 357)
#define FLAG_HOENN_358 (TRAINER_FLAGS_END + 358)
#define FLAG_HOENN_359 (TRAINER_FLAGS_END + 359)
#define FLAG_HOENN_360 (TRAINER_FLAGS_END + 360)
#define FLAG_HOENN_361 (TRAINER_FLAGS_END + 361)
#define FLAG_HOENN_362 (TRAINER_FLAGS_END + 362)
#define FLAG_HOENN_363 (TRAINER_FLAGS_END + 363)
#define FLAG_HOENN_364 (TRAINER_FLAGS_END + 364)
#define FLAG_HOENN_365 (TRAINER_FLAGS_END + 365)
#define FLAG_HOENN_366 (TRAINER_FLAGS_END + 366)
#define FLAG_HOENN_367 (TRAINER_FLAGS_END + 367)
#define FLAG_HOENN_368 (TRAINER_FLAGS_END + 368)
#define FLAG_HOENN_369 (TRAINER_FLAGS_END + 369)
#define FLAG_HOENN_370 (TRAINER_FLAGS_END + 370)
#define FLAG_HOENN_371 (TRAINER_FLAGS_END + 371)
#define FLAG_HOENN_372 (TRAINER_FLAGS_END + 372)
#define FLAG_HOENN_373 (TRAINER_FLAGS_END + 373)
#define FLAG_HOENN_374 (TRAINER_FLAGS_END + 374)
#define FLAG_HOENN_375 (TRAINER_FLAGS_END + 375)
#define FLAG_HOENN_376 (TRAINER_FLAGS_END + 376)
#define FLAG_HOENN_377 (TRAINER_FLAGS_END + 377)
#define FLAG_HOENN_378 (TRAINER_FLAGS_END + 378)
#define FLAG_HOENN_379 (TRAINER_FLAGS_END + 379)
#define FLAG_HOENN_380 (TRAINER_FLAGS_END + 380)
#define FLAG_HOENN_381 (TRAINER_FLAGS_END + 381)
#define FLAG_HOENN_382 (TRAINER_FLAGS_END + 382)
#define FLAG_HOENN_383 (TRAINER_FLAGS_END + 383)
#define FLAG_HOENN_384 (TRAINER_FLAGS_END + 384)
#define FLAG_HOENN_385 (TRAINER_FLAGS_END + 385)
#define FLAG_HOENN_386 (TRAINER_FLAGS_END + 386)
#define FLAG_HOENN_387 (TRAINER_FLAGS_END + 387)
#define FLAG_HOENN_388 (TRAINER_FLAGS_END + 388)
#define FLAG_HOENN_389 (TRAINER_FLAGS_END + 389)
#define FLAG_HOENN_390 (TRAINER_FLAGS_END + 390)
#define FLAG_HOENN_391 (TRAINER_FLAGS_END + 391)
#define FLAG_HOENN_392 (TRAINER_FLAGS_END + 392)
#define FLAG_HOENN_393 (TRAINER_FLAGS_END + 393)
#define FLAG_HOENN_394 (TRAINER_FLAGS_END + 394)
#define FLAG_HOENN_395 (TRAINER_FLAGS_END + 395)
#define FLAG_HOENN_396 (TRAINER_FLAGS_END + 396)
#define FLAG_HOENN_397 (TRAINER_FLAGS_END + 397)
#define FLAG_HOENN_398 (TRAINER_FLAGS_END + 398)
#define FLAG_HOENN_399 (TRAINER_FLAGS_END + 399)
#define FLAG_HOENN_400 (TRAINER_FLAGS_END + 400)
#define FLAG_HOENN_401 (TRAINER_FLAGS_END + 401)
#define FLAG_HOENN_402 (TRAINER_FLAGS_END + 402)
#define FLAG_HOENN_403 (TRAINER_FLAGS_END + 403)
#define FLAG_HOENN_404 (TRAINER_FLAGS_END + 404)
#define FLAG_HOENN_405 (TRAINER_FLAGS_END + 405)
#define FLAG_HOENN_406 (TRAINER_FLAGS_END + 406)
#define FLAG_HOENN_407 (TRAINER_FLAGS_END + 407)
#define FLAG_HOENN_408 (TRAINER_FLAGS_END + 408)
#define FLAG_HOENN_409 (TRAINER_FLAGS_END + 409)
#define FLAG_HOENN_410 (TRAINER_FLAGS_END + 410)
#define FLAG_HOENN_411 (TRAINER_FLAGS_END + 411)
#define FLAG_HOENN_412 (TRAINER_FLAGS_END + 412)
#define FLAG_HOENN_413 (TRAINER_FLAGS_END + 413)
#define FLAG_HOENN_414 (TRAINER_FLAGS_END + 414)
#define FLAG_HOENN_415 (TRAINER_FLAGS_END + 415)
#define FLAG_HOENN_416 (TRAINER_FLAGS_END + 416)
#define FLAG_HOENN_417 (TRAINER_FLAGS_END + 417)
#define FLAG_HOENN_418 (TRAINER_FLAGS_END + 418)
#define FLAG_HOENN_419 (TRAINER_FLAGS_END + 419)
#define FLAG_HOENN_420 (TRAINER_FLAGS_END + 420)
#define FLAG_HOENN_421 (TRAINER_FLAGS_END + 421)
#define FLAG_HOENN_422 (TRAINER_FLAGS_END + 422)
#define FLAG_HOENN_423 (TRAINER_FLAGS_END + 423)
#define FLAG_HOENN_424 (TRAINER_FLAGS_END + 424)
#define FLAG_HOENN_425 (TRAINER_FLAGS_END + 425)
#define FLAG_HOENN_426 (TRAINER_FLAGS_END + 426)
#define FLAG_HOENN_427 (TRAINER_FLAGS_END + 427)
#define FLAG_HOENN_428 (TRAINER_FLAGS_END + 428)
#define FLAG_HOENN_429 (TRAINER_FLAGS_END + 429)
#define FLAG_HOENN_430 (TRAINER_FLAGS_END + 430)
#define FLAG_HOENN_431 (TRAINER_FLAGS_END + 431)
#define FLAG_HOENN_432 (TRAINER_FLAGS_END + 432)
#define FLAG_HOENN_433 (TRAINER_FLAGS_END + 433)
#define FLAG_HOENN_434 (TRAINER_FLAGS_END + 434)
#define FLAG_HOENN_435 (TRAINER_FLAGS_END + 435)
#define FLAG_HOENN_436 (TRAINER_FLAGS_END + 436)
#define FLAG_HOENN_437 (TRAINER_FLAGS_END + 437)
#define FLAG_HOENN_438 (TRAINER_FLAGS_END + 438)
#define FLAG_HOENN_439 (TRAINER_FLAGS_END + 439)
#define FLAG_HOENN_440 (TRAINER_FLAGS_END + 440)
#define FLAG_HOENN_441 (TRAINER_FLAGS_END + 441)
#define FLAG_HOENN_442 (TRAINER_FLAGS_END + 442)
#define FLAG_HOENN_443 (TRAINER_FLAGS_END + 443)
#define FLAG_HOENN_444 (TRAINER_FLAGS_END + 444)
#define FLAG_HOENN_445 (TRAINER_FLAGS_END + 445)
#define FLAG_HOENN_446 (TRAINER_FLAGS_END + 446)
#define FLAG_HOENN_447 (TRAINER_FLAGS_END + 447)
#define FLAG_HOENN_448 (TRAINER_FLAGS_END + 448)
#define FLAG_HOENN_449 (TRAINER_FLAGS_END + 449)
#define FLAG_HOENN_450 (TRAINER_FLAGS_END + 450)
#define FLAG_HOENN_451 (TRAINER_FLAGS_END + 451)
#define FLAG_HOENN_452 (TRAINER_FLAGS_END + 452)
#define FLAG_HOENN_453 (TRAINER_FLAGS_END + 453)
#define FLAG_HOENN_454 (TRAINER_FLAGS_END + 454)
#define FLAG_HOENN_455 (TRAINER_FLAGS_END + 455)
#define FLAG_HOENN_456 (TRAINER_FLAGS_END + 456)
#define FLAG_HOENN_457 (TRAINER_FLAGS_END + 457)
#define FLAG_HOENN_458 (TRAINER_FLAGS_END + 458)
#define FLAG_HOENN_459 (TRAINER_FLAGS_END + 459)
#define FLAG_HOENN_460 (TRAINER_FLAGS_END + 460)
#define FLAG_HOENN_461 (TRAINER_FLAGS_END + 461)
#define FLAG_HOENN_462 (TRAINER_FLAGS_END + 462)
#define FLAG_HOENN_463 (TRAINER_FLAGS_END + 463)
#define FLAG_HOENN_464 (TRAINER_FLAGS_END + 464)
#define FLAG_HOENN_465 (TRAINER_FLAGS_END + 465)
#define FLAG_HOENN_466 (TRAINER_FLAGS_END + 466)
#define FLAG_HOENN_467 (TRAINER_FLAGS_END + 467)
#define FLAG_HOENN_468 (TRAINER_FLAGS_END + 468)
#define FLAG_HOENN_469 (TRAINER_FLAGS_END + 469)
#define FLAG_HOENN_470 (TRAINER_FLAGS_END + 470)
#define FLAG_HOENN_471 (TRAINER_FLAGS_END + 471)
#define FLAG_HOENN_472 (TRAINER_FLAGS_END + 472)
#define FLAG_HOENN_473 (TRAINER_FLAGS_END + 473)
#define FLAG_HOENN_474 (TRAINER_FLAGS_END + 474)
#define FLAG_HOENN_475 (TRAINER_FLAGS_END + 475)
#define FLAG_HOENN_476 (TRAINER_FLAGS_END + 476)
#define FLAG_HOENN_477 (TRAINER_FLAGS_END + 477)
#define FLAG_HOENN_478 (TRAINER_FLAGS_END + 478)
#define FLAG_HOENN_479 (TRAINER_FLAGS_END + 479)
#define FLAG_HOENN_480 (TRAINER_FLAGS_END + 480)
#define FLAG_HOENN_481 (TRAINER_FLAGS_END + 481)
#define FLAG_HOENN_482 (TRAINER_FLAGS_END + 482)
#define FLAG_HOENN_483 (TRAINER_FLAGS_END + 483)
#define FLAG_HOENN_484 (TRAINER_FLAGS_END + 484)
#define FLAG_HOENN_485 (TRAINER_FLAGS_END + 485)
#define FLAG_HOENN_486 (TRAINER_FLAGS_END + 486)
#define FLAG_HOENN_487 (TRAINER_FLAGS_END + 487)
#define FLAG_HOENN_488 (TRAINER_FLAGS_END + 488)
#define FLAG_HOENN_489 (TRAINER_FLAGS_END + 489)
#define FLAG_HOENN_490 (TRAINER_FLAGS_END + 490)
#define FLAG_HOENN_491 (TRAINER_FLAGS_END + 491)
#define FLAG_HOENN_492 (TRAINER_FLAGS_END + 492)
#define FLAG_HOENN_493 (TRAINER_FLAGS_END + 493)
#define FLAG_HOENN_494 (TRAINER_FLAGS_END + 494)
#define FLAG_HOENN_495 (TRAINER_FLAGS_END + 495)
#define FLAG_HOENN_496 (TRAINER_FLAGS_END + 496)
#define FLAG_HOENN_497 (TRAINER_FLAGS_END + 497)
#define FLAG_HOENN_498 (TRAINER_FLAGS_END + 498)
#define FLAG_HOENN_499 (TRAINER_FLAGS_END + 499)
#define FLAG_HOENN_500 (TRAINER_FLAGS_END + 500)
#define FLAG_HOENN_501 (TRAINER_FLAGS_END + 501)
#define FLAG_HOENN_502 (TRAINER_FLAGS_END + 502)
#define FLAG_HOENN_503 (TRAINER_FLAGS_END + 503)
#define FLAG_HOENN_504 (TRAINER_FLAGS_END + 504)
#define FLAG_HOENN_505 (TRAINER_FLAGS_END + 505)
#define FLAG_HOENN_506 (TRAINER_FLAGS_END + 506)
#define FLAG_HOENN_507 (TRAINER_FLAGS_END + 507)
#define FLAG_HOENN_508 (TRAINER_FLAGS_END + 508)
#define FLAG_HOENN_509 (TRAINER_FLAGS_END + 509)
#define FLAG_HOENN_510 (TRAINER_FLAGS_END + 510)
#define FLAG_HOENN_511 (TRAINER_FLAGS_END + 511)
#define FLAG_HOENN_512 (TRAINER_FLAGS_END + 512)
#define FLAG_HOENN_513 (TRAINER_FLAGS_END + 513)
#define FLAG_HOENN_514 (TRAINER_FLAGS_END + 514)
#define FLAG_HOENN_515 (TRAINER_FLAGS_END + 515)
#define FLAG_HOENN_516 (TRAINER_FLAGS_END + 516)
#define FLAG_HOENN_517 (TRAINER_FLAGS_END + 517)
#define FLAG_HOENN_518 (TRAINER_FLAGS_END + 518)
#define FLAG_HOENN_519 (TRAINER_FLAGS_END + 519)
#define FLAG_HOENN_520 (TRAINER_FLAGS_END + 520)
#define FLAG_HOENN_521 (TRAINER_FLAGS_END + 521)
#define FLAG_HOENN_522 (TRAINER_FLAGS_END + 522)
#define FLAG_HOENN_523 (TRAINER_FLAGS_END + 523)
#define FLAG_HOENN_524 (TRAINER_FLAGS_END + 524)
#define FLAG_HOENN_525 (TRAINER_FLAGS_END + 525)
#define FLAG_HOENN_526 (TRAINER_FLAGS_END + 526)
#define FLAG_HOENN_527 (TRAINER_FLAGS_END + 527)
#define FLAG_HOENN_528 (TRAINER_FLAGS_END + 528)
#define FLAG_HOENN_529 (TRAINER_FLAGS_END + 529)
#define FLAG_HOENN_530 (TRAINER_FLAGS_END + 530)
#define FLAG_HOENN_531 (TRAINER_FLAGS_END + 531)
#define FLAG_HOENN_532 (TRAINER_FLAGS_END + 532)
#define FLAG_HOENN_533 (TRAINER_FLAGS_END + 533)
#define FLAG_HOENN_534 (TRAINER_FLAGS_END + 534)
#define FLAG_HOENN_535 (TRAINER_FLAGS_END + 535)
#define FLAG_HOENN_536 (TRAINER_FLAGS_END + 536)
#define FLAG_HOENN_537 (TRAINER_FLAGS_END + 537)
#define FLAG_HOENN_538 (TRAINER_FLAGS_END + 538)
#define FLAG_HOENN_539 (TRAINER_FLAGS_END + 539)
#define FLAG_HOENN_540 (TRAINER_FLAGS_END + 540)
#define FLAG_HOENN_541 (TRAINER_FLAGS_END + 541)
#define FLAG_HOENN_542 (TRAINER_FLAGS_END + 542)
#define FLAG_HOENN_543 (TRAINER_FLAGS_END + 543)
#define FLAG_HOENN_544 (TRAINER_FLAGS_END + 544)
#define FLAG_HOENN_545 (TRAINER_FLAGS_END + 545)
#define FLAG_HOENN_546 (TRAINER_FLAGS_END + 546)
#define FLAG_HOENN_547 (TRAINER_FLAGS_END + 547)
#define FLAG_HOENN_548 (TRAINER_FLAGS_END + 548)
#define FLAG_HOENN_549 (TRAINER_FLAGS_END + 549)
#define FLAG_HOENN_550 (TRAINER_FLAGS_END + 550)
#define FLAG_HOENN_551 (TRAINER_FLAGS_END + 551)
#define FLAG_HOENN_552 (TRAINER_FLAGS_END + 552)
#define FLAG_HOENN_553 (TRAINER_FLAGS_END + 553)
#define FLAG_HOENN_554 (TRAINER_FLAGS_END + 554)
#define FLAG_HOENN_555 (TRAINER_FLAGS_END + 555)
#define FLAG_HOENN_556 (TRAINER_FLAGS_END + 556)
#define FLAG_HOENN_557 (TRAINER_FLAGS_END + 557)
#define FLAG_HOENN_558 (TRAINER_FLAGS_END + 558)
#define FLAG_HOENN_559 (TRAINER_FLAGS_END + 559)
#define FLAG_HOENN_560 (TRAINER_FLAGS_END + 560)
#define FLAG_HOENN_561 (TRAINER_FLAGS_END + 561)
#define FLAG_HOENN_562 (TRAINER_FLAGS_END + 562)
#define FLAG_HOENN_563 (TRAINER_FLAGS_END + 563)
#define FLAG_HOENN_564 (TRAINER_FLAGS_END + 564)
#define FLAG_HOENN_565 (TRAINER_FLAGS_END + 565)
#define FLAG_HOENN_566 (TRAINER_FLAGS_END + 566)
#define FLAG_HOENN_567 (TRAINER_FLAGS_END + 567)
#define FLAG_HOENN_568 (TRAINER_FLAGS_END + 568)
#define FLAG_HOENN_569 (TRAINER_FLAGS_END + 569)
#define FLAG_HOENN_570 (TRAINER_FLAGS_END + 570)
#define FLAG_HOENN_571 (TRAINER_FLAGS_END + 571)
#define FLAG_HOENN_572 (TRAINER_FLAGS_END + 572)
#define FLAG_HOENN_573 (TRAINER_FLAGS_END + 573)
#define FLAG_HOENN_574 (TRAINER_FLAGS_END + 574)
#define FLAG_HOENN_575 (TRAINER_FLAGS_END + 575)
#define FLAG_HOENN_576 (TRAINER_FLAGS_END + 576)
#define FLAG_HOENN_577 (TRAINER_FLAGS_END + 577)
#define FLAG_HOENN_578 (TRAINER_FLAGS_END + 578)
#define FLAG_HOENN_579 (TRAINER_FLAGS_END + 579)
#define FLAG_HOENN_580 (TRAINER_FLAGS_END + 580)
#define FLAG_HOENN_581 (TRAINER_FLAGS_END + 581)
#define FLAG_HOENN_582 (TRAINER_FLAGS_END + 582)
#define FLAG_HOENN_583 (TRAINER_FLAGS_END + 583)
#define FLAG_HOENN_584 (TRAINER_FLAGS_END + 584)
#define FLAG_HOENN_585 (TRAINER_FLAGS_END + 585)
#define FLAG_HOENN_586 (TRAINER_FLAGS_END + 586)
#define FLAG_HOENN_587 (TRAINER_FLAGS_END + 587)
#define FLAG_HOENN_588 (TRAINER_FLAGS_END + 588)
#define FLAG_HOENN_589 (TRAINER_FLAGS_END + 589)
#define FLAG_HOENN_590 (TRAINER_FLAGS_END + 590)
#define FLAG_HOENN_591 (TRAINER_FLAGS_END + 591)
#define FLAG_HOENN_592 (TRAINER_FLAGS_END + 592)
#define FLAG_HOENN_593 (TRAINER_FLAGS_END + 593)
#define FLAG_HOENN_594 (TRAINER_FLAGS_END + 594)
#define FLAG_HOENN_595 (TRAINER_FLAGS_END + 595)
#define FLAG_HOENN_596 (TRAINER_FLAGS_END + 596)
#define FLAG_HOENN_597 (TRAINER_FLAGS_END + 597)
#define FLAG_HOENN_598 (TRAINER_FLAGS_END + 598)
#define FLAG_HOENN_599 (TRAINER_FLAGS_END + 599)
#define FLAG_HOENN_600 (TRAINER_FLAGS_END + 600)
#define FLAG_HOENN_601 (TRAINER_FLAGS_END + 601)
#define FLAG_HOENN_602 (TRAINER_FLAGS_END + 602)
#define FLAG_HOENN_603 (TRAINER_FLAGS_END + 603)
#define FLAG_HOENN_604 (TRAINER_FLAGS_END + 604)
#define FLAG_HOENN_605 (TRAINER_FLAGS_END + 605)
#define FLAG_HOENN_606 (TRAINER_FLAGS_END + 606)
#define FLAG_HOENN_607 (TRAINER_FLAGS_END + 607)
#define FLAG_HOENN_608 (TRAINER_FLAGS_END + 608)
#define FLAG_HOENN_609 (TRAINER_FLAGS_END + 609)
#define FLAG_HOENN_610 (TRAINER_FLAGS_END + 610)
#define FLAG_HOENN_611 (TRAINER_FLAGS_END + 611)
#define FLAG_HOENN_612 (TRAINER_FLAGS_END + 612)
#define FLAG_HOENN_613 (TRAINER_FLAGS_END + 613)
#define FLAG_HOENN_614 (TRAINER_FLAGS_END + 614)
#define FLAG_HOENN_615 (TRAINER_FLAGS_END + 615)
#define FLAG_HOENN_616 (TRAINER_FLAGS_END + 616)
#define FLAG_HOENN_617 (TRAINER_FLAGS_END + 617)
#define FLAG_HOENN_618 (TRAINER_FLAGS_END + 618)
#define FLAG_HOENN_619 (TRAINER_FLAGS_END + 619)
#define FLAG_HOENN_620 (TRAINER_FLAGS_END + 620)
#define FLAG_HOENN_621 (TRAINER_FLAGS_END + 621)
#define FLAG_HOENN_622 (TRAINER_FLAGS_END + 622)
#define FLAG_HOENN_623 (TRAINER_FLAGS_END + 623)
#define FLAG_HOENN_624 (TRAINER_FLAGS_END + 624)
#define FLAG_HOENN_625 (TRAINER_FLAGS_END + 625)
#define FLAG_HOENN_626 (TRAINER_FLAGS_END + 626)
#define FLAG_HOENN_627 (TRAINER_FLAGS_END + 627)
#define FLAG_HOENN_628 (TRAINER_FLAGS_END + 628)
#define FLAG_HOENN_629 (TRAINER_FLAGS_END + 629)
#define FLAG_HOENN_630 (TRAINER_FLAGS_END + 630)
#define FLAG_HOENN_631 (TRAINER_FLAGS_END + 631)
#define FLAG_HOENN_632 (TRAINER_FLAGS_END + 632)
#define FLAG_HOENN_633 (TRAINER_FLAGS_END + 633)
#define FLAG_HOENN_634 (TRAINER_FLAGS_END + 634)
#define FLAG_HOENN_635 (TRAINER_FLAGS_END + 635)
#define FLAG_HOENN_636 (TRAINER_FLAGS_END + 636)
#define FLAG_HOENN_637 (TRAINER_FLAGS_END + 637)
#define FLAG_HOENN_638 (TRAINER_FLAGS_END + 638)
#define FLAG_HOENN_639 (TRAINER_FLAGS_END + 639)
#define FLAG_HOENN_640 (TRAINER_FLAGS_END + 640) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 2
#define FLAG_HOENN_641 (TRAINER_FLAGS_END + 641) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 2
#define FLAG_HOENN_642 (TRAINER_FLAGS_END + 642) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 2
#define FLAG_HOENN_643 (TRAINER_FLAGS_END + 643) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 2
#define FLAG_HOENN_644 (TRAINER_FLAGS_END + 644) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 2
#define FLAG_HOENN_645 (TRAINER_FLAGS_END + 645) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 2
#define FLAG_HOENN_646 (TRAINER_FLAGS_END + 646) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 2
#define FLAG_HOENN_647 (TRAINER_FLAGS_END + 647) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 2
#define FLAG_HOENN_648 (TRAINER_FLAGS_END + 648) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 2
#define FLAG_HOENN_649 (TRAINER_FLAGS_END + 649) // SECUNDARIA KANTO, MENTAS NATURALEZAS, COSECHA 2
#define FLAG_HOENN_650 (TRAINER_FLAGS_END + 650) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_651 (TRAINER_FLAGS_END + 651) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_652 (TRAINER_FLAGS_END + 652) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_653 (TRAINER_FLAGS_END + 653) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_654 (TRAINER_FLAGS_END + 654) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_655 (TRAINER_FLAGS_END + 655) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_656 (TRAINER_FLAGS_END + 656) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_657 (TRAINER_FLAGS_END + 657) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_658 (TRAINER_FLAGS_END + 658) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_659 (TRAINER_FLAGS_END + 659) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_660 (TRAINER_FLAGS_END + 660) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_661 (TRAINER_FLAGS_END + 661) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_662 (TRAINER_FLAGS_END + 662) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_663 (TRAINER_FLAGS_END + 663) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_664 (TRAINER_FLAGS_END + 664) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_665 (TRAINER_FLAGS_END + 665) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_666 (TRAINER_FLAGS_END + 666) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_667 (TRAINER_FLAGS_END + 667) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_668 (TRAINER_FLAGS_END + 668) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_669 (TRAINER_FLAGS_END + 669) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_670 (TRAINER_FLAGS_END + 670) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_671 (TRAINER_FLAGS_END + 671) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_672 (TRAINER_FLAGS_END + 672) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_673 (TRAINER_FLAGS_END + 673) // CAZABICHOS CIUDAD CARMIN DESPUES DE HABLAR EN PLATEADA
#define FLAG_HOENN_674 (TRAINER_FLAGS_END + 674) // Nina Scyther encinar
#define FLAG_HOENN_675 (TRAINER_FLAGS_END + 675) // AGATHA TORRE POKEMON, POST MISION S3 SILPH
#define FLAG_HOENN_676 (TRAINER_FLAGS_END + 676) // AGATHA PUEBLO LAVANDA, POST MISION S3 SILPH
#define FLAG_HOENN_677 (TRAINER_FLAGS_END + 677) // ANDRA DESPACHO H0ENN DESPUES EVENTO REGIGIGAS // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_678 (TRAINER_FLAGS_END + 678) // ANDRA PUEBLO OROMAR (FUERA CENTRO PKMN DEPSUES) // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_679 (TRAINER_FLAGS_END + 679) // TRISTANA CALAGUA // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_680 (TRAINER_FLAGS_END + 680) // KYOGRE NORMAL SEAFLOOR 9 // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_681 (TRAINER_FLAGS_END + 681) // DEVON CIUDAD ALGARIA MISION 8 // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_682 (TRAINER_FLAGS_END + 682) // ANDRA CIUDAD ALGARIA MISION 8 // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_683 (TRAINER_FLAGS_END + 683) // GIOVANNI AVISO FIN TRAYECTO MISION 6 // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_684 (TRAINER_FLAGS_END + 684) // ARIANA DURMIENDO SS GIOVANNI // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_685 (TRAINER_FLAGS_END + 685) // ARIANA RASMUS ETC TEMPLO PUNTANEVA DESPUES // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_686 (TRAINER_FLAGS_END + 686) // Policias Secundaria Museo Despues // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_687 (TRAINER_FLAGS_END + 687) // Fortunia y Dueno Museo Secundaria // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_688 (TRAINER_FLAGS_END + 688) // Nina casa azuliza final secundaria casa playa // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_689 (TRAINER_FLAGS_END + 689) // Ninos ruta 109 secundaria casa playa // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_690 (TRAINER_FLAGS_END + 690) // Ariana Salida Cueva Granito // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_691 (TRAINER_FLAGS_END + 691) // Karateka túnel Ferdegal // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_692 (TRAINER_FLAGS_END + 692) // Entrenador Guay Estratega Ruta 111 // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_693 (TRAINER_FLAGS_END + 693) // Mujer Estratega Ruta 111 // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_694 (TRAINER_FLAGS_END + 694) // Chica Estratega // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_695 (TRAINER_FLAGS_END + 695) // Anciana Estratega // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_696 (TRAINER_FLAGS_END + 696) // Magno en Jagged Pass después evento Groudon // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_697 (TRAINER_FLAGS_END + 697) // Ariana Centro Pkmn // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_698 (TRAINER_FLAGS_END + 698) // Ariana Salida Templo // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_699 (TRAINER_FLAGS_END + 699) // Barco Giovanni Puntaneva // En modo Setflag por defecto desde fin DLC
#define FLAG_HOENN_700 (TRAINER_FLAGS_END + 700) // Ariana S5 templo puntanerva // En modo Setflag por defecto desde fin DLC






#define FLAGS_COUNT (TRAINER_FLAGS_END + 701)

// Special Flags (Stored in EWRAM (gSpecialFlags), not in the SaveBlock)
#define SPECIAL_FLAGS_START                     0x4000
#define FLAG_HIDE_MAP_NAME_POPUP                (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC              (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR         (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003         (SPECIAL_FLAGS_START + 0x3) // Unused Flag
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG       (SPECIAL_FLAGS_START + 0x4)
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                       (SPECIAL_FLAGS_START + 0x7F)


// FLAGS NUEVAS

#define FLAG_NUEVA_1 0x500 // RUTA 2 - MT 44 DESCANSO
#define FLAG_NUEVA_2 0x501 // RUTA 2 - ETHER
#define FLAG_NUEVA_3 0x502 // RUTA 3 - BAYA ARANJA - INVISIBLE
#define FLAG_NUEVA_4 0x503 // RUTA 3 - BAYA CAQUIC - INVISIBLE
#define FLAG_NUEVA_5 0x504 // RUTA 3 - SUPER BALL - INVISIBLE
#define FLAG_NUEVA_6 0x505 // RUTA 3 - SUPER POCION - INVISIBLE
#define FLAG_NUEVA_7 0x506 // RUTA 3 - TM16 
#define FLAG_NUEVA_8 0x507 // RUTA 6 - BAYA ZIDRA - INVISIBLE
#define FLAG_NUEVA_9 0x508 // RUTA 6 - CARAMELORARO - INVISIBLE
#define FLAG_NUEVA_10 0x509 // RUTA 7 - HYPER POCION - INVISIBLE
#define FLAG_NUEVA_11 0x50A // RUTA 8 - BAYA ZIUELA - INVISIBLE
#define FLAG_NUEVA_12 0x50B // RUTA 8 - BAYA SAFRE - INVISIBLE
#define FLAG_NUEVA_13 0x50C // RUTA 8 - BAYA ZANAMA - INVISIBLE
#define FLAG_NUEVA_14 0x50D // RUTA 9 - ETHER - INVISIBLE
#define FLAG_NUEVA_15 0x50E // RUTA 9 - MT 40 GOLPE AEREO
#define FLAG_NUEVA_16 0x50F // RUTA 9 - BAYA ATANIA - INVISIBLE
#define FLAG_NUEVA_17 0x510 // RUTA 9 - CARAMELORARO - INVISIBLE
#define FLAG_NUEVA_18 0x511 // RUTA 9 - ANTI QUEMAR 
#define FLAG_NUEVA_19 0x512 // RUTA 10 - BAYA ZREZA - INVISIBLE
#define FLAG_NUEVA_20 0x513 // RUTA 10 - BAYA CAQUIC - INVISIBLE
#define FLAG_NUEVA_21 0x514 // RUTA 10 - REVIVIR - INVISIBLE
#define FLAG_NUEVA_22 0x515 // RUTA 11 - DESPERTAR
#define FLAG_NUEVA_23 0x516 // RUTA 11 - DEFENSA X
#define FLAG_NUEVA_24 0x517 // RUTA 11 - ESCAPE ROPE - INVISIBLE
#define FLAG_NUEVA_25 0x518 // RUTA 11 - MT31 
#define FLAG_NUEVA_26 0x519 // RUTA 12 - TM48
#define FLAG_NUEVA_27 0x51A // RUTA 12 - RESTOS - INVISIBLE
#define FLAG_NUEVA_28 0x51B // RUTA 12 - HIERRO
#define FLAG_NUEVA_29 0x51C // RUTA 12 - CARAMELORARO - INVISIBLE
#define FLAG_NUEVA_30 0x51D // RUTA 13 - MAS PP - INVISIBLE
#define FLAG_NUEVA_31 0x51E // RUTA 14 - ZINC - INVISIBLE
#define FLAG_NUEVA_32 0x51F // RUTA 14 - MAS PP - INVISIBLE
#define FLAG_NUEVA_33 0x520 // RUTA 15 - TM18 
#define FLAG_NUEVA_34 0x521 // RUTA 16 - RESTOS - INVISIBLE
#define FLAG_NUEVA_35 0x522 // RUTA 17 - RESTAURATODO - INVISIBLE
#define FLAG_NUEVA_36 0x523 // RUTA 17 - MAS PP - INVISIBLE
#define FLAG_NUEVA_37 0x524 // RUTA 17 - CARAMELORARO - INVISIBLE
#define FLAG_NUEVA_38 0x525 // RUTA 17 - MAXREVIVIR - INVISIBLE
#define FLAG_NUEVA_39 0x526 // RUTA 17 - MAXELIXIR - INVISIBLE
#define FLAG_NUEVA_40 0x527 // RUTA 20 - POLVOESTELAR - INVISIBLE
#define FLAG_NUEVA_41 0x528 // RUTA 23 - MAXELIXIR - INVISIBLE
#define FLAG_NUEVA_42 0x529 // RUTA 23 - BAYA ZIUELA - INVISIBLE
#define FLAG_NUEVA_43 0x52A // RUTA 23 - BAYA ZIDRA - INVISIBLE
#define FLAG_NUEVA_44 0x52B // RUTA 23 - RESTAURATODO - INVISIBLE
#define FLAG_NUEVA_45 0x52C // RUTA 23 - MAXREVIVIR - INVISIBLE
#define FLAG_NUEVA_46 0x52D // RUTA 23 - ULTRA BALL - INVISIBLE
#define FLAG_NUEVA_47 0x52E // RUTA 23 - ETER MAX - INVISIBLE
#define FLAG_NUEVA_48 0x52F // RUTA 23 - BAYA ZANAMA - INVISIBLE
#define FLAG_NUEVA_49 0x530 // RUTA 24 - REVIVIR
#define FLAG_NUEVA_50 0x531 // RUTA 24 - BAYA MELOC - INVISIBLE
#define FLAG_NUEVA_51 0x532 // RUTA 25 - ELIXIR - INVISIBLE
#define FLAG_NUEVA_52 0x533 // RUTA 25 - MT43 
#define FLAG_NUEVA_53 0x534 // RUTA 25 - BAYA ARANJA - INVISIBLE
#define FLAG_NUEVA_54 0x535 // RUTA 25 - LECHE MUMU - INVISIBLE
#define FLAG_NUEVA_55 0x536 // RUTA 25 - ETHER - INVISIBLE
#define FLAG_NUEVA_56 0x537 // ISLA SECUNDA - REVIVIR 
#define FLAG_NUEVA_57 0x538 // ISLA TERA - ZINC
#define FLAG_NUEVA_58 0x539 // ISLA TERA - MASPP - INVISIBLE
#define FLAG_NUEVA_59 0x53A // ISLA CUARTA - TRESTRELLA 
#define FLAG_NUEVA_60 0x53B // ISLA CUARTA - ULTRA BALL - INVISIBLE
#define FLAG_NUEVA_61 0x53C // ISLA CUARTA - POLVOESTELAR 
#define FLAG_NUEVA_62 0x53D // ISLA EXTA - BAYA ZANAMA - INVISIBLE
#define FLAG_NUEVA_63 0x53E // KINDLE ROAD - ETER 
#define FLAG_NUEVA_64 0x53F // KINDLE ROAD - MAX REPEL
#define FLAG_NUEVA_65 0x540 // KINDLE ROAD - CARBURANTE
#define FLAG_NUEVA_66 0x541 // CAPE BRINK - CARAMELORARO - INVISIBLE
#define FLAG_NUEVA_67 0x542 // CAPE BRINK - MAX PP - INVISIBLE
#define FLAG_NUEVA_68 0x543 // BOND BRIDGE - STARDUST - INVISIBLE
#define FLAG_NUEVA_69 0x544 // BOND BRIDGE - PEARL - INVISIBLE
#define FLAG_NUEVA_70 0x545 // BOND BRIDGE - MAX REPEL - INVISIBLE
#define FLAG_NUEVA_71 0x546 // LUGAR RECREO - NEST BALL - INVISIBLE
#define FLAG_NUEVA_72 0x547 // LUGAR RECREO - STARDUST - INVISIBLE
#define FLAG_NUEVA_73 0x548 // LUGAR RECREO - STARDUST2 - INVISIBLE
#define FLAG_NUEVA_74 0x549 // LUGAR RECREO - TROZO ESTRELLA - INVISIBLE
#define FLAG_NUEVA_75 0x54A // PRADO INTA - MAX POCION 
#define FLAG_NUEVA_76 0x54B // PRADO INTA - MT07
#define FLAG_NUEVA_77 0x54C // PILAR RECUERDO - REFRESCO - INVISIBLE
#define FLAG_NUEVA_78 0x54D // PILAR RECUERDO - BAYA ZIDRA - INVISIBLE
#define FLAG_NUEVA_79 0x54E // PILAR RECUERDO - REVIVIR - INVISIBLE
#define FLAG_NUEVA_80 0x54F // PILAR RECUERDO - PERLA GRANDE - INVISIBLE
#define FLAG_NUEVA_81 0x550 // PILAR RECUERDO - REV METALICO 
#define FLAG_NUEVA_82 0x551 // WATER PATH - BAYA ARANJA - INVISIBLE
#define FLAG_NUEVA_83 0x552 // WATER PATH - ELIXIR 
#define FLAG_NUEVA_84 0x553 // WATER PATH - HIERBA BLANCA - INVISIBLE
#define FLAG_NUEVA_85 0x554 // WATER PATH - BAYA ZIDRA - INVISIBLE
#define FLAG_NUEVA_86 0x555 // WATER PATH - ESCAMADRAGON 
#define FLAG_NUEVA_87 0x556 // GREEN PATH - ULTRA BALL - INVISIBLE
#define FLAG_NUEVA_88 0x557 // NORTE EXTA - TROZO ESTRELLA - INVISIBLE
#define FLAG_NUEVA_89 0x558 // NORTE EXTA - MALL BALL - INVISIBLE
#define FLAG_NUEVA_90 0x559 // NORTE EXTA - MAS PP 
#define FLAG_NUEVA_91 0x55A // RUIN VALLEY - MT12 
#define FLAG_NUEVA_92 0x55B // RUIN VALLEY - CARAMELORARO - NO SE ACTIVA
#define FLAG_NUEVA_93 0x55C // RUIN VALLEY - PIEDRA SOLAR
#define FLAG_NUEVA_94 0x55D // NORTE SETIMA - BAYA LATANO - INVISIBLE
#define FLAG_NUEVA_95 0x55E // NORTE SETIMA - PERLA - INVISIBLE
#define FLAG_NUEVA_96 0x55F // NORTE SETIMA - PERLA GRANDE - INVISIBLE
#define FLAG_NUEVA_97 0x560 // GRAN CAÑON - BAYA SAFRE - INVISIBLE
#define FLAG_NUEVA_98 0x561 // GRAN CAÑON - PEPITA 
#define FLAG_NUEVA_99 0x562 // GRAN CAÑON - MAX ELIXIR
#define FLAG_NUEVA_100 0x563 // GRAN CAÑON - ROCA REY 
#define FLAG_NUEVA_101 0x564 // GRAN CAÑON - BAYA ZREZA - INVISIBLE
#define FLAG_NUEVA_102 0x565 // RUINAS SETE - ESCAMA CORAZON - INVISIBLE
#define FLAG_NUEVA_103 0x566 // RUINAS SETE - ESCAMA CORAZON 2 - INVISIBLE
#define FLAG_NUEVA_104 0x567 // RUINAS SETE - ESCAMA CORAZON 3 - INVISIBLE
#define FLAG_NUEVA_105 0x568 // RUINAS SETE - ESCAMA CORAZON 4 - INVISIBLE
#define FLAG_NUEVA_106 0x569 // PLAYA TESORO - POLVOESTELAR - INVISBLE
#define FLAG_NUEVA_107 0x56A // PLAYA TESORO - ULTRA BALL - INVISIBLE
#define FLAG_NUEVA_108 0x56B // PLAYA TESORO - PERLA GRANDE - INVISIBLE
#define FLAG_NUEVA_109 0x56C // PLAYA TESORO - POLVOESTELAR 2 - INVISIBLE
#define FLAG_NUEVA_110 0x56D // PLAYA TESORO - TROZO ESTRELLA - INVISIBLE
#define FLAG_NUEVA_111 0x56E // PLAYA TESORO - PERLA - INVISIBLE
#define FLAG_NUEVA_112 0x56F // PLAYA TESORO - ULTRA BALL 2 - INVISIBLE
#define FLAG_NUEVA_113 0x570 // PLAYA TESORO - PERLA 2 - INVISIBLE
#define FLAG_NUEVA_114 0x571 // CIUDAD MALVA - MAS PP 
#define FLAG_NUEVA_115 0x572 // CIUDAD MALVA - ALAKAZITA
#define FLAG_NUEVA_116 0x573 // CIUDAD MALVA - BAYA ALGAMA - ARBOL
#define FLAG_NUEVA_117 0x574 // PUEBLO AZALEA - BAYA ZIUELA - ARBOL
#define FLAG_NUEVA_118 0x575 // PUEBLO AZALEA - BAYA ZIDRA - ARBOL
#define FLAG_NUEVA_119 0x576 // CIUDAD TRIGAL - VENUSAURITA
#define FLAG_NUEVA_120 0x577 // CIUDAD TRIGAL - CARAMELORARO 
#define FLAG_NUEVA_121 0x578 // CIUDAD IRIS - CEN SAGRADA
#define FLAG_NUEVA_122 0x579 // CIUDAD OLIVO - PINSIRITA
#define FLAG_NUEVA_123 0x57A // RUTA 45 - MAX REPEL
#define FLAG_NUEVA_124 0x57B // RUTA 45 - REVIVIR
#define FLAG_NUEVA_125 0x57C // RUTA 45 - MASS PP
#define FLAG_NUEVA_126 0x57D // RUTA 45 - MAXIPEPITA
#define FLAG_NUEVA_127 0x57E // RUTA 26 - CARAMELORARO
#define FLAG_NUEVA_128 0x57F // RUTA 26 - HOUNDOMITA
#define FLAG_NUEVA_129 0x580 // RUTA 27 - ULTRA BALL
#define FLAG_NUEVA_130 0x581 // RUTA 27 - ELIXIR
#define FLAG_NUEVA_131 0x582 // RUTA 29 - ETER
#define FLAG_NUEVA_132 0x583 // RUTA 30 - ULTRA BALL
#define FLAG_NUEVA_133 0x584 // RUTA 30 - BAYA ISPERO - ARBOL
#define FLAG_NUEVA_134 0x585 // RUTA 30 - BAYA ZIUELA - INVISIBLE
#define FLAG_NUEVA_135 0x586 // RUTA 30 - HIERBA REVIVIR - INVISIBLE
#define FLAG_NUEVA_136 0x587 // RUTA 30 - BAYA ALGAMA - INVISIBLE
#define FLAG_NUEVA_137 0x588 // RUTA 31 - BAYA MELUCE - ARBOL
#define FLAG_NUEVA_138 0x589 // RUTA 31 - BAYA MELOC - INVISIBLE
#define FLAG_NUEVA_139 0x58A // RUTA 31 - CARAMELORARO 
#define FLAG_NUEVA_140 0x58B // RUTA 31 - HYPER POCION
#define FLAG_NUEVA_141 0x58C // RUTA 32 - MAX REVIVIR
#define FLAG_NUEVA_142 0x58D // RUTA 32 - PROTEINA
#define FLAG_NUEVA_143 0x58E // RUTA 32 - HIERBA BLANCA - INVISIBLE
#define FLAG_NUEVA_144 0x58F // RUTA 32 - BAYA GRANA - ARBOL
#define FLAG_NUEVA_145 0x590 // RUTA 32 - PEPITA 
#define FLAG_NUEVA_146 0x591 // RUTA 33 - ELIXIR MAX
#define FLAG_NUEVA_147 0x592 // RUTA 33 - BAYA ISPERO - ARBOL
#define FLAG_NUEVA_148 0x593 // RUTA 34 - PIEDRA OVAL
#define FLAG_NUEVA_149 0x594 // RUTA 35 - RESTAURATODO
#define FLAG_NUEVA_150 0x595 // RUTA 35 - CUERDA HUIDA
#define FLAG_NUEVA_151 0x596 // RUTA 36 - HIERBA BLANCA
#define FLAG_NUEVA_152 0x597 // ruta 37 - BAYA TAMATE - ARBOL
#define FLAG_NUEVA_153 0x598 // RUTA 37 - GREPA BERRY - ARBOL
#define FLAG_NUEVA_154 0x599 // RUTA 37 - HONDEW BERRY - ARBOL
#define FLAG_NUEVA_155 0x59A // RUTA 42 - QUALOT BERRY - ARBOL
#define FLAG_NUEVA_156 0x59B // RUTA 42 - GREPA BERRY - ARBOL 
#define FLAG_NUEVA_157 0x59C // RUTA 42 - PROTEINA 
#define FLAG_NUEVA_158 0x59D // RUTA 43 - REVIVIR
#define FLAG_NUEVA_159 0x59E // RUTA 43 - BAYA MELUCE - ARBOL
#define FLAG_NUEVA_160 0x59F // RUTA 44 - MAS PS - ARBOL
#define FLAG_NUEVA_161 0x5A0 // RUTA 44 - HYPER POCION
#define FLAG_NUEVA_162 0x5A1 // RUTA 44 - ELIXIR
#define FLAG_NUEVA_163 0x5A2 // RUTA 46 - RAIZ ENERGIA - INVISIBLE
#define FLAG_NUEVA_164 0x5A3 // RUTA 46 - CUERDA HUIDA
#define FLAG_NUEVA_165 0x5A4 // RUTA 29 - GREPA BERRY - ARBOL
#define FLAG_NUEVA_166 0x5A5 // RUTA 29 - BAYA ZREZA - INVISIBLE
#define FLAG_NUEVA_167 0x5A6 // RUTA 29 - BAYA ATANIA - INVISIBLE
#define FLAG_NUEVA_168 0x5A7 // RUTA 29 - BAYA ZIDRA - INVISIBLE
#define FLAG_NUEVA_169 0x5A8 // TORRE BELLSPROUT - ELIXIR
#define FLAG_NUEVA_170 0x5A9 // TORRE BELLSPROUT - RESTAUTODO
#define FLAG_NUEVA_171 0x5AA // TORRE BELLSPROUT - CENSAGRADA
#define FLAG_NUEVA_172 0x5AB // POZO - ETER
#define FLAG_NUEVA_173 0x5AC // TORRE RADIO P2 - CARAMELORARO
#define FLAG_NUEVA_174 0x5AD // TORRE RADIO P2 - MAX REVIVIR
#define FLAG_NUEVA_175 0x5AE // TRIGAL SUBTERRANEO - RESTOS
#define FLAG_NUEVA_176 0x5AF // TORRE QUEMADA - MAX REVIVIR
#define FLAG_NUEVA_177 0x5B0 // FARO - CEN SAGRADA
#define FLAG_NUEVA_178 0x5B1 // FARO - PEPITA
#define FLAG_NUEVA_179 0x5B2 // FARO - CUERDA HUIDA
#define FLAG_NUEVA_180 0x5B3 // FARO - HYPER POCION
#define FLAG_NUEVA_181 0x5B4 // FARO - MAX REVIVIR
#define FLAG_NUEVA_182 0x5B5 // BASE NINJA - MAX REVIVIR
#define FLAG_NUEVA_183 0x5B6 // BASE NINJA - PPUP
#define FLAG_NUEVA_184 0x5B7 // BASE NINJA - GYARADOSITA
#define FLAG_NUEVA_185 0x5B8 // BASE NINJA - ULTRA BALL
#define FLAG_NUEVA_186 0x5B9 // BASE NINJA - ETER
#define FLAG_NUEVA_187 0x5BA // GUARIDA DRAGON - RESTAUTODO
#define FLAG_NUEVA_188 0x5BB // GUARIDA DRAGON - ELIXIR MAX
#define FLAG_NUEVA_189 0x5BC // GUARIDA DRAGON - PEPITA
#define FLAG_NUEVA_190 0x5BD // GUARIDA DRAGON - MAS PP
#define FLAG_NUEVA_191 0x5BE // GUARIDA DRAGON - ULTRA BALL
#define FLAG_NUEVA_192 0x5BF // GUARIDA DRAGON - RESTAU TODO
#define FLAG_NUEVA_193 0x5C0 // GUARIDA DRAGON - ULTRA BALL 2
#define FLAG_NUEVA_194 0x5C1 // GUARIDA DRAGON - MAX REVIVIR
#define FLAG_NUEVA_195 0x5C2 // MT SILVER - PEPITA
#define FLAG_NUEVA_196 0x5C3 // MT SILVER - MAS PS
#define FLAG_NUEVA_197 0x5C4 // MT SILVER - RESTAUTODO
#define FLAG_NUEVA_198 0x5C5 // MT SILVER - ULTRA BALL
#define FLAG_NUEVA_199 0x5C6 // MT SILVER - CARAMELORARO
#define FLAG_NUEVA_200 0x5C7 // MT SILVER - RESTAU TODO 2
#define FLAG_NUEVA_201 0x5C8 // MT SILVER - MAX REVIVE
#define FLAG_NUEVA_202 0x5C9 // MT SILVER - CEN SAGRADA
#define FLAG_NUEVA_203 0x5CA // MT SILVER - TYRANITARITA
#define FLAG_NUEVA_204 0x5CB // CATARATA - HYPER POCION
#define FLAG_NUEVA_205 0x5CC // CUEVA OSCURA - ULTRA BALL
#define FLAG_NUEVA_206 0x5CD // CUEVA OSCURA - CUERDA HUIDA
#define FLAG_NUEVA_207 0x5CE // CUEVA OSCURA - MAS PP
#define FLAG_NUEVA_208 0x5CF // CUEVA OSCURA - KANGASKHANITA
#define FLAG_NUEVA_209 0x5D0 // ROCKET JOHTO - PIEDRA ALBA
#define FLAG_NUEVA_210 0x5D1 // RUINAS ALFA - CEN SAGRADA
#define FLAG_NUEVA_211 0x5D2 // CUEVA UNION - PEPITA
#define FLAG_NUEVA_212 0x5D3 // CUEVA UNION - CARAMELORARO
#define FLAG_NUEVA_213 0x5D4 // CUEVA UNION - ULTRA BALL
#define FLAG_NUEVA_214 0x5D5 // CUEVA UNION - BLASTOISENITA
#define FLAG_NUEVA_215 0x5D6 // ENCINAR - PALO
#define FLAG_NUEVA_216 0x5D7 // ENCINAR - MAX ETHER
#define FLAG_NUEVA_217 0x5D8 // ENCINAR - ANTIDOTO
#define FLAG_NUEVA_218 0x5D9 // PARQUE NACIONAL - MAXIPEPITA
#define FLAG_NUEVA_219 0x5DA // PARQUE NACIONAL - BEEDRILLITA
#define FLAG_NUEVA_220 0x5DB // PARQUE NACIONAL - PERISCOPIO
#define FLAG_NUEVA_221 0x5DC // ISLAS ESPUMA - CASCADA
#define FLAG_NUEVA_222 0x5DD // ISLAS ESPUMA - PERLA GRANDE
#define FLAG_NUEVA_223 0x5DE // ISLAS ESPUMA - PERLA GRANDE
#define FLAG_NUEVA_224 0x5DF // ISLAS ESPUMA - CARAMELORARO
#define FLAG_NUEVA_225 0x5E0 // ISLAS ESPUMA - REVIVIR
#define FLAG_NUEVA_226 0x5E1 // ISLAS ESPUMA - ULTRA BALL
#define FLAG_NUEVA_227 0x5E2 // ISLAS ESPUMA - CUERDA HUIDA
#define FLAG_NUEVA_228 0x5E3 // ISLAS ESPUMA - MAX REVIVIR
#define FLAG_NUEVA_229 0x5E4 // ISLAS ESPUMA - PEPITA
#define FLAG_NUEVA_230 0x5E5 // ISLAS ESPUMA - ELIXIR
#define FLAG_NUEVA_231 0x5E6 // MTMORTAR - CUERDA HUIDA
#define FLAG_NUEVA_232 0x5E7 // MT MORTAR - MAS PS
#define FLAG_NUEVA_233 0x5E8 // MT MORTAR - CARAMELORARO
#define FLAG_NUEVA_234 0x5E9 // MT MORTAR - ULTRA BALL
#define FLAG_NUEVA_235 0x5EA // MT MORTAR - HIERRO
#define FLAG_NUEVA_236 0x5EB // MT MORTAR - PP UP
#define FLAG_NUEVA_237 0x5EC // MT MORTAR - REVIVIR
#define FLAG_NUEVA_238 0x5ED // MT MORTAR - HIERRO 2
#define FLAG_NUEVA_239 0x5EE // MT MORTAR - ELIXIR
#define FLAG_NUEVA_240 0x5EF // MT MORTAR - REVIVIR
#define FLAG_NUEVA_241 0x5F0 // MT MORTAR - HYPERPOCION
#define FLAG_NUEVA_242 0x5F1 // MT MORTAR - TROZO ESTRELLA
#define FLAG_NUEVA_243 0x5F2 // MT MORTAR - RESTAURATODO
#define FLAG_NUEVA_244 0x5F3 // MT MORTAR - MAX ELIXIR
#define FLAG_NUEVA_245 0x5F4 // MT MORTAR - SACRED ASH
#define FLAG_NUEVA_246 0x5F5 // MT MORTAR - MAXIPEPITA
#define FLAG_NUEVA_247 0x5F6 // MT MORTAR - PROTEINA
#define FLAG_NUEVA_248 0x5F7 // LAGO FURIA - TROZO ESTRELLA
#define FLAG_NUEVA_249 0x5F8 // LAGO FURIA - ELIXIR
#define FLAG_NUEVA_250 0x5F9 // LAGO FURIA - CARAMELORARO
#define FLAG_NUEVA_251 0x5FA // PASO HELADO - RESTAURATODO
#define FLAG_NUEVA_252 0x5FB // PASO HELADO - CUERDA HUIDA
#define FLAG_NUEVA_253 0x5FC // PASO HELADO - PIEDRA OVAL
#define FLAG_NUEVA_254 0x5FD // PASO HELADO - ANTIHIELO
#define FLAG_NUEVA_255 0x5FE // PASO HELADO - CARAMELORARO
#define FLAG_NUEVA_256 0x5FF // PASO HELADO - TROZO ESTRELLA
#define FLAG_NUEVA_257 0x600 // PASO HELADO - REVIVIR
#define FLAG_NUEVA_258 0x601 // PASO HELADO - MAX REVIVIR
#define FLAG_NUEVA_259 0x602 // RUTA 52 MAZE - CABLE LINK
#define FLAG_NUEVA_260 0x603 // RUTA 52 MAZE - PIEDRA ALBA
#define FLAG_NUEVA_261 0x604 // RUTA 54 MAZE - CHARIZARDIT Y
#define FLAG_NUEVA_262 0x605 // RUTA 52 MAZE - MAXIPEPITA
#define FLAG_NUEVA_263 0x606 // CUEVA TRIGAL - PIEDRA DURA
#define FLAG_NUEVA_264 0x607 // CUEVA TRIGAL - CENSAGRADA
#define FLAG_NUEVA_265 0x608 // FUCSIA - CARAMELO RARO
#define FLAG_NUEVA_266 0x609 // BOSQUE VERDE - POKE BALL
#define FLAG_NUEVA_267 0x60A // BOSQUE VERDE - POCION 
#define FLAG_NUEVA_268 0x60B // BOSQUE VERDE - POCION 2
#define FLAG_NUEVA_269 0x60C // BOSQUE VERDE - ANTIDOTO
#define FLAG_NUEVA_270 0x60D // BOSQUE VERDE - ANTIDOTO 2
#define FLAG_NUEVA_271 0x60E // BOSQUE VERDE - POCION 3
#define FLAG_NUEVA_272 0x60F // MT MOON - ANTIPARALIZ
#define FLAG_NUEVA_273 0x610 // MT MOON - TM09
#define FLAG_NUEVA_274 0x611 // MT MOON - POCION
#define FLAG_NUEVA_275 0x612 // MT MOON - CARAMELORARO
#define FLAG_NUEVA_276 0x613 // MT MOON - CUERDA HUIDA
#define FLAG_NUEVA_277 0x614 // MTMOON - PIEDRA LUNAR
#define FLAG_NUEVA_278 0x615 // MTMOON - SETA GRANDE
#define FLAG_NUEVA_279 0x616 // MTMOON - SETA GRANDE 2
#define FLAG_NUEVA_280 0x617 // MTMOON - SETA GRANDE 3
#define FLAG_NUEVA_281 0x618 // MTMOON - SETA GRANDE 4
#define FLAG_NUEVA_282 0x619 // MTMOON - SETA GRANDE 5
#define FLAG_NUEVA_283 0x61A // MTMOON - SETA GRANDE 6
#define FLAG_NUEVA_284 0x61B // MTMOON - REVIVIR
#define FLAG_NUEVA_285 0x61C // MTMOON - ANTIDOTO
#define FLAG_NUEVA_286 0x61D // MTMOON - TRESTRELLA
#define FLAG_NUEVA_287 0x61E // MTMOON - TM46
#define FLAG_NUEVA_288 0x61F // MTMOON - ETER - INVISIBLE
#define FLAG_NUEVA_289 0x620 // MTMOON - PIEDRA LUNAR - INVISIBLE
#define FLAG_NUEVA_290 0x621 // SSANNE - GALLETA LAVA - INVISIBLE
#define FLAG_NUEVA_291 0x622 // SSANNE - HYPER POCION - INVISIBLE
#define FLAG_NUEVA_292 0x623 // SSANNE - SUPERBALL
#define FLAG_NUEVA_293 0x624 // SSANNE - BAYA MELOC - INVISIBLE
#define FLAG_NUEVA_294 0x625 // SSANNE - BAYA ZREZA - INVISIBLE
#define FLAG_NUEVA_295 0x626 // SSANNE - BAYA ATANIA - INVISIBLE
#define FLAG_NUEVA_296 0x627 // SSANNE - SUPERBALL 2
#define FLAG_NUEVA_297 0x628 // SSANNE - POLVOESTELAR
#define FLAG_NUEVA_298 0x629 // SSANNE - ATAQUE X
#define FLAG_NUEVA_299 0x62A // SSANNE - ANTIPARALIZ
#define FLAG_NUEVA_300 0x62B // SSANNE - ETER
#define FLAG_NUEVA_301 0x62C // SSANNE - SUPERPOCION
#define FLAG_NUEVA_302 0x62D // SUBTERRANEO - ANTIDOTO
#define FLAG_NUEVA_303 0x62F // SUBTERRANEO - ANTIPARALIZ
#define FLAG_NUEVA_304 0x630 // SUBTERRANEO - DESPERTAR
#define FLAG_NUEVA_305 0x631 // SUBTERRANEO - POCION
#define FLAG_NUEVA_306 0x632 // SUBTERRANEO - ETER
#define FLAG_NUEVA_307 0x633 // SUBTERRANEO - ANTIHIELO
#define FLAG_NUEVA_308 0x634 // SUBTERRANEO - ANTIQUEMAR
#define FLAG_NUEVA_309 0x635 // SUBTERRANEO 2 - POCION
#define FLAG_NUEVA_310 0x636 // SUBTERRANEO 2 - ANTIPARALIZ
#define FLAG_NUEVA_311 0x637 // SUBTERRANEO 2 - DESPERTAR
#define FLAG_NUEVA_312 0x638 // SUBTERRANEO 2 - ANTIQUEMAR
#define FLAG_NUEVA_313 0x639 // SUBTERRANEO 2 - ETHER
#define FLAG_NUEVA_314 0x63A // SUBTERRANEO 2 - ANTIDOTO
#define FLAG_NUEVA_315 0x63B // SUBTERRANEO 2 - ANTIHIELO
#define FLAG_NUEVA_316 0x63C // CALLE VICTORIA - CARAMELORARO
#define FLAG_NUEVA_317 0x63D // CALLE VICTORIA - MT02
#define FLAG_NUEVA_318 0x63E // CALLE VICTORIA - TM37 
#define FLAG_NUEVA_319 0x63F // CALLE VICTORIA - PROTECTOR ESP
#define FLAG_NUEVA_320 0x640 // CALLE VICTORIA - CURA TOTAL
#define FLAG_NUEVA_321 0x641 // CALLE VICTORIA - RESTOS
#define FLAG_NUEVA_322 0x642 // CALLE VICTORIA - MAX REVIVIR
#define FLAG_NUEVA_323 0x643 // CALLE VICTORIA - MT50
#define FLAG_NUEVA_324 0x644 // CALLE VICTORIA - ULTRA BALL - INVISIBLE
#define FLAG_NUEVA_325 0x645 // CALLE VICTORIA - RESTAURATODO - INVISIBLE
#define FLAG_NUEVA_326 0x646 // ROCKET BASE - MAS PP - INVISIBLE
#define FLAG_NUEVA_327 0x647 // ROCKET BASE - HIPERPOCION
#define FLAG_NUEVA_328 0x648 // ROCKET BASE - PIEDRA LUNAR
#define FLAG_NUEVA_329 0x649 // ROCKET BASE - MAS PS
#define FLAG_NUEVA_330 0x64A // ROCKET BASE - SUPERPOCION
#define FLAG_NUEVA_331 0x64B // ROCKET BASE - TM21
#define FLAG_NUEVA_332 0x64C // ROCKET BASE - TM49
#define FLAG_NUEVA_333 0x64D // SILPH 2 - ULTRA BALL - INVISIBLE
#define FLAG_NUEVA_334 0x64E // SILPH 3 - HIPERPOCION
#define FLAG_NUEVA_335 0x64F // SILPH 3 - PROTEINA
#define FLAG_NUEVA_336 0x650 // SILPH 4 - CURA TOTAL
#define FLAG_NUEVA_337 0x651 // SILPH 4 - MAX REVIVIR
#define FLAG_NUEVA_338 0x652 // SILPH 4 - CUERDA HUIDA
#define FLAG_NUEVA_339 0x653 // SILPH 4 - TM41
#define FLAG_NUEVA_340 0x654 // SILPH 5 - ELIXIR
#define FLAG_NUEVA_341 0x655 // SILPH 5 - TM01
#define FLAG_NUEVA_342 0x656 // SILPH 5 - PROTEINA
#define FLAG_NUEVA_343 0x657 // SILPH 5 - PP UP - INVISIBLE
#define FLAG_NUEVA_344 0x658 // SILPH 6 - CARBOS - INVISIBLE
#define FLAG_NUEVA_345 0x659 // SILPH 6 - MAS PS
#define FLAG_NUEVA_346 0x65A // SILPH 6 - ESPECIAL X
#define FLAG_NUEVA_347 0x65B // SILPH 7 - HIERRO
#define FLAG_NUEVA_348 0x65C // SILPH 7 - ZINC
#define FLAG_NUEVA_349 0x65D // SILPH 7 - TM08
#define FLAG_NUEVA_350 0x65E // SILPH 8 - HIERRO
#define FLAG_NUEVA_351 0x65F // SILPH 8 - PEPITA - INVISIBLE
#define FLAG_NUEVA_352 0x660 // SILPH 9 - CALCIO - INVISIBLE
#define FLAG_NUEVA_353 0x661 // SILPH 9 - MAX POCION - INVISIBLE
#define FLAG_NUEVA_354 0x662 // SILPH 10 - MAS PS - INVISIBLE
#define FLAG_NUEVA_355 0x663 // SILPH 10 - ULTRA BALL
#define FLAG_NUEVA_356 0x664 // SILPH 10 - CARBURANTE
#define FLAG_NUEVA_357 0x665 // SILPH 10 - CARAMELORARO
#define FLAG_NUEVA_358 0x666 // SILPH 11 - REVIVIR - INVISIBLE
#define FLAG_NUEVA_359 0x667 // SILPH 11 - ZINC
#define FLAG_NUEVA_360 0x668 // MANSION CANELA - PIEDRA LUNAR - INVISIBLE
#define FLAG_NUEVA_361 0x669 // MANSION CANELA - CUERDA HUIDA
#define FLAG_NUEVA_362 0x66A // MANSION CANELA - PROTEINA
#define FLAG_NUEVA_363 0x66B // MANSION CANELA - CARBURANTE
#define FLAG_NUEVA_364 0x66C // MANSION CANELA - ZINC
#define FLAG_NUEVA_365 0x66D // MANSION CANELA - MAS PS
#define FLAG_NUEVA_366 0x66E // MANSION CANELA - CALCIO
#define FLAG_NUEVA_367 0x66F // MANSION CANELA - MAXPOTION
#define FLAG_NUEVA_368 0x670 // MANSION CANELA - HIERRO
#define FLAG_NUEVA_369 0x671 // MANSION CANELA - CARAMELORARO - INVISIBLE
#define FLAG_NUEVA_370 0x672 // MANSION CANELA - RESTAURATODO
#define FLAG_NUEVA_371 0x673 // MANSION CANELA - MT22
#define FLAG_NUEVA_372 0x674 // MANSION CANELA - MT14
#define FLAG_NUEVA_373 0x675 // ZONA SAFARI - MT10
#define FLAG_NUEVA_374 0x676 // ZONA SAFARI - PIEDRA HOJA - INVISIBLE
#define FLAG_NUEVA_375 0x677 // ZONA SAFARI - MAS POCION
#define FLAG_NUEVA_376 0x678 // ZONA SAFARI - MT11
#define FLAG_NUEVA_377 0x679 // ZONA SAFARI - PIEDRA HOJA
#define FLAG_NUEVA_378 0x67A // ZONA SAFARI - RESTAURATODO
#define FLAG_NUEVA_379 0x67B // ZONA SAFARI - PROTEINA
#define FLAG_NUEVA_380 0x67C // ZONA SAFARI - TM47
#define FLAG_NUEVA_381 0x67D // ZONA SAFARI - GARRA RAPIDA
#define FLAG_NUEVA_382 0x67E // ZONA SAFARI - REVIVIR - INVISIBLE
#define FLAG_NUEVA_383 0x67F // ZONA SAFARI - TM05
#define FLAG_NUEVA_384 0x680 // ZONA SAFARI - MAX POCION
#define FLAG_NUEVA_385 0x681 // ZONA SAFARI - MAX REVIVIR
#define FLAG_NUEVA_386 0x682 // MTMOON - CUERDA HUIDA
#define FLAG_NUEVA_387 0x683 // MTMOON - MT23
#define FLAG_NUEVA_388 0x684 // MTMOON - REPELENTE
#define FLAG_NUEVA_389 0x685 // MTMOON - REVIVIR
#define FLAG_NUEVA_390 0x686 // MTMOON - MAX ETER
#define FLAG_NUEVA_391 0x687 // ISLAS ESPUMA - ANTIHIELO
#define FLAG_NUEVA_392 0x688 // ISLAS ESPUMA - CARAMELORARO
#define FLAG_NUEVA_393 0x689 // ISLAS ESPUMA - TM45
#define FLAG_NUEVA_394 0x68A // ISLAS ESPUMA - PERLA GRANDE
#define FLAG_NUEVA_395 0x68B // ISLAS ESPUMA - PEPITA - INVISIBLE
#define FLAG_NUEVA_396 0x68C // ISLAS ESPUMA - ULTRA BALL
#define FLAG_NUEVA_397 0x68D // ISLAS ESPUMA - PIEDRA AGUA - INVISIBLE
#define FLAG_NUEVA_398 0x68E // TORRE LAVANDA - CUERDA HUIDA
#define FLAG_NUEVA_399 0x68F // TORRE LAVANDA - SUPERBALL
#define FLAG_NUEVA_400 0x690 // TORRE LAVANDA - ELIXIR
#define FLAG_NUEVA_401 0x691 // TORRE LAVANDA - DESPERTAR
#define FLAG_NUEVA_402 0x692 // TORRE LAVANDA - SETA GRANDE - INVISIBLE
#define FLAG_NUEVA_403 0x693 // TORRE LAVANDA - AMULETO
#define FLAG_NUEVA_404 0x694 // TORRE LAVANDA - PEPITA
#define FLAG_NUEVA_405 0x695 // TORRE LAVANDA - PRECISION X
#define FLAG_NUEVA_406 0x696 // TORRE LAVANDA - CARAMELORARO
#define FLAG_NUEVA_407 0x697 // TORRE LAVANDA - CAMPANA ALIVIO
#define FLAG_NUEVA_408 0x698 // CENTRAL - PIEDRATRUENO - INVISIBLE
#define FLAG_NUEVA_409 0x699 // CENTRAL - MAX POCION
#define FLAG_NUEVA_410 0x69A // CENTRAL - ELIXIR
#define FLAG_NUEVA_411 0x69B // CENTRAL - PIEDRATRUENO
#define FLAG_NUEVA_412 0x69C // CENTRAL - CARAMELORARO
#define FLAG_NUEVA_413 0x69D // CENTRAL - TM25
#define FLAG_NUEVA_414 0x69E // CENTRAL - ELIXIR MAX - INVISIBLE
#define FLAG_NUEVA_415 0x69F // BASE PROFUNDA - CARAMELOROARO
#define FLAG_NUEVA_416 0x6A0 // BASE PROFUNDA - VESTIDURA
#define FLAG_NUEVA_417 0x6A1 // CULTO - MT30
#define FLAG_NUEVA_418 0x6A2 // CULTO - PRECISION X
#define FLAG_NUEVA_419 0x6A3 // SILPH SOTANO - MAX PP 
#define FLAG_NUEVA_420 0x6A4 // SILPH SOTANO - CARAMELORARO
#define FLAG_NUEVA_421 0x6A5 // SETIMA - PUÑO SUERTE
#define FLAG_NUEVA_422 0x6A6 // MT ASCUAS - PIEDRAFUEGO - INVISIBLE
#define FLAG_NUEVA_423 0x6A7 // MT ASCUAS - ULTRA BALL
#define FLAG_NUEVA_424 0x6A8 // MT ASCUAS - ULTRA BALL - INVISIBLE
#define FLAG_NUEVA_425 0x6A9 // MT ASCUAS - DIRECTO
#define FLAG_NUEVA_426 0x6AA // MT ASCUAS - CARAMELORARO
#define FLAG_NUEVA_427 0x6AB // BOSQUE BAYA - BAYA ZIUELA - INVISBLE
#define FLAG_NUEVA_428 0x6AC // BOSQUE BAYA - ETER MAX
#define FLAG_NUEVA_429 0x6AD // BOSQUE BAYA - BAYA SAFRE - INVISBLE
#define FLAG_NUEVA_430 0x6AE // BOSQUE BAYA - BAYA LICHI - INVISIBLE
#define FLAG_NUEVA_431 0x6AF // BOSQUE BAYA - BAYA ZIUELA 2 - INVISIBLE
#define FLAG_NUEVA_432 0x6B0 // BOSQUE BAYA - BAYA ZIDRA - INVISIBLE
#define FLAG_NUEVA_433 0x6B1 // BOSQUE BAYA - BAYA MELOC - INVISIBLE
#define FLAG_NUEVA_434 0x6B2 // BOSQUE BAYA - PP MAX 
#define FLAG_NUEVA_435 0x6B3 // BOSQUE BAYA - BAYA ZANAMA - INVISIBLE
#define FLAG_NUEVA_436 0x6B4 // BOSQUE BAYA - BAYA ZIDRA 2 - INVISIBLE
#define FLAG_NUEVA_437 0x6B5 // BOSQUE BAYA - CURA TOTAL
#define FLAG_NUEVA_438 0x6B6 // BOSQUE BAYA - BAYA ARANJA - INVISIBLE
#define FLAG_NUEVA_439 0x6B7 // BOSQUE BAYA - BAYA ENIGMA - INVISIBLE
#define FLAG_NUEVA_440 0x6B8 // BOSQUE BAYA - BAYA ATANIA - INVISIBLE
#define FLAG_NUEVA_441 0x6B9 // BOSQUE BAYA - BAYA CAQUIC - INVISIBLE
#define FLAG_NUEVA_442 0x6BA // CUEVA GLACIADA - ULTRA BALL
#define FLAG_NUEVA_443 0x6BB // CUEVA GLACIADA - RESTAURATODO
#define FLAG_NUEVA_444 0x6BC // CUEVA GLACIADA - ANTIDERRETIR
#define FLAG_NUEVA_445 0x6BD // ROCKET INTA - POCION
#define FLAG_NUEVA_446 0x6BE // ROCKET INTA - PERLA
#define FLAG_NUEVA_447 0x6BF // ROCKET INTA - PERLA GRANDE
#define FLAG_NUEVA_448 0x6C0 // ROCKET INTA - ROCA REY
#define FLAG_NUEVA_449 0x6C1 // ROCKET INTA - MALLA BALL - INVISIBLE
#define FLAG_NUEVA_450 0x6C2 // ROCKET INTA - NEST BALL - INVISIBLE
#define FLAG_NUEVA_451 0x6C3 // CUEVA PERDIDA - BOLA HUMO
#define FLAG_NUEVA_452 0x6C4 // CUEVA PERDIDA - INCIE SUAVE
#define FLAG_NUEVA_453 0x6C5 // CUEVA PERDIDA - INNCIE MAR
#define FLAG_NUEVA_454 0x6C6 // CUEVA PERDIDA - MAX REVIVIR
#define FLAG_NUEVA_455 0x6C7 // CUEVA PERDIDA - CARAMELORARO
#define FLAG_NUEVA_456 0x6C8 // SPA - MO GOLPE ROCA
#define FLAG_NUEVA_457 0x6C9 // RUTA 26 - SALAC BERRY - INVISIBLE
#define FLAG_NUEVA_458 0x6CA // RUTA 26 - BAYA ZIDRA - INVISIBLE
#define FLAG_NUEVA_459 0x6CB // RUTA 26 - ETHER - INVISIBLE
#define FLAG_NUEVA_460 0x6CC // RUTA 26 - LANSAT BERRY - INVISIBLE
#define FLAG_NUEVA_461 0x6CD // RUTA 26 - BAYA ZIUELA - INVISIBLE
#define FLAG_NUEVA_462 0x6CE // RUTA 26 - PIEDRA HOJA - INVISIBLE
#define FLAG_NUEVA_463 0x6CF // RUTA 26 - BAYA YAPATI - INVISIBLE
#define FLAG_NUEVA_464 0x6D0 // RUTA 27 - ELIXIR - INVISIBLE
#define FLAG_NUEVA_465 0x6D1 // RUTA 27 - BAYA ZREZA - INVISIBLE
#define FLAG_NUEVA_466 0x6D2 // RUTA 28 - KELPSY BERRY - INVISIBLE
#define FLAG_NUEVA_467 0x6D3 // RUTA 28 - SALAC BERRY - INVISIBLE
#define FLAG_NUEVA_468 0x6D4 // RUTA 28 - POWER HERB - INVISIBLE
#define FLAG_NUEVA_469 0x6D5 // RUTA 31 - ETER - INVISIBLE
#define FLAG_NUEVA_470 0x6D6 // RUTA 32 - BAYA ZANAMA - INVISIBLE
#define FLAG_NUEVA_471 0x6D7 // RUTA 32 - CEN SAGRADA - INVISIBLE
#define FLAG_NUEVA_472 0x6D8 // RUTA 32 - MENTAL HERB - INVISIBLE
#define FLAG_NUEVA_473 0x6D9 // RUTA 33 - BAYA ZIDRA - INVISIBLE
#define FLAG_NUEVA_474 0x6DA // RUTA 34 - BAYA LICHI - INVISIBLE
#define FLAG_NUEVA_475 0x6DB // RUTA 35 - PETAYA BERRY - INVISIBLE
#define FLAG_NUEVA_476 0x6DC // RUTA 35 - REVIVIR - INVISIBLE
#define FLAG_NUEVA_477 0x6DD // RUTA 36 - BAYA MELUCE - INVISIBLE
#define FLAG_NUEVA_478 0x6DE // RUTA 36 - PECHA BERRY - INVISIBLE
#define FLAG_NUEVA_479 0x6DF // RUTA 37 - HIERBA BLANCA - INVISIBLE
#define FLAG_NUEVA_480 0x6E0 // RUTA 38 - APICOT BERRY - INVISIBLE
#define FLAG_NUEVA_481 0x6E1 // RUTA 39 - LECHE MUMU - INVISIBLE
#define FLAG_NUEVA_482 0x6E2 // RUTA 39 - LECHE MUMU - INVISIBLE
#define FLAG_NUEVA_483 0x6E3 // RUTA 39 - LECHE MUMU - INVISIBLE
#define FLAG_NUEVA_484 0x6E4 // RUTA 39 - LECHE MUMU - INVISIBLE
#define FLAG_NUEVA_485 0x6E5 // RUTA 39 - SALAC BERRY - INVISIBLE
#define FLAG_NUEVA_486 0x6E6 // RUTA 39 - MALLA BALL - INVISIBLE
#define FLAG_NUEVA_487 0x6E7 // RUTA 40 - TROZO ESTRELLA - INVISIBLE
#define FLAG_NUEVA_488 0x6E8 // RUTA 40 - PERLA - INVISIBLE
#define FLAG_NUEVA_489 0x6E9 // RUTA 40 - BAYA ZIDRA - INVISIBLE
#define FLAG_NUEVA_490 0x6EA // RUTA 40 - STARDUST - INVISIBLE
#define FLAG_NUEVA_491 0x6EB // RUTA 40 - ESCCORAZON - INVISIBLE
#define FLAG_NUEVA_492 0x6EC // RUTA 40 - ESCCORAZON - INVISIBLE
#define FLAG_NUEVA_493 0x6ED // RUTA 42 - PIEDRA DIA - INVISIBLE
#define FLAG_NUEVA_494 0x6EE // RUTA 42 - QUALOT BERRY - INVISIBLE
#define FLAG_NUEVA_495 0x6EF // RUTA 42 - CARAMELOFURIA - INVISIBLE
#define FLAG_NUEVA_496 0x6F0 // RUTA 42 - LEPPA BERRY - INVISIBLE
#define FLAG_NUEVA_497 0x6F1 // RUTA 43 - MENTAL HERB - INVISIBLE
#define FLAG_NUEVA_498 0x6F2 // RUTA 44 - BAYA POMEG - INVISIBLE
#define FLAG_NUEVA_499 0x6F3 // RUTA 44 - PEPITA - INVISIBLE
#define FLAG_NUEVA_500 0x6F4 // RUTA 46 - QUALOT BERRY - INVISIBLE
#define FLAG_NUEVA_501 0x6F5 // RUTA 47 - PIEDRA POMEZ
#define FLAG_NUEVA_502 0x6F6 // RUTA 47 - SARTA PERLAS - INVISIBLE
#define FLAG_NUEVA_503 0x6F7 // RUTA 48 - RAIZ ENERGIA - INVISIBLE
#define FLAG_NUEVA_504 0x6F8 // RUTA 48 - DAWN STONE - INVISIBLE
#define FLAG_NUEVA_505 0x6F9 // RUTA 49 - ANFORA
#define FLAG_NUEVA_506 0x6FA // RUTA 49 - ORO - INVISIBLE
#define FLAG_NUEVA_507 0x6FB // RUTA 49 - PLATA - INVISIBLE
#define FLAG_NUEVA_508 0x6FC // RUTA 49 - BRONCE - INVISIBLE
#define FLAG_NUEVA_509 0x6FD // RUTA 49 - KELPSY BERRY - INVISIBLE
#define FLAG_NUEVA_510 0x6FE // RUTA 49 - ESC CORAZON - INVISIBLE
#define FLAG_NUEVA_511 0x6FF // RUTA 51 - HONDEW BERRY - INVISIBLE
#define FLAG_NUEVA_512 0x700 // RUTA 51 - GREPA BERRY - INVISIBLE
#define FLAG_NUEVA_513 0x701 // RUTA 51 - POMEG BERRY - INVISIBLE
#define FLAG_NUEVA_514 0x702 // RUTA 51 - KELPSY BERRY - INVISIBLE
#define FLAG_NUEVA_515 0x703 // RUTA 51 - HEART SCALE - INVISIBLE
#define FLAG_NUEVA_516 0x704 // RUTA 51 - PERLA GRANDE - INVISIBLE
#define FLAG_NUEVA_517 0x705 // VIRIDIAN GYM - VESTIDURA - INVISIBLE
#define FLAG_NUEVA_518 0x706 // BASE HOENN - CAPSULA HABILIDAD - INVISIBLE
#define FLAG_NUEVA_519 0x707 // BASE HOENN - MAX REVIVIR - INVISIBLE
#define FLAG_NUEVA_520 0x708 // BASE HOENN S2 - MENTA FIRME - INVISIBLE
#define FLAG_NUEVA_521 0x709 // BASE HOENN S2 - RESTAURATODO - INVISIBLE
#define FLAG_NUEVA_522 0x70A // BASE HOENN S2 - MAS PP - INVISIBLE
#define FLAG_NUEVA_523 0x70B // BASE JOHTO - ULTRA BALL - INVISIBLE
#define FLAG_NUEVA_524 0x70C // BASE JOHTO - HYPER POCION - INVISIBLE
#define FLAG_NUEVA_525 0x70D // BASE JOHTO - MENTAL HERB - INVISIBLE
#define FLAG_NUEVA_526 0x70E // BASE JOHTO P1 - CAPSULA HABILIDAD - INVISIBLE
#define FLAG_NUEVA_527 0x70F // BASE JOHTO P1 - ELIXIR - INVISIBLE
#define FLAG_NUEVA_528 0x710 // BASE JOHTO P1 - LUPA
#define FLAG_NUEVA_529 0x711 // BASE JOHTO P1 - MAS PS
#define FLAG_NUEVA_530 0x712 // BASE JOHTO P1 - PEPITA
#define FLAG_NUEVA_531 0x713 // BASE JOHTO P2 - MASTER BALL - INVISIBLE
#define FLAG_NUEVA_532 0x714 // BASE RUTA 5 - ETHER - INVISIBLE
#define FLAG_NUEVA_533 0x715 // BASE RUTA 5 - SUPERREPEL - INVISIBLE
#define FLAG_NUEVA_534 0x716 // BASE PROFUNDA - MAS PP - INVISIBLE
#define FLAG_NUEVA_535 0x717 // BASE PROFUNDA - ELIXIR - INVISIBLE
#define FLAG_NUEVA_536 0x718 // BASE PROFUNDA - MAX REPEL - INVISIBLE
#define FLAG_NUEVA_537 0x719 // BASE PROFUNDA - MENTAL HERB - INVISIBLE
#define FLAG_NUEVA_538 0x71A // BASE PROFUNDA - PEPITA - INVISIBLE
#define FLAG_NUEVA_539 0x71B // BASE PROFUNDA DESPACHO - MAXIPEPITA - INVISIBLE
#define FLAG_NUEVA_540 0x71C // ISLAS REMOLINO - ULTRA BALL - INVISIBLE
#define FLAG_NUEVA_541 0x71D // ISLAS REMOLINO - RESTAUTODO - INVISIBLE
#define FLAG_NUEVA_542 0x71E // MTMORTERO - MAX REVIVIR - INVISIBLE
#define FLAG_NUEVA_543 0x71F // MTMORTERO - HYPERPOCION - INVISIBLE
#define FLAG_NUEVA_544 0x720 // MTMORTERO - RESTAURATODO - INVISIBLE
#define FLAG_NUEVA_545 0x721 // MTMORTERO - ELIXIR MAX - INVISIBLE
#define FLAG_NUEVA_546 0x722 // TORRE QUEMADA - ANTIQUEMAR - INVISIBLE
#define FLAG_NUEVA_547 0x723 // TORRE QUEMADA - REVIVIR - INVISIBLE
#define FLAG_NUEVA_548 0x724 // TORRE QUEMADA - ETHER - INVISIBLE
#define FLAG_NUEVA_549 0x725 // TORRE QUEMADA - PEPITA - INVISIBLE
#define FLAG_NUEVA_550 0x726 // TORRE QUEMADA - ULTRA BALL - INVISIBLE
#define FLAG_NUEVA_551 0x727 // NINJA BASE - HYPER POCION - INVISIBLE
#define FLAG_NUEVA_552 0x728 // NINJA BASE - CALCIO - INVISIBLE
#define FLAG_NUEVA_553 0x729 // NINJA BASE - CAPSULA HABILIDAD - INVISIBLE
#define FLAG_NUEVA_554 0x72A // TORRE QUEMADA - PIEDRA NOCHE - INVISIBLE
#define FLAG_NUEVA_555 0x72B // BASE VERDE - MAS PP - INVISIBLE
#define FLAG_NUEVA_556 0x72C // BASE VERDE - MAX ETHER - INVISIBLE
#define FLAG_NUEVA_557 0x72D // RADIO TOWER P3 - MAX PP - INVISIBLE
#define FLAG_NUEVA_558 0x72E // RADIO TOWER P4 - MENTA MODESTA - INVISIBLE
#define FLAG_NUEVA_559 0x72F // RADIO TOWER P6 - DISXOXTRAÑO - INVISIBLE
#define FLAG_NUEVA_560 0x730 // RADIO TOWER P1 - MAX ELIXIR - INVISIBLE
#define FLAG_NUEVA_561 0x731 // CULTO S4 - MAX REVIVIR
#define FLAG_NUEVA_562 0x732 // CULTO S5 - BOTAS GRUESAS
#define FLAG_NUEVA_563 0x733 // CULTO S6 - RESTAURATODO
#define FLAG_NUEVA_564 0x734 // CULTO S7 - BANETITA
#define FLAG_NUEVA_565 0x735 // CULTO ITEMS - EFIGIE
#define FLAG_NUEVA_566 0x736 // CULTO ITEMS - TELATERRIBLE
#define FLAG_NUEVA_567 0x737 // CultoS4_10: TM75 VENDETA - PENDIENTE
#define FLAG_NUEVA_568 0x738 // LagoFuria1-2: TM96 ALUD - PENDIENTE
#define FLAG_NUEVA_569 0x739 // LAGO FURIA 1 - PERLA GRANDE /PUEDE CRASHEAR
#define FLAG_NUEVA_570 0x73A // LAGO FURIA 1 - MAX REPEL
#define FLAG_NUEVA_571 0x73B // LAGO FURIA 2 - BUCEO BALL
#define FLAG_NUEVA_572 0x73C // LAGO FURIA 2 - ROCA LLUVIA
#define FLAG_NUEVA_573 0x73D // LAGO FURIA 2 - ELIXIR MAXIMO
#define FLAG_NUEVA_574 0x73E // LAGO FURIA 2 - GEMA AGUA
#define FLAG_NUEVA_575 0x73F // LAGO FURIA 3 - CUERDA HUIDA
#define FLAG_NUEVA_576 0x740 // LAGO FURIA 3 - SARTA PERLA
#define FLAG_NUEVA_577 0x741 // LAGO FURIA 3 - MAX REVIVIR
#define FLAG_NUEVA_578 0x742 // LAGO FURIA 3 - PIEDRA AGUA
#define FLAG_NUEVA_579 0x743 // LAGO FURIA 4 - TROZO ESTRELLA
#define FLAG_NUEVA_580 0x744 // LAGO FURIA 4 - MAX PP
#define FLAG_NUEVA_581 0x745 // LAGO FURIA 4 - CARAMELORARO
#define FLAG_NUEVA_582 0x746 // LAGO FURIA 4 - PERLA GRANDE
#define FLAG_NUEVA_583 0x747 // LAGO FURIA 5 - ELIXIR
#define FLAG_NUEVA_584 0x748 // LAGO FURIA 5 - FRAGMENTO COMETA
#define FLAG_NUEVA_585 0x749 // TM71 CAIDA LIBRE - RUTA 47
#define FLAG_NUEVA_586 0x74A // ROCA SUAVE 
#define FLAG_NUEVA_587 0x74B // GEMA ROCA
#define FLAG_NUEVA_588 0x74C // RUTA 49 - MAX REVIVIR
#define FLAG_NUEVA_589 0x74D // RUTA 49 - CEN SAGRADA
#define FLAG_NUEVA_590 0x74E // TM52 ACROBATA - ITEM 8
#define FLAG_NUEVA_591 0x74F // RUTA 50 - ELIXIR
#define FLAG_NUEVA_592 0x750 // RUTA 50 - MAX POCION
#define FLAG_NUEVA_593 0x751 // RUTA 50 - BALM SETA
#define FLAG_NUEVA_594 0x752 // RUTA 50 - HIERBA UNICA
#define FLAG_NUEVA_595 0x753 // RUTA 50 - TM62 CAIDA LIBRE
#define FLAG_NUEVA_596 0x754 // RUTA 50 - MAX REPEL
#define FLAG_NUEVA_597 0x755 // RUTA 50 - GEMA PLANTA
#define FLAG_NUEVA_598 0x756 // RUTA 50 - CARAMELORARO
#define FLAG_NUEVA_599 0x757 // RUTA 50 - ETER MAX
#define FLAG_NUEVA_600 0x758 // RUTA 53 - STEELEXITA
#define FLAG_NUEVA_601 0x759 // VIAS TREN 1 - LUM BERRY
#define FLAG_NUEVA_602 0x75A // VIAS TREN 1 - CENIZA SAGRADA
#define FLAG_NUEVA_603 0x75B // VIAS TREN 1 - TERRAIN EXTENDER
#define FLAG_NUEVA_604 0x75C // VIAS TREN 2 - SETA GRANDE
#define FLAG_NUEVA_605 0x75D // VIAS TREN 2 - MAX ETHER
#define FLAG_NUEVA_606 0x75E // VIAS TREN 2 - CARAMELORARO
#define FLAG_NUEVA_607 0x75F // VIAS TREN 2 - TM88 HIERBA LAZO
#define FLAG_NUEVA_608 0x760 // VIAS TREN 2 - PP UP
#define FLAG_NUEVA_609 0x761 // VIAS TREN 3 - SETA GRANDE
#define FLAG_NUEVA_610 0x762 // VIAS TREN 3 - ELIXIR
#define FLAG_NUEVA_611 0x763 // VIAS TREN 3 - MALLA BALL
#define FLAG_NUEVA_612 0x764 // VIAS TREN 3 - HIERBA BLANCA
#define FLAG_NUEVA_613 0x765 // VIAS TREN 4 - POLVO PLATA
#define FLAG_NUEVA_614 0x766 // VIAS TREN 4 - SETA GRANDE
#define FLAG_NUEVA_615 0x767 // VIAS TREN 4 - MAX REPEL
#define FLAG_NUEVA_616 0x768 // VIAS TREN 4 - RESTAURATODO
#define FLAG_NUEVA_617 0x769 // VIAS TREN 4 - MAX REVIVIR
#define FLAG_NUEVA_618 0x76A // VIAS TREN 5 - SETA GRANDE
#define FLAG_NUEVA_619 0x76B // VIAS TREN 5 - PEPITA
#define FLAG_NUEVA_620 0x76C // VIAS TREN 5 - GEMA PLANTA
#define FLAG_NUEVA_621 0x76D // VIAS TREN 5 - TM 67 ENERGIBOLA
#define FLAG_NUEVA_622 0x76E // VIAS BOSQUE - TM 90 PICOTEO
#define FLAG_NUEVA_623 0x76F // VIAS BOSQUE - SETA GIGANTE
#define FLAG_NUEVA_624 0x770 // VIAS BOSQUE - GEMA BICHO
#define FLAG_NUEVA_625 0x771 // VIAS BOSQUE - HIERBA REV
#define FLAG_NUEVA_626 0x772 // VIAS BOSQUE - RINDO BERRY - INVISIBLE
#define FLAG_NUEVA_627 0x773 // VIAS BOSQUE - APICOT BERRY - INVISIBLE
#define FLAG_NUEVA_628 0x774 // VIAS BOSQUE - MARANGA BERRY - INVISIBLE
#define FLAG_NUEVA_629 0x775 // VIAS BOSQUE - KELPSY - INVISIBLE
#define FLAG_NUEVA_630 0x776 // VIAS BOSQUE - TANGA BERRY - INVISBLE
#define FLAG_NUEVA_631 0x777 // VIAS BOSQUE - KASIB BERRY - INVISBLE
#define FLAG_NUEVA_632 0x778 // RUTA 50 - SHUCA BERRY - INVISBLE
#define FLAG_NUEVA_633 0x779 // VIAS SUR - SEM MILAGRO
#define FLAG_NUEVA_634 0x77A // VIAS SUR - POWER HERB
#define FLAG_NUEVA_635 0x77B // VIAS SUR - SETA GIGANTE
#define FLAG_NUEVA_636 0x77C // VIAS SUR 2 - TAMATO BERRY - INVISBLE
#define FLAG_NUEVA_637 0x77D // VIAS SUR 2 - MAXIPEPITA 
#define FLAG_NUEVA_638 0x77E // VIAS SUR 3 - SAFETY GOGGLES
#define FLAG_NUEVA_639 0x77F // VIAS SUR 3 - GEMA TIERRA
#define FLAG_NUEVA_640 0x780 // VIAS SUR 4 - TM95 TRAMPA ROCAS
#define FLAG_NUEVA_641 0x781 // VIAS SUR 4 - PROTECTIVE PATS
#define FLAG_NUEVA_642 0x782 // VIAS SUR 4 - PPMAX
#define FLAG_NUEVA_643 0x783 // LAVENDER RADIO 2 - SEGURO FALLO
#define FLAG_NUEVA_644 0x784 // LAVENDER RADIO 4 - RED CARD
#define FLAG_NUEVA_645 0x785 // LAVENDER RADIO 5 - PILA
#define FLAG_NUEVA_646 0x786 // LAVENDER RADIO 5 - REFLELUZ
#define FLAG_NUEVA_647 0x787 // LAVENDER RADIO 6 - UTILITY UMBRELLA
#define FLAG_NUEVA_648 0x788 // NEO CANELA - POLVO BRILLO
#define FLAG_NUEVA_649 0x789 // NEO CANELA - CARBON
#define FLAG_NUEVA_650 0x78A // VOLCAN - ROCA CALOR
#define FLAG_NUEVA_651 0x78B // VOLCAN - TM73 EXPLOSION
#define FLAG_NUEVA_652 0x78C // LAB 3 - WISE GLASSES
#define FLAG_NUEVA_653 0x78D // LAB 4 - MAGMATIZADOR
#define FLAG_NUEVA_654 0x78E // VOLCAN - LLAMASFERA
#define FLAG_NUEVA_655 0x78F // LAB 4 - BOTON ESCAPE
#define FLAG_NUEVA_656 0x790 // LAB 4 - ELIXIR
#define FLAG_NUEVA_657 0x791 // LAB 4 - MASTER BALL
#define FLAG_NUEVA_658 0x792 // LAB 5 BALL GENESECT
#define FLAG_NUEVA_659 0x793 // LAB 5 - CRIO ROM
#define FLAG_NUEVA_660 0x794 // LAB 5 - CARAMELORARO
#define FLAG_NUEVA_661 0x795 // LAB 5 - CHAL ASALTO 
#define FLAG_NUEVA_662 0x796 // LAB 5 - MAS PP
#define FLAG_NUEVA_663 0x797 // LAB 4 - FULGO ROM
#define FLAG_NUEVA_664 0x798 // LAB 2 - HYDRO ROM
#define FLAG_NUEVA_665 0x799 // LAB 1 - BURN DRIVE
#define FLAG_NUEVA_666 0x79A // LAB 1 - TELESCOPIO
#define FLAG_NUEVA_667 0x79B // BASE HOENN - RESTAURATODO
#define FLAG_NUEVA_668 0x79C // BASE HOENN - RAZOR CLAW
#define FLAG_NUEVA_669 0x79D // BASE HOENN - ULTRA BALL
#define FLAG_NUEVA_670 0x79E // BASE HOENN - TM 55 VOLTIO CRUEL
#define FLAG_NUEVA_671 0x79F // CEMENTERIO S1 - HECHIZO
#define FLAG_NUEVA_672 0x7A0 // CEMENTERIO S1 - BLANCO
#define FLAG_NUEVA_673 0x7A1 // CEMENTERIO S1 - MAX REPEL
#define FLAG_NUEVA_674 0x7A2 // CEMENTERIO S1 - CARAMELORARO
#define FLAG_NUEVA_675 0x7A3 // CEMENTERIO S1 - ETER MAX
#define FLAG_NUEVA_676 0x7A4 // CEMENTERIO S1 - ELIXIR
#define FLAG_NUEVA_677 0x7A5 // CEMENTERIO S2 - PIEDRA ETERNA
#define FLAG_NUEVA_678 0x7A6 // CEMENTERIO S2 - DUSK BALL
#define FLAG_NUEVA_679 0x7A7 // CEMENTERIO S2 - TM76 REPRESALIA
#define FLAG_NUEVA_680 0x7A8 // CEMENTERIO S2 - BANDA ATADURA
#define FLAG_NUEVA_681 0x7A9 // CEMENTERIO S2 - MAX REPEL
#define FLAG_NUEVA_682 0x7AA // CEMENTERIO S2 - INCIENSO RARO
#define FLAG_NUEVA_683 0x7AB // BOSQUE GYM - SETA GIGANTE
#define FLAG_NUEVA_684 0x7AC // BOSQUE GYM - INCIENSO PURO
#define FLAG_NUEVA_685 0x7AD // BOSQUE GYM - MUSGO BRILLANTE
#define FLAG_NUEVA_686 0x7AE // MAGMA 2 - PIEDRA FUEGO
#define FLAG_NUEVA_687 0x7AF // MAGMA 2 - GEMA FUEGO
#define FLAG_NUEVA_688 0x7B0 // MAGMA 2 - ROCA CALOR
#define FLAG_NUEVA_689 0x7B1 // MAGMA 2 - MAS PP
#define FLAG_NUEVA_690 0x7B2 // AQUA 1 - PIEDRA AGUA
#define FLAG_NUEVA_691 0x7B3 // AQUA 1 - GEMA AGUA
#define FLAG_NUEVA_692 0x7B4 // AQUA 1 - ROCA AGUA
#define FLAG_NUEVA_693 0x7B5 // AQUA 1 - MAS PP
#define FLAG_NUEVA_694 0x7B6 // MISION TRIGAL 2 - RESTAURATODO
#define FLAG_NUEVA_695 0x7B7 // MISION TRIGAL 2 - MAX REVIVIR
#define FLAG_NUEVA_696 0x7B8 // MISION TRIGAL 2 - ETHER
#define FLAG_NUEVA_697 0x7B9 // MISION TRIGAL 3 - TM58 TIJERA X
#define FLAG_NUEVA_698 0x7BA // MISION TRIGAL 3 - MAX PP
#define FLAG_NUEVA_699 0x7BB // MISION TRIGAL 4 - PEPITA
#define FLAG_NUEVA_700 0x7BC // MISION TRIGAL 4 - PROTECTOR
#define FLAG_NUEVA_701 0x7BD // MISION IRIS LAB - SHARPEDONITA
#define FLAG_NUEVA_702 0x7BE // MISION IRIS LAB - TIRTOUGA
#define FLAG_NUEVA_703 0x7BF // CUEVA TESORO 1 - TROZO ESTRELLA
#define FLAG_NUEVA_704 0x7C0 // CUEVA TESORO 1 - PERLA GRANDE
#define FLAG_NUEVA_705 0x7C1 // CUEVA TESORO 1 - ETHER
#define FLAG_NUEVA_706 0x7C2 // CUEVA TESORO 1 - MAX POCION
#define FLAG_NUEVA_707 0x7C3 // CUEVA TESORO 2 - SARTA PERLAS
#define FLAG_NUEVA_708 0x7C4 // CUEVA TESORO 3 - PIEDRA AGUA
#define FLAG_NUEVA_709 0x7C5 // CUEVA TESORO 3 - PERLA GRANDE
#define FLAG_NUEVA_710 0x7C6 // CUEVA TESORO 3 - MAX REVIVIR
#define FLAG_NUEVA_711 0x7C7 // CUEVA TESORO 3 - COMET SHARD
#define FLAG_NUEVA_712 0x7C8 // CUEVA TESORO 4 - TM69 ESCALDAR
#define FLAG_NUEVA_713 0x7C9 // CUEVA TESORO 4 - TROZO ESTRELLA
#define FLAG_NUEVA_714 0x7CA // CUEVA TESORO 4 - PEPITA
#define FLAG_NUEVA_715 0x7CB // CUEVA TESORO 4 - MALLA BALL
#define FLAG_NUEVA_716 0x7CC // CUEVA TESORO 4 - ELIXIR
#define FLAG_NUEVA_717 0x7CD // TINTOWER 4 - CEN SAGRADA
#define FLAG_NUEVA_718 0x7CE // GOLDENROD - SITRUS BERRY - INVISIBLE
#define FLAG_NUEVA_719 0x7CF // RUTA 53 - PECHA BERRY - INVISIBLE
#define FLAG_NUEVA_720 0x7D0 // RUTA 53 - CHERI BERRY - INVISIBLE
#define FLAG_NUEVA_721 0x7D1 // VIAS 1 - REV HERB - INVISIBLE
#define FLAG_NUEVA_722 0x7D2 // VIAS 1 - ELECTRIC SEED - INVISIBLE
#define FLAG_NUEVA_723 0x7D3 // VIAS 1 - MUSGO - INVISIBLE
#define FLAG_NUEVA_724 0x7D4 // VIAS 1 - HEART SCALE - INVISIBLE
#define FLAG_NUEVA_725 0x7D5 // VIAS 2 - LUM BERRY - INVISIBLE
#define FLAG_NUEVA_726 0x7D6 // VIAS 2 - MINI SETA - INVISIBLE
#define FLAG_NUEVA_727 0x7D7 // VIAS 2 - GEMA PLANTA - INVISIBLE
#define FLAG_NUEVA_728 0x7D8 // VIAS 2 - GEMA ROCA - INVISIBLE
#define FLAG_NUEVA_729 0x7D9 // VIAS 2 - PERSIM BERRY - INVISIBLE
#define FLAG_NUEVA_730 0x7DA // VIAS 2 - GRASSY SEED - INVISIBLE
#define FLAG_NUEVA_731 0x7DB // VIAS 2 - SETA GRANDE - INVISBLE
#define FLAG_NUEVA_732 0x7DC // VIAS 2 - AGUAV BERRY - INVISBLE
#define FLAG_NUEVA_733 0x7DD // VIAS 3 - POWER HERB - INVISIBLE
#define FLAG_NUEVA_734 0x7DE // VIAS 3 - SETA GRANDE - INVISIBLE
#define FLAG_NUEVA_735 0x7DF // VIAS 3 - MISTY SEED - INVISIBLE
#define FLAG_NUEVA_736 0x7E0 // VIAS 3 - GEMA BICHO - INVSIBLE
#define FLAG_NUEVA_737 0x7E1 // VIAS 3 - MENTAL HERB - INVISIBLE
#define FLAG_NUEVA_738 0x7E2 // VIAS 3 - PASSHO BERRY - INVISIBLE
#define FLAG_NUEVA_739 0x7E3 // VIAS 3 - PSICHIC SEED - INVISIBLE
#define FLAG_NUEVA_740 0x7E4 // VIAS 3 - MINI SETA - INVISIBLE
#define FLAG_NUEVA_741 0x7E5 // VIAS 3 - SITRUS BERRY - INVISIBLE
#define FLAG_NUEVA_742 0x7E6 // VIAS 4 - MUSGO - INVISIBLE
#define FLAG_NUEVA_743 0x7E7 // VIAS 4 - WHITE HERB - INVISIBLE
#define FLAG_NUEVA_744 0x7E8 // VIAS 4 - BAYA ZANAMA - INVISIBLE
#define FLAG_NUEVA_745 0x7E9 // VIAS 4 - ELECTRIC SEED - INVISIBLE
#define FLAG_NUEVA_746 0x7EA // VIAS 4 - CHESTO BERRY - INVISIBLE
#define FLAG_NUEVA_747 0x7EB // VIAS 4 - MINI SETA - INVISIBLE
#define FLAG_NUEVA_748 0x7EC // VIAS 4 - RAIZ GRANDE - INVISIBLE
#define FLAG_NUEVA_749 0x7ED // VIAS 5 - GRASSY SEED - INVISIBLE
#define FLAG_NUEVA_750 0x7EE // VIAS 5 - LUM BERRY - INVISIBLE
#define FLAG_NUEVA_751 0x7EF // VIAS 5 - POWER HERB - INVISIBLE
#define FLAG_NUEVA_752 0x7F0 // VIAS 5 - SALAC BERRY - INVISIBLE
#define FLAG_NUEVA_753 0x7F1 // VIAS 5 - ENIGMA BERRY - INVISIBLE
#define FLAG_NUEVA_754 0x7F2 // VIAS 5 - GEMA PLANTA - INVISIBLE
#define FLAG_NUEVA_755 0x7F3 // VIAS 5 - PSYCHIC SEED - INVISIBLE
#define FLAG_NUEVA_756 0x7F4 // VIAS 5 - MINI SETA - INVISIBLE
#define FLAG_NUEVA_757 0x7F5 // VIAS 5 - BAYA ZANAMA - INVISIBLE
#define FLAG_NUEVA_758 0x7F6 // VIAS NORTE - ARBOL BAYA
#define FLAG_NUEVA_759 0x7F7 // VIAS NORTE - POMEG BERRY
#define FLAG_NUEVA_760 0x7F8 // VIAS NORTE - MISTY SEED - INVISIBLE
#define FLAG_NUEVA_761 0x7F9 // VIAS BOSQUE - MINI SETA - INVISIBLE
#define FLAG_NUEVA_762 0x7FA // VIAS BOSQUE - PECHA BERRY - INVISIBLE
#define FLAG_NUEVA_763 0x7FB // VIAS BOSQUE - GEMA BICHO - INVISIBLE
#define FLAG_NUEVA_764 0x7FC // VIAS BOSQUE - MUSGO - INVISIBLE
#define FLAG_NUEVA_765 0x7FD // VIAS BOSQUE - GRASSY SEED - INVISIBLE
#define FLAG_NUEVA_766 0x7FE // VIAS BOSQUE - LUM BERRY - INVISIBLE
#define FLAG_NUEVA_767 0x7FF // VIAS BOSQUE - TUBERCULO - INVISIBLE
#define FLAG_NUEVA_768 0x800 // VIAS SUR - COLBUR BERRY - INVISIBLE
#define FLAG_NUEVA_769 0x801 // VIAS SUR - AGUAV BERRY - INVISIBLE
#define FLAG_NUEVA_770 0x802 // VIAS SUR - BAYA SAFRE - INVISIBLE
#define FLAG_NUEVA_771 0x803 // VIAS SUR - REVIVAL HERB - INVISIBLE
#define FLAG_NUEVA_772 0x804 // VIAS SUR - ENERGY ROOT - INVISIBLE
#define FLAG_NUEVA_773 0x805 // VIAS SUR - ASPEAR BERRY - INVISIBLE
#define FLAG_NUEVA_774 0x806 // VIAS SUR - LEPPA BERRY - INVISIBLE
#define FLAG_NUEVA_775 0x807 // CARBON 1 - MAX POCION - INVISIBLE
#define FLAG_NUEVA_776 0x808 // CARBON 1 - ELECTRIC SEED - INVISIBLE
#define FLAG_NUEVA_777 0x809 // CARBON 1 - PIEDRATRUENO - INVISIBLE
#define FLAG_NUEVA_778 0x80A // CARBON 1 - ETHER - INVISIBLE
#define FLAG_NUEVA_779 0x80B // CARBON 1 - TM ???? - ITEM 9
#define FLAG_NUEVA_780 0x80C // CARBON 2 - PIEDRA FUEGO
#define FLAG_NUEVA_781 0x80D // CARBON 2 - ELIXIR MAX
#define FLAG_NUEVA_782 0x80E // CARBON 2 - MT64 - NITROCARGA
#define FLAG_NUEVA_783 0x80F // CARBON 2 - IMAN 
#define FLAG_NUEVA_784 0x810 // CARBON 2 - ELECTRIZADOR
#define FLAG_NUEVA_785 0x811 // BOSQUE GYM - TUBERCULO - INVISIBLE
#define FLAG_NUEVA_786 0x812 // BOSQUE GYM - KEBIA BERRY - INVISIBLE
#define FLAG_NUEVA_787 0x813 // BOSQUE GYM - MUSGO - INVISIBLE
#define FLAG_NUEVA_788 0x814 // BOSQUE GYM - LEPPA BERRY - INVISIBLE
#define FLAG_NUEVA_789 0x815 // BOSQUE GYM - LUM BERRY - INVISIBLE
#define FLAG_NUEVA_790 0x816 // FLAG EVENTO HISTORIA GUERRA
#define FLAG_NUEVA_791 0x817 // RUTA 50 - BALM MUSHROOM - INVISIBLE
#define FLAG_NUEVA_792 0x818 // RUTA 50 - GRASSY SEED - INVISIBLE
#define FLAG_NUEVA_793 0x819 // RUTA 50 - MISTY SEED - INVISIBLE
#define FLAG_NUEVA_794 0x81A // RUTA 50 - REVIVAL HERB - INVISIBLE
#define FLAG_NUEVA_795 0x81B // RUTA 50 - SITRUS BERRY - INVISIBLE
#define FLAG_NUEVA_796 0x81C // RUTA 50 - LUM BERRY - INVISIBLE
#define FLAG_NUEVA_797 0x81D // RUTA 50 - PSYCHIC SEED - INVISIBLE
#define FLAG_NUEVA_798 0x81E // RUTA 50 - POWER HERB - INVISIBLE
#define FLAG_NUEVA_799 0x81F // RUTA 50 - ENERGY ROOT - INVISIBLE
#define FLAG_NUEVA_800 0x820 // RUTA 50 - CHERI BERRY - INVISIBLE
#define FLAG_NUEVA_801 0x821 // RUTA 50 - WHITE HERB - INVISIBLE
#define FLAG_NUEVA_802 0x822 // RUTA 50 - BUG GEM - INVISIBLE
#define FLAG_NUEVA_803 0x823 // RUTA 50 - ASPEAR BERRY - INVISIBLE
#define FLAG_NUEVA_804 0x824 // RUTA 50 - ELECTRIC SEED - INVISIBLE
#define FLAG_NUEVA_805 0x825 // RUTA 50 - POISON GEM - INVISIBLE
#define FLAG_NUEVA_806 0x826 // FLAG CHICA RUTA 12 - MT27
#define FLAG_NUEVA_807 0x827 // FLAG MECANICO FARO - VOLTIOCAMBIO TM78
#define FLAG_NUEVA_808 0x828 // FLAG ANTON ILEX - IDA Y VUELTA TM91
#define FLAG_NUEVA_809 0x829 // FLAG LAGO - PUÑO DRENAJE TM98
#define FLAG_NUEVA_810 0x82A // FLAG CUEVA UNION - SALMUERA TM97
#define FLAG_NUEVA_811 0x82B // FLAG TORRE QUEMADA - FUEGO FATUO MT72
#define FLAG_NUEVA_812 0x82C // FLAG CARBON - MT64 NITROCARGA
#define FLAG_NUEVA_813 0x82D // FLAG DUNSPARCE - MT VIENTO AFIN
#define FLAG_NUEVA_814 0x82E // FLAG CENTRAL - MT70 RAYO CARGA
#define FLAG_NUEVA_815 0x82F // FLAG ROCKET 7F - MT36 BOMBA LODO
#define FLAG_NUEVA_816 0x830 // TIN TOWER - TM93 FOCO RESPLANDOR
#define FLAG_NUEVA_817 0x831 // FARO OLIVO - VENENO X - MT57
#define FLAG_NUEVA_818 0x832 // FARO OLIVO - DIENTE MARINO 
#define FLAG_NUEVA_819 0x833 // RADIO LAVANDA 5 - MT63 ONDA TOXICA
#define FLAG_NUEVA_820 0x834 // RADIO LAVANDA 6 - MT79 ONDA TRUENO
#define FLAG_NUEVA_821 0x835 // SILPH S3 - MT51 ONDA CERTERA
#define FLAG_NUEVA_822 0x836 // ROCKET JOHTO - MT87 PUYA NOCIVA
#define FLAG_NUEVA_823 0x837 // BASE HOENN S2 - MT80 GIRO BOLA
#define FLAG_NUEVA_824 0x838 // CALVO SECUNDARIA RECREATIVOS
#define FLAG_NUEVA_825 0x839 // TWO ISLAND TORRE P1 - GARRA AFILADA (RAZOR CLAW)
#define FLAG_NUEVA_826 0x83A // TWO ISLAND TORRE P2 - RESTAURATODO
#define FLAG_NUEVA_827 0x83B // TWO ISLAND TORRE P3 - MAX REPEL
#define FLAG_NUEVA_828 0x83C // TWO ISLAND TORRE P4 - TM102 CUERNO CERTERO
#define FLAG_NUEVA_829 0x83D // SECUNDARIA SECUNDA - FRANK
#define FLAG_NUEVA_830 0x83E // NEO LAVANDA CEMENTERIO S1 - ROCKET REDENCION
#define FLAG_NUEVA_831 0x83F // NEO LAVANDA P10 - MAX REVIVIR - INVISIBLE
#define FLAG_NUEVA_832 0x840 // NEO LAVANDA P10 - MT111 PSICOONDA
#define FLAG_NUEVA_833 0x841 // NEO LAVANDA P9 - POWER HERB - INVISIBLE
#define FLAG_NUEVA_834 0x842 // NEO LAVANDA P9 - MANECTITA
#define FLAG_NUEVA_835 0x843 // MISION7 LAB4 - CAMERUPTITA 
#define FLAG_NUEVA_836 0x844 // NEO LAVANDA P8 - CARAMELORARO
#define FLAG_NUEVA_837 0x845 // NEO LAVANDA P8 - MAX ELIXIR
#define FLAG_NUEVA_838 0x846 // PRESIDENTE DEVON NEO LAVANDA P8
#define FLAG_NUEVA_839 0x847 // PETREL Y KOGA EN SUS RESPECTIVAS BASES GIMNASIOS
#define FLAG_NUEVA_840 0x848 // POLICIA 2 NEO LAVANDA
#define FLAG_NUEVA_841 0x849 // FINAL MISION MOTORISTAS
#define FLAG_NUEVA_842 0x84A // UNDERGROUND PATH - TM101 GOLPE VIL
#define FLAG_NUEVA_843 0x84B // UNDERGROUND PATH - CARAMELORARO
#define FLAG_NUEVA_844 0x84C // UNDERGROUND PATH - ELIXIR MAX
#define FLAG_NUEVA_845 0x84D // UNDERGROUND PATH - PPUP
#define FLAG_NUEVA_846 0x84E // UNDERGROUND PATH - ETHER
#define FLAG_NUEVA_847 0x84F // UNDERGROUND PATH - MAXPOTION
#define FLAG_NUEVA_848 0x850 // UNDERGROUND PATH - CURA TOTAL
#define FLAG_NUEVA_849 0x851 // UNDERGROUND PATH - REVIVIR
#define FLAG_NUEVA_850 0x852 // UNDERGROUND PATH - RESTAURATODO
#define FLAG_NUEVA_851 0x853 // UNDERGROUND PATH - PILA
#define FLAG_NUEVA_852 0x854 // UNDERGROUND PATH - TROZO ESTRELLA
#define FLAG_NUEVA_853 0x855 // UNDERGROUND PATH - TM104 ACOSO
#define FLAG_NUEVA_854 0x856 // CELADON CITY - ETHER
#define FLAG_NUEVA_855 0x857 // BALL LARVESTA
#define FLAG_NUEVA_856 0x858 // VIASSUR5 - MT110 ATAQUE AÉREO
#define FLAG_NUEVA_857 0x859 // ICEFALLCAVE_LAPRAS - MT103 VELO AURORA
#define FLAG_NUEVA_858 0x85A // ROCKET HIDEOUT JOHTO P1 - TM114 LANZA MUGRE
#define FLAG_NUEVA_859 0x85B // AZALEACARBONS1 - MAWILITA
#define FLAG_NUEVA_860 0x85C // CULTO LAVANDA S8 - DUSKNOIRITA
#define FLAG_NUEVA_861 0x85D // DRAGONITE BLOQUEO NORTE RUTA 50
#define FLAG_NUEVA_862 0x85E // HUEVO SPECTRIER CULTO S4
#define FLAG_NUEVA_863 0x85F // FLAG CHICA RUTA 51

#endif // GUARD_CONSTANTS_FLAGS_H
