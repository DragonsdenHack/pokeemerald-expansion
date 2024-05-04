ViridianCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
	.byte 0

ViridianCity_OnTransition::
setflag FLAG_VISITED_VIRIDIAN_CITY
end

ViridianCity2::
end


ViridianCity3::
lock     
faceplayer     
msgbox ViridianCity_Text3, MSGBOX_DEFAULT
release     
end


ViridianCity_Text3:
.string "Nadie sabe la identidad del LÍDER\n"
.string "DE GIMNASIO de esta ciudad, pero\l"
.string "espero que vuelva para daros una\l"
.string "buena lección.$"


ViridianCity4::
end


ViridianCity5::
lock     
faceplayer     
msgbox ViridianCity_Text5, MSGBOX_DEFAULT
release     
end

ViridianCity_Text5:
.string "¿Cómo?\n"
.string "¿Enseñarte a atrapar POKÉMON?\l"
.string "¡Para así aprender a robarlos más\l"
.string "rápido, eh!\l"
.string "¡Jamás, ROCKET!$"


ViridianCity6::
lock     
faceplayer     
msgbox ViridianCity_Text6, MSGBOX_DEFAULT
release     
end

ViridianCity_Text6:
.string "Esas POKE BALL de tu cinturón…\n"
.string "¡Seguro que las has robado!$"


ViridianCity9::
lock     
faceplayer     
msgbox ViridianCity_Text9, MSGBOX_DEFAULT
release     
end

ViridianCity_Text9:
.string "¡Espero que nuestro LÍDER\n"
.string "misterioso vuelva pronto y os eche\l"
.string "a patadas de la ciudad!$"


ViridianCityDocumento_100::
msgbox ViridianCityDocumento_Text_100, MSGBOX_SIGN   
end

ViridianCityDocumento_Text_100:
.string "Consejos de entrenador:\n"
	.string "La cantidad de veces que un\l"
	.string "Pokémon puede ejecutar un\l"
	.string "movimiento está limitada por los\l"
	.string "PPs, para restaurarlos acude al\l"
	.string "Centro Pokémon.$"



ViridianCityDocumento_101::
msgbox ViridianCityDocumento_Text_101, MSGBOX_SIGN   
end

ViridianCityDocumento_Text_101:
	.string "CIUDAD VERDE\n"
	.string "El eterno paraíso verde.$"



ViridianCityDocumento_102::
msgbox ViridianCityDocumento_Text_102, MSGBOX_SIGN   
end

ViridianCityDocumento_Text_102:
	.string "PISTAS ENTRENADOR\p"
	.string "¡Atrapa los POKéMON y amplía\n"
	.string "tu colección!\p"
	.string "¡Cuantos más tengas, más fácil\n"
	.string "te será luchar!$"



ViridianCityDocumento_103::
msgbox ViridianCityDocumento_Text_103, MSGBOX_SIGN   
end

ViridianCityDocumento_Text_103:
	.string "Gimnasio de CIUDAD VERDE$"



ViridianCity_7::
lock
faceplayer
msgbox ViridianCity_7_Text_7YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq ViridianCity_7No
msgbox ViridianCity_7_Text_7Yes, MSGBOX_DEFAULT
release
end



ViridianCity_7_Text_7YesNo:
    .string "¿Te gustaría conocer acerca de los\n"
	.string "dos Pokémon insecto?$"


ViridianCity_7No::
msgbox ViridianCity_7_Text_7No, MSGBOX_DEFAULT
release
end


ViridianCity_7_Text_7Yes:
    .string "CATERPIE no tiene veneno, pero\n"
	.string "WEEDLE si.\l"
	.string "Pon cuidado a que tus Pokémon no\l"
	.string "sean envenenados por su Picotazo\l"
	.string "Venenoso.$"



ViridianCity_7_Text_7No:
	.string "Oh, vale.$"

ViridianCity_Escena_5::
applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Escena_5_Move_1
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setvar VAR_UNUSED_0x40F7, 58
warpsilent MAP_ROCKET_HIDEOUT_4F, 16, 0
waitmovement 0x0
release
end

ViridianCity_Escena_5_Move_1:
walk_in_place_down
step_end

ViridianCity_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE126_STATE, 0
goto_if_gt ViridianCity_Entrenador_Especial_3
msgbox ViridianCity_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox ViridianCity_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt ViridianCity_Entrenador_Especial_2
msgbox ViridianCity_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

ViridianCity_Entrenador_Especial_2::
msgbox ViridianCity_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox ViridianCity_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq ViridianCity_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox ViridianCity_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CALVIN_2, ViridianCity_Entrenador_Especial_Texto_8
msgbox ViridianCity_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_BLACK_SLUDGE
msgbox ViridianCity_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox ViridianCity_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE126_STATE, 1
release
end

ViridianCity_Entrenador_Especial_3::
msgbox ViridianCity_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end


ViridianCity_Entrenador_Especial_2_No::
msgbox ViridianCity_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end

ViridianCity_Entrenador_Especial_Texto_1.1:
.string "¡Obtuviste LODO NEGRO de manos de\n"
	.string "ENTRENADOR!$"

ViridianCity_Entrenador_Especial_Texto_1:
.string "COMESUEÑOS es el movimiento de\n"
	.string "daño y recuperación definitivo,\l"
	.string "siempre y cuando el rival esté\l"
	.string "dormido claro, nunca le enseñaría\l"
	.string "un movimiento con ese potencial a\l"
	.string "un ROCKET, aunque puedo hacer una\l"
	.string "excepción y darte algo incluso\l"
	.string "mejor si reunes todas las\l"
	.string "MEDALLAS.$"

ViridianCity_Entrenador_Especial_Texto_2:
.string "…\n"
	.string "…{PAUSE 5}$"

ViridianCity_Entrenador_Especial_Texto_3:
.string "¡JAH!\n"
	.string "¡Lo que imaginaba!\l"
	.string "¡Un ROCKET con MEDALLAS DE\l"
	.string "GIMNASIO!\l"
	.string "¡Lo siento chaval no hay trato!$"

ViridianCity_Entrenador_Especial_Texto_4:
.string "LODO NEGRO recuperará 1/16 de la\n"
	.string "salud del POKÉMON que lo lleve\l"
	.string "equipado a cada turno, ¡pero ten\l"
	.string "cuidado!\l"
	.string "¡Únicamente tendrá estos efectos\l"
	.string "con los tipo VENENO!\l"
	.string "¡Si otro POKÉMON lo lleva equipado\l"
	.string "le restará 1/8 de salud!\l"
	.string "¿No es ideal para castigar a los\l"
	.string "ladrones que intentan robarte\l"
	.string "objetos en plena batalla?$"

ViridianCity_Entrenador_Especial_Texto_5:
.string "¡Imposible!\n"
	.string "¡Debe de ser una broma!\l"
	.string "Está bien, yo también sé lo que es\l"
	.string "haber ganado las 8 MEDALLAS chico,\l"
	.string "si quieres que te de el objeto\l"
	.string "deberás de derrotarme en un\l"
	.string "combate.$"

ViridianCity_Entrenador_Especial_Texto_6:
.string "Entonces, ¿aceptas el reto?$"

ViridianCity_Entrenador_Especial_Texto_7:
.string "Perfecto.\n"
	.string "¡Vamos a comprobar si esas\l"
	.string "MEDALLAS son de verdad o no eres\l"
	.string "más que un farsante!$"

ViridianCity_Entrenador_Especial_Texto_8:
.string "Impresionante, alguien como tú\n"
	.string "debe de tener lo que te voy a dar.$"

ViridianCity_Entrenador_Especial_Texto_9:
.string "Vaya, resultó ser cierto, pocos\n"
	.string "aprovecharán este objeto mejor que\l"
	.string "tú.$"

ViridianCity_Entrenador_Especial_Texto_10:
.string "Ya me lo imaginaba, esas MEDALLAS\n"
	.string "son falsas o robadas.\l"
	.string "¡Largo de aquí!$"
