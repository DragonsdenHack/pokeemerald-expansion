Route49_MapScripts::
	.byte 0

Route49_1::
lock     
faceplayer     
msgbox Route49_Text_1, MSGBOX_DEFAULT
release     
end

Route49_Text_1:
.string "Nada ocurrió nunca en el pasado;\n"
.string "ocurrió en el ahora. Nada ocurrirá\l"
.string "nunca en el futuro; ocurrirá en el\l"
.string "ahora. Lo que piensas que es el pasado\l"
.string "es un registro almacenado en la mente\l"
.string "de un ahora anterior. Cuando recuerdas\l"
.string "el pasado, activas un registro\l"
.string "memorístico, y lo haces en el ahora. El\l"
.string "futuro es un ahora imaginado, una\l"
.string "proyección de la mente. Cuando llega el\l"
.string "futuro, llega como un ahora. Cuando\l"
.string "piensas en el futuro, piensas ahora. Es\l"
.string "evidente que el pasado y futuro no\l"
.string "tienen realidad propia. Del mismo modo\l"
.string "que la Luna no tiene luz propia y solo\l"
.string "puede reflejar la luz del Sol, el pasado\l"
.string "y el futuro solo son pálidos reflejos\l"
.string "de la luz, el poder y la realidad del\l"
.string "eterno presente. Su realidad les ha\l"
.string "sido <prestada> por el ahora.$"



Route49_2::
lock     
faceplayer     
msgbox Route49_Text_2, MSGBOX_DEFAULT
release     
end

Route49_Text_2:
.string "Este lugar es aún más antiguo que las\n"
.string "pagodas de IRIS y MALVA, es el lugar en\l"
.string "el que el VÍNCULO entre humanos y\l"
.string "POKÉMON nació en JOHTO.$"



Route49_4::
lock     
faceplayer     
msgbox Route49_Text_4, MSGBOX_DEFAULT
release     
end

Route49_Text_4:
.string "La presencia es la llave de la libertad,\n"
.string "de modo que solo puedes ser libre\l"
.string "ahora.$"



Route49_5::
lock     
faceplayer     
msgbox Route49_Text_5, MSGBOX_DEFAULT
release     
end

Route49_Text_5:
.string "¿EUSINE te ha llevado hasta aquí?\n"
.string "Debes tener algo muy especial, EUSINE\l"
.string "es muy reacio a que gente de fuera\l"
.string "acceda a este lugar.$"



Route49_7::
lock     
faceplayer     
msgbox Route49_Text_7, MSGBOX_DEFAULT
release     
end

Route49_Text_7:
.string "Algo cambió no hace mucho en JOHTO, ese\n"
.string "cambió modificó las leyes del MUNDO\l"
.string "POKÉMON para siempre.$"

Route49_Combate_Andra::
lock
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_2
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route49_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route49_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 10, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 10, Route49_Combate_Andra_Move_1
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, Route49_Combate_Andra_Move_2
applymovement 9, Route49_Combate_Andra_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Route49_Combate_Andra_Move_3
waitmovement 0x0
delay 20
msgbox Route49_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 9, Route49_Combate_Andra_Move_2
msgbox Route49_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Andra_Move_6
applymovement 10, Route49_Combate_Andra_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Route49_Combate_Andra_Move_1
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
applymovement 9, Route49_Combate_Andra_Move_4
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 10, Route49_Combate_Andra_Move_2
waitmovement 0x0
delay 20
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_8
applymovement 10, Route49_Combate_Andra_Move_5
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 20
playse SE_BREAKABLE_DOOR
applymovement 10, Route49_Combate_Andra_Move_6
waitmovement 0x0
delay 10
msgbox Route49_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, Route47_Encuentro_Maestro_Anciano_Move_2
waitmovement 0x0
delay 10
msgbox Route49_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_1, Route49_Combate_Andra_Texto_13
delay 20
playse SE_PIN
applymovement 9, Route49_Combate_Andra_Move_7
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_14 MSGBOX_AUTOCLOSE
applymovement 10, Route49_Combate_Andra_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Route49_Combate_Andra_Move_1
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_15 MSGBOX_AUTOCLOSE
delay 10
msgbox Route49_Combate_Andra_Texto_16 MSGBOX_AUTOCLOSE
delay 10
msgbox Route49_Combate_Andra_Texto_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, Route49_Combate_Andra_Move_7
applymovement OBJ_EVENT_ID_PLAYER, Route49_Combate_Andra_Move_7
applymovement 9, Route49_Combate_Andra_Move_2
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 11
playse SE_EXIT
waitse
msgbox Route49_Combate_Andra_Texto_18 MSGBOX_AUTOCLOSE
applymovement 11, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_19 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Maestro_Anciano_Move_2
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox Route49_Combate_Andra_Texto_21 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Andra_Move_6
applymovement 11, Route47_Encuentro_Andra_Move_6
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_22 MSGBOX_AUTOCLOSE
applymovement 11, Route49_Combate_Andra_Move_1
waitmovement 0x0
playse SE_DOOR
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 11
delay 15
applymovement 10, Route49_Combate_Andra_Move_8
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_23 MSGBOX_AUTOCLOSE
applymovement 10, Route49_Combate_Andra_Move_9
applymovement OBJ_EVENT_ID_PLAYER, Route49_Combate_Andra_Move_10
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
removeobject 10
playse SE_DOOR
delay 15
setvar VAR_VERDANTURF_TOWN_STATE, 9
release
end


Route49_Combate_Andra_Move_10:
lock_facing_direction
walk_right
unlock_facing_direction
step_end

Route49_Combate_Andra_Move_9:
walk_right
walk_up
step_end

Route49_Combate_Andra_Move_8:
walk_in_place_up
step_end

Route49_Combate_Andra_Move_7:
emote_exclamation_mark
step_end

Route49_Combate_Andra_Move_6:
walk_fast_right
face_up
step_end

Route49_Combate_Andra_Move_5:
walk_slow_left
step_end

Route49_Combate_Andra_Move_4:
walk_in_place_down
step_end

Route49_Combate_Andra_Move_3:
walk_slow_left
walk_slow_left
step_end

Route49_Combate_Andra_Move_2:
face_right
emote_exclamation_mark
step_end

Route49_Combate_Andra_Move_1:
face_up
step_end

Route49_Combate_Andra_Texto_1:
.string "PENSADOR: Es…imposible, el último en\n"
	.string "pasar la prueba fue EUSINE, hace ya\l"
	.string "más de una década.$"

Route49_Combate_Andra_Texto_2:
.string "ANDRA: ¿Cómo sabes que la he pasado?\n"
	.string "He consumido esa extraña piedra\l"
	.string "dorada, uno de mis POKÉMON reaccionó a\l"
	.string "ella, no tengo pruebas de que cumplí el\l"
	.string "reto.$"

Route49_Combate_Andra_Texto_3:
.string "PENSADOR: Tenemos una conexión muy\n"
	.string "especial con el POKÉMON SAGRADO, lo que\l"
	.string "vea, nuestro GRAN MAESTRO también lo\l"
	.string "verá.$"

Route49_Combate_Andra_Texto_4:
.string "ANDRA: No era para tanto, ese POKÉMON\n"
	.string "era muy fuerte. Pero, por muy fuerte\l"
	.string "que sea, un solo POKÉMON poco puede\l"
	.string "hacer ante un equipo de 6 bien\l"
	.string "entrenado.$"

Route49_Combate_Andra_Texto_5:
.string "PENSADOR: No lo entiendes chica, la\n"
	.string "dificultad de la prueba estriba en que\l"
	.string "el dragón sagrado se digne a aparecer,\l"
	.string "de ningún otro modo podría obtenerse\l"
	.string "ese objeto.$"

Route49_Combate_Andra_Texto_6:
.string "…$"

Route49_Combate_Andra_Texto_7:
.string "¿Qué? ¿Tú también derrotaste al\n"
	.string "dragón? Eso no es posible, siempre ha\l"
	.string "bendecido a una única persona a la vez.$"

Route49_Combate_Andra_Texto_8:
.string "ANDRA: ¿No has dicho que tu GRAN\n"
	.string "MAESTRO lo sabe todo? Él podrá\l"
	.string "probarlo.$"

Route49_Combate_Andra_Texto_9:
.string "PENSADOR: Lo siento, pero nuestras\n"
	.string "costumbres no contemplan esta\l"
	.string "excepción, deberéis de combatir por el\l"
	.string "honor de entrar a este sagrado lugar.$"

Route49_Combate_Andra_Texto_10:
.string "ANDRA: De modo que así va a ser…$"

Route49_Combate_Andra_Texto_11:
.string "No creas que combatiré porque ha sido\n"
	.string "tu voluntad, anciano, tampoco porque\l"
	.string "esté de acuerdo con esta injusticia. Si\l"
	.string "combato ahora con {PLAYER} es\l"
	.string "únicamente por el mero placer de\l"
	.string "enfrentar a un rival a mi altura.$"

Route49_Combate_Andra_Texto_12:
.string "Vamos, ¡dejemos con la boca abierta a\n"
	.string "estos monjes, mostrémosles los frutos\l"
	.string "de todo nuestro entrenamiento!$"

Route49_Combate_Andra_Texto_13:
.string "Ja, ja, ja… Incluso rozar la perfección\n"
	.string "es insuficiente contra ti.$"

Route49_Combate_Andra_Texto_14:
.string "PENSADOR: Extraordinario, vuestro\n"
	.string "nivel está casi a la altura de nuestro\l"
	.string "GRAN MAESTRO.$"

Route49_Combate_Andra_Texto_15:
.string "ANDRA: ¿Casi? He visto cosas en tu\n"
	.string "región que tú jamás creerías,\l"
	.string "{PLAYER} incluso más que yo. Estoy\l"
	.string "harta de enfrentar a supuestos rivales\l"
	.string "superiores solo para derrotarlos con mi\l"
	.string "tenacidad.$"

Route49_Combate_Andra_Texto_16:
.string "PENSADOR: ¿Cómo osas…?$"

Route49_Combate_Andra_Texto_17:
.string "EUSINE: Dicen la verdad.$"

Route49_Combate_Andra_Texto_18:
.string "PENSADOR: ¡EUSINE! ¿Tú?$"

Route49_Combate_Andra_Texto_19:
.string "EUSINE: El POKÉMON SAGRADO le ha\n"
	.string "comunicado todo al GRAN MAESTRO. Los\l"
	.string "dos deben subir, sin excepción.$"

Route49_Combate_Andra_Texto_20:
.string "PENSADOR: Como el GRAN MAESTRO ordene.$"

Route49_Combate_Andra_Texto_21:
.string "EUSINE: Bien.$"

Route49_Combate_Andra_Texto_22:
.string "Os esperamos arriba a los dos…si sois\n"
	.string "capaces de llegar.$"

Route49_Combate_Andra_Texto_23:
.string "ANDRA: Veremos de que es capaz ahora\n"
	.string "tu maestro.$"


Route49_Barrera::
lock
applymovement 9, Route47_Encuentro_Andra_Move_7
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route49_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_2
waitmovement 0x0
setvar VAR_VERDANTURF_TOWN_STATE, 7
release
end

Route49_Barrera_2::
lock
applymovement 9, Route47_Encuentro_Andra_Move_7
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route49_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_2
waitmovement 0x0
release
end

Route49_Barrera_Texto_1:
.string "Seas quien seas, no puedes entrar a\n"
	.string "este lugar sagrado. Solo obteniendo el\l"
	.string "objeto dorado en la ruta del norte\l"
	.string "demostrarás que mereces un lugar aquí.$"

Route49_Protector_Pagoda::
lock
faceplayer
compare VAR_VERDANTURF_TOWN_STATE, 8
goto_if_gt Route49_Protector_Pagoda_2
msgbox Route49_Barrera_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Protector_Pagoda_2::
msgbox Route49_Protector_Pagoda_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route49_Protector_Pagoda_Texto_2:
.string "Mis más sinceras disculpas. Somos muy\n"
	.string "estrictos con las normas, de lo\l"
	.string "contrario este lugar no hubiera\l"
	.string "permanecido tanto tiempo intacto.$"
