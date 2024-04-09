#ifndef GUARD_TRAINERS_H
#define GUARD_TRAINERS_H

#include "constants/opponents.h"
#include "constants/battle_frontier_trainers.h"

// Special Trainer Ids.
//      0-299 are frontier trainers
#define TRAINER_RECORD_MIXING_FRIEND        FRONTIER_TRAINERS_COUNT
#define TRAINER_RECORD_MIXING_APPRENTICE    400
#define TRAINER_EREADER                     500
#define TRAINER_FRONTIER_BRAIN              1022
#define TRAINER_PLAYER                      1023
#define TRAINER_SECRET_BASE                 1024
#define TRAINER_LINK_OPPONENT               2048
#define TRAINER_UNION_ROOM                  3072
#define TRAINER_STEVEN_PARTNER              3075
#define TRAINER_CUSTOM_PARTNER              3076

#define TRAINER_PIC_HIKER                  0
#define TRAINER_PIC_AQUA_GRUNT_M           1
#define TRAINER_PIC_POKEMON_BREEDER_F      2
#define TRAINER_PIC_COOLTRAINER_M          3
#define TRAINER_PIC_BIRD_KEEPER            4
#define TRAINER_PIC_COLLECTOR              5
#define TRAINER_PIC_AQUA_GRUNT_F           6
#define TRAINER_PIC_SWIMMER_M              7
#define TRAINER_PIC_MAGMA_GRUNT_M          8
#define TRAINER_PIC_EXPERT_M               9
#define TRAINER_PIC_AQUA_ADMIN_M          10
#define TRAINER_PIC_BLACK_BELT            11
#define TRAINER_PIC_AQUA_ADMIN_F          12
#define TRAINER_PIC_AQUA_LEADER_ARCHIE    13
#define TRAINER_PIC_HEX_MANIAC            14
#define TRAINER_PIC_AROMA_LADY            15
#define TRAINER_PIC_RUIN_MANIAC           16
#define TRAINER_PIC_INTERVIEWER           17
#define TRAINER_PIC_TUBER_F               18
#define TRAINER_PIC_TUBER_M               19
#define TRAINER_PIC_COOLTRAINER_F         20
#define TRAINER_PIC_LADY                  21
#define TRAINER_PIC_BEAUTY                22
#define TRAINER_PIC_RICH_BOY              23
#define TRAINER_PIC_EXPERT_F              24
#define TRAINER_PIC_POKEMANIAC            25
#define TRAINER_PIC_MAGMA_GRUNT_F         26
#define TRAINER_PIC_GUITARIST             27
#define TRAINER_PIC_KINDLER               28
#define TRAINER_PIC_CAMPER                29
#define TRAINER_PIC_PICNICKER             30
#define TRAINER_PIC_BUG_MANIAC            31
#define TRAINER_PIC_POKEMON_BREEDER_M     32
#define TRAINER_PIC_PSYCHIC_M             33
#define TRAINER_PIC_PSYCHIC_F             34
#define TRAINER_PIC_GENTLEMAN             35
#define TRAINER_PIC_ELITE_FOUR_SIDNEY     36
#define TRAINER_PIC_ELITE_FOUR_PHOEBE     37
#define TRAINER_PIC_ELITE_FOUR_GLACIA     38
#define TRAINER_PIC_ELITE_FOUR_DRAKE      39
#define TRAINER_PIC_LEADER_ROXANNE        40
#define TRAINER_PIC_LEADER_BRAWLY         41
#define TRAINER_PIC_LEADER_WATTSON        42
#define TRAINER_PIC_LEADER_FLANNERY       43
#define TRAINER_PIC_LEADER_NORMAN         44
#define TRAINER_PIC_LEADER_WINONA         45
#define TRAINER_PIC_LEADER_TATE_AND_LIZA  46
#define TRAINER_PIC_LEADER_JUAN           47
#define TRAINER_PIC_SCHOOL_KID_M          48
#define TRAINER_PIC_SCHOOL_KID_F          49
#define TRAINER_PIC_SR_AND_JR             50
#define TRAINER_PIC_POKEFAN_M             51
#define TRAINER_PIC_POKEFAN_F             52
#define TRAINER_PIC_YOUNGSTER             53
#define TRAINER_PIC_CHAMPION_WALLACE      54
#define TRAINER_PIC_FISHERMAN             55
#define TRAINER_PIC_CYCLING_TRIATHLETE_M  56
#define TRAINER_PIC_CYCLING_TRIATHLETE_F  57
#define TRAINER_PIC_RUNNING_TRIATHLETE_M  58
#define TRAINER_PIC_RUNNING_TRIATHLETE_F  59
#define TRAINER_PIC_SWIMMING_TRIATHLETE_M 60
#define TRAINER_PIC_SWIMMING_TRIATHLETE_F 61
#define TRAINER_PIC_DRAGON_TAMER          62
#define TRAINER_PIC_NINJA_BOY             63
#define TRAINER_PIC_BATTLE_GIRL           64
#define TRAINER_PIC_PARASOL_LADY          65
#define TRAINER_PIC_SWIMMER_F             66
#define TRAINER_PIC_TWINS                 67
#define TRAINER_PIC_SAILOR                68
#define TRAINER_PIC_MAGMA_ADMIN           69
#define TRAINER_PIC_WALLY                 70
#define TRAINER_PIC_BRENDAN               71
#define TRAINER_PIC_MAY                   72
#define TRAINER_PIC_BUG_CATCHER           73
#define TRAINER_PIC_POKEMON_RANGER_M      74
#define TRAINER_PIC_POKEMON_RANGER_F      75
#define TRAINER_PIC_MAGMA_LEADER_MAXIE    76
#define TRAINER_PIC_LASS                  77
#define TRAINER_PIC_YOUNG_COUPLE          78
#define TRAINER_PIC_OLD_COUPLE            79
#define TRAINER_PIC_SIS_AND_BRO           80
#define TRAINER_PIC_STEVEN                81
#define TRAINER_PIC_SALON_MAIDEN_ANABEL   82
#define TRAINER_PIC_DOME_ACE_TUCKER       83
#define TRAINER_PIC_PALACE_MAVEN_SPENSER  84
#define TRAINER_PIC_ARENA_TYCOON_GRETA    85
#define TRAINER_PIC_FACTORY_HEAD_NOLAND   86
#define TRAINER_PIC_PIKE_QUEEN_LUCY       87
#define TRAINER_PIC_PYRAMID_KING_BRANDON  88
#define TRAINER_PIC_RED                   89
#define TRAINER_PIC_LEAF                  90
#define TRAINER_PIC_RS_BRENDAN            91
#define TRAINER_PIC_RS_MAY                92
#define TRAINER_PIC_BIKER                 93
#define TRAINER_PIC_BURGLAR               94
#define TRAINER_PIC_CHAMPION_RIVAL        95
#define TRAINER_PIC_CHANNELER             96
#define TRAINER_PIC_COOL_COUPLE           97
#define TRAINER_PIC_CRUSH_GIRL            98
#define TRAINER_PIC_CRUSH_KIN             99
#define TRAINER_PIC_CUE_BALL              100
#define TRAINER_PIC_ELITE_FOUR_AGATHA     101
#define TRAINER_PIC_ELITE_FOUR_BRUNO      102
#define TRAINER_PIC_ELITE_FOUR_LANCE      103
#define TRAINER_PIC_ELITE_FOUR_LORELEI    104
#define TRAINER_PIC_ENGINEER              105
#define TRAINER_PIC_FR_AROMA_LADY         106
#define TRAINER_PIC_FR_BEAUTY             107
#define TRAINER_PIC_FR_BIRD_KEEPER        108
#define TRAINER_PIC_FR_BLACK_BELT         109
#define TRAINER_PIC_FR_BUG_CATCHER        110
#define TRAINER_PIC_FR_CAMPER             111
#define TRAINER_PIC_FR_COOL_TRAINER_F     112
#define TRAINER_PIC_FR_COOL_TRAINER_M     113
#define TRAINER_PIC_FR_FISHERMAN          114
#define TRAINER_PIC_FR_GENTLEMAN          115
#define TRAINER_PIC_FR_HIKER              116
#define TRAINER_PIC_FR_LADY               117
#define TRAINER_PIC_FR_LASS               118
#define TRAINER_PIC_FR_PICNICKER         119
#define TRAINER_PIC_FR_POKEMANIAC         120
#define TRAINER_PIC_FR_POKEMON_BREEDER    121
#define TRAINER_PIC_FR_POKEMON_RANGER_F   122
#define TRAINER_PIC_FR_POKEMON_RANGER_M   123
#define TRAINER_PIC_FR_PSYCHIC_F          124
#define TRAINER_PIC_FR_PSYCHIC_M          125
#define TRAINER_PIC_FR_SAILOR             126
#define TRAINER_PIC_FR_SIS_AND_BRO        127
#define TRAINER_PIC_FR_SWIMMER_F          128
#define TRAINER_PIC_FR_SWIMMER_M          129
#define TRAINER_PIC_FR_TUBER_F            130
#define TRAINER_PIC_FR_TWINS              131
#define TRAINER_PIC_FR_YOUNG_COUPLE       132
#define TRAINER_PIC_FR_YOUNGSTER          133
#define TRAINER_PIC_GAMER                 134
#define TRAINER_PIC_JUGGLER               135
#define TRAINER_PIC_LEADER_BLAINE         136
#define TRAINER_PIC_LEADER_BROCK          137
#define TRAINER_PIC_LEADER_ERIKA          138
#define TRAINER_PIC_LEADER_GIOVANNI       139
#define TRAINER_PIC_LEADER_KOGA           140
#define TRAINER_PIC_LEADER_LT_SURGE       141
#define TRAINER_PIC_LEADER_MISTY          142
#define TRAINER_PIC_LEADER_SABRINA        143
#define TRAINER_PIC_PAINTER               144
#define TRAINER_PIC_PROFESSOR_OAK         145
#define TRAINER_PIC_RIVAL_EARLY           146
#define TRAINER_PIC_RIVAL_LATE            147
#define TRAINER_PIC_ROCKER                148
#define TRAINER_PIC_ROCKET_GRUNT_F        149
#define TRAINER_PIC_ROCKET_GRUNT_M        150
#define TRAINER_PIC_SCIENTIST             151
#define TRAINER_PIC_SUPER_NERD            152
#define TRAINER_PIC_TAMER                 153
#define TRAINER_PIC_FR_RUIN_MANIAC        154
#define TRAINER_PIC_ARTICUNO              155
#define TRAINER_PIC_BILL                  156
#define TRAINER_PIC_C_MIGUEL              157
#define TRAINER_PIC_CAPTAIN_EDWARD        158
#define TRAINER_PIC_CULTIST_LEADER_JONES  159
#define TRAINER_PIC_CYRUS                 160
#define TRAINER_PIC_DALIA                 161
#define TRAINER_PIC_DEBORA                162
#define TRAINER_PIC_ELITE_FOUR_KAREN      163
#define TRAINER_PIC_ELITE_FOUR_MENTO      164
#define TRAINER_PIC_FIREBREATHER          165
#define TRAINER_PIC_GHECHIS               166
#define TRAINER_PIC_GHOST                 167
#define TRAINER_PIC_GOLD_UNOWN            168
#define TRAINER_PIC_HGSS_BIRD_KEEPER      169
#define TRAINER_PIC_HGSS_POKEMANIAC       170
#define TRAINER_PIC_HGSS_OFFICER          171
#define TRAINER_PIC_JAREN                 172
#define TRAINER_PIC_KIMONO_GIRL           173
#define TRAINER_PIC_LEADER_CESAR          174
#define TRAINER_PIC_LEADER_CROM           175
#define TRAINER_PIC_LEADER_FREDO          176
#define TRAINER_PIC_LEADER_MORTY          177
#define TRAINER_PIC_LEADER_PEGASO         178
#define TRAINER_PIC_LEADER_PEGASO_2       179
#define TRAINER_PIC_LEADER_ANIBAL         180
#define TRAINER_PIC_LUGIA                 181
#define TRAINER_PIC_MAESTRO_ANCIANO       182
#define TRAINER_PIC_MAESTRO_BELLSPROUT    183
#define TRAINER_PIC_MIRTO                 184
#define TRAINER_PIC_MR_FUJI               185
#define TRAINER_PIC_PENSADOR              186
#define TRAINER_PIC_PETREL                187
#define TRAINER_PIC_PROFESSOR_ELM         188
#define TRAINER_PIC_PROTON                189
#define TRAINER_PIC_REY_UNOWN             190
#define TRAINER_PIC_ROCKET_ADMIN_ANDRA    191
#define TRAINER_PIC_ROCKET_ADMIN_ATLAS    192
#define TRAINER_PIC_ROCKET_ADMIN_PLAYER   193
#define TRAINER_PIC_ROCKET_GRUNT_ANDRA    194
#define TRAINER_PIC_ROCKET_GRUNT_PLAYER   195
#define TRAINER_PIC_VALERIA               196
#define TRAINER_PIC_ZAPDOS                197
#define TRAINER_PIC_ZEUS                  198
#define TRAINER_PIC_ROCKET_GRUNT_ANDRA2	  199
#define TRAINER_PIC_ANDRA_ALTO_RANGO	  200
#define TRAINER_PIC_ANDRA_EJECUTIVA	      201
#define TRAINER_PIC_ANDRA_ADMIN	  		  202
#define TRAINER_PIC_ANDRA_ADMIN_JEFE      203
#define TRAINER_PIC_ALTO_RANGO	          204
#define TRAINER_PIC_EJECUTIVO	          205
#define TRAINER_PIC_ADMIN	  		  	  206
#define TRAINER_PIC_ADMIN_JEFE		      207
#define TRAINER_PIC_HYPNO				  208
#define TRAINER_PIC_FAKEMON1			  209
#define TRAINER_PIC_FAKEMON2			  210
#define TRAINER_PIC_FAKEMON3			  211
#define TRAINER_PIC_FAKEMON4			  212
#define TRAINER_PIC_FAKEMON5			  213
#define TRAINER_PIC_FAKEMON6			  214
#define TRAINER_PIC_FAKEMON7			  215
#define TRAINER_PIC_CULTISTA2			  216
#define TRAINER_PIC_MAESTRO_PAGODA        217
#define TRAINER_PIC_LIDERSETE             218
#define TRAINER_PIC_EUSINE				  219
#define TRAINER_PIC_ROCKET_GRUNT_ANDRA3   220
#define TRAINER_PIC_ROCKET_GRUNT_M_ALTORANGO 221
#define TRAINER_PIC_ROCKET_GRUNT_M_EJECUTIVO 222
#define TRAINER_PIC_FRANK_EJECUTIVO 223
#define TRAINER_PIC_FRANK_ADMIN 224
#define TRAINER_PIC_VIEJO_JONES 225
#define TRAINER_PIC_DIOS_JONES 226
#define TRAINER_PIC_PRESIDENTE 227
#define TRAINER_PIC_MIGUEL 228
#define TRAINER_PIC_DEVON1 229
#define TRAINER_PIC_DEVON2 230
#define TRAINER_PIC_DEVON3 231
#define TRAINER_PIC_DEVON4 232

// The player back pics are assumed to alternate according to the gender values (MALE/FEMALE)
#define TRAINER_BACK_PIC_BRENDAN                0
#define TRAINER_BACK_PIC_MAY                    1
#define TRAINER_BACK_PIC_RED                    2
#define TRAINER_BACK_PIC_LEAF                   3
#define TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN  4
#define TRAINER_BACK_PIC_RUBY_SAPPHIRE_MAY      5
#define TRAINER_BACK_PIC_WALLY                  6
#define TRAINER_BACK_PIC_STEVEN                 7

#define FACILITY_CLASS_HIKER                 0x0
#define FACILITY_CLASS_AQUA_GRUNT_M          0x1
#define FACILITY_CLASS_PKMN_BREEDER_F        0x2
#define FACILITY_CLASS_COOLTRAINER_M         0x3
#define FACILITY_CLASS_BIRD_KEEPER           0x4
#define FACILITY_CLASS_COLLECTOR             0x5
#define FACILITY_CLASS_AQUA_GRUNT_F          0x6
#define FACILITY_CLASS_SWIMMER_M             0x7
#define FACILITY_CLASS_MAGMA_GRUNT_M         0x8
#define FACILITY_CLASS_EXPERT_M              0x9
#define FACILITY_CLASS_BLACK_BELT            0xa
#define FACILITY_CLASS_AQUA_LEADER_ARCHIE    0xb
#define FACILITY_CLASS_HEX_MANIAC            0xc
#define FACILITY_CLASS_AROMA_LADY            0xd
#define FACILITY_CLASS_RUIN_MANIAC           0xe
#define FACILITY_CLASS_INTERVIEWER           0xf
#define FACILITY_CLASS_TUBER_F               0x10
#define FACILITY_CLASS_TUBER_M               0x11
#define FACILITY_CLASS_COOLTRAINER_F         0x12
#define FACILITY_CLASS_LADY                  0x13
#define FACILITY_CLASS_BEAUTY                0x14
#define FACILITY_CLASS_RICH_BOY              0x15
#define FACILITY_CLASS_EXPERT_F              0x16
#define FACILITY_CLASS_POKEMANIAC            0x17
#define FACILITY_CLASS_MAGMA_GRUNT_F         0x18
#define FACILITY_CLASS_GUITARIST             0x19
#define FACILITY_CLASS_KINDLER               0x1a
#define FACILITY_CLASS_CAMPER                0x1b
#define FACILITY_CLASS_PICNICKER             0x1c
#define FACILITY_CLASS_BUG_MANIAC            0x1d
#define FACILITY_CLASS_PSYCHIC_M             0x1e
#define FACILITY_CLASS_PSYCHIC_F             0x1f
#define FACILITY_CLASS_GENTLEMAN             0x20
#define FACILITY_CLASS_ELITE_FOUR_SIDNEY     0x21
#define FACILITY_CLASS_ELITE_FOUR_PHOEBE     0x22
#define FACILITY_CLASS_LEADER_ROXANNE        0x23
#define FACILITY_CLASS_LEADER_BRAWLY         0x24
#define FACILITY_CLASS_LEADER_TATE_AND_LIZA  0x25
#define FACILITY_CLASS_SCHOOL_KID_M          0x26
#define FACILITY_CLASS_SCHOOL_KID_F          0x27
#define FACILITY_CLASS_SR_AND_JR             0x28
#define FACILITY_CLASS_POKEFAN_M             0x29
#define FACILITY_CLASS_POKEFAN_F             0x2a
#define FACILITY_CLASS_YOUNGSTER             0x2b
#define FACILITY_CLASS_CHAMPION_WALLACE      0x2c
#define FACILITY_CLASS_FISHERMAN             0x2d
#define FACILITY_CLASS_CYCLING_TRIATHLETE_M  0x2e
#define FACILITY_CLASS_CYCLING_TRIATHLETE_F  0x2f
#define FACILITY_CLASS_RUNNING_TRIATHLETE_M  0x30
#define FACILITY_CLASS_RUNNING_TRIATHLETE_F  0x31
#define FACILITY_CLASS_SWIMMING_TRIATHLETE_M 0x32
#define FACILITY_CLASS_SWIMMING_TRIATHLETE_F 0x33
#define FACILITY_CLASS_DRAGON_TAMER          0x34
#define FACILITY_CLASS_NINJA_BOY             0x35
#define FACILITY_CLASS_BATTLE_GIRL           0x36
#define FACILITY_CLASS_PARASOL_LADY          0x37
#define FACILITY_CLASS_SWIMMER_F             0x38
#define FACILITY_CLASS_TWINS                 0x39
#define FACILITY_CLASS_SAILOR                0x3a
#define FACILITY_CLASS_WALLY                 0x3b
#define FACILITY_CLASS_BRENDAN               0x3c
#define FACILITY_CLASS_BRENDAN_2             0x3d
#define FACILITY_CLASS_BRENDAN_3             0x3e
#define FACILITY_CLASS_MAY                   0x3f
#define FACILITY_CLASS_MAY_2                 0x40
#define FACILITY_CLASS_MAY_3                 0x41
#define FACILITY_CLASS_PKMN_BREEDER_M        0x42
#define FACILITY_CLASS_BUG_CATCHER           0x43
#define FACILITY_CLASS_PKMN_RANGER_M         0x44
#define FACILITY_CLASS_PKMN_RANGER_F         0x45
#define FACILITY_CLASS_MAGMA_LEADER_MAXIE    0x46
#define FACILITY_CLASS_LASS                  0x47
#define FACILITY_CLASS_YOUNG_COUPLE          0x48
#define FACILITY_CLASS_OLD_COUPLE            0x49
#define FACILITY_CLASS_SIS_AND_BRO           0x4a
#define FACILITY_CLASS_STEVEN                0x4b
#define FACILITY_CLASS_SALON_MAIDEN_ANABEL   0x4c
#define FACILITY_CLASS_DOME_ACE_TUCKER       0x4d
#define FACILITY_CLASS_RED                   0x4e
#define FACILITY_CLASS_LEAF                  0x4f
#define FACILITY_CLASS_RS_BRENDAN            0x50
#define FACILITY_CLASS_RS_MAY                0x51
#define FACILITY_CLASS_PLAYER_RECLUTA        0x52
#define FACILITY_CLASS_PLAYER_ALTO_RANGO     0x53
#define FACILITY_CLASS_PLAYER_EJECUTIVO      0x54
#define FACILITY_CLASS_PLAYER_ADMIN          0x55
#define FACILITY_CLASS_PLAYER_ADMIN_JEFE     0x56
#define FACILITY_CLASS_PLAYER_ADMIN_JEFE2    0x57

#define FACILITY_CLASSES_COUNT               0x58

#define RS_FACILITY_CLASS_AQUA_LEADER_ARCHIE    0x0
#define RS_FACILITY_CLASS_AQUA_GRUNT_M          0x1
#define RS_FACILITY_CLASS_AQUA_GRUNT_F          0x2
#define RS_FACILITY_CLASS_AROMA_LADY            0x3
#define RS_FACILITY_CLASS_RUIN_MANIAC           0x4
#define RS_FACILITY_CLASS_INTERVIEWER           0x5
#define RS_FACILITY_CLASS_TUBER_F               0x6
#define RS_FACILITY_CLASS_TUBER_M               0x7
#define RS_FACILITY_CLASS_COOLTRAINER_M         0x8
#define RS_FACILITY_CLASS_COOLTRAINER_F         0x9
#define RS_FACILITY_CLASS_HEX_MANIAC            0xA
#define RS_FACILITY_CLASS_LADY                  0xB
#define RS_FACILITY_CLASS_BEAUTY                0xC
#define RS_FACILITY_CLASS_RICH_BOY              0xD
#define RS_FACILITY_CLASS_POKEMANIAC            0xE
#define RS_FACILITY_CLASS_SWIMMER_M             0xF
#define RS_FACILITY_CLASS_BLACK_BELT            0x10
#define RS_FACILITY_CLASS_GUITARIST             0x11
#define RS_FACILITY_CLASS_KINDLER               0x12
#define RS_FACILITY_CLASS_CAMPER                0x13
#define RS_FACILITY_CLASS_BUG_MANIAC            0x14
#define RS_FACILITY_CLASS_PSYCHIC_M             0x15
#define RS_FACILITY_CLASS_PSYCHIC_F             0x16
#define RS_FACILITY_CLASS_GENTLEMAN             0x17
#define RS_FACILITY_CLASS_ELITE_FOUR_M          0x18
#define RS_FACILITY_CLASS_ELITE_FOUR_F          0x19
#define RS_FACILITY_CLASS_LEADER_F              0x1A
#define RS_FACILITY_CLASS_LEADER_M              0x1B
#define RS_FACILITY_CLASS_LEADER_MF             0x1C
#define RS_FACILITY_CLASS_SCHOOL_KID_M          0x1D
#define RS_FACILITY_CLASS_SCHOOL_KID_F          0x1E
#define RS_FACILITY_CLASS_SR_AND_JR             0x1F
#define RS_FACILITY_CLASS_POKEFAN_M             0x20
#define RS_FACILITY_CLASS_POKEFAN_F             0x21
#define RS_FACILITY_CLASS_EXPERT_M              0x22
#define RS_FACILITY_CLASS_EXPERT_F              0x23
#define RS_FACILITY_CLASS_YOUNGSTER             0x24
#define RS_FACILITY_CLASS_CHAMPION              0x25
#define RS_FACILITY_CLASS_FISHERMAN             0x26
#define RS_FACILITY_CLASS_CYCLING_TRIATHLETE_M  0x27
#define RS_FACILITY_CLASS_CYCLING_TRIATHLETE_F  0x28
#define RS_FACILITY_CLASS_RUNNING_TRIATHLETE_M  0x29
#define RS_FACILITY_CLASS_RUNNING_TRIATHLETE_F  0x2A
#define RS_FACILITY_CLASS_SWIMMING_TRIATHLETE_M 0x2B
#define RS_FACILITY_CLASS_SWIMMING_TRIATHLETE_F 0x2C
#define RS_FACILITY_CLASS_DRAGON_TAMER          0x2D
#define RS_FACILITY_CLASS_BIRD_KEEPER           0x2E
#define RS_FACILITY_CLASS_NINJA_BOY             0x2F
#define RS_FACILITY_CLASS_BATTLE_GIRL           0x30
#define RS_FACILITY_CLASS_PARASOL_LADY          0x31
#define RS_FACILITY_CLASS_SWIMMER_F             0x32
#define RS_FACILITY_CLASS_PICNICKER             0x33
#define RS_FACILITY_CLASS_TWINS                 0x34
#define RS_FACILITY_CLASS_SAILOR                0x35
#define RS_FACILITY_CLASS_BOARDER_1             0x36
#define RS_FACILITY_CLASS_BOARDER_2             0x37
#define RS_FACILITY_CLASS_COLLECTOR             0x38
#define RS_FACILITY_CLASS_WALLY                 0x39
#define RS_FACILITY_CLASS_BRENDAN_1             0x3A
#define RS_FACILITY_CLASS_BRENDAN_2             0x3B
#define RS_FACILITY_CLASS_BRENDAN_3             0x3C
#define RS_FACILITY_CLASS_MAY_1                 0x3D
#define RS_FACILITY_CLASS_MAY_2                 0x3E
#define RS_FACILITY_CLASS_MAY_3                 0x3F
#define RS_FACILITY_CLASS_PKMN_BREEDER_M        0x40
#define RS_FACILITY_CLASS_PKMN_BREEDER_F        0x41
#define RS_FACILITY_CLASS_PKMN_RANGER_M         0x42
#define RS_FACILITY_CLASS_PKMN_RANGER_F         0x43
#define RS_FACILITY_CLASS_MAGMA_LEADER          0x44
#define RS_FACILITY_CLASS_MAGMA_GRUNT_M         0x45
#define RS_FACILITY_CLASS_MAGMA_GRUNT_F         0x46
#define RS_FACILITY_CLASS_LASS                  0x47
#define RS_FACILITY_CLASS_BUG_CATCHER           0x48
#define RS_FACILITY_CLASS_HIKER                 0x49
#define RS_FACILITY_CLASS_YOUNG_COUPLE          0x4A
#define RS_FACILITY_CLASS_OLD_COUPLE            0x4B
#define RS_FACILITY_CLASS_SIS_AND_BRO           0x4C

#define RS_FACILITY_CLASSES_COUNT               0x4D

#define TRAINER_CLASS_PKMN_TRAINER_1 0x0  // Unused
#define TRAINER_CLASS_PKMN_TRAINER_2 0x1  // Unused
#define TRAINER_CLASS_HIKER          0x2
#define TRAINER_CLASS_TEAM_AQUA      0x3
#define TRAINER_CLASS_PKMN_BREEDER   0x4
#define TRAINER_CLASS_COOLTRAINER    0x5
#define TRAINER_CLASS_BIRD_KEEPER    0x6
#define TRAINER_CLASS_COLLECTOR      0x7
#define TRAINER_CLASS_SWIMMER_M      0x8
#define TRAINER_CLASS_TEAM_MAGMA     0x9
#define TRAINER_CLASS_EXPERT         0xa
#define TRAINER_CLASS_AQUA_ADMIN     0xb
#define TRAINER_CLASS_BLACK_BELT     0xc
#define TRAINER_CLASS_AQUA_LEADER    0xd
#define TRAINER_CLASS_HEX_MANIAC     0xe
#define TRAINER_CLASS_AROMA_LADY     0xf
#define TRAINER_CLASS_RUIN_MANIAC    0x10
#define TRAINER_CLASS_INTERVIEWER    0x11
#define TRAINER_CLASS_TUBER_F        0x12
#define TRAINER_CLASS_TUBER_M        0x13
#define TRAINER_CLASS_LADY           0x14
#define TRAINER_CLASS_BEAUTY         0x15
#define TRAINER_CLASS_RICH_BOY       0x16
#define TRAINER_CLASS_POKEMANIAC     0x17
#define TRAINER_CLASS_GUITARIST      0x18
#define TRAINER_CLASS_KINDLER        0x19
#define TRAINER_CLASS_CAMPER         0x1a
#define TRAINER_CLASS_PICNICKER      0x1b
#define TRAINER_CLASS_BUG_MANIAC     0x1c
#define TRAINER_CLASS_PSYCHIC        0x1d
#define TRAINER_CLASS_GENTLEMAN      0x1e
#define TRAINER_CLASS_ELITE_FOUR     0x1f
#define TRAINER_CLASS_LEADER         0x20
#define TRAINER_CLASS_SCHOOL_KID     0x21
#define TRAINER_CLASS_SR_AND_JR      0x22
#define TRAINER_CLASS_WINSTRATE      0x23
#define TRAINER_CLASS_POKEFAN        0x24
#define TRAINER_CLASS_YOUNGSTER      0x25
#define TRAINER_CLASS_CHAMPION       0x26
#define TRAINER_CLASS_FISHERMAN      0x27
#define TRAINER_CLASS_TRIATHLETE     0x28
#define TRAINER_CLASS_DRAGON_TAMER   0x29
#define TRAINER_CLASS_NINJA_BOY      0x2a
#define TRAINER_CLASS_BATTLE_GIRL    0x2b
#define TRAINER_CLASS_PARASOL_LADY   0x2c
#define TRAINER_CLASS_SWIMMER_F      0x2d
#define TRAINER_CLASS_TWINS          0x2e
#define TRAINER_CLASS_SAILOR         0x2f
#define TRAINER_CLASS_COOLTRAINER_2  0x30 // Used for only one trainer.
#define TRAINER_CLASS_MAGMA_ADMIN    0x31
#define TRAINER_CLASS_RIVAL          0x32
#define TRAINER_CLASS_BUG_CATCHER    0x33
#define TRAINER_CLASS_PKMN_RANGER    0x34
#define TRAINER_CLASS_MAGMA_LEADER   0x35
#define TRAINER_CLASS_LASS           0x36
#define TRAINER_CLASS_YOUNG_COUPLE   0x37
#define TRAINER_CLASS_OLD_COUPLE     0x38
#define TRAINER_CLASS_SIS_AND_BRO    0x39
#define TRAINER_CLASS_SALON_MAIDEN   0x3a
#define TRAINER_CLASS_DOME_ACE       0x3b
#define TRAINER_CLASS_PALACE_MAVEN   0x3c
#define TRAINER_CLASS_ARENA_TYCOON   0x3d
#define TRAINER_CLASS_FACTORY_HEAD   0x3e
#define TRAINER_CLASS_PIKE_QUEEN     0x3f
#define TRAINER_CLASS_PYRAMID_KING   0x40
#define TRAINER_CLASS_RS_PROTAG      0x41
#define TRAINER_CLASS_EMPERADOR      0x42
#define TRAINER_CLASS_ALTOMANDO      0x43
#define TRAINER_CLASS_CULTISTA       0x44
#define TRAINER_CLASS_PRESIDENTE     0x45
#define TRAINER_CLASS_GIOVANNI       0x46
#define TRAINER_CLASS_ANDRA          0x47
#define TRAINER_CLASS_MIGUEL         0x48
#define TRAINER_CLASS_ATLAS          0x49
#define TRAINER_CLASS_OAK            0x4a
#define TRAINER_CLASS_KANTO          0x4b
#define TRAINER_CLASS_JOHTO          0x4c
#define TRAINER_CLASS_SEVII          0x4d
#define TRAINER_CLASS_PROTON         0x4e
#define TRAINER_CLASS_RECLUTA        0x4f
#define TRAINER_CLASS_ADMINISTRADOR  0x50
#define TRAINER_CLASS_ZEUS           0x51
#define TRAINER_CLASS_JONES          0x52
#define TRAINER_CLASS_DIOS           0x53
#define TRAINER_CLASS_RIVALES        0x54
#define TRAINER_CLASS_ESENCIA        0x55
#define TRAINER_CLASS_AVES           0x56
#define TRAINER_CLASS_CAPITAN        0x57
#define TRAINER_CLASS_EXCAMPEON      0x58
#define TRAINER_CLASS_CAMPEON        0x59
#define TRAINER_CLASS_LIDER          0x5A
#define TRAINER_CLASS_SINGULAR       0x5B
#define TRAINER_CLASS_BILL           0x5C
#define TRAINER_CLASS_ANCIENT        0x5D
#define TRAINER_CLASS_POLICIA        0x5E
#define TRAINER_CLASS_DOMADOR        0x5F
#define TRAINER_CLASS_PESCADOR       0x60
#define TRAINER_CLASS_GUAY           0x61
#define TRAINER_CLASS_FUJI           0x62
#define TRAINER_CLASS_PAREJAGUAY     0x63
#define TRAINER_CLASS_CIENTIFICO     0x64
#define TRAINER_CLASS_TRABAJADOR     0x65
#define TRAINER_CLASS_ORNITOLOGA     0x66
#define TRAINER_CLASS_EXORCISTA      0x67
#define TRAINER_CLASS_POKECOLECTOR   0x68
#define TRAINER_CLASS_EXCULTISTA     0x69
#define TRAINER_CLASS_JOVEN          0x6A
#define TRAINER_CLASS_CAZABICHOS     0x6B
#define TRAINER_CLASS_CHICA          0x6C
#define TRAINER_CLASS_NINJA          0x6D
#define TRAINER_CLASS_MARINERO       0x6E
#define TRAINER_CLASS_CAMPISTA       0x6F
#define TRAINER_CLASS_DOMINGUERA     0x70
#define TRAINER_CLASS_SUPERNECIO     0x71
#define TRAINER_CLASS_MOTORISTA      0x72
#define TRAINER_CLASS_LADRONJOHTO    0x73
#define TRAINER_CLASS_LADRON         0x74
#define TRAINER_CLASS_SABIO          0x75
#define TRAINER_CLASS_INGENIERO      0x76
#define TRAINER_CLASS_NADADOR        0x77
#define TRAINER_CLASS_CALVO          0x78
#define TRAINER_CLASS_GUAYJOHTO      0x79
#define TRAINER_CLASS_JUGADOR        0x7A
#define TRAINER_CLASS_BELLA          0x7B
#define TRAINER_CLASS_NADADORA       0x7C
#define TRAINER_CLASS_MEDIUM         0x7D
#define TRAINER_CLASS_ROCKERO        0x7E
#define TRAINER_CLASS_JUGLAR         0x7F
#define TRAINER_CLASS_ORNITOLOGO     0x80
#define TRAINER_CLASS_KARATEKAJOHTO  0x81
#define TRAINER_CLASS_MONTANEROJOHTO 0x82
#define TRAINER_CLASS_POKEABU        0x83
#define TRAINER_CLASS_JOVENJOHTO     0x84
#define TRAINER_CLASS_DOMADORJOHTO   0x85
#define TRAINER_CLASS_POKEMANIACOJOHTO  0x86
#define TRAINER_CLASS_PESCADORJOHTO     0x87
#define TRAINER_CLASS_ORNITOLOGOJOHTO   0x88
#define TRAINER_CLASS_DOMINGUERAJOHTO   0x89
#define TRAINER_CLASS_GEMELAS           0x8A
#define TRAINER_CLASS_PAREJAJOVEN       0x8B
#define TRAINER_CLASS_DUOFUERTE         0x8C
#define TRAINER_CLASS_HERMANOS          0x8D
#define TRAINER_CLASS_RUINAMANIACO      0x8E
#define TRAINER_CLASS_CHICAFUERTE       0x8F
#define TRAINER_CLASS_PLAYERA           0x90
#define TRAINER_CLASS_CRIAPOKEMON       0x91
#define TRAINER_CLASS_POKEGUARDA        0x92
#define TRAINER_CLASS_SRAAROMA          0x93
#define TRAINER_CLASS_DAMISELA          0x94
#define TRAINER_CLASS_PINTORA           0x95
#define TRAINER_CLASS_POKEGUARDAJOHTO   0x96
#define TRAINER_CLASS_MALABARISTA       0x97
#define TRAINER_CLASS_JUGONJOHTO        0x98
#define TRAINER_CLASS_CAZABICHOSJOHTO   0x99
#define TRAINER_CLASS_PENSADOR          0x9A
#define TRAINER_CLASS_MECANICOJOHTO     0x9B
#define TRAINER_CLASS_RUINAMANIACOJOHTO  0x9C
#define TRAINER_CLASS_NADADORJOHTO       0x9D
#define TRAINER_CLASS_RICO               0x9E
#define TRAINER_CLASS_CALVOJOHTO         0x9F
#define TRAINER_CLASS_SUPERNECIOJOHTO    0xA0
#define TRAINER_CLASS_CABALLEROJOHTO     0xA1
#define TRAINER_CLASS_BELLAJOHTO         0xA2
#define TRAINER_CLASS_CHICAJOHTO         0xA3
#define TRAINER_CLASS_MALABARISTAJOHTO   0xA4
#define TRAINER_CLASS_PAREJAJOHTO        0xA5
#define TRAINER_CLASS_CRIAPOKEMONJOHTO   0xA6
#define TRAINER_CLASS_MENTALISTAJOHTO    0xA7
#define TRAINER_CLASS_PINTORAJOHTO       0xA8
#define TRAINER_CLASS_MARINEROJOHTO      0xA9
#define TRAINER_CLASS_NADADORAJOHTO      0xAA
#define TRAINER_CLASS_CHICAFUERTEJOHTO   0xAB
#define TRAINER_CLASS_ELM                0xAC
#define TRAINER_CLASS_KIMONO             0xAD
#define TRAINER_CLASS_COMEFUEGO          0xAE
#define TRAINER_CLASS_FARERO             0xAF
#define TRAINER_CLASS_MONTANEROHOENN     0xB0
#define TRAINER_CLASS_CIENTIFICOHOENN    0xB1
#define TRAINER_CLASS_MAESTRO            0xB2
#define TRAINER_CLASS_MOTORISTAJOHTO     0xB3
#define TRAINER_CLASS_CIENTIFICOJOHTO    0xB4
#define TRAINER_CLASS_POLICIAHOENN       0xB5
#define TRAINER_CLASS_SALVAJE            0xB6
#define TRAINER_CLASS_EXPERIMENTO        0xB7
#define TRAINER_CLASS_MIRTO              0xB8
#define TRAINER_CLASS_MIGUEL_1           0xB9
#define TRAINER_CLASS_MIGUEL_2           0xBA
#define TRAINER_CLASS_DEVON_CIENTIFICO   0xBB
#define TRAINER_CLASS_EUSINE             0xBC
#define TRAINER_CLASS_MAESTRO_DUN        0xBD
#define TRAINER_CLASS_ADMINDEVON         0xBE
#define TRAINER_CLASS_MAESTRO_TORRE      0xBF
#define TRAINER_CLASS_COLEGIAL           0xC0
#define TRAINER_CLASS_MAESTRA            0xC1
#define TRAINER_CLASS_POKEFAN_2          0xC2
#define TRAINER_CLASS_POLICIA_DEVON      0xC3
#define TRAINER_CLASS_ELECTRICISTA_HOENN 0xC4

#define TRAINER_ENCOUNTER_MUSIC_MALE         0 // standard male encounter music
#define TRAINER_ENCOUNTER_MUSIC_FEMALE       1 // standard female encounter music - sr aroma, dama parasol
#define TRAINER_ENCOUNTER_MUSIC_GIRL         2 // used for male Tubers and Young Couples too - playera, niñas pequeñas, campistas
#define TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS   3 // necio hoenn, posible cientifico hoenn-devon
#define TRAINER_ENCOUNTER_MUSIC_INTENSE      4 // karateka, guitarrista hoenn
#define TRAINER_ENCOUNTER_MUSIC_COOL         5 // guays hoenn y johto, pokeguardas johto
#define TRAINER_ENCOUNTER_MUSIC_AQUA         6
#define TRAINER_ENCOUNTER_MUSIC_MAGMA        7
#define TRAINER_ENCOUNTER_MUSIC_SWIMMER      8 // Caballero johto en binario, Marinero Johto
#define TRAINER_ENCOUNTER_MUSIC_TWINS        9 // used for other trainer classes too - cotillas
#define TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR  10
#define TRAINER_ENCOUNTER_MUSIC_HIKER       11 // used for other trainer classes too
#define TRAINER_ENCOUNTER_MUSIC_INTERVIEWER 12
#define TRAINER_ENCOUNTER_MUSIC_RICH        13 // Caballero y Rico Johto
#define TRAINER_ENCOUNTER_MUSIC_ROCKET      14
#define TRAINER_ENCOUNTER_MUSIC_CHICOKANTO  15
#define TRAINER_ENCOUNTER_MUSIC_CHICAKANTO  16
#define TRAINER_ENCOUNTER_MUSIC_ROCKETKANTO 17
#define TRAINER_ENCOUNTER_MUSIC_CULTISTA    18
#define TRAINER_ENCOUNTER_MUSIC_CHICOJOHTO  19 	
#define TRAINER_ENCOUNTER_MUSIC_NECIOJOHTO  20	
#define TRAINER_ENCOUNTER_MUSIC_SABIOJOHTO  21 
#define TRAINER_ENCOUNTER_MUSIC_CHICAJOHTO  22 
#define TRAINER_ENCOUNTER_MUSIC_MATONJOHTO  23   
#define TRAINER_ENCOUNTER_MUSIC_PENSADOR    24

#define F_TRAINER_FEMALE (1 << 7)

// All trainer parties specify the IV, level, and species for each Pokémon in the
// party. Some trainer parties also specify held items and custom moves for each
// Pokémon.
#define F_TRAINER_PARTY_CUSTOM_MOVESET (1 << 0)
#define F_TRAINER_PARTY_HELD_ITEM      (1 << 1)

#endif  // GUARD_TRAINERS_H
