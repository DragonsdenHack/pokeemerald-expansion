LavenderTown_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, LavenderTown_OnFrame
map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_OnTransition
	.byte 0

LavenderTown_OnTransition::
setflag FLAG_VISITED_LAVENDER_TOWN
end

LavenderTown_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 185, LavenderTown_Cierre_Torre
	.2byte 0

LavenderTown1::
lock     
faceplayer     
msgbox LavenderTown_Text1, MSGBOX_DEFAULT
release     
end

LavenderTown_Text1:
	.string "Du hast weder Scham noch Respekt vor\n"
	.string "den Traditionen unserer Region!$"


LavenderTown2::
lock     
faceplayer     
msgbox LavenderTown_Text2, MSGBOX_DEFAULT
release     
end

LavenderTown_Text2:
	.string "Diese Stadt ist als Ruhestätte für\n"
	.string "POKéMON bekannt. Im POKéMON-TURM\l"
	.string "werden Andachten gehalten.$"



LavenderTownDocumento_100::
msgbox LavenderTownDocumento_Text_100, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_100:
.string "LAVANDIA\n"
    .string "POKéMON-HAUS$"



LavenderTownDocumento_101::
msgbox LavenderTownDocumento_Text_101, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_101:
.string "SILPH SCOPE!\n"
    .string "Macht das Unsichtbare sichtbar!$"



LavenderTownDocumento_102::
msgbox LavenderTownDocumento_Text_102, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_102:
.string "LAVANDIA\n"
    .string "Die edle, violette Stadt!$"



LavenderTownDocumento_103::
msgbox LavenderTownDocumento_Text_103, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_103:
	.string "Mögen die Seelen der POKéMON im\n"
	.string "POKéMON-TURM in Frieden ruhen!$"

LavenderTown_3::
lock
faceplayer
msgbox LavenderTown_3_Text_3YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq LavenderTown_3No
msgbox LavenderTown_3_Text_3Yes, MSGBOX_DEFAULT
release
end



LavenderTown_3_Text_3YesNo:
.string "Glaubst du an GEISTER?$"


LavenderTown_3No::
msgbox LavenderTown_3_Text_3No, MSGBOX_DEFAULT
release
end


LavenderTown_3_Text_3Yes:
.string "Echt?\n"
    .string "Hätte ich nicht gedacht!$"

LavenderTown_3_Text_3No:
.string "Hahaha, natürlich nicht!\p"
	.string "Und diese weiße Hand da auf deiner\n"
	.string "Schulter ist natürlich nicht echt!$"

LavenderTown_Barrera_Mision_Kangaskhan::
compare VAR_UNUSED_0x40F7, 54
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 50
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_3
compare VAR_UNUSED_0x40F7, 43
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_1
waitmovement 0x0
msgbox LavenderTown_Barrera_Mision_Kangaskhan_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_2
waitmovement 0x0
release
end

LavenderTown_Barrera_Mision_Kangaskhan_2::
release
end

LavenderTown_Barrera_Mision_Kangaskhan_3::
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_1
waitmovement 0x0
msgbox LavenderTown_Barrera_Mision_Kangaskhan_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_2
waitmovement 0x0
release
end

LavenderTown_Barrera_Mision_Kangaskhan_Texto_1:
	.string "-GIOVANNI hat deutlich zu verstehen\n"
	.string "gegeben, dass du dich vom POKéMON\l"
	.string "TURM fernhalten sollst.-$"

LavenderTown_Barrera_Mision_Kangaskhan_Texto_2:
	.string "-ROT könnte sich immer noch im\n"
	.string "POKéMON-TURM aufhalten.-$"

LavenderTown_Barrera_Mision_Kangaskhan_Move_1:
walk_in_place_up
step_end

LavenderTown_Barrera_Mision_Kangaskhan_Move_2:
walk_slow_down
step_end

VermilionCity_Barco_Zarpa::
compare VAR_UNUSED_0x40F7, 94
goto_if_gt VermilionCity_Barco_Zarpa_2
release
end

VermilionCity_Barco_Zarpa_2::
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_1
waitmovement 0x0
msgbox VermilionCity_Barco_Zarpa_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_2
waitmovement 0x0
release
end

VermilionCity_Barco_Zarpa_Texto_1:
.string "Das Schiff segelte.$"


LavenderTown_Barrera_Sur::
compare VAR_UNUSED_0x40F7, 62
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_1
waitmovement 0x0
msgbox LavenderTown_Barrera_Sur_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_2
waitmovement 0x0
release
end

LavenderTown_Barrera_Sur_Texto_1:
	.string "-Diese Route ist nicht Teil der Mission.\n"
	.string "Es ist besser, keine Zeit zu verlieren.-$"

LavenderTown_Barrera_Sur_Move_1:
walk_in_place_down
step_end

LavenderTown_Barrera_Sur_Move_2:
walk_slow_up
step_end


LavenderTown_Cierre_Torre::
lock
clearflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
addobject 4
addobject 5
addobject 7
addobject 8
addobject 9
addobject 10
addobject 11
addobject 12
addobject 14
addobject 15
addobject 16
applymovement 3, LavenderTown_Cierre_Torre_Move_2
applymovement 2, LavenderTown_Cierre_Torre_Move_2
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Cierre_Torre_Move_1
waitmovement 0x0
special RemoveCameraObject
delay 40
playse SE_EXIT
clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
addobject 6
msgbox LavenderTown_Cierre_Torre_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, LavenderTown_Cierre_Torre_Move_4
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_2 MSGBOX_AUTOCLOSE
applymovement 8, LavenderTown_Cierre_Torre_Move_5
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_3 MSGBOX_AUTOCLOSE
applymovement 7, LavenderTown_Cierre_Torre_Move_6
applymovement 8, LavenderTown_Cierre_Torre_Move_6
applymovement 9, LavenderTown_Cierre_Torre_Move_5
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_4 MSGBOX_AUTOCLOSE
applymovement 8, LavenderTown_Cierre_Torre_Move_7
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_5 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Cierre_Torre_Move_8
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_6 MSGBOX_AUTOCLOSE
applymovement 7, LavenderTown_Cierre_Torre_Move_4
applymovement 11, LavenderTown_Cierre_Torre_Move_5
applymovement 9, LavenderTown_Cierre_Torre_Move_5
applymovement 8, LavenderTown_Cierre_Torre_Move_9
waitmovement 0x0
delay 10
msgbox LavenderTown_Cierre_Torre_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox LavenderTown_Cierre_Torre_Texto_8 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 8, LavenderTown_Cierre_Torre_Move_9.1
waitmovement 0x0
waitse
msgbox LavenderTown_Cierre_Torre_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Cierre_Torre_Move_6
waitmovement 0x0
delay 10
msgbox LavenderTown_Cierre_Torre_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Cierre_Torre_Move_5
waitmovement 0x0
delay 10
msgbox LavenderTown_Cierre_Torre_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, LavenderTown_Cierre_Torre_Move_10
waitmovement 0x0
delay 10
msgbox LavenderTown_Cierre_Torre_Texto_12 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderTown_Cierre_Torre_Texto_13 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 7, LavenderTown_Cierre_Torre_Move_11
waitmovement 0x0
waitse
delay 10
msgbox LavenderTown_Cierre_Torre_Texto_14 MSGBOX_AUTOCLOSE
delay 10
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 8
waitfieldeffect FLDEFF_NPCFLY_OUT
applymovement 9, LavenderTown_Cierre_Torre_Move_10
waitmovement 0x0
delay 10
msgbox LavenderTown_Cierre_Torre_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderTown_Cierre_Torre_Texto_16 MSGBOX_AUTOCLOSE
delay 20
applymovement 9, LavenderTown_Cierre_Torre_Move_4
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_17 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Cierre_Torre_Move_12
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_18 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Cierre_Torre_Move_13
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_19 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
delay 10
playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 9
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 20
applymovement 11, LavenderTown_Cierre_Torre_Move_16
waitmovement 0x0
delay 10
msgbox LavenderTown_Cierre_Torre_Texto_20 MSGBOX_AUTOCLOSE
addobject 13
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Cierre_Torre_Move_14
waitmovement 0x0
special RemoveCameraObject
delay 20
playmoncry SPECIES_CUBONE, CRY_MODE_ENCOUNTER
msgbox LavenderTown_Cierre_Torre_Texto_21 MSGBOX_AUTOCLOSE
waitmoncry
delay 30
applymovement 13, LavenderTown_Cierre_Torre_Move_15
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 186
warpsilent MAP_BASE_ROCKET_HOENN, 29, 34
release
end

LavenderTown_Cierre_Torre_Move_16:
walk_in_place_up
step_end

LavenderTown_Cierre_Torre_Move_15:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

LavenderTown_Cierre_Torre_Move_14:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

LavenderTown_Cierre_Torre_Move_13:
walk_left
step_end

LavenderTown_Cierre_Torre_Move_12:
walk_right
step_end

LavenderTown_Cierre_Torre_Move_11:
emote_exclamation_mark
step_end

LavenderTown_Cierre_Torre_Move_10:
walk_slow_up
step_end

LavenderTown_Cierre_Torre_Move_9.1:
walk_in_place_right
step_end

LavenderTown_Cierre_Torre_Move_9:
walk_down
walk_in_place_right
step_end

LavenderTown_Cierre_Torre_Move_8:
walk_slow_down
step_end

LavenderTown_Cierre_Torre_Move_7:
walk_up
face_right
step_end

LavenderTown_Cierre_Torre_Move_6:
face_up
step_end

LavenderTown_Cierre_Torre_Move_5:
face_left
step_end

LavenderTown_Cierre_Torre_Move_4:
face_right
step_end

LavenderTown_Cierre_Torre_Move_3:
walk_down
step_end

LavenderTown_Cierre_Torre_Move_2:
walk_right
face_up
step_end

LavenderTown_Cierre_Torre_Move_1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

LavenderTown_Cierre_Torre_Texto_1:
	.string "BUILDER: I'm proceeding to close off\n"
	.string "the area, from now on, no one will be\l"
	.string "allowed to enter the premises. All\l"
	.string "graves and POKÉMON have been\l"
	.string "successfully evacuated.$"

LavenderTown_Cierre_Torre_Texto_2:
	.string "FUJI: Don't worry, AGATHA. I'm building a\n"
	.string "great underground GRAVEYARD to\l"
	.string "accommodate all the displaced souls.$"

LavenderTown_Cierre_Torre_Texto_3:
	.string "AGATHA: Oh, FUJI{PAUSE 35}…{PAUSE 35} It is the end of an\n"
	.string "era, what are we going to do now?$"

LavenderTown_Cierre_Torre_Texto_4:
	.string "ARCHER; This could be the beginning of\n"
	.string "the best era in KANTO's history.$"

LavenderTown_Cierre_Torre_Texto_5:
	.string "AGATHA: We can't forget where we come\n"
	.string "from; this TOWER has stood for\l"
	.string "centuries, sheltering all the fallen\l"
	.string "after the war. How can the history of\l"
	.string "KANTO be understood without one of its\l"
	.string "greatest symbols? Will you also hide its\l"
	.string "past?$"

LavenderTown_Cierre_Torre_Texto_6:
	.string "ARCHER: What POKÉMON TOWER has been\n"
	.string "for KANTO is carefully documented;\l"
	.string "nothing can erase its role in history.\l"
	.string "In one thousand years, they'll know just\l"
	.string "as much as we do today about this place.\p"
	.string "Its memory will endure if that's what\n"
	.string "concerns you.$"

LavenderTown_Cierre_Torre_Texto_7:
	.string "AGATHA: But why? Why destroy it? Why\n"
	.string "not build a twin tower to the east?$"

LavenderTown_Cierre_Torre_Texto_8:
	.string "ARCHER: Sometimes the old must\n"
	.string "disappear so the new can thrive.$"

LavenderTown_Cierre_Torre_Texto_9:
.string "AGATHA: It's unnecessary!$"

LavenderTown_Cierre_Torre_Texto_10:
	.string "ARCHER: The disappearance of LAVENDER\n"
	.string "TOWER sends a powerful message to\l"
	.string "KANTO. It prepares the entire region\l"
	.string "for new beginnings and frees the\l"
	.string "population from their past.$"

LavenderTown_Cierre_Torre_Texto_11:
	.string "It's necessary, AGATHA. It's part of the\n"
	.string "process of change, no matter how much\l"
	.string "it hurts.$"

LavenderTown_Cierre_Torre_Texto_12:
	.string "AGATHA: So{PAUSE 15}…{PAUSE 15} There's nothing left for\n"
	.string "me in this region then…$"

LavenderTown_Cierre_Torre_Texto_13:
.string "AGATHA: Goodbye, FUJI.$"

LavenderTown_Cierre_Torre_Texto_14:
.string "FUJI: AGATHA, wait!$"

LavenderTown_Cierre_Torre_Texto_15:
	.string "ARCHER: Radical changes always involve\n"
	.string "this kind of loss; we must move forward.\l"
	.string "I expect this doesn't change anything in\l"
	.string "your work for LAVENDER, FUJI.$"

LavenderTown_Cierre_Torre_Texto_16:
.string "FUJI: {PAUSE 15}…{PAUSE 15}$"

LavenderTown_Cierre_Torre_Texto_17:
	.string "BILL: If that old lady only knew what\n"
	.string "we're going to set up inside the new\l"
	.string "RADIO TOWER! She would have left even\l"
	.string "more disgusted!$"

LavenderTown_Cierre_Torre_Texto_18:
	.string "ARCHER: Show more respect and be more\n"
	.string "discreet, BILL. We didn't hire you to\l"
	.string "blab about matters of this caliber.$"

LavenderTown_Cierre_Torre_Texto_19:
	.string "There's nothing more to see here.\n"
	.string "Prepare yourselves for what's coming.$"

LavenderTown_Cierre_Torre_Texto_20:
.string "BILL: Bah, it was just a joke!$"

LavenderTown_Cierre_Torre_Texto_21:
.string "Bone!$"

LavenderTown_Dialogo_Obrero::
lock
faceplayer
msgbox LavenderTown_Dialogo_Obrero_Texto_1 MSGBOX_AUTOCLOSE
release
end

LavenderTown_Dialogo_Obrero_Texto_1:
.string "Lo siento, pero el tiempo para ver la\n"
	.string "TORRE POKÉMON pasó. Ahora solo podrá\l"
	.string "ser vista a través de los libros de\l"
	.string "historia.$"

LavenderTown_Entrevista_Oak_Move_1:
walk_in_place_right
step_end

LavenderTown_Entrevista_Oak_Move_1.1:
emote_exclamation_mark
step_end

LavenderTown_Entrevista_Oak_Move_2:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

LavenderTown_Entrevista_Oak_Move_2.1:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

LavenderTown_Entrevista_Oak_Move_3:
walk_in_place_up
step_end

LavenderTown_Entrevista_Oak_Move_4:
face_right
delay_16
delay_8
face_down
delay_16
walk_in_place_down
step_end

LavenderTown_Entrevista_Oak_Move_5:
face_left
delay_16
delay_16
face_down
step_end

LavenderTown_Entrevista_Oak_Move_6:
face_up
step_end

LavenderTown_Entrevista_Oak_Move_7:
face_down
step_end

LavenderTown_Entrevista_Oak_Move_8:
walk_in_place_down
step_end

LavenderTown_Entrevista_Oak_Move_9:
face_left
step_end

LavenderTown_Entrevista_Oak_Move_10:
walk_down
face_right
step_end

LavenderTown_Entrevista_Oak_Move_11:
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

LavenderTown_Entrevista_Oak::
lock
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 18
addobject 20
addobject 19
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Entrevista_Oak_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Entrevista_Oak_Move_1.1
waitmovement 0x0
waitse
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Entrevista_Oak_Move_2
waitmovement 0x0
special RemoveCameraObject
applymovement 18, LavenderTown_Entrevista_Oak_Move_3
waitmovement 0x0
msgbox LavenderTown_Entrevista_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Entrevista_Oak_Texto_2 MSGBOX_AUTOCLOSE
applymovement 18, LavenderTown_Entrevista_Oak_Move_3
waitmovement 0x0
msgbox LavenderTown_Entrevista_Oak_Texto_3 MSGBOX_AUTOCLOSE
applymovement 18, LavenderTown_Entrevista_Oak_Move_3
waitmovement 0x0
msgbox LavenderTown_Entrevista_Oak_Texto_4 MSGBOX_AUTOCLOSE
delay 25
msgbox LavenderTown_Entrevista_Oak_Texto_5 MSGBOX_AUTOCLOSE
applymovement 20, LavenderTown_Entrevista_Oak_Move_4
waitmovement 0x0
msgbox LavenderTown_Entrevista_Oak_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Entrevista_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, LavenderTown_Entrevista_Oak_Move_3
waitmovement 0x0
msgbox LavenderTown_Entrevista_Oak_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Entrevista_Oak_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, LavenderTown_Entrevista_Oak_Move_3
waitmovement 0x0
msgbox LavenderTown_Entrevista_Oak_Texto_10 MSGBOX_AUTOCLOSE
applymovement 20, LavenderTown_Entrevista_Oak_Move_5
waitmovement 0x0
msgbox LavenderTown_Entrevista_Oak_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Entrevista_Oak_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Entrevista_Oak_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Entrevista_Oak_Texto_14 MSGBOX_AUTOCLOSE
applymovement 18, LavenderTown_Entrevista_Oak_Move_3
waitmovement 0x0
msgbox LavenderTown_Entrevista_Oak_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Entrevista_Oak_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 20, LavenderTown_Entrevista_Oak_Move_6
waitmovement 0x0
msgbox LavenderTown_Entrevista_Oak_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 20, LavenderTown_Entrevista_Oak_Move_7
waitmovement 0x0
msgbox LavenderTown_Entrevista_Oak_Texto_18 MSGBOX_AUTOCLOSE
applymovement 20, LavenderTown_Entrevista_Oak_Move_4
waitmovement 0x0
msgbox LavenderTown_Entrevista_Oak_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Entrevista_Oak_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Entrevista_Oak_Texto_21 MSGBOX_AUTOCLOSE
delay 10
applymovement 20, LavenderTown_Entrevista_Oak_Move_9
waitmovement 0x0
delay 10
msgbox LavenderTown_Entrevista_Oak_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 20, LavenderTown_Entrevista_Oak_Move_7
waitmovement 0x0
delay 10
msgbox LavenderTown_Entrevista_Oak_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Entrevista_Oak_Texto_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 20, LavenderTown_Entrevista_Oak_Move_6
waitmovement 0x0
delay 10
msgbox LavenderTown_Entrevista_Oak_Texto_25 MSGBOX_AUTOCLOSE
delay 10
applymovement 20, LavenderTown_Entrevista_Oak_Move_9
waitmovement 0x0
delay 10
msgbox LavenderTown_Entrevista_Oak_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 20, LavenderTown_Entrevista_Oak_Move_8
waitmovement 0x0
delay 10
msgbox LavenderTown_Entrevista_Oak_Texto_27 MSGBOX_AUTOCLOSE
applymovement 18, LavenderTown_Entrevista_Oak_Move_3
waitmovement 0x0
msgbox LavenderTown_Entrevista_Oak_Texto_28 MSGBOX_AUTOCLOSE
applymovement 18, LavenderTown_Entrevista_Oak_Move_3
waitmovement 0x0
msgbox LavenderTown_Entrevista_Oak_Texto_29 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Entrevista_Oak_Texto_30 MSGBOX_AUTOCLOSE
delay 15
delay 10
applymovement 20, LavenderTown_Entrevista_Oak_Move_6
waitmovement 0x0
delay 20
msgbox LavenderTown_Entrevista_Oak_Texto_31 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 18, LavenderTown_Entrevista_Oak_Move_1.1
waitmovement 0x0
delay 15
msgbox LavenderTown_Entrevista_Oak_Texto_32 MSGBOX_AUTOCLOSE
applymovement 18, LavenderTown_Entrevista_Oak_Move_3
waitmovement 0x0
applymovement 19, LavenderTown_Entrevista_Oak_Move_10
applymovement 18, LavenderTown_Entrevista_Oak_Move_9
waitmovement 0x0
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 20
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 15
applymovement 19, LavenderTown_Entrevista_Oak_Move_11
applymovement 18, LavenderTown_Entrevista_Oak_Move_11
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Entrevista_Oak_Move_2.1
waitmovement 0x0
special RemoveCameraObject
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 18
removeobject 20
removeobject 19
setvar VAR_UNUSED_0x40F8, 3
release
end

LavenderTown_Entrevista_Oak_Texto_1:
	.string "JOURNALISTIN: Wir sind hier mit\n"
	.string "PROFESSOR SAMUEL EICH, dem\l"
	.string "siebenfachen CHAMPION der POKéMON\l"
	.string "LIGA von KANTO in den 70er und\l"
	.string "80er Jahren.$"

LavenderTown_Entrevista_Oak_Texto_2:
	.string "Später spielte er eine entscheidende\n"
	.string "Rolle beim Friedensschluss mit JOHTO.$"

LavenderTown_Entrevista_Oak_Texto_3:
	.string "Er ist ein renommierter Forscher und\n"
	.string "brillanter Trainer. Für viele gilt er als\l"
	.string "die größte lebende Legende der Region.$"

LavenderTown_Entrevista_Oak_Texto_4:
	.string "Verraten Sie mir, Professor, was\n"
	.string "erhofft sich ein Mann wie Sie noch\l"
	.string "von KANTO?$"

LavenderTown_Entrevista_Oak_Texto_5:
	.string "EICH: Sehen Sie - während ich im Laufe\n"
	.string "der Jahre auf Wunder gewartet habe,\l"
	.string "habe ich stattdessen viele\l"
	.string "Enttäuschungen erlebt.$"

LavenderTown_Entrevista_Oak_Texto_6:
	.string "Mittlerweile ist es eher KANTO, das\n"
	.string "etwas von mir erwartet - nicht\l"
	.string "umgekehrt.$"

LavenderTown_Entrevista_Oak_Texto_7:
	.string "Heutzutage leiste ich einfach meinen\n"
	.string "Beitrag - und was kommen muss, wird\l"
	.string "kommen.$"

LavenderTown_Entrevista_Oak_Texto_8:
	.string "Mit dieser Einstellung sind Sie ganz gut\n"
	.string "gefahren. Immerhin haben Sie erst vor\l"
	.string "Kurzem den POKéDEX erfunden.$"

LavenderTown_Entrevista_Oak_Texto_9:
	.string "EICH: Das stimmt. Den POKéDEX für junge\n"
	.string "Trainer zu entwickeln und die\l"
	.string "Liga-Meisterschaft wiederzueröffnen,\l"
	.string "sind zwei Erfolge, die mich mit großem\l"
	.string "Stolz erfüllen.$"

LavenderTown_Entrevista_Oak_Texto_10:
	.string "JOURNALISTIN: Allerdings heißt es, Sie\n"
	.string "seien nicht mehr derselbe. Dass Sie sich\l"
	.string "verändert haben und weich geworden\l"
	.string "sind. Möchten Sie etwas dazu sagen?$"

LavenderTown_Entrevista_Oak_Texto_11:
	.string "EICH: Die Welt ist weit mehr als ein\n"
	.string "Kampfplatz, auf dem sich zwei Teams\l"
	.string "aus je sechs POKéMON gegenüberstehen.$"

LavenderTown_Entrevista_Oak_Texto_12:
	.string "JOURNALISTIN: Hm {PAUSE 15}…{PAUSE 15} ich verstehe.\n"
	.string "Sie waren ja dieses Jahr mit anderen\l"
	.string "Dingen beschäftigt.\p"
	.string "Eine letzte Frage noch - sie ist etwas{PAUSE 15}…{PAUSE 15}$"

LavenderTown_Entrevista_Oak_Texto_13:
	.string "EICH: Etwas?$"

LavenderTown_Entrevista_Oak_Texto_14:
	.string "JOURNALISTIN: Ich bin mir nicht sicher,\n"
	.string "ob Sie uns dazu etwas sagen können.$"

LavenderTown_Entrevista_Oak_Texto_15:
	.string "Als wir die Archive der POKéMON LIGA\n"
	.string "durchgesehen haben, haben wir zu\l"
	.string "unserer großen Überraschung\l"
	.string "festgestellt, dass der CHAMPION-Titel\l"
	.string "in den 70ern und 80ern achtmal mit\l"
	.string "einem großen -X- versehen wurde.$"

LavenderTown_Entrevista_Oak_Texto_16:
	.string "Haben Sie eine Ahnung, wer sich hinter\n"
	.string "diesem -X- verbergen könnte?$"

LavenderTown_Entrevista_Oak_Texto_17:
	.string "EICH: Wissen Sie, ich habe diese\n"
	.string "bedauerliche Angewohnheit, jeden\l"
	.string "Namen zu vergessen, der nicht von\l"
	.string "Bedeutung ist.$"

LavenderTown_Entrevista_Oak_Texto_18:
	.string "Spaß beiseite …$"

LavenderTown_Entrevista_Oak_Texto_19:
	.string "… Wenn ich so weit in die Vergangenheit\n"
	.string "zurückdenke, verschwimmt das Bild vom\l"
	.string "damaligen KANTO vor meinen Augen.\p"
	.string "Manchmal glaube ich, dass alles nur\n"
	.string "ein Traum war {PAUSE 25}…{PAUSE 25} ein Albtraum.$"

LavenderTown_Entrevista_Oak_Texto_20:
	.string "Gründe gäbe es viele: Archive, die nach\n"
	.string "dem Krieg verloren gingen, Jahre ohne\l"
	.string "Liga-Meisterschaft, die Siege\l"
	.string "ausländischer Trainer …$"

LavenderTown_Entrevista_Oak_Texto_21:
	.string "JOURNALISTIN: Ich verstehe.\p"
	.string "Es ist trotzdem faszinierend.$"

LavenderTown_Entrevista_Oak_Texto_22:
	.string "EICH: Oh, das ist es in der Tat!$"

LavenderTown_Entrevista_Oak_Texto_23:
	.string "Die Realität zu hinterfragen und sich\n"
	.string "eine Welt vorzustellen, die über\l"
	.string "unseren Horizont hinausgeht, ist\l"
	.string "eine großartige Übung.$"

LavenderTown_Entrevista_Oak_Texto_24:
	.string "Ich bin selbst auch ein Träumer, wissen\n"
	.string "Sie? Und manchmal glaube ich sogar an\l"
	.string "das Unmögliche.$"

LavenderTown_Entrevista_Oak_Texto_25:
	.string "-TRAINER X, der die LIGA achtmal\n"
	.string "bezwang, bevor er spurlos verschwand.-$"

LavenderTown_Entrevista_Oak_Texto_26:
	.string "Klingt wie der Titel eines\n"
	.string "spektakulären Romans.$"

LavenderTown_Entrevista_Oak_Texto_27:
	.string "EICH: Aber ich war damals dort und muss\n"
	.string "Ihnen leider sagen, dass es -X- nicht\l"
	.string "gibt.$"

LavenderTown_Entrevista_Oak_Texto_28:
	.string "JOURNALISTIN: Verstehe. Wie dem auch\n"
	.string "sei. Vielen Dank für Ihre Zeit,\l"
	.string "PROFESSOR.$"

LavenderTown_Entrevista_Oak_Texto_29:
	.string "Wir gehen nun in den POKéMON-TURM, um\n"
	.string "Ihre Freundin AGATHE zu treffen.\p"
	.string "Möchten Sie uns begleiten?$"

LavenderTown_Entrevista_Oak_Texto_30:
	.string "EICH: {PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

LavenderTown_Entrevista_Oak_Texto_31:
	.string "EICH: Nein … Dafür ist es noch zu früh.$"

LavenderTown_Entrevista_Oak_Texto_32:
	.string "JOURNALISTIN: Ach wie schade. Aber na\n"
	.string "ja. Nochmals vielen Dank für Ihre Zeit.$"

LavenderTown_Agatha::
lock
delay 15
msgbox LavenderTown_Agatha_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 17, LavenderTown_Agatha_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 17, LavenderTown_Agatha_Move_2
waitmovement 0x0
delay 10
msgbox LavenderTown_Agatha_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Agatha_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Agatha_Move_2
waitmovement 0x0
delay 15
msgbox LavenderTown_Agatha_Texto_2.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 17, LavenderTown_Agatha_Move_3
waitmovement 0x0
delay 10
msgbox LavenderTown_Agatha_Texto_2.2 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Agatha_Texto_2.3 MSGBOX_AUTOCLOSE
delay 15
applymovement 17, LavenderTown_Agatha_Move_3
waitmovement 0x0
delay 10
msgbox LavenderTown_Agatha_Texto_2.4 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Agatha_Texto_3 MSGBOX_AUTOCLOSE
applymovement 17, LavenderTown_Agatha_Move_4
waitmovement 0x0
delay 10
msgbox LavenderTown_Agatha_Texto_4 MSGBOX_AUTOCLOSE
applymovement 17, LavenderTown_Agatha_Move_1
waitmovement 0x0
delay 10
msgbox LavenderTown_Agatha_Texto_5 MSGBOX_AUTOCLOSE
applymovement 17, LavenderTown_Agatha_Move_5
waitmovement 0x0
delay 10
msgbox LavenderTown_Agatha_Texto_6 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Agatha_Move_6
waitmovement 0x0
special RemoveCameraObject
msgbox LavenderTown_Agatha_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Agatha_Texto_8 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Agatha_Move_6.1
waitmovement 0x0
special RemoveCameraObject
applymovement 17, LavenderTown_Agatha_Move_1
waitmovement 0x0
msgbox LavenderTown_Agatha_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Agatha_Texto_10 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 17, LavenderTown_Agatha_Move_2
waitmovement 0x0
delay 10
msgbox LavenderTown_Agatha_Texto_11 MSGBOX_AUTOCLOSE
applymovement 17, LavenderTown_Agatha_Move_5
waitmovement 0x0
delay 10
msgbox LavenderTown_Agatha_Texto_12 MSGBOX_AUTOCLOSE
applymovement 17, LavenderTown_Agatha_Move_7
waitmovement 0x0
setflag FLAG_HOENN_676
clearflag FLAG_HOENN_675
removeobject 17
playse SE_EXIT
waitse
setvar VAR_UNUSED_0x40F8, 12
delay 15
release
end

LavenderTown_Agatha_Move_7:
walk_up
step_end

LavenderTown_Agatha_Move_6.1:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

LavenderTown_Agatha_Move_6:
walk_slow_up
walk_slow_up
walk_slow_up
step_end

LavenderTown_Agatha_Move_5:
walk_in_place_up
step_end

LavenderTown_Agatha_Move_4:
face_up
step_end

LavenderTown_Agatha_Move_3:
delay_16
delay_8
face_up
delay_16
delay_8
face_player
step_end

LavenderTown_Agatha_Move_2:
emote_exclamation_mark
step_end

LavenderTown_Agatha_Move_1:
face_player
step_end

LavenderTown_Agatha_Texto_2.1:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

LavenderTown_Agatha_Texto_2.2:
	.string "Woher ich das weiß?$"

LavenderTown_Agatha_Texto_2.3:
	.string "Hör mal gut zu, junger Mann. Ich\n"
	.string "trainiere meine POKéMON schon seit\l"
	.string "Jahrzehnten. Als ich anfing, warst du\l"
	.string "noch nicht einmal geboren.$"

LavenderTown_Agatha_Texto_2.4:
	.string "Ich kenne diese Region und ihre\n"
	.string "Einwohner gut genug, um zu wissen, was\l"
	.string "hier vor sich geht. Und ich weiß genau,\l"
	.string "was an jenem Tag in der RUHMESHALLE\l"
	.string "geschehen ist.$"

LavenderTown_Agatha_Texto_1:
	.string "{PLAYER}!\p"
	.string "Du hast ein Wunder vollbracht!$"

LavenderTown_Agatha_Texto_2:
	.string "Deine Siege in der POKéMON LIGA sind\n"
	.string "das Bedeutendste, was ich seit\l"
	.string "Jahrzehnten erlebt habe!$"

LavenderTown_Agatha_Texto_3:
	.string "Jedes Mal, wenn ich nun durch diese\n"
	.string "Straßen wandle, sehe ich überall\l"
	.string "wiedererwachte Hoffnung!$"

LavenderTown_Agatha_Texto_4:
	.string "Und diesen Frieden, auch wenn er nur\n"
	.string "von kurzer Dauer sein sollte, haben wir\l"
	.string "nur dir zu verdanken.$"

LavenderTown_Agatha_Texto_5:
	.string "Das wir solche harten Zeiten\n"
	.string "überstanden haben, hat mir bewusst\l"
	.string "gemacht, wie viel Glück wir eigentlich\l"
	.string "haben.$"

LavenderTown_Agatha_Texto_6:
	.string "Schau dir doch nur mal den\n"
	.string "POKéMON-TURM an.$"

LavenderTown_Agatha_Texto_7:
	.string "Ich bin an diesem Ort aufgewachsen.\n"
	.string "Nach all den Jahren kann ich ihn endlich\l"
	.string "in aller Ruhe besuchen und ihm den\l"
	.string "Respekt zollen, den er verdient.$"

LavenderTown_Agatha_Texto_8:
	.string "Alles, was ich über GEIST-POKéMON weiß,\n"
	.string "habe ich hier gelernt. Und wenn mir\l"
	.string "eines klar geworden ist, dann ist es,\l"
	.string "dass die größten Mysterien der Welt\l"
	.string "weit außerhalb dessen liegen, was wir\l"
	.string "mit unseren bloßen Augen sehen können.$"

LavenderTown_Agatha_Texto_9:
	.string "Aber du bist nicht den ganzen Weg\n"
	.string "hierhergekommen, um den nostalgischen\l"
	.string "Worten einer alten Frau zuzuhören …$"

LavenderTown_Agatha_Texto_10:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

LavenderTown_Agatha_Texto_11:
	.string "Du suchst also nach Geheimnissen. Nun,\n"
	.string "in dem Fall kann ich dir helfen.$"

LavenderTown_Agatha_Texto_12:
	.string "Folge mir.$"

LavenderTown_Pasado_Cartel::
lock
msgbox LavenderTown_Pasado_Cartel_Texto_1 MSGBOX_SIGN
release
end

LavenderTown_Pasado_Cartel_Texto_1:
	.string "Turn the invisible into the visible in a\n"
	.string "natural way. Acquire introspection\l"
	.string "skills in the LAVENDER GYM.$"

