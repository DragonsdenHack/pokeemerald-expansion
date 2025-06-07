LavenderTown_Pasado_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LavenderTown_Pasado_OnResume
	.byte 0

LavenderTown_Pasado_OnResume:
map_script_2 VAR_UNUSED_0x40F8, 15, LavenderTown_Pasado_Gray
	.2byte 0

LavenderTown_Pasado_Gray::
call Script_SetGrayscaleTint
setvar VAR_UNUSED_0x40F8, 16
end

LavenderTown_PasadoDocumento_100::
msgbox LavenderTown_PasadoDocumento_Text_100, MSGBOX_SIGN   
end

LavenderTown_Pasado_Pantalla_Blanco::
lock
call Script_RemoveTint
release
end

LavenderTown_Pasado_Pantalla_Gris::
lock
call Script_SetGrayscaleTint
release
end

LavenderTown_PasadoDocumento_Text_100:
	.string "LAVANDIA POKéMON-ARENA$"

LavenderTown_PasadoDocumento_101::
msgbox LavenderTown_PasadoDocumento_Text_101, MSGBOX_SIGN   
end

LavenderTown_PasadoDocumento_Text_101:
	.string "POKéMON-CENTER!$"


LavenderTown_Pasado_Agatha::
lock
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 5
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Agatha_Move_1
waitmovement 0x0
playmoncry SPECIES_DROWZEE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Agatha_Move_2
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_1 MSGBOX_AUTOCLOSE
playse SE_M_PSYBEAM
waitse
delay 15
playse SE_SUPER_EFFECTIVE
waitse
delay 15
playmoncry SPECIES_GASTLY, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Agatha_Move_3
waitmovement 0x0
call Script_SetGrayscaleTint
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Agatha_Move_3.1
waitmovement 0x0
special RemoveCameraObject
applymovement 6, LavenderTown_Pasado_Agatha_Move_4
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, LavenderTown_Pasado_Agatha_Move_6
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, LavenderTown_Pasado_Agatha_Move_5
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Agatha_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, LavenderTown_Pasado_Agatha_Move_7
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, LavenderTown_Pasado_Agatha_Move_8
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Agatha_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, LavenderTown_Pasado_Agatha_Move_4
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_8 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, LavenderTown_Pasado_Agatha_Move_9
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_9 MSGBOX_AUTOCLOSE
delay 25
playse SE_PIN
applymovement 5, LavenderTown_Pasado_Agatha_Move_2.1
applymovement 6, LavenderTown_Pasado_Agatha_Move_2.1
msgbox LavenderTown_Pasado_Agatha_Texto_10 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 1, LavenderTown_Pasado_Agatha_Move_10
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Agatha_Move_11
waitmovement 0x0
special RemoveCameraObject
playse SE_LEDGE
applymovement 5, LavenderTown_Pasado_Agatha_Move_12
waitmovement 0x0
playse SE_LEDGE
applymovement 5, LavenderTown_Pasado_Agatha_Move_12
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Agatha_Move_13
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_12 MSGBOX_AUTOCLOSE
applymovement 5, LavenderTown_Pasado_Agatha_Move_15
applymovement 6, LavenderTown_Pasado_Agatha_Move_14
waitmovement 0x0
delay 10
applymovement 1, LavenderTown_Pasado_Agatha_Move_16
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_13 MSGBOX_AUTOCLOSE
delay 35
msgbox LavenderTown_Pasado_Agatha_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Agatha_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Agatha_Move_17
waitmovement 0x0
delay 10
applymovement 5, LavenderTown_Pasado_Agatha_Move_18
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 5
removeobject 6
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Agatha_Move_11.1
waitmovement 0x0
setflag FLAG_HOENN_163
special RemoveCameraObject
setvar VAR_UNUSED_0x40F8, 17
release
end

LavenderTown_Pasado_Agatha_Move_18:
walk_slow_up
delay_16
delay_16
face_down
delay_16
delay_16
face_up
delay_16
delay_16
face_down
delay_16
walk_slow_down
delay_16
delay_16
walk_slow_down
walk_slow_right
walk_slow_down
walk_down
walk_down
walk_fast_down
walk_fast_down
step_end


LavenderTown_Pasado_Agatha_Move_17:
walk_down
walk_down
walk_down
walk_down
step_end

LavenderTown_Pasado_Agatha_Move_16:
walk_in_place_up
step_end

LavenderTown_Pasado_Agatha_Move_15:
walk_slow_right
delay_16
walk_slow_right
delay_16
face_up
step_end

LavenderTown_Pasado_Agatha_Move_14:
walk_right
walk_right
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


LavenderTown_Pasado_Agatha_Move_13:
walk_in_place_up
step_end

LavenderTown_Pasado_Agatha_Move_12:
jump_in_place_down
step_end

LavenderTown_Pasado_Agatha_Move_11.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
step_end

LavenderTown_Pasado_Agatha_Move_11:
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

LavenderTown_Pasado_Agatha_Move_10:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

LavenderTown_Pasado_Agatha_Move_9:
face_left
step_end

LavenderTown_Pasado_Agatha_Move_8:
face_up
step_end

LavenderTown_Pasado_Agatha_Move_7:
walk_right
step_end

LavenderTown_Pasado_Agatha_Move_6:
walk_left
step_end

LavenderTown_Pasado_Agatha_Move_5:
walk_in_place_left
step_end

LavenderTown_Pasado_Agatha_Move_4:
walk_in_place_right
step_end

LavenderTown_Pasado_Agatha_Move_3:
walk_slow_down
walk_slow_down
step_end

LavenderTown_Pasado_Agatha_Move_3.1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_left
walk_slow_left
step_end

LavenderTown_Pasado_Agatha_Move_2.1:
face_down
emote_exclamation_mark
step_end

LavenderTown_Pasado_Agatha_Move_2:
emote_exclamation_mark
step_end

LavenderTown_Pasado_Agatha_Move_1:
walk_in_place_down
step_end

LavenderTown_Pasado_Agatha_Texto_1:
	.string "TRAUMATO! BEENDE ES MIT KONFUSION!$"

LavenderTown_Pasado_Agatha_Texto_2:
	.string "Ich habe schon wieder gewonnen!$"

LavenderTown_Pasado_Agatha_Texto_3:
	.string "Nein! Das ist nicht fair!$"

LavenderTown_Pasado_Agatha_Texto_4:
	.string "Warte nur ab! Wenn mein NEBULAK erst\n"
	.string "einmal SPUKBALL beherrscht, dann werde\l"
	.string "ich dich besiegen! Du wirst schon\l"
	.string "sehen!$"

LavenderTown_Pasado_Agatha_Texto_5:
	.string "Ich kann es kaum erwarten, zu sehen,\n"
	.string "wie es sich zu ALPOLLO entwickelt!$"

LavenderTown_Pasado_Agatha_Texto_6:
	.string "Aber vergiss nicht, dass ich dann ein\n"
	.string "widerstandsfähiges HYPNO besitzen\l"
	.string "werde, das all deinen Attacken\l"
	.string "standhalten kann!$"

LavenderTown_Pasado_Agatha_Texto_7:
	.string "Na ja, schon, aber … GENGAR ist der\n"
	.string "beste GEIST-Typ in ganz KANTO und\l"
	.string "JOHTO. Und ich werde bis zum Umfallen\l"
	.string "trainieren, damit sich mein NEBULAK zu\l"
	.string "einem entwickelt!$"

LavenderTown_Pasado_Agatha_Texto_8:
	.string "Hmmm… Kann sich HYPNO nicht noch\n"
	.string "weiter entwickeln?$"

LavenderTown_Pasado_Agatha_Texto_9:
	.string "Natürlich nicht!$"

LavenderTown_Pasado_Agatha_Texto_10:
	.string "????: Kinder! Sie ist zurück!$"

LavenderTown_Pasado_Agatha_Texto_11:
	.string "Ja! Meine Meisterin!\p"
	.string "Sie hat es wirklich geschafft!$"

LavenderTown_Pasado_Agatha_Texto_12:
	.string "Alle befinden sich schon in der ARENA.\n"
	.string "Beeilt euch bitte.$"

LavenderTown_Pasado_Agatha_Texto_13:
	.string "AGATHE! Worauf wartest du noch?$"

LavenderTown_Pasado_Agatha_Texto_14:
	.string "Ich habe gerade nur den POKéMON-TURM\n"
	.string "betrachtet.$"

LavenderTown_Pasado_Agatha_Texto_15:
	.string "Oh, meine junge AGATHE!\p"
	.string "Du hast noch dein ganzes Leben\n"
	.string "Zeit, ihn zu betrachten!$"

LavenderTown_Pasado_Lider::
lock
delay 10
applymovement 8, LavenderTown_Pasado_Lider_Move_1
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Lider_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_2
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, LavenderTown_Pasado_Lider_Move_1
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Lider_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_3
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, LavenderTown_Pasado_Lider_Move_4
waitmovement 0x0
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_5
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, LavenderTown_Pasado_Lider_Move_1
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Lider_Texto_6 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Pasado_Lider_Move_6
msgbox LavenderTown_Pasado_Lider_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_7
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_8
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_7
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Lider_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_10
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_11 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Pasado_Lider_Move_11
waitmovement 0x0
playse SE_DOOR
opendoor 9, 16
waitdooranim
applymovement 9, LavenderTown_Pasado_Lider_Move_12
waitmovement 0x0
removeobject 9
playse SE_EXIT
delay 20
applymovement 7, LavenderTown_Pasado_Lider_Move_1
waitmovement 0x0
delay 20
msgbox LavenderTown_Pasado_Lider_Texto_12 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, LavenderTown_Pasado_Lider_Move_13
waitmovement 0x0
removeobject 7
playse SE_EXIT
delay 30
applymovement 8, LavenderTown_Pasado_Lider_Move_14
waitmovement 0x0
removeobject 8
playse SE_EXIT
closedoor 9, 16
waitdooranim
setflag FLAG_HOENN_70
setvar VAR_UNUSED_0x40F8, 18
release
end

LavenderTown_Pasado_Lider_Move_14:
face_up
delay_16
delay_8
walk_slow_up
delay_16
walk_left
walk_up
step_end

LavenderTown_Pasado_Lider_Move_13:
walk_left
walk_left
walk_up
step_end

LavenderTown_Pasado_Lider_Move_12:
walk_up
step_end

LavenderTown_Pasado_Lider_Move_11:
walk_in_place_up
step_end

LavenderTown_Pasado_Lider_Move_10:
walk_slow_up
step_end

LavenderTown_Pasado_Lider_Move_9:
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end

LavenderTown_Pasado_Lider_Move_8:
delay_8
face_up
delay_16
delay_8
face_right
delay_16
delay_8
walk_in_place_right
step_end

LavenderTown_Pasado_Lider_Move_7:
walk_in_place_right
step_end

LavenderTown_Pasado_Lider_Move_6:
walk_down
face_right
step_end

LavenderTown_Pasado_Lider_Move_5:
face_down
step_end

LavenderTown_Pasado_Lider_Move_3:
face_up
step_end

LavenderTown_Pasado_Lider_Move_4:
walk_slow_left
step_end

LavenderTown_Pasado_Lider_Move_2:
delay_8
face_up
delay_16
delay_8
walk_in_place_right
step_end

LavenderTown_Pasado_Lider_Move_1:
walk_in_place_left
step_end

LavenderTown_Pasado_Lider_Texto_1:
	.string "Stimmt es, dass du als ARENALEITER\n"
	.string "zurücktreten wirst?$"

LavenderTown_Pasado_Lider_Texto_2:
	.string "Ja. Es ist wahr, MORPHEUS. Meine Frau\n"
	.string "und ich werden im nächsten Jahr von\l"
	.string "hier wegziehen.$"

LavenderTown_Pasado_Lider_Texto_3:
	.string "MORPHEUS: Ich habe so viel von dir\n"
	.string "gelernt.\p"
	.string "Ich werde in deine Fußstapfen treten!$"

LavenderTown_Pasado_Lider_Texto_4:
	.string "Eines Tages wird du das, MORPHEUS.\p"
	.string "Eines Tages …$"

LavenderTown_Pasado_Lider_Texto_5:
	.string "MORPHEUS: Aber… man hört, dass die\n"
	.string "Stadtbewohner immer mehr Gefallen am\l"
	.string "Kämpfen finden.$"

LavenderTown_Pasado_Lider_Texto_6:
	.string "Es kann nur acht ARENEN geben.\p"
	.string "jede Stadt eine hätte, dann\n"
	.string "wäre diese hier …$"

LavenderTown_Pasado_Lider_Texto_7:
	.string "Ganz ruhig! Beruhig dich erst einmal!$"

LavenderTown_Pasado_Lider_Texto_8:
	.string "Nichts hält für immer. Aber bevor es so\n"
	.string "weit ist, liegen noch viele Jahre vor\l"
	.string "uns.$"

LavenderTown_Pasado_Lider_Texto_9:
	.string "Ich habe dir täglich zugesehen. Ihr\n"
	.string "beide habt Talent und noch wichtiger:\p"
	.string "Ihr habt Leidenschaft, sehr viel\n"
	.string "Leidenschaft.$"

LavenderTown_Pasado_Lider_Texto_10:
	.string "Du wirst ein großartiger TRAINER\n"
	.string "werden. Du kannst dir sicher sein, dass\l"
	.string "du der ARENALEITER dieser ARENA sein\l"
	.string "wirst, bevor ihre Tage gezählt sind.$"

LavenderTown_Pasado_Lider_Texto_11:
	.string "Na dann. Lassen wir unseren neuen\n"
	.string "CHAMP nicht länger warten!$"

LavenderTown_Pasado_Lider_Texto_12:
	.string "AGATHE: Gehen wir rein!$"
