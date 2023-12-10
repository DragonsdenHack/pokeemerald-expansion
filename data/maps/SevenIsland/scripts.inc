SevenIsland_MapScripts::
	.byte 0

SevenIsland1::
end


SevenIsland2::
lock     
faceplayer     
msgbox SevenIsland_Text_2, MSGBOX_DEFAULT
release     
end

SevenIsland_Text_2:
.string "A estas islas las llamamos ARCHI7\n"
.string "porque son siete, je.\p"
.string "O, por lo menos, es lo que la\n"
.string "gente joven cree.\p"
.string "Pero en realidad es porque las\n"
.string "islas se crearon en siete días.$"


SevenIsland3::
lock     
faceplayer     
msgbox SevenIsland_Text_3, MSGBOX_DEFAULT
release     
end

SevenIsland_Text_3:
.string "Esta isla es prácticamente virgen,\n"
.string "apenas ha sufrido modificaciones.\p"
.string "Por ello, es peligroso y difícil\n"
.string "hacer escalada por aquí.$"



SevenIslandDocumento_100::
msgbox SevenIslandDocumento_Text_100, MSGBOX_SIGN   
end

SevenIslandDocumento_Text_100:
.string "ISLA SÉPTIMA\n"
	.string "La Isla de la Búsqueda Infinita.$"

SevenIsland_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE113_STATE, 0
goto_if_gt SevenIsland_Entrenador_Especial_3
msgbox SevenIsland_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox SevenIsland_Entrenador_Especial_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SevenIsland_Entrenador_Especial_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox SevenIsland_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_PANUELO, SevenIsland_Entrenador_Especial_Texto_5
msgbox SevenIsland_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_CHOICE_SCARF
msgbox SevenIsland_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox SevenIsland_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE113_STATE, 1
release
end

SevenIsland_Entrenador_Especial_3::
msgbox SevenIsland_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

SevenIsland_Entrenador_Especial_No::
msgbox SevenIsland_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
release
end

SevenIsland_Entrenador_Especial_Texto_1.1:
.string "¡Obtuviste PAÑUELO ELEGIDO de manos de\n"
	.string "ENTRENADOR GUAY!$"

SevenIsland_Entrenador_Especial_Texto_1:
.string "No sirve de nada boostearse al\n"
	.string "máximo el ATAQUE si después llega\l"
	.string "un POKÉMON rival más rápido y te\l"
	.string "debilita antes de que puedas mover\l"
	.string "un dedo, tienes pinta de haber\l"
	.string "vivido muchas aventuras ya a pesar\l"
	.string "de tu corta edad, si eres capaz de\l"
	.string "derrotarme de daré algo muy útil.$"

SevenIsland_Entrenador_Especial_Texto_2:
.string "¿Te animas a combatir?$"

SevenIsland_Entrenador_Especial_Texto_3:
.string "El PAÑUELO ELEGIDO aumenta en un\n"
	.string "50% la VELOCIDAD del POKÉMON que\l"
	.string "lo lleve equipado, pero solo deja\l"
	.string "usar un único movimiento, es\l"
	.string "genial para atacar antes que\l"
	.string "nadie, pudiendo dar incluso una\l"
	.string "oportunidad a POKÉMON lentos como\l"
	.string "MACHAMP de alcanzar buenos niveles\l"
	.string "de VELOCIDAD.$"

SevenIsland_Entrenador_Especial_Texto_4:
.string "No esperaba menos de ti.\n"
	.string "¡Vamos!$"

SevenIsland_Entrenador_Especial_Texto_5:
.string "¡Has derrumbado todas mis\n"
	.string "defensas!$"

SevenIsland_Entrenador_Especial_Texto_6:
.string "Tienes madera de ENTRENADOR, me\n"
	.string "extraña no haberte visto en\l"
	.string "campeonatos como la LIGA POKÉMON,\l"
	.string "podrías ser de los mejores, aquí\l"
	.string "tienes algo que puede ayudarte a\l"
	.string "ser aún mejor.$"

SevenIsland_Entrenador_Especial_Texto_7:
.string "Parece que te juzgué mal, pensé\n"
	.string "que tenías más agallas.$"
