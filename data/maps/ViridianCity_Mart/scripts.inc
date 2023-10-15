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
    .2byte 467
    .2byte 470
	.2byte 482
    .2byte 245
	.2byte 474
	.2byte 440
	.2byte 469
	.2byte 523
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
    .2byte 79
    .2byte 73
	.2byte 74
	.2byte 75
	.2byte 76
	.2byte 77
	.2byte 78
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
    .2byte 340
	.2byte 341
	.2byte 342
	.2byte 343
	.2byte 344
	.2byte 345
	.2byte 346
	.2byte 347
	.2byte 348
	.2byte 349
	.2byte 350
	.2byte 351
	.2byte 352
	.2byte 353
	.2byte 354
	.2byte 355
	.2byte 356
	.2byte 357
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
	.2byte 101
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
    .2byte 271
	.2byte 272
	.2byte 273
	.2byte 274
	.2byte 275
	.2byte 276
	.2byte 277
	.2byte 278
	.2byte 279
	.2byte 280
	.2byte 281
	.2byte 282
	.2byte 283
	.2byte 284
	.2byte 285
	.2byte 286
	.2byte 287
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
    .2byte 786
    .2byte 505
	.2byte 506
	.2byte 507
	.2byte 508
	.2byte 509
	.2byte 510
	.2byte 511
	.2byte 512
	.2byte 513
	.2byte 514
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
    .2byte 452
	.2byte 453
	.2byte 454
	.2byte 455
	.2byte 456
	.2byte 457
	.2byte 458
	.2byte 459
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
    .2byte 476
	.2byte 477
	.2byte 475
	.2byte 483
	.2byte 472
	.2byte 429
	.2byte 442
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
    .2byte 550
    .2byte 551
	.2byte 552
	.2byte 553
	.2byte 554
	.2byte 555
	.2byte 556
	.2byte 557
	.2byte 558
	.2byte 559
	.2byte 560
	.2byte 561
	.2byte 562
	.2byte 563
	.2byte 564
	.2byte 565
	.2byte 566
	.2byte 567
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
    .2byte 458
    .2byte 430
	.2byte 452
	.2byte 453
	.2byte 454
	.2byte 455
	.2byte 580
	.2byte 581
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
    .2byte 650
	.2byte 656
	.2byte 671
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
.2byte 648
.2byte 674
    .2byte 689
	.2byte 690
	.2byte 691
	.2byte 682
	.2byte ITEM_NONE
	release
	end

