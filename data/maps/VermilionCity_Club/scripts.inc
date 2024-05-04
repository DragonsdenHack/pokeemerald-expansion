VermilionCity_Club_MapScripts::
	.byte 0

VermilionClub1::
end



VermilionClub2::
end



VermilionClub3::
end



VermilionClub4::
end



VermilionClub5::
end



VermilionClub6::
end



VermilionClubDocumento_100::
msgbox VermilionClubDocumento_Text_100, MSGBOX_SIGN   
end

VermilionClubDocumento_Text_100:
.string "¡Escuchemos educadamente al resto\n"
	.string "de entrenadores!$"



VermilionClubDocumento_101::
msgbox VermilionClubDocumento_Text_101, MSGBOX_SIGN   
end

VermilionClubDocumento_Text_101:
	.string "Si alguien se rie, devuélvele la\n"
	.string "sonrisa.$"

VermilionCity_Club_Secundaria_AncianoMachop::
lock
faceplayer
compare VAR_UNUSED_0x409B, 1
goto_if_gt VermilionCity_Club_Secundaria_AncianoMachop_4
compare VAR_UNUSED_0x409B, 1
goto_if_eq VermilionCity_Club_Secundaria_AncianoMachop_2
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_1 MSGBOX_DEFAULT
release
end

VermilionCity_Club_Secundaria_AncianoMachop_2::
delay 20
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_3 MSGBOX_DEFAULT
delay 20
applymovement 1, VermilionCity_Club_Secundaria_AncianoMachop_Move_1
waitmovement 0x0
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_4 MSGBOX_DEFAULT
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_5 MSGBOX_DEFAULT
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq VermilionCity_Club_Secundaria_AncianoMachop_3
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_7 MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_CLUBFANS, VermilionCity_Club_Secundaria_AncianoMachop_Texto_8
delay 15
playse SE_PIN
applymovement 2, VermilionCity_Club_Secundaria_AncianoMachop_Move_1
applymovement 3, VermilionCity_Club_Secundaria_AncianoMachop_Move_1
applymovement 4, VermilionCity_Club_Secundaria_AncianoMachop_Move_1
waitmovement 0x0
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_9 MSGBOX_DEFAULT
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_10 MSGBOX_DEFAULT
playfanfare MUS_RG_OBTAIN_KEY_ITEM
giveitem ITEM_BIKE_VOUCHER
waitfanfare
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_11 MSGBOX_DEFAULT
setvar VAR_UNUSED_0x409B, 2
release
end


VermilionCity_Club_Secundaria_AncianoMachop_3::
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_12 MSGBOX_DEFAULT
release
end

VermilionCity_Club_Secundaria_AncianoMachop_4::
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_2 MSGBOX_DEFAULT
release
end


VermilionCity_Club_Secundaria_AncianoMachop_Texto_1:
.string "Como ROCKET debe de ser difícil el\n"
	.string "tener que conformarse con RATATTA\l"
	.string "y ZUBAT. Espero que no vuelvas a\l"
	.string "poner un pie en este lugar, aquí\l"
	.string "solo tratamos con gente\l"
	.string "distinguida con POKÉMON que valgan\l"
	.string "la pena. Como ese chico que hace\l"
	.string "no mucho vino aquí con su\l"
	.string "WARTORTLE, un gran ejemplar, sí…{PAUSE 5}$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_2:
.string "El mundo de los POKÉMON es\n"
	.string "inmenso, a pesar de todo lo que he\l"
	.string "visto, no estoy ni cerca de\l"
	.string "conocer a todos los POKÉMON que\l"
	.string "existen.\l"
	.string "¡POKÉMON mucho más fuertes e\l"
	.string "impresionantes esperan ahí fuera!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_3:
.string "…\n"
	.string "…{PAUSE 5}$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_4:
.string "¿¡Me estás retando a un combate?!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_5:
.string "Chico no sabes lo que dices, tengo\n"
	.string "a más de 100 POKÉMON a mi\l"
	.string "disposición, gracias a mis\l"
	.string "incontables viajes he podido\l"
	.string "reunir a los mejores ejemplares de\l"
	.string "esta gran región.$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_6:
.string "¿Aún así te atreves a desafiarme?$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_7:
.string "No reconoces a un gran ENTRENADOR\n"
	.string "cuando lo tienes delante, ¿eh?\l"
	.string "¡Te mostraré que hay personas con\l"
	.string "las que es mejor no cruzar POKÉ\l"
	.string "BALLS!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_8:
.string "¡Mis majestuosos POKÉMON!\n"
	.string "¿Cómo?$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_9:
.string "Vaya, pensé que con 3 POKÉMON te\n"
	.string "derrotaría fácilmente, la potencia\l"
	.string "de mi RAPIDASH suele ser más que\l"
	.string "suficiente para tumbar a todo\l"
	.string "ENTRENADOR de los alrededores,\l"
	.string "admito que estoy impresionado.$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_10:
.string "Acepta esto como un regalo de\n"
	.string "buena fe, podrás canjearlo en la\l"
	.string "TIENDA DE BICIS de CIUDAD CELESTE\l"
	.string "por una BICI nueva, seas ROCKET o\l"
	.string "no, tu colección es de admirar.$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_11:
.string "¡{PLAYER} recibió el BONO BICI\n"
	.string "de manos del PRESIDENTE!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_12:
.string "Chico listo, si te portas bien y\n"
	.string "desapareces no llamaré a la\l"
	.string "policía.$"

VermilionCity_Club_Secundaria_AncianoMachop_Move_1:
emote_exclamation_mark
step_end

VermilionCity_Seel::
lock
faceplayer
playmoncry SPECIES_SEEL, CRY_MODE_ENCOUNTER
msgbox VermilionCity_Seel_Texto_1 MSGBOX_DEFAULT
waitmoncry
release
end

VermilionCity_Seel_Texto_1:
.string "SEEL: ¡KYUUUO!$"


VermilionCity_Pikachu::
lock
faceplayer
playmoncry SPECIES_PIKACHU, CRY_MODE_ENCOUNTER
msgbox VermilionCity_Pikachu_Texto_1 MSGBOX_DEFAULT
waitmoncry
release
end

VermilionCity_Pikachu_Texto_1:
.string "PIKACHU: ¡CHU! ¡PIKACHU!$"



VermilionCity_Tercer_NPC::
lock
faceplayer
compare VAR_UNUSED_0x409B, 1
goto_if_gt VermilionCity_Tercer_NPC_2
msgbox VermilionCity_Tercer_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Tercer_NPC_2::
msgbox VermilionCity_Tercer_NPC_Texto_2 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Tercer_NPC_Texto_1:
.string "¿Quién eres tú?\n"
	.string "¡No mereces compartir espacio con\l"
	.string "nosotros!$"

VermilionCity_Tercer_NPC_Texto_2:
.string "¡Eso ha sido increíble!\n"
	.string "¡Queda claro que los grandes\l"
	.string "entrenadores pueden venir de\l"
	.string "cualquier lugar!\l"
	.string "¡Incluso del TEAM ROCKET!$"



VermilionCity_Cuarto_NPC::
lock
faceplayer
compare VAR_UNUSED_0x409B, 1
goto_if_gt VermilionCity_Cuarto_NPC_2
msgbox VermilionCity_Cuarto_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Cuarto_NPC_2::
msgbox VermilionCity_Cuarto_NPC_Texto_2 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Cuarto_NPC_Texto_1:
.string "Espero no tener que recurrir a mi\n"
	.string "SNORLAX ROCKET, a la mínima\l"
	.string "acabarás aplastado así que cuida\l"
	.string "tus modales.$"

VermilionCity_Cuarto_NPC_Texto_2:
.string "Vaya, pensaba que nuestro\n"
	.string "PRESIDENTE era más fuerte…{PAUSE 5}$"



VermilionCity_Segundo_NPC::
lock
faceplayer
compare VAR_UNUSED_0x409B, 1
goto_if_gt VermilionCity_Segundo_NPC_2
msgbox VermilionCity_Segundo_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Segundo_NPC_2::
msgbox VermilionCity_Segundo_NPC_Texto_2 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Segundo_NPC_Texto_1:
.string "Sé educado y muestra respeto a la\n"
	.string "hora de dirijirte a nuestro\l"
	.string "PRESIDENTE, si quisiera te\l"
	.string "enterraría a ti junto con el resto\l"
	.string "del TEAM ROCKET.$"


VermilionCity_Segundo_NPC_Texto_2:
.string "No esperaba que nuestro PRESIDENTE\n"
	.string "perdiera{PAUSE 5}…{PAUSE 5}$"
