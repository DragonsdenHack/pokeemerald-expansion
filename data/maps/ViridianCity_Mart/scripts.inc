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
	.2byte 109
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
    .2byte 754
	.2byte 71
	.2byte 606
	.2byte 617
	.2byte 595
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
    .2byte 7
	.2byte 8
	.2byte 9
	.2byte 10
	.2byte 11
	.2byte 12
	.2byte 13
	.2byte 14
	.2byte 23
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
    .2byte 114
	.2byte 115
	.2byte 116
	.2byte 120
	.2byte 211
	.2byte 212
	.2byte 213
	.2byte 214
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
    .2byte 72
	.2byte 679
	.2byte 611
	.2byte 612
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
    .2byte 420
	.2byte 421
	.2byte 422
	.2byte 423
	.2byte 424
	.2byte 425
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
	.2byte 120
	.2byte 114
	.2byte 115
	.2byte 116
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
    .2byte 587
	.2byte 597
	.2byte 610
	.2byte 613
	.2byte 625
	.2byte 627
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
