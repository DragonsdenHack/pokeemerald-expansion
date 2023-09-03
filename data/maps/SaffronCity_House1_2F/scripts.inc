SaffronCity_House1_2F_MapScripts::
	.byte 0

SaffronCityHouse12F_1::
end



SaffronCityHouse12F_2::
end



SaffronCityHouse12F_3::
end



SaffronCityHouse12F_4::
end



SaffronCityHouse12FDocumento_100::
msgbox SaffronCityHouse12FDocumento_Text_100, MSGBOX_SIGN   
end

SaffronCityHouse12FDocumento_Text_100:
.string "...\p"
	.string "¡Éstos son mis secretos!\p"
	.string "Habilidad: imitar.\n"
	.string "Hobby: coleccionar muñecos.\l"
	.string "POKéMON favorito: ¡CLEFAIRY!$"



SaffronCityHouse12FDocumento_101::
msgbox SaffronCityHouse12FDocumento_Text_101, MSGBOX_SIGN   
end

SaffronCityHouse12FDocumento_Text_101:
	.string "¡Un juego de MARIO con un cubo\n"
	.string "en la cabeza!$"



SaffronCityHouse12FDocumento_102::
msgbox SaffronCityHouse12FDocumento_Text_102, MSGBOX_DEFAULT  
release
end

SaffronCityHouse12FDocumento_Text_102:
.string "¡Éste es un POKéMON raro!\n"
	.string "¿Eh? ¡Pero si es un muñeco!$"

SaffronCity_House1_2F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE120_STATE, 0
goto_if_gt SaffronCity_House1_2F_Entrenador_Especial_3
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt SaffronCity_House1_2F_Entrenador_Especial_2
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end


SaffronCity_House1_2F_Entrenador_Especial_2::
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SaffronCity_House1_2F_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GAFASELEGIDAS, SaffronCity_House1_2F_Entrenador_Especial_Texto_8
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_TM71
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE120_STATE, 1
release
end


SaffronCity_House1_2F_Entrenador_Especial_2_No::
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end

SaffronCity_House1_2F_Entrenador_Especial_3::
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end


SaffronCity_House1_2F_Entrenador_Especial_Texto_1.1:
.string "¡Obtuviste GAFAS ELEGIDAS de\n"
	.string "manos de COPIONA!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_1:
.string "Estoy aburrida y cansada de que la\n"
	.string "gente solo me traiga muñecas para\l"
	.string "jugar, nadie se da cuenta de que\l"
	.string "mi verdadero talento es el combate\l"
	.string "POKÉMON, me tratan como una simple\l"
	.string "niña, si solo encontrara un buen\l"
	.string "ENTRENADOR con el que pasar el\l"
	.string "rato.$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_2:
.string "...\n"
	.string "...$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_3:
.string "Lo siento, pensé que tú podrías\n"
	.string "ser, pero veo que aún te falta por\l"
	.string "mejorar.$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_4:
.string "Las GAFAS ELEGIDAS aumentan en un\n"
	.string "50% el ATAQUE ESPECIAL del\l"
	.string "POKÉMON, a costa de obligarle a\l"
	.string "usar un único movimiento, es ideal\l"
	.string "para POKÉMON como ALAKAZAM,\l"
	.string "CHARIZARD o JOLTEON.$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_5:
.string "¡Heyy!\n"
	.string "¡Tienes todas las MEDALLAS!\l"
	.string "¡Debes de ser muy fuerte!\l"
	.string "¿Por qué no echamos un combate?\l"
	.string "¡Vamos si me vences te daré un\l"
	.string "objeto que no encontrarás en\l"
	.string "ningún otro lugar!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_6:
.string "Entonces, ¿aceptas el reto?$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_7:
.string "¿Has oído CLEFABLE?\n"
	.string "¡Vamos a divertirnos!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_8:
.string "¡Espléndido!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_9:
.string "¡Ha sido increíble!\n"
	.string "¡Mira!\l"
	.string "¡Te voy a mostrar el secreto con\l"
	.string "el que podrás lanzar ATAQUES\l"
	.string "ESPECIALES con una potencia mayor\l"
	.string "incluso que la de SABRINA!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_10:
.string "Oh...\n"
	.string "Qué pena...\l"
	.string "Pensé que quizás...$"
