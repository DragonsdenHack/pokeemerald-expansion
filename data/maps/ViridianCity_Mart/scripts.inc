ViridianCity_Mart_MapScripts::
	.byte 0

ViridianCityMart1::
end



ViridianCityMart2::
lock     
faceplayer     
msgbox ViridianCity_Mart_Text_2, MSGBOX_DEFAULT
release     
end

ViridianCity_Mart_Text_2:
.string "Yo tengo algunas POCIONES.\p"
.string "Nunca sabes cuándo pueden\n"
.string "necesitarlas tus POKéMON.$"



ViridianCityMart3::
lock     
faceplayer     
msgbox ViridianCity_Mart_Text_3, MSGBOX_DEFAULT
release     
end

ViridianCity_Mart_Text_3:
.string "En esta tienda venden muchos\n"
.string "ANTÍDOTOS, creo.$"

Base_Profunda_Mercado_1_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Base_Profunda_Mercado_1_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Base_Profunda_Mercado_1_Pokemart:
	.2byte 1
	.2byte 2
	.2byte 3
	.2byte 28
	.2byte 29
	.2byte 30
	.2byte 33
	.2byte 43
	.2byte 44
	.2byte 45
	.2byte 46
	.2byte 47
	.2byte 48
	.2byte ITEM_NONE
	release
	end



Base_Profunda_Mercado_2_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Base_Profunda_Mercado_2_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Base_Profunda_Mercado_2_Pokemart:
	.2byte 35
	.2byte 36
	.2byte 37
	.2byte 38
	.2byte 59
	.2byte 110
	.2byte 111
	.2byte 112
	.2byte 113
	.2byte 53
	.2byte ITEM_NONE
	release
	end

Base_Profunda_Mercado_3_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Base_Profunda_Mercado_3_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Base_Profunda_Mercado_3_Pokemart:
    .2byte 102
    .2byte 103
	.2byte 604
	.2byte 615
	.2byte 626
	.2byte ITEM_FOCUS_SASH
	.2byte ITEM_NONE
	release
	end



Base_Profunda_Mercado_4_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Base_Profunda_Mercado_4_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Base_Profunda_Mercado_4_Pokemart:
	.2byte 524
    .2byte 7
	.2byte 8
	.2byte 9
	.2byte 10
	.2byte 11
	.2byte 12
	.2byte 13
	.2byte 14
	.2byte 5
	.2byte 23
	.2byte 114
	.2byte 115
	.2byte 116
	.2byte 212
	.2byte 213
	.2byte 214
	.2byte 215
	.2byte 121
	.2byte 122
	.2byte 123
	.2byte 124
	.2byte 125
	.2byte 126
	.2byte 127
	.2byte 128
	.2byte ITEM_NONE
	release
	end

Base_Profunda_Mercado_5_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Base_Profunda_Mercado_5_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Base_Profunda_Mercado_5_Pokemart:
	.2byte ITEM_NONE
	release
	end

Base_Profunda_Mercado_6_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Base_Profunda_Mercado_6_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Base_Profunda_Mercado_6_Pokemart:
    .2byte 102
    .2byte 103
    .2byte 65
	.2byte 66
	.2byte 67
	.2byte 68
	.2byte 69
	.2byte 70
	.2byte ITEM_NONE
	release
	end

Base_Profunda_Mercado_7_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Base_Profunda_Mercado_7_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Base_Profunda_Mercado_7_Pokemart:
    .2byte ITEM_EXP_CANDY_XS
    .2byte ITEM_EXP_CANDY_S
	.2byte ITEM_EXP_CANDY_XM
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_PP_MAX
	.2byte ITEM_NONE
	release
	end

Base_Profunda_Mercado_8_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Base_Profunda_Mercado_8_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Base_Profunda_Mercado_8_Pokemart:
	.2byte ITEM_TM36
	.2byte ITEM_TM54
	.2byte ITEM_POWER_HERB
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_NONE
	release
	end

Base_Profunda_Mercado_9_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Base_Profunda_Mercado_9_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Base_Profunda_Mercado_9_Pokemart:
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_CRACKED_POT
	.2byte ITEM_NONE
	release
	end

Kanto_Ciudades_Mercados_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Kanto_Ciudades_Mercados_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Kanto_Ciudades_Mercados_Pokemart:
    .2byte 1
	.2byte 2
	.2byte 3
	.2byte 28
	.2byte 29
	.2byte 30
	.2byte 31
	.2byte 32
	.2byte 33
	.2byte 43
	.2byte 44
	.2byte 45
	.2byte 46
	.2byte 47
	.2byte 48
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE
	release
	end

Azulona_Centro_Comercial_Mercado_1_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Azulona_Centro_Comercial_Mercado_1_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Azulona_Centro_Comercial_Mercado_1_Pokemart:
    .2byte ITEM_TM05
	.2byte ITEM_TM15
	.2byte ITEM_TM28
	.2byte ITEM_TM31
	.2byte ITEM_TM43
	.2byte ITEM_TM45
	.2byte ITEM_NONE
	release
	end

Azulona_Centro_Comercial_Mercado_2_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Azulona_Centro_Comercial_Mercado_2_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Azulona_Centro_Comercial_Mercado_2_Pokemart:
    .2byte 2
	.2byte 29
	.2byte 33
	.2byte 43
	.2byte 44
	.2byte 45
	.2byte 46
	.2byte 115
	.2byte ITEM_NONE
	release
	end

Azulona_Centro_Comercial_Mercado_3_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Azulona_Centro_Comercial_Mercado_3_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Azulona_Centro_Comercial_Mercado_3_Pokemart:
    .2byte 129
	.2byte 210
	.2byte 211
	.2byte 212
	.2byte 213
	.2byte 214
	.2byte 215
	.2byte ITEM_NONE
	release
	end


Azulona_Centro_Comercial_Mercado_4_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Azulona_Centro_Comercial_Mercado_4_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Azulona_Centro_Comercial_Mercado_4_Pokemart:
    .2byte 65
	.2byte 66
	.2byte 67
	.2byte 68
	.2byte 69
	.2byte 70
	.2byte ITEM_NONE
	release
	end



Azulona_Centro_Comercial_Mercado_5_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Azulona_Centro_Comercial_Mercado_5_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Azulona_Centro_Comercial_Mercado_5_Pokemart:
    .2byte 121
	.2byte 122
	.2byte 123
	.2byte 124
	.2byte 125
	.2byte 126
	.2byte 127
	.2byte 128
	.2byte ITEM_NONE
	release
	end


Johto_Endrino_Mercado_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Endrino_Mercado_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Endrino_Mercado_Pokemart:
    .2byte ITEM_ESCAPE_ROPE
	.2byte 2
	.2byte 3
	.2byte 29
	.2byte 30
	.2byte 33
	.2byte 48
	.2byte 116
	.2byte 438
	.2byte 525
	.2byte ITEM_NONE
	release
	end

Johto_Cerezo_Mercado_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Cerezo_Mercado_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Cerezo_Mercado_Pokemart:
    .2byte 1
	.2byte 2
	.2byte 3
	.2byte 28
	.2byte 29
	.2byte 30
	.2byte 31
	.2byte 32
	.2byte 33
	.2byte 43
	.2byte 44
	.2byte 45
	.2byte 46
	.2byte 47
	.2byte 48
	.2byte ITEM_ESCAPE_ROPE
	.2byte 114
	.2byte 115
	.2byte 116
	.2byte ITEM_NONE
	release
	end

Johto_Malva_Mercado_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Malva_Mercado_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Malva_Mercado_Pokemart:
    .2byte ITEM_ESCAPE_ROPE
	.2byte 2
	.2byte 3
	.2byte 29
	.2byte 30
	.2byte 33
	.2byte 48
	.2byte 116
	.2byte 435
	.2byte 568
	.2byte ITEM_NONE
	release
	end

Johto_Iris_Mercado_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Iris_Mercado_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Iris_Mercado_Pokemart:
    .2byte ITEM_ESCAPE_ROPE
	.2byte 2
	.2byte 3
	.2byte 29
	.2byte 30
	.2byte 33
	.2byte 48
	.2byte 116
	.2byte 439
	.2byte 571
	.2byte 54
	.2byte ITEM_NONE
	release
	end

Johto_Olivo_Mercado_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Olivo_Mercado_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Olivo_Mercado_Pokemart:
    .2byte ITEM_ESCAPE_ROPE
	.2byte 2
	.2byte 3
	.2byte 29
	.2byte 30
	.2byte 33
	.2byte 48
	.2byte 116
	.2byte 428
	.2byte 572
	.2byte ITEM_NONE
	release
	end

Ruta_45_Mercado_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Ruta_45_Mercado_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Ruta_45_Mercado_Pokemart:
    .2byte 220
	.2byte 537
	.2byte 137
	.2byte 138
	.2byte 461
	.2byte 42
	.2byte ITEM_NONE
	release
	end

Johto_Orquidea_Mercado_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Orquidea_Mercado_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Orquidea_Mercado_Pokemart:
    .2byte 29
	.2byte 30
	.2byte 33
	.2byte 39
	.2byte 40
	.2byte 41
	.2byte 42
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_POWER_HERB
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_NONE
	release
	end

Johto_Trigal_Mercado_1_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Trigal_Mercado_1_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Trigal_Mercado_1_Pokemart:
    .2byte 31
	.2byte 32
	.2byte 14
	.2byte ITEM_LIGHT_CLAY
	.2byte ITEM_NONE
	release
	end
	
Johto_Trigal_Mercado_2_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Trigal_Mercado_2_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Trigal_Mercado_2_Pokemart:
	.2byte 2
	.2byte 3
	.2byte 29
	.2byte 30
	.2byte 33
	.2byte 48
	.2byte 116
	.2byte 19
	.2byte 426
	.2byte ITEM_NONE
	release
	end

Johto_Trigal_Mercado_3_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Trigal_Mercado_3_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Trigal_Mercado_3_Pokemart:
    .2byte ITEM_AIR_BALLOON
	.2byte ITEM_RED_CARD
	.2byte ITEM_RING_TARGET
	.2byte ITEM_BINDING_BAND
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_NONE
	release
	end

Johto_Trigal_Mercado_4_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Trigal_Mercado_4_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Trigal_Mercado_4_Pokemart:
    .2byte ITEM_DAMP_ROCK
    .2byte ITEM_HEAT_ROCK
	.2byte ITEM_SMOOTH_ROCK
	.2byte ITEM_ICY_ROCK
	.2byte ITEM_NONE
	release
	end

Johto_Trigal_Mercado_5_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Trigal_Mercado_5_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Trigal_Mercado_5_Pokemart:
    .2byte ITEM_TM66
    .2byte ITEM_TM92
	.2byte ITEM_TM107
	.2byte ITEM_TM108
	.2byte ITEM_TM109
	.2byte ITEM_NONE
	release
	end

Johto_Trigal_Mercado_6_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Trigal_Mercado_6_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Trigal_Mercado_6_Pokemart:
    .2byte ITEM_METAL_POWDER
	.2byte ITEM_QUICK_POWDER
	.2byte ITEM_LEEK
	.2byte ITEM_THICK_CLUB
	.2byte ITEM_LIGHT_BALL
	.2byte ITEM_UPGRADE
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_NONE
	release
	end

Johto_Base_Rocket_Mercado_1_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Base_Rocket_Mercado_1_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Base_Rocket_Mercado_1_Pokemart:
    .2byte ITEM_BUTTERFRITA
    .2byte ITEM_GARDEVOIRITE
    .2byte ITEM_GALLADITE
	.2byte ITEM_AGGRONITE
	.2byte ITEM_MEDICHAMITE
	.2byte ITEM_ABSOLITE
	.2byte ITEM_FLYGONITE
	.2byte ITEM_MILOTICITE
	.2byte ITEM_SALAMENCITE
	.2byte ITEM_GARCHOMPITE
	.2byte ITEM_NONE
	release
	end



Johto_Base_Rocket_Mercado_2_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Base_Rocket_Mercado_2_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Base_Rocket_Mercado_2_Pokemart:
    .2byte ITEM_POMEG_BERRY
	.2byte ITEM_KELPSY_BERRY
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_HONDEW_BERRY
	.2byte ITEM_GREPA_BERRY
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_NONE
	release
	end

Sevii_Secunda_Mercado_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Sevii_Secunda_Mercado_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Sevii_Secunda_Mercado_Pokemart:
    .2byte 3
	.2byte 13
	.2byte 11
	.2byte 35
	.2byte 36
	.2byte 37
	.2byte 38
	.2byte 59
	.2byte ITEM_NONE
	release
	end

Sevii_Oculto_Mercado_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Sevii_Oculto_Mercado_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Sevii_Oculto_Mercado_Pokemart:
    .2byte 479
    .2byte 448
	.2byte 449
	.2byte 450
	.2byte 451
	.2byte 430
	.2byte 62
	.2byte ITEM_NONE
	release
	end



Johto_Azalea_Mercado_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Azalea_Mercado_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Azalea_Mercado_Pokemart:
    .2byte ITEM_ESCAPE_ROPE
	.2byte 2
	.2byte 3
	.2byte 29
	.2byte 30
	.2byte 33
	.2byte 48
	.2byte 116
	.2byte 427
	.2byte 437
	.2byte 569
	.2byte ITEM_NONE
	release
	end

BaseRocket_Ruta5_Mercado_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BaseRocket_Ruta5_Mercado_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
BaseRocket_Ruta5_Mercado_Pokemart:
    .2byte 102
    .2byte 28
	.2byte 29
	.2byte 43
	.2byte 44
	.2byte 45
	.2byte 47
	.2byte 1
	.2byte 2
	.2byte ITEM_NONE
	release
	end


Base_Hoenn_Rocket_Mercado_1_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Base_Hoenn_Rocket_Mercado_1_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Base_Hoenn_Rocket_Mercado_1_Pokemart:
    .2byte ITEM_NORMAL_GEM
	.2byte ITEM_FIRE_GEM
	.2byte ITEM_WATER_GEM
	.2byte ITEM_ELECTRIC_GEM
	.2byte ITEM_GRASS_GEM
	.2byte ITEM_ICE_GEM
	.2byte ITEM_FIGHTING_GEM
	.2byte ITEM_POISON_GEM
	.2byte ITEM_GROUND_GEM
	.2byte ITEM_FLYING_GEM
	.2byte ITEM_PSYCHIC_GEM
	.2byte ITEM_BUG_GEM
	.2byte ITEM_ROCK_GEM
	.2byte ITEM_GHOST_GEM
	.2byte ITEM_DRAGON_GEM
	.2byte ITEM_DARK_GEM
	.2byte ITEM_STEEL_GEM
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE
	release
	end

Torre_Radio_Lavanda_Mercado_1_EventScript_Master_Ball::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Torre_Radio_Lavanda_Mercado_1_Master_Ball_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Torre_Radio_Lavanda_Mercado_1_Master_Ball_Pokemart:
	.2byte 4
	.2byte 224
	.2byte ITEM_NONE
	release
	end



Torre_Radio_Lavanda_Mercado_1_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Torre_Radio_Lavanda_Mercado_1_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Torre_Radio_Lavanda_Mercado_1_Pokemart:
    .2byte 81
	.2byte 82
	.2byte 83
	.2byte 84
	.2byte 85
	.2byte 86
	.2byte 87
	.2byte 88
	.2byte 89
	.2byte 90
	.2byte 91
	.2byte 92
	.2byte 93
	.2byte 94
	.2byte 95
	.2byte 96
	.2byte 97
	.2byte 98
	.2byte 99
	.2byte 100
	.2byte ITEM_NONE
	release
	end

Torre_Radio_Lavanda_Mercado_Silvally_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Torre_Radio_Lavanda_Mercado_Silvally_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	
	.align 2
Torre_Radio_Lavanda_Mercado_Silvally_Pokemart:
    .2byte ITEM_FIRE_MEMORY
	.2byte ITEM_WATER_MEMORY
	.2byte ITEM_ELECTRIC_MEMORY
	.2byte ITEM_GRASS_MEMORY
	.2byte ITEM_ICE_MEMORY
	.2byte ITEM_FIGHTING_MEMORY
	.2byte ITEM_POISON_MEMORY
	.2byte ITEM_GROUND_MEMORY
	.2byte ITEM_FLYING_MEMORY
	.2byte ITEM_PSYCHIC_MEMORY
	.2byte ITEM_BUG_MEMORY
	.2byte ITEM_ROCK_MEMORY
	.2byte ITEM_GHOST_MEMORY
	.2byte ITEM_DRAGON_MEMORY
	.2byte ITEM_DARK_MEMORY
	.2byte ITEM_STEEL_MEMORY
	.2byte ITEM_FAIRY_MEMORY
	.2byte ITEM_NONE
	release
	end


Torre_Radio_Lavanda_Mercado_2_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Torre_Radio_Lavanda_Mercado_2_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Torre_Radio_Lavanda_Mercado_2_Pokemart:
    .2byte ITEM_FLOAT_STONE
	.2byte ITEM_AIR_BALLOON
	.2byte ITEM_RED_CARD
	.2byte ITEM_RING_TARGET
	.2byte ITEM_BINDING_BAND
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_SAFETY_GOGGLES
	.2byte ITEM_ADRENALINE_ORB
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_ABSORB_BULB
	.2byte ITEM_LUMINOUS_MOSS
	.2byte ITEM_SNOWBALL
	.2byte ITEM_NONE
	release
	end



Torre_Radio_Lavanda_Mercado_3_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Torre_Radio_Lavanda_Mercado_3_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Torre_Radio_Lavanda_Mercado_3_Pokemart:
    .2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_EXP_CANDY_XM
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_DYNAMAX_CANDY
	.2byte ITEM_DYNAMAX_CANDY2
	.2byte ITEM_NONE
	release
	end



Torre_Radio_Lavanda_Mercado_4_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Torre_Radio_Lavanda_Mercado_4_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Torre_Radio_Lavanda_Mercado_4_Pokemart:
    .2byte ITEM_TART_APPLE
	.2byte ITEM_TERRAIN_EXTENDER
	.2byte ITEM_PROTECTIVE_PADS
	.2byte ITEM_THROAT_SPRAY
	.2byte ITEM_EJECT_PACK
	.2byte ITEM_HEAVY_DUTY_BOOTS
	.2byte ITEM_BLUNDER_POLICY
	.2byte ITEM_ROOM_SERVICE
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_NONE
	release
	end



Johto_Floristeria_Trigal_Mercado_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Floristeria_Trigal_Mercado_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Floristeria_Trigal_Mercado_Pokemart:
    .2byte 530
	.2byte 531
	.2byte 532
	.2byte 533
	.2byte 534
	.2byte 541
	.2byte 542
	.2byte 543
	.2byte 544
	.2byte 545
	.2byte 546
	.2byte 547
	.2byte ITEM_NONE
	release
	end



BosqueGimnasio_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BosqueGimnasio_Mercado_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
BosqueGimnasio_Mercado_Pokemart:
    .2byte ITEM_CHILAN_BERRY
    .2byte ITEM_OCCA_BERRY
	.2byte ITEM_PASSHO_BERRY
	.2byte ITEM_WACAN_BERRY
	.2byte ITEM_RINDO_BERRY
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_CHOPLE_BERRY
	.2byte ITEM_KEBIA_BERRY
	.2byte ITEM_SHUCA_BERRY
	.2byte ITEM_COBA_BERRY
	.2byte ITEM_PAYAPA_BERRY
	.2byte ITEM_TANGA_BERRY
	.2byte ITEM_CHARTI_BERRY
	.2byte ITEM_KASIB_BERRY
	.2byte ITEM_HABAN_BERRY
	.2byte ITEM_COLBUR_BERRY
	.2byte ITEM_BABIRI_BERRY
	.2byte ITEM_ROSELI_BERRY
	.2byte ITEM_NONE
	release
	end


BosqueGimnasio_EventScript_Clerk_2::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BosqueGimnasio_Mercado_2_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
BosqueGimnasio_Mercado_2_Pokemart:
    .2byte ITEM_PETAYA_BERRY
    .2byte ITEM_APICOT_BERRY
	.2byte ITEM_LANSAT_BERRY
	.2byte ITEM_STARF_BERRY
	.2byte ITEM_MICLE_BERRY
	.2byte ITEM_CUSTAP_BERRY
	.2byte ITEM_JABOCA_BERRY
	.2byte ITEM_KEE_BERRY
	.2byte ITEM_MARANGA_BERRY
	.2byte ITEM_NONE
	release
	end


Subterraneo_Trigal_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Subterraneo_Trigal_Mercado_7_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Subterraneo_Trigal_Mercado_7_Pokemart:
    .2byte 659
	.2byte 665
	.2byte 680
	.2byte ITEM_NONE
	release
	end


Comercial_Trigal_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Comercial_Trigal_Mercado_7_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Comercial_Trigal_Mercado_7_Pokemart:
    .2byte 648
	.2byte 674
	.2byte 682
	.2byte ITEM_NONE
	release
	end

Johto_Centro_Mercado_6_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Centro_Mercado_6_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Centro_Mercado_6_Pokemart:
    .2byte ITEM_TM146
    .2byte ITEM_TM147
    .2byte ITEM_TM150
	.2byte ITEM_TM100
	.2byte ITEM_NONE
	release
	end

Torre_Radio_Lavanda_Mercado_Z_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Torre_Radio_Lavanda_Mercado_Z_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Torre_Radio_Lavanda_Mercado_Z_Pokemart:
    .2byte ITEM_NORMALIUM_Z
	.2byte ITEM_FIRIUM_Z
	.2byte ITEM_WATERIUM_Z
	.2byte ITEM_ELECTRIUM_Z
	.2byte ITEM_GRASSIUM_Z
	.2byte ITEM_ICIUM_Z
	.2byte ITEM_FIGHTINIUM_Z
	.2byte ITEM_POISONIUM_Z
	.2byte ITEM_GROUNDIUM_Z
	.2byte ITEM_FLYINIUM_Z
	.2byte ITEM_PSYCHIUM_Z
	.2byte ITEM_BUGINIUM_Z
	.2byte ITEM_ROCKIUM_Z
	.2byte ITEM_GHOSTIUM_Z
	.2byte ITEM_DRAGONIUM_Z
	.2byte ITEM_DARKINIUM_Z
	.2byte ITEM_STEELIUM_Z
	.2byte ITEM_FAIRIUM_Z
	.2byte ITEM_NONE
	release
	end

Johto_Caramelos_P1_Mercado_3_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Caramelos_P1_Mercado_3_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Caramelos_P1_Mercado_3_Pokemart:
    .2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_EXP_CANDY_XM
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_NONE
	release
	end

Johto_Caramelos_P2_Mercado_3_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Johto_Caramelos_P2_Mercado_3_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Johto_Caramelos_P2_Mercado_3_Pokemart:
    .2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_EXP_CANDY_XM
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_NONE
	release
	end

Hoenn_Caramelos_P2_Mercado_3_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Hoenn_Caramelos_P2_Mercado_3_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Hoenn_Caramelos_P2_Mercado_3_Pokemart:
    .2byte ITEM_EXP_CANDY_XS
	.2byte ITEM_EXP_CANDY_S
	.2byte ITEM_EXP_CANDY_XM
	.2byte ITEM_EXP_CANDY_M
	.2byte ITEM_EXP_CANDY_L
	.2byte ITEM_EXP_CANDY_XL
	.2byte ITEM_DYNAMAX_CANDY
	.2byte ITEM_NONE
	release
	end


Hoenn_Portual_Mercado_3_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Hoenn_Portual_P2_Mercado_3_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Hoenn_Portual_P2_Mercado_3_Pokemart:
	.2byte ITEM_TM127
	.2byte ITEM_TM135
	.2byte DECOR_NONE
	release
	end

