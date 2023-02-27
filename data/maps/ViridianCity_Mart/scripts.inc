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
	.2byte 215
	.2byte 218
	.2byte 219
	.2byte 229
	.2byte 230
	.2byte 231
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
    .2byte 120
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
	.2byte 120
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
    .2byte 120
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
    .2byte 120
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
    .2byte 120
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
	.2byte 492
	.2byte 434
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
    .2byte 120
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
    .2byte 503
	.2byte 465
	.2byte 464
	.2byte 468
	.2byte 469
	.2byte 245
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
    .2byte 479
    .2byte 448
	.2byte 449
	.2byte 450
	.2byte 451
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
    .2byte 498
    .2byte 499
	.2byte 500
	.2byte 501
	.2byte 502
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
    .2byte 397
	.2byte 237
	.2byte 481
	.2byte 228
	.2byte 232
	.2byte 393
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
    .2byte 317
	.2byte 337
	.2byte 320
	.2byte 321
	.2byte 327
	.2byte 329
	.2byte 334
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
    .2byte 535
	.2byte 536
	.2byte 537
	.2byte 538
	.2byte 539
	.2byte 540
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
    .2byte 120
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
    .2byte 28
	.2byte 29
	.2byte 43
	.2byte 44
	.2byte 45
	.2byte 47
	.2byte 1
	.2byte 2
	.2byte 114
	.2byte 115
	.2byte 120
	.2byte ITEM_NONE
	release
	end
