PalletTown_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
	.byte 0

PalletTown_OnTransition::
setflag FLAG_VISITED_PALLET_TOWN
end

PalletTown2::     
lock     
faceplayer     
msgbox PalletTown_Text_2, MSGBOX_DEFAULT
release     
end

PalletTown2_Despues::
msgbox PalletTown_Text_2.1, MSGBOX_DEFAULT
release
end

PalletTown_Text_2.1:
.string "¡La tecnología es increíble!$" 

PalletTown_Text_2: 
.string "El acceso a la tecnología debería\n"
.string "de estar prohibido para gente como\l"
.string "vosotros.$" 


PalletTown3::
lock     
faceplayer     
msgbox PalletTown_Text_3, MSGBOX_DEFAULT
release     
end

PalletTown_Text_3:
.string "¿Un ROCKET por aquí?\n"
.string "¿Qué estás tramando?$"


PalletTownDocumento_100::
lock     
msgbox PalletTownDocumento_Text_100, MSGBOX_SIGN
release     
end

PalletTownDocumento_Text_100:
.string "Casa de ROJO$"



PalletTownDocumento_101::
lock     
msgbox PalletTownDocumento_Text_101, MSGBOX_SIGN
release     
end

PalletTownDocumento_Text_101:
.string "Casa de AZUL$"



PalletTownDocumento_102::
msgbox PalletTownDocumento_Text_102, MSGBOX_SIGN   
end

PalletTownDocumento_Text_102:
    .string "LABORATORIO DE INVESTIGACIÓN DE\n"
	.string "OAK$"



PalletTownDocumento_103::
lock     
msgbox PalletTownDocumento_Text_103, MSGBOX_AUTOCLOSE
release     
end

PalletTownDocumento_Text_103:
    .string "PISTAS ENTRENADOR\p"
	.string "¡Pulsa START para abrir el MENÚ!$"



PalletTownDocumento_104::
lock     
msgbox PalletTownDocumento_Text_104, MSGBOX_DEFAULT
release     
end

PalletTownDocumento_Text_104:
	.string "PUEBLO PALETA\n"
	.string "¡Donde comienzan las grandes\l"
	.string "aventuras!$"

PalletTown_Encuentro_Oak::
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
addobject 1
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Encuentro_Oak_Move_1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PalletTown_Encuentro_Oak_Move_2
waitmovement 0x0
delay 20
applymovement 1, PalletTown_Encuentro_Oak_Move_3
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 1
playse SE_DOOR
delay 25
applymovement OBJ_EVENT_ID_CAMERA, PalletTown_Encuentro_Oak_Move_4
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 60
release
end

PalletTown_Encuentro_Oak_Move_1:
emote_exclamation_mark
walk_in_place_down
step_end

PalletTown_Encuentro_Oak_Move_2:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
step_end

PalletTown_Encuentro_Oak_Move_3:
walk_in_place_left
walk_in_place_right
walk_in_place_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

PalletTown_Encuentro_Oak_Move_4:
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end


Pueblo_Paleta_Barrera_Sur::
compare VAR_UNUSED_0x40F7, 74
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, Pueblo_Paleta_Barrera_Sur_Move_1
waitmovement 0x0
msgbox Pueblo_Paleta_Barrera_Sur_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Pueblo_Paleta_Barrera_Sur_Move_2
waitmovement 0x0
release
end

Pueblo_Paleta_Barrera_Sur_Texto_1:
.string "(No estoy de vacaciones para\n"
	.string "ponerme a explorar KANTO, tengo\l"
	.string "cosas más importantes que hacer).$"

Pueblo_Paleta_Barrera_Sur_Move_1:
walk_in_place_down
step_end

Pueblo_Paleta_Barrera_Sur_Move_2:
walk_slow_up
step_end

PalletTown_Andra::
lock
msgbox PalletTown_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Texto_3 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Texto_4 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Texto_5 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Texto_7 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Texto_8 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Texto_9 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Texto_10 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Texto_11 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Texto_12 MSGBOX_AUTOCLOSE
release
end

PalletTown_Andra_Texto_1:
	.string "Ya estás aquí.$"

PalletTown_Andra_Texto_2:
	.string "De los que puedan estar en el pueblo,\n"
	.string "solo DALIA y la madre de ROJO pueden\l"
	.string "interesarnos.$"

PalletTown_Andra_Texto_3:
	.string "He comprobado que DALIA no está en su\n"
	.string "casa, ¿qué te parece si le hacemos una\l"
	.string "visita a la madre de ROJO?$"

PalletTown_Andra_Texto_4:
	.string "Parece ser la clase de persona que\n"
	.string "jamás sale, y pasa toda su vida en\l"
	.string "PUEBLO PALETA.$"

PalletTown_Andra_Texto_5:
	.string "Pero recuerda, {PLAYER}: si queremos\n"
	.string "acercarnos a la verdad, nadie en este\l"
	.string "pueblo debe pensar que tratamos de\l"
	.string "acercarnos a ella.$"

PalletTown_Andra_Texto_6:
	.string "De lo contrario… es de esperar que\n"
	.string "aquello que quizás ellos sepan y\l"
	.string "nosotros no, quede fuera de nuestro\l"
	.string "alcance sin siquiera darnos cuenta.$"

PalletTown_Andra_Texto_7:
	.string "Por ello, deberemos a aprender a leer\n"
	.string "entre líneas.$"

PalletTown_Andra_Texto_8:
	.string "OAK es nuestro aliado ahora, no hay\n"
	.string "ningún motivo para que sospechen de\l"
	.string "nosotros.$"

PalletTown_Andra_Texto_9:
	.string "De modo que nuestra coartada será la\n"
	.string "siguiente: después de cumplir con\l"
	.string "nuestra misión en HOENN, y tras mucho\l"
	.string "tiempo regresamos a KANTO.$"

PalletTown_Andra_Texto_10:
	.string "A la espera de volver a reunirnos con\n"
	.string "GIOVANNI, nos tomamos unas merecidas\l"
	.string "vacaciones, que incluyen visitar PUEBLO\l"
	.string "PALETA, la 'cuna de campeones'.$"

PalletTown_Andra_Texto_11:
	.string "Mmm… Parece convincente.$"

PalletTown_Andra_Texto_12:
	.string "Bien… ¿listo? Allá vamos.$"

PalletTown_Andra_Despues::
lock
msgbox PalletTown_Andra_Despues_Texto_1 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_3 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_4 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_5 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_6 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_7 MSGBOX_AUTOCLOSE
release
end

PalletTown_Andra_Despues_Texto_1:
	.string "Este pueblo… sigue igual\n"
	.string "que hace 3 años.$"

PalletTown_Andra_Despues_Texto_2:
	.string "Pura normalidad. Nada que hacer, pero\n"
	.string "eso es todo cuanto se espera de él.$"

PalletTown_Andra_Despues_Texto_3:
	.string "… …$"

PalletTown_Andra_Despues_Texto_4:
	.string "No me equivoqué en mi\n"
	.string "búsqueda por toda HOENN.$"

PalletTown_Andra_Despues_Texto_5:
	.string "Pero en esta ocasión, tal vez haya\n"
	.string "estado viendo fantasmas donde no los\l"
	.string "hay.$"

PalletTown_Andra_Despues_Texto_6:
	.string "Siento haberte hecho perder el tiempo,\n"
	.string "espero que al menos hayas disfrutado el\l"
	.string "viaj…$"

PalletTown_Andra_Despues_Texto_7:
	.string "¡La tecnología es increíble! ¿Verdad?$"
