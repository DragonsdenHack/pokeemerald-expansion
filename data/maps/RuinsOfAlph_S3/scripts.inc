RuinsOfAlph_S3_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RuinsOfAlph_S3_OnFrame
	.byte 0

RuinsOfAlph_S3_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 177, RuinsOfAlphS3_Evento_Final
	.2byte 0

RuinsOfAlphS3_1::
end



RuinsOfAlphS3_2::
end



RuinsOfAlphS3_3::
end

RuinsOfAlphS3_Evento_Final::
lockall
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlphS3_Evento_Final_Move_1
waitmovement 0x0
special RemoveCameraObject
delay 10
msgbox RuinsOfAlphS3_Evento_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_2
waitmovement 0x0
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_3
waitmovement 0x0
msgbox RuinsOfAlphS3_Evento_Final_Texto_2 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 3
delay 15
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_4
waitmovement 0x0
playse SE_PIN
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_2
waitmovement 0x0
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_6
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_5
waitmovement 0x0
msgbox RuinsOfAlphS3_Evento_Final_Texto_3 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_8
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_7
waitmovement 0x0
msgbox RuinsOfAlphS3_Evento_Final_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox RuinsOfAlphS3_Evento_Final_Texto_5 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_9
waitmovement 0x0
msgbox RuinsOfAlphS3_Evento_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlphS3_Evento_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_10
waitmovement 0x0
msgbox RuinsOfAlphS3_Evento_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_8
waitmovement 0x0
msgbox RuinsOfAlphS3_Evento_Final_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_2
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_2
waitmovement 0x0
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
removeobject 2
playse SE_M_EMBER
delay 20
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_11
waitmovement 0x0
msgbox RuinsOfAlphS3_Evento_Final_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_11
waitmovement 0x0
msgbox RuinsOfAlphS3_Evento_Final_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlphS3_Evento_Final_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_12
waitmovement 0x0
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_13
msgbox RuinsOfAlphS3_Evento_Final_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlphS3_Evento_Final_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlphS3_Evento_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 28
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
fadescreenspeed FADE_TO_BLACK, 12
delay 30
warpsilent MAP_ECRUTEAK_TIN_TOWER_ROOF, 6, 13
setvar VAR_UNUSED_0x40F7, 178
release
end

RuinsOfAlphS3_Evento_Final_Texto_1:
.string "GIOVANNI: ...$"

RuinsOfAlphS3_Evento_Final_Texto_2:
.string "¿Pero, cómo tú?$"

RuinsOfAlphS3_Evento_Final_Texto_3:
.string "ANDRA: ¿Otro UNOWN dorado?\n"
	.string "¡¿Este lugar no termina nunca?!\l"
	.string "¡No vais a poder conmigo!\l"
	.string "Me da igual si tengo que estar 10\l"
	.string "o 20 horas seguidas aquí dentro\l"
	.string "peleando, ¡llegaré hasta el final!$"

RuinsOfAlphS3_Evento_Final_Texto_4:
.string "GIOVANNI: ¡Espera!$"

RuinsOfAlphS3_Evento_Final_Texto_5:
.string "Ese...ENTRENADOR, ¿lo has visto?\n"
	.string "Debía de ser el LÍDER de la secta\l"
	.string "de LAVANDA.$"

RuinsOfAlphS3_Evento_Final_Texto_6:
.string "ANDRA: Si lo era, ¡menuda\n"
	.string "decepción!\l"
	.string "Solo vi a un tipo usar una magia\l"
	.string "muy extraña para pasar las pruebas\l"
	.string "sin combatir.$"

RuinsOfAlphS3_Evento_Final_Texto_7:
.string "GIOVANNI: Así es, esa magia solo\n"
	.string "debe estar a su alcance, me\l"
	.string "pregunto si...$"

RuinsOfAlphS3_Evento_Final_Texto_8:
.string "ANDRA: ¡No podrá con {PLAYER}!\n"
	.string "¡Tenemos que alcanzarle, aún\l"
	.string "estamos a tiempo!$"

RuinsOfAlphS3_Evento_Final_Texto_9:
.string "GIOVANNI: ¡ANDRA!\n"
	.string "¡Tú equipo no está hecho para\l"
	.string "lidiar con un LUGIA PRIM...!$"

RuinsOfAlphS3_Evento_Final_Texto_10:
.string "ANDRA: ¿Qué ha sido eso?$"

RuinsOfAlphS3_Evento_Final_Texto_11:
.string "GIOVANNI: ¿L...lo ha logrado?$"

RuinsOfAlphS3_Evento_Final_Texto_12:
.string "ANDRA: Toda esa energía, esa\n"
	.string "tensión en el ambiente, se ha...\l"
	.string "esfumado...$"

RuinsOfAlphS3_Evento_Final_Texto_13:
.string "GIOVANNI: Entonces...\n"
	.string "{PLAYER}, el FUERTE VÍNCULO, ¿han\l"
	.string "triunfado?\l"
	.string "¿Quiere decir que las enseñanzas\l"
	.string "de los sabios de JOHTO eran\l"
	.string "ciertas?\l"
	.string "¿Un POKÉMON mortal puede alcanzar\l"
	.string "la inmortalidad si estamos\l"
	.string "dispuestos a acompañarle en el\l"
	.string "camino?\l"
	.string "¿A creer en él?\l"
	.string "¿Todos parten de puntos\l"
	.string "diferentes, pero a la vez todos\l"
	.string "pueden llegar a tocar el mismo\l"
	.string "cielo?$"

RuinsOfAlphS3_Evento_Final_Texto_14:
.string "...$"

RuinsOfAlphS3_Evento_Final_Texto_15:
.string "Mucho nos queda aún por aprender...$"

RuinsOfAlphS3_Evento_Final_Move_1:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_down
walk_slow_down
step_end

RuinsOfAlphS3_Evento_Final_Move_2:
emote_exclamation_mark
step_end

RuinsOfAlphS3_Evento_Final_Move_3:
walk_in_place_down
step_end

RuinsOfAlphS3_Evento_Final_Move_4:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

RuinsOfAlphS3_Evento_Final_Move_5:
face_left
step_end

RuinsOfAlphS3_Evento_Final_Move_6:
walk_left
walk_up
step_end

RuinsOfAlphS3_Evento_Final_Move_7:
face_up
step_end

RuinsOfAlphS3_Evento_Final_Move_8:
walk_fast_up
walk_in_place_up
step_end

RuinsOfAlphS3_Evento_Final_Move_9:
face_right
step_end

RuinsOfAlphS3_Evento_Final_Move_10:
walk_fast_right
walk_in_place_down
step_end

RuinsOfAlphS3_Evento_Final_Move_11:
walk_up
step_end

RuinsOfAlphS3_Evento_Final_Move_12:
walk_slow_up
walk_slow_left
walk_in_place_left
step_end

RuinsOfAlphS3_Evento_Final_Move_13:
face_down
step_end

RuinsOfAlphS3_Combate_Giovanni::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Giovanni_Move_1
waitmovement 0x0
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Giovanni_Move_2
waitmovement 0x0
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Giovanni_Move_3
applymovement 1, RuinsOfAlphS3_Combate_Giovanni_Move_4
waitmovement 0x0
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RuinsOfAlphS3_Combate_Giovanni_Move_5
waitmovement 0x0
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, RuinsOfAlphS3_Combate_Giovanni_Move_4
waitmovement 0x0
delay 15
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RuinsOfAlphS3_Combate_Giovanni_Move_5
waitmovement 0x0
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 5
release
end

RuinsOfAlphS3_Combate_Giovanni_Texto_1:
.string "GIOVANNI: Esta es la última prueba\n"
	.string "{PLAYER}. Lo presiento.$"

RuinsOfAlphS3_Combate_Giovanni_Texto_2:
.string "Antes fue el HO-OH dorado,\n"
	.string "ahora debe de venir...$"

RuinsOfAlphS3_Combate_Giovanni_Texto_3:
.string "...$"

RuinsOfAlphS3_Combate_Giovanni_Texto_4:
.string "No podré continuar. Si la leyenda\n"
	.string "es cierta, LUGIA PRIMIGENIO\l"
	.string "recupera todo el poder de las\l"
	.string "profundidades del océano. Mis TIPO\l"
	.string "TIERRA no podrán ante tal POKÉMON,\l"
	.string "la etiqueta de LEGENDARIO MAYOR se\l"
	.string "le queda corta. Si tan solo\l"
	.string "hubiéramos podido acelerar un poco\l"
	.string "más las últimas versiones de\l"
	.string "MEWTWO...$"

RuinsOfAlphS3_Combate_Giovanni_Texto_5:
.string "Ahora depende de ti, {PLAYER}.\n"
	.string "Los dragones huyen del HO-OH\l"
	.string "dorado nada más verlo, los TIPO\l"
	.string "TIERRA nada pueden hacer ante la\l"
	.string "bestia de los mares.\l"
	.string "Definitivamente, hemos subestimado\l"
	.string "este lugar, pero tú eres lo más\l"
	.string "cercano al límite alcanzable por\l"
	.string "un ENTRENADOR que conozco. Si\l"
	.string "tenemos opciones, pasan por tu\l"
	.string "mano.$"

RuinsOfAlphS3_Combate_Giovanni_Texto_6:
.string "Es todo lo que puedo hacer por ti,\n"
	.string "tu equipo POKÉMON vuelve a estar\l"
	.string "en plenas facultades.\l"
	.string "¡Demuéstrales a esos LEGENDARIOS\l"
	.string "el poder del FUERTE VÍNCULO!$"

RuinsOfAlphS3_Combate_Giovanni_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

RuinsOfAlphS3_Combate_Giovanni_Move_2:
walk_up
walk_left
walk_up
walk_up
step_end

RuinsOfAlphS3_Combate_Giovanni_Move_3:
face_right
step_end

RuinsOfAlphS3_Combate_Giovanni_Move_4:
face_left
step_end

RuinsOfAlphS3_Combate_Giovanni_Move_5:
face_up
step_end


RuinsOfAlphS3_Combate_Unown::
compare VAR_SECRET_BASE_LOW_TV_FLAGS, 5
goto_if_gt RuinsOfAlphS2_Combate_Real_Unown_2
lock
playmoncry SPECIES_UNOWN, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_1 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
trainerbattle_no_intro TRAINER_ANDRA_1, RuinsOfAlphS3_Combate_Unown_Texto_2
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Unown_Move_1
applymovement 1, RuinsOfAlphS3_Combate_Unown_Move_1
waitmovement 0x0
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
removeobject 2
playse SE_M_EMBER
delay 20
msgbox RuinsOfAlphS2_Combate_Real_Unown_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Unown_Move_2
applymovement 1, RuinsOfAlphS3_Combate_Unown_Move_3
waitmovement 0x0
msgbox RuinsOfAlphS3_Combate_Unown_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlphS3_Combate_Unown_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, RuinsOfAlphS3_Combate_Unown_Move_4
waitmovement 0x0
msgbox RuinsOfAlphS3_Combate_Unown_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Unown_Move_5
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Unown_Move_6
waitmovement 0x0
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
fadescreen 1
delay 20
addobject 2
fadescreen 0
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 6
release
end

RuinsOfAlphS3_Combate_Unown_Texto_2:
.string "... ... ... ...$"

RuinsOfAlphS3_Combate_Unown_Texto_4:
.string "GIOVANNI: ¡Lo sabía, sabía que tú\n"
	.string "podrías lograrlo!$"

RuinsOfAlphS3_Combate_Unown_Texto_5:
.string "Ahora entiendo mejor las palabras\n"
	.string "del MAESTRO ANCIANO. Él no quiere\l"
	.string "ver la región a merced de un\l"
	.string "POKÉMON con un poder\l"
	.string "descontrolado. Si las FORMAS\l"
	.string "PRIMIGENIAS de LUGIA y HO-OH son\l"
	.string "solo las pruebas, no quiero\l"
	.string "imaginarme el poder de ese DRAGÓN\l"
	.string "ORIGINAL. Algo así podría provocar\l"
	.string "una catástrofe peor que la guerra,\l"
	.string "no vamos a arriesgar eso por\l"
	.string "obtener precisamente información\l"
	.string "que podría proporcionarnos armas\l"
	.string "para defender la región.$"

RuinsOfAlphS3_Combate_Unown_Texto_6:
.string "Debes evitar que ese tipo devuelva\n"
	.string "a KYUREM su forma original, ya\l"
	.string "tendremos tiempo de investigarlo,\l"
	.string "{PLAYER}, cuando toda JOHTO y KANTO\l"
	.string "estén a salvo...$"


RuinsOfAlphS3_Combate_Unown_Move_1:
face_up
step_end

RuinsOfAlphS3_Combate_Unown_Move_2:
face_down
step_end

RuinsOfAlphS3_Combate_Unown_Move_3:
walk_slow_up
step_end

RuinsOfAlphS3_Combate_Unown_Move_4:
walk_in_place_up
step_end

RuinsOfAlphS3_Combate_Unown_Move_5:
walk_slow_up
walk_slow_up
step_end

RuinsOfAlphS3_Combate_Unown_Move_6:
emote_exclamation_mark
walk_in_place_down
step_end
