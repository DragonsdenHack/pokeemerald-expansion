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
	.string "You have no shame nor regard for our\n"
	.string "region's traditions!$"


LavenderTown2::
lock     
faceplayer     
msgbox LavenderTown_Text2, MSGBOX_DEFAULT
release     
end

LavenderTown_Text2:
.string "This town is known as the grave\n"
    .string "site of POKÉMON.\p"
    .string "Memorial services are held in\n"
    .string "POKÉMON TOWER.$"



LavenderTownDocumento_100::
msgbox LavenderTownDocumento_Text_100, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_100:
.string "LAVENDER VOLUNTEER\n"
    .string "POKÉMON HOUSE$"



LavenderTownDocumento_101::
msgbox LavenderTownDocumento_Text_101, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_101:
.string "New SILPH SCOPE!\n"
    .string "Make the Invisible Plain to See!\p"
    .string "SILPH CO.$"



LavenderTownDocumento_102::
msgbox LavenderTownDocumento_Text_102, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_102:
.string "LAVENDER TOWN\n"
    .string "The Noble Purple Town$"



LavenderTownDocumento_103::
msgbox LavenderTownDocumento_Text_103, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_103:
.string "POKÉMON TOWER\n"
    .string "Becalm the Spirits of POKÉMON$"

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
.string "Do you believe in ghosts?$"


LavenderTown_3No::
msgbox LavenderTown_3_Text_3No, MSGBOX_DEFAULT
release
end


LavenderTown_3_Text_3Yes:
.string "Really?\n"
    .string "So there are believers…$"

LavenderTown_3_Text_3No:
.string "Hahaha, I guess not.\p"
    .string "That white hand on your shoulder…\n"
    .string "I'm just imagining it.$"

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
	.string "-GIOVANNI was so clear about keep\n"
	.string "distances from POKÉMON TOWER.-$"

LavenderTown_Barrera_Mision_Kangaskhan_Texto_2:
	.string "-RED could be still inside the\n"
	.string "POKÉMON TOWER!-$"

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
.string "The ship sailed.$"


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
	.string "-That ROUTE does not match with any\n"
	.string "assigned mission, better to not waste\l"
	.string "time.-$"

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
	.string "In 1000 years, they will know just as\l"
	.string "much as we do today about this place.\l"
	.string "Its memory will endure if that's what\l"
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
	.string "JOURNALIST: We are with SAMUEL OAK;\n"
	.string "seven-time CHAMPION of the POKÉMON\n"
	.string "LEAGUE of KANTO during the 70s and 80s.$"

LavenderTown_Entrevista_Oak_Texto_2:
	.string "Later, his figure was crucial to\n"
	.string "achieving peace with JOHTO.$"

LavenderTown_Entrevista_Oak_Texto_3:
	.string "He is a renowned researcher and\n"
	.string "brilliant trainer; for many, the\n"
	.string "greatest living legend of this region.$"

LavenderTown_Entrevista_Oak_Texto_4:
	.string "Tell me. For a person like you…\n"
	.string "What do you expect from KANTO?$"

LavenderTown_Entrevista_Oak_Texto_5:
	.string "OAK: You see, I've had many\n"
	.string "disappointments waiting for miracles\n"
	.string "over the years.$"

LavenderTown_Entrevista_Oak_Texto_6:
	.string "At this point, if anyone is expecting\n"
	.string "anything, it's KANTO itself that\n"
	.string "expects something from me.$"

LavenderTown_Entrevista_Oak_Texto_7:
	.string "Nowadays, I just humbly do my part, and\n"
	.string "whatever must come will come.$"

LavenderTown_Entrevista_Oak_Texto_8:
	.string "JOURNALIST: It didn't go badly for you\n"
	.string "with that way of thinking. You'd\n"
	.string "recently invented the POKÉDEX.$"

LavenderTown_Entrevista_Oak_Texto_9:
	.string "OAK: That's right. Creating the POKÉDEX\n"
	.string "for young trainers and reopening the\n"
	.string "LEAGUE championship are two\l"
	.string "initiatives I am very proud of.$"

LavenderTown_Entrevista_Oak_Texto_10:
	.string "JOURNALIST: However, many say you're\n"
	.string "just not the same. That you've changed\n"
	.string "and gotten soft. Would you like to say\l"
	.string "anything about that?$"

LavenderTown_Entrevista_Oak_Texto_11:
	.string "OAK: The world's far more vast than a\n"
	.string "battlefield balancing two teams of six\n"
	.string "POKÉMON.$"

LavenderTown_Entrevista_Oak_Texto_12:
	.string "JOURNALIST: Mm… I see. This year, you\n"
	.string "were busy with some other stuff. One\n"
	.string "last question. This one's kind of…$"

LavenderTown_Entrevista_Oak_Texto_13:
	.string "OAK: Kind of… {PAUSE 15}what?$"

LavenderTown_Entrevista_Oak_Texto_14:
	.string "JOURNALIST: I don't know if you can\n"
	.string "actually help us.$"

LavenderTown_Entrevista_Oak_Texto_15:
	.string "When we'd consulted the archives of the\n"
	.string "POKÉMON LEAGUE HQ, one CHAMPION title\n"
	.string "was redacted in a big 'X' nearly ten\l"
	.string "times between the 70's and 80's.$"

LavenderTown_Entrevista_Oak_Texto_16:
	.string "Do you have any idea of who could that\n"
	.string "person be? Any name that could hide\n"
	.string "behind that 'X'?$"

LavenderTown_Entrevista_Oak_Texto_17:
	.string "OAK: You know, I have this bad habit of\n"
	.string "forgetting every single name that's not\n"
	.string "worth remembering.$"

LavenderTown_Entrevista_Oak_Texto_18:
	.string "But, now seriously…$"

LavenderTown_Entrevista_Oak_Texto_19:
	.string "…when I think that far back, that past\n"
	.string "KANTO's all so blurry. And I just think\n"
	.string "to myself that all of it was just a\l"
	.string "dream…{PAUSE 15} A bad dream.$"

LavenderTown_Entrevista_Oak_Texto_20:
	.string "There are thousands of reasons: data\n"
	.string "lost after the war, years that the\n"
	.string "league wasn't celebrated, foreign\l"
	.string "trainers' victories…$"

LavenderTown_Entrevista_Oak_Texto_21:
	.string "JOURNALIST: I see. Nevertheless, it is\n"
	.string "still intriguing.$"

LavenderTown_Entrevista_Oak_Texto_22:
	.string "OAK: Oh, indeed, it is!$"

LavenderTown_Entrevista_Oak_Texto_23:
	.string "Questioning reality and imagining a\n"
	.string "world that goes further than the scope\n"
	.string "of our vision is a great exercise.$"

LavenderTown_Entrevista_Oak_Texto_24:
	.string "I myself am also a dreamer, you know?\n"
	.string "But sometimes, I believe in the\n"
	.string "impossible.$"

LavenderTown_Entrevista_Oak_Texto_25:
	.string "“TRAINER 'X' who'd beaten the LEAGUE\n"
	.string "eight times before vanishing from\n"
	.string "history.”$"

LavenderTown_Entrevista_Oak_Texto_26:
	.string "What a spicy fiction title.$"

LavenderTown_Entrevista_Oak_Texto_27:
	.string "OAK: But I was there, and I regret to\n"
	.string "inform you that 'X' doesn't exist.$"

LavenderTown_Entrevista_Oak_Texto_28:
	.string "JOURNALIST: I see. Anyway, thank you\n"
	.string "so much for your time, PROFESSOR.$"

LavenderTown_Entrevista_Oak_Texto_29:
	.string "Now, we'll be heading to meet your\n"
	.string "friend, AGATHA, inside the POKÉMON\n"
	.string "TOWER. Will you join us?$"

LavenderTown_Entrevista_Oak_Texto_30:
	.string "OAK: {PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

LavenderTown_Entrevista_Oak_Texto_31:
	.string "OAK: Too soon for that.$"

LavenderTown_Entrevista_Oak_Texto_32:
	.string "JOURNALIST: What a pity. Well, as you\n"
	.string "wish. Thank you again for your time.$"

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
	.string "How do I know?$"

LavenderTown_Agatha_Texto_2.3:
	.string "Listen up, youngster. I've been training\n"
	.string "my POKÉMON for decades. When I started,\n"
	.string "you weren't even born.$"

LavenderTown_Agatha_Texto_2.4:
	.string "I know this region and its people well\n"
	.string "enough to know what's going on. And I\n"
	.string "know exactly everything that happened\l"
	.string "that day back in the HALL OF FAME.$"

LavenderTown_Agatha_Texto_1:
	.string "{PLAYER}! You made the miracle\n"
	.string "happen!$"

LavenderTown_Agatha_Texto_2:
	.string "Your adventure in the POKÉMON LEAGUE\n"
	.string "is the greatest thing I've witnessed in\n"
	.string "the last decades!$"

LavenderTown_Agatha_Texto_3:
	.string "Now, every time I have a walk over these\n"
	.string "streets, I can only see fresh sprouts\n"
	.string "of hope!$"

LavenderTown_Agatha_Texto_4:
	.string "And however temporary it may be, this\n"
	.string "peace is possible thanks to you.$"

LavenderTown_Agatha_Texto_5:
	.string "The fact that we're overcoming hard\n"
	.string "times made me conscious of how\n"
	.string "fortunate we really are.$"

LavenderTown_Agatha_Texto_6:
	.string "Just… look at the POKÉMON TOWER.$"

LavenderTown_Agatha_Texto_7:
	.string "I was raised in this place. After all\n"
	.string "these years, I finally got to visit it as\n"
	.string "it deserves.$"

LavenderTown_Agatha_Texto_8:
	.string "Everything I know about GHOST POKÉMON,\n"
	.string "I learnt it here, and if I got something\n"
	.string "clear, it's the fact that the world's\l"
	.string "greatest mysteries are far beyond our\l"
	.string "sight.$"

LavenderTown_Agatha_Texto_9:
	.string "But you didn't come all the way here\n"
	.string "just to hear an old lady yapping about\n"
	.string "her nostalgia, did you?$"

LavenderTown_Agatha_Texto_10:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

LavenderTown_Agatha_Texto_11:
	.string "You seek mysteries! Well, in that case, I\n"
	.string "can help you.$"

LavenderTown_Agatha_Texto_12:
	.string "Come with me.$"

LavenderTown_Pasado_Cartel::
lock
msgbox LavenderTown_Pasado_Cartel_Texto_1 MSGBOX_SIGN
release
end

LavenderTown_Pasado_Cartel_Texto_1:
	.string "Convierte lo invisible en visible de\n"
	.string "forma natural. Adquiere habilidades de\l"
	.string "introspección en el GIMNASIO LAVANDA.$"

