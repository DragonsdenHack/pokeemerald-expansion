Mision7Lab4_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Mision7Lab4_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, Mision7Lab4_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, Mision7Lab4_OnFrame
	.byte 0

Mision7Lab4_OnResume:
map_script_2 VAR_UNUSED_0x40DC, 7, Mision7Lab4_2
	.2byte 0

Mision7Lab4_2::
call Script_SetGrayscaleTint
setvar VAR_UNUSED_0x40DC, 8
end

Mision7Lab4_OnFrame:
map_script_2 VAR_TEMP_0, 0, Mision7Lab4_Seteo_Metatiles
map_script_2 VAR_UNUSED_0x40DC, 8, Mision7Lab4_Escena_Lance
	.2byte 0


Mision7Lab4_EventScript_Cientifico::
	trainerbattle_single TRAINER_TRAINER_31, Mision7Lab4_Text_CientificoIntro, Mision7Lab4_Text_CientificoDefeated
	msgbox Mision7Lab4_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end

Mision7Lab4_Dialogo_Oak::
lock
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
removeobject 17
removeobject 16
call Script_SetGrayscaleTint
clearflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
addobject 2
addobject 3
addobject 4
addobject 5
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Mision7Lab4_Dialogo_Oak_Move_1
call Script_SetGrayscaleTint
waitmovement 0x0
special RemoveCameraObject
delay 15
applymovement 2, Mision7Lab4_Dialogo_Oak_Move_4
waitmovement 0x0
msgbox Mision7Lab4_Dialogo_Oak_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, Mision7Lab4_Dialogo_Oak_Move_3
applymovement 5, Mision7Lab4_Dialogo_Oak_Move_3
applymovement 3, Mision7Lab4_Dialogo_Oak_Move_3
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Mision7Lab4_Dialogo_Oak_Move_2
waitmovement 0x0
special RemoveCameraObject
msgbox Mision7Lab4_Dialogo_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Mision7Lab4_Dialogo_Oak_Texto_3 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Mision7Lab4_Dialogo_Oak_Move_5
waitmovement 0x0
special RemoveCameraObject
msgbox Mision7Lab4_Dialogo_Oak_Texto_4 MSGBOX_AUTOCLOSE
delay 20
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Mision7Lab4_Dialogo_Oak_Move_6
waitmovement 0x0
call Script_SetGrayscaleTint
applymovement OBJ_EVENT_ID_CAMERA, Mision7Lab4_Dialogo_Oak_Move_6.1
waitmovement 0x0
special RemoveCameraObject
applymovement 2, Mision7Lab4_Dialogo_Oak_Move_8
applymovement 5, Mision7Lab4_Dialogo_Oak_Move_7
applymovement 3, Mision7Lab4_Dialogo_Oak_Move_7
waitmovement 0x0
msgbox Mision7Lab4_Dialogo_Oak_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox Mision7Lab4_Dialogo_Oak_Texto_6 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, Mision7Lab4_Dialogo_Oak_Move_9
waitmovement 0x0
msgbox Mision7Lab4_Dialogo_Oak_Texto_7 MSGBOX_AUTOCLOSE
applymovement 3, Mision7Lab4_Dialogo_Oak_Move_10
waitmovement 0x0
msgbox Mision7Lab4_Dialogo_Oak_Texto_8 MSGBOX_AUTOCLOSE
applymovement 5, Mision7Lab4_Dialogo_Oak_Move_3
waitmovement 0x0
msgbox Mision7Lab4_Dialogo_Oak_Texto_9 MSGBOX_AUTOCLOSE
delay 20
msgbox Mision7Lab4_Dialogo_Oak_Texto_10 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, Mision7Lab4_Dialogo_Oak_Move_8
applymovement 5, Mision7Lab4_Dialogo_Oak_Move_7
waitmovement 0x0
msgbox Mision7Lab4_Dialogo_Oak_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, Mision7Lab4_Dialogo_Oak_Move_11
applymovement 4, Mision7Lab4_Dialogo_Oak_Move_7
applymovement 3, Mision7Lab4_Dialogo_Oak_Move_7
waitmovement 0x0
msgbox Mision7Lab4_Dialogo_Oak_Texto_12 MSGBOX_AUTOCLOSE
msgbox Mision7Lab4_Dialogo_Oak_Texto_13 MSGBOX_AUTOCLOSE
applymovement 2, Mision7Lab4_Dialogo_Oak_Move_12
waitmovement 0x0
msgbox Mision7Lab4_Dialogo_Oak_Texto_14 MSGBOX_AUTOCLOSE
applymovement 2, Mision7Lab4_Dialogo_Oak_Move_11
waitmovement 0x0
delay 10
applymovement 2, Mision7Lab4_Dialogo_Oak_Move_11
waitmovement 0x0
msgbox Mision7Lab4_Dialogo_Oak_Texto_15 MSGBOX_AUTOCLOSE
applymovement 2, Mision7Lab4_Dialogo_Oak_Move_4
waitmovement 0x0
msgbox Mision7Lab4_Dialogo_Oak_Texto_16 MSGBOX_AUTOCLOSE
delay 20
applymovement 2, Mision7Lab4_Dialogo_Oak_Move_7
waitmovement 0x0
msgbox Mision7Lab4_Dialogo_Oak_Texto_17 MSGBOX_AUTOCLOSE
delay 40
setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
fadescreen 1
delay 20
call Script_RemoveTint
removeobject 2
removeobject 3
removeobject 4
removeobject 5
delay 20
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Mision7Lab4_Dialogo_Oak_Move_13
call Script_RemoveTint
waitmovement 0x0
special RemoveCameraObject
special DrawWholeMapView
setvar VAR_UNUSED_0x40F7, 193
release
end

Mision7Lab4_Dialogo_Oak_Move_13:
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
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Mision7Lab4_Dialogo_Oak_Move_12:
walk_in_place_down
step_end

Mision7Lab4_Dialogo_Oak_Move_11:
walk_slow_down
step_end

Mision7Lab4_Dialogo_Oak_Move_10:
face_down
step_end

Mision7Lab4_Dialogo_Oak_Move_9:
emote_exclamation_mark
step_end

Mision7Lab4_Dialogo_Oak_Move_8:
face_left
step_end

Mision7Lab4_Dialogo_Oak_Move_7:
face_right
step_end

Mision7Lab4_Dialogo_Oak_Move_6:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

Mision7Lab4_Dialogo_Oak_Move_6.1:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_left
walk_fast_left
step_end



Mision7Lab4_Dialogo_Oak_Move_5:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

Mision7Lab4_Dialogo_Oak_Move_4:
walk_in_place_left
step_end

Mision7Lab4_Dialogo_Oak_Move_1:
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
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Mision7Lab4_Dialogo_Oak_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
step_end

Mision7Lab4_Dialogo_Oak_Move_3:
face_up
step_end

Mision7Lab4_Dialogo_Oak_Texto_1:
	.string "OAK: The system security is very simple,\n"
	.string "look.$"

Mision7Lab4_Dialogo_Oak_Texto_2:
	.string "In order to progress to the next rooms,\n"
	.string "you'll need to defeat the pairs of\l"
	.string "POKÉMON located in the containment\l"
	.string "cabins.$"

Mision7Lab4_Dialogo_Oak_Texto_3:
	.string "In total, there are 5 cabins like this.\n"
	.string "Once all of them are deactivated…$"

Mision7Lab4_Dialogo_Oak_Texto_4:
.string "The door will be open automatically.$"

Mision7Lab4_Dialogo_Oak_Texto_5:
	.string "ELM: What prototypes have been used to\n"
	.string "protect the access?$"

Mision7Lab4_Dialogo_Oak_Texto_6:
	.string "OAK: All those created until the I\n"
	.string "GOLDENROD MEETING.$"

Mision7Lab4_Dialogo_Oak_Texto_7:
	.string "BILL: Just those? We already have\n"
	.string "created better ones.$"

Mision7Lab4_Dialogo_Oak_Texto_8:
	.string "S.MIGUEL: We're talking about POKÉMON\n"
	.string "with well-distributed +600 BASE STATS\l"
	.string "and good abilities. They have been\l"
	.string "created for combat; only a few trainers\l"
	.string "could pass this test.$"

Mision7Lab4_Dialogo_Oak_Texto_9:
	.string "BILL: Meh, they don't impress as much\n"
	.string "anymore. Everything progresses, and\l"
	.string "standards are being surpassed every\l"
	.string "day. Look at your MEGA AERODACTYL; the\l"
	.string "PRIMAL form is much more efficient.$"

Mision7Lab4_Dialogo_Oak_Texto_10:
.string "S.MIGUEL: {PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Mision7Lab4_Dialogo_Oak_Texto_11:
	.string "ELM: Don't exaggerate either, BILL. You\n"
	.string "yourself believed that you had no\l"
	.string "further room for improvement before\l"
	.string "accessing all this technology and\l"
	.string "working with us. Stagnation will come;\l"
	.string "we're not infinite.$"

Mision7Lab4_Dialogo_Oak_Texto_12:
	.string "OAK: But{PAUSE 25}…{PAUSE 25} He's right about something.\n"
	.string "What was considered strong yesterday\l"
	.string "is mediocre today. When did a POKÉMON\l"
	.string "like ZAPDOS cease to impress us? Or a\l"
	.string "TAUROS not be considered fast\l"
	.string "anymore?$"

Mision7Lab4_Dialogo_Oak_Texto_13:
.string "ELM: What is your point, OAK?$"

Mision7Lab4_Dialogo_Oak_Texto_14:
	.string "OAK: MEWTWO was special because it was\n"
	.string "the first to arrive, the only one to be\l"
	.string "truly extraordinary.$"

Mision7Lab4_Dialogo_Oak_Texto_15:
	.string "But now, facing this new legion of\n"
	.string "PROTOTYPES, all of them are\l"
	.string "extraordinary. The normalization of\l"
	.string "excellence causes them not to be\l"
	.string "considered as such in the eyes of the\l"
	.string "observer, even though biologically and\l"
	.string "physiologically, they truly are.$"

Mision7Lab4_Dialogo_Oak_Texto_16:
.string "I mean, if everyone is extraordinary{PAUSE 25}…$"

Mision7Lab4_Dialogo_Oak_Texto_17:
.string "{PAUSE 35}…{PAUSE 35} no one will be anymore.$"


Mision7Lab4_Primer_Cartel::
msgbox Mision7Lab4_Primer_Cartel_Texto_1 MSGBOX_SIGN
release
end

Mision7Lab4_Primer_Cartel_Texto_1:
.string "SECURITY CABIN: NUMBER 1$"


Mision7Lab4_Segundo_Cartel::
msgbox Mision7Lab4_Segundo_Cartel_Texto_1 MSGBOX_SIGN
release
end

Mision7Lab4_Segundo_Cartel_Texto_1:
.string "SECURITY CABIN: NUMBER 2$"


Mision7Lab4_Tercer_Cartel::
msgbox Mision7Lab4_Tercer_Cartel_Texto_1 MSGBOX_SIGN
release
end

Mision7Lab4_Tercer_Cartel_Texto_1:
.string "SECURITY CABIN: NUMBER 3$"


Mision7Lab4_Cuarto_Cartel::
msgbox Mision7Lab4_Cuarto_Cartel_Texto_1 MSGBOX_SIGN
release
end

Mision7Lab4_Cuarto_Cartel_Texto_1:
.string "SECURITY CABIN: NUMBER 4$"


Mision7Lab4_Quinto_Cartel::
msgbox Mision7Lab4_Quinto_Cartel_Texto_1 MSGBOX_SIGN
release
end

Mision7Lab4_Quinto_Cartel_Texto_1:
.string "SECURITY CABIN: NUMBER 5$"

Mision7Lab4_Puerta::
msgbox Mision7Lab4_Puerta_Texto_1 MSGBOX_SIGN
release
end

Mision7Lab4_Puerta_Texto_1:
.string "MAIN ENTRANCE$"


Mision7Lab4_Seteo_Metatiles::
lock
compare VAR_UNUSED_0x40F7, 197
goto_if_gt Mision7Lab4_Seteo_Metatiles_1
compare VAR_UNUSED_0x40F7, 197
goto_if_eq Mision7Lab4_Seteo_Metatiles_2
compare VAR_UNUSED_0x40F7, 196
goto_if_eq Mision7Lab4_Seteo_Metatiles_3
compare VAR_UNUSED_0x40F7, 195
goto_if_eq Mision7Lab4_Seteo_Metatiles_4
compare VAR_UNUSED_0x40F7, 194
goto_if_eq Mision7Lab4_Seteo_Metatiles_5
compare VAR_UNUSED_0x40F7, 192
goto_if_eq Mision7Lab4_Seteo_Metatiles_6
compare VAR_UNUSED_0x40F7, 193
goto_if_eq Mision7Lab4_Seteo_Metatiles_6
setvar VAR_TEMP_0, 1
release
end

Mision7Lab4_Seteo_Metatiles_1::
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end

Mision7Lab4_Seteo_Metatiles_6::
setmetatile 18, 21, 0x3B8, TRUE
setmetatile 18, 20, 0x3B0, TRUE
setmetatile 19, 21, 0x3B9, TRUE
setmetatile 19, 20, 0x3B1, TRUE
setmetatile 25, 21, 0x3B8, TRUE
setmetatile 25, 20, 0x3B0, TRUE
setmetatile 26, 21, 0x3B9, TRUE
setmetatile 26, 20, 0x3B1, TRUE
setmetatile 6, 44, 0x3B8, TRUE
setmetatile 6, 43, 0x3B0, TRUE
setmetatile 7, 44, 0x3B9, TRUE
setmetatile 7, 43, 0x3B1, TRUE
setmetatile 47, 6, 0x3B8, TRUE
setmetatile 47, 5, 0x3B0, TRUE
setmetatile 48, 6, 0x3B9, TRUE
setmetatile 48, 5, 0x3B1, TRUE
setmetatile 39, 21, 0x3B8, TRUE
setmetatile 39, 20, 0x3B0, TRUE
setmetatile 40, 21, 0x3B9, TRUE
setmetatile 40, 20, 0x3B1, TRUE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end


Mision7Lab4_Seteo_Metatiles_5::
setmetatile 25, 21, 0x3B8, TRUE
setmetatile 25, 20, 0x3B0, TRUE
setmetatile 26, 21, 0x3B9, TRUE
setmetatile 26, 20, 0x3B1, TRUE
setmetatile 6, 44, 0x3B8, TRUE
setmetatile 6, 43, 0x3B0, TRUE
setmetatile 7, 44, 0x3B9, TRUE
setmetatile 7, 43, 0x3B1, TRUE
setmetatile 47, 6, 0x3B8, TRUE
setmetatile 47, 5, 0x3B0, TRUE
setmetatile 48, 6, 0x3B9, TRUE
setmetatile 48, 5, 0x3B1, TRUE
setmetatile 39, 21, 0x3B8, TRUE
setmetatile 39, 20, 0x3B0, TRUE
setmetatile 40, 21, 0x3B9, TRUE
setmetatile 40, 20, 0x3B1, TRUE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end

Mision7Lab4_Seteo_Metatiles_4::
setmetatile 6, 44, 0x3B8, TRUE
setmetatile 6, 43, 0x3B0, TRUE
setmetatile 7, 44, 0x3B9, TRUE
setmetatile 7, 43, 0x3B1, TRUE
setmetatile 47, 6, 0x3B8, TRUE
setmetatile 47, 5, 0x3B0, TRUE
setmetatile 48, 6, 0x3B9, TRUE
setmetatile 48, 5, 0x3B1, TRUE
setmetatile 39, 21, 0x3B8, TRUE
setmetatile 39, 20, 0x3B0, TRUE
setmetatile 40, 21, 0x3B9, TRUE
setmetatile 40, 20, 0x3B1, TRUE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end

Mision7Lab4_Seteo_Metatiles_3::
setmetatile 47, 6, 0x3B8, TRUE
setmetatile 47, 5, 0x3B0, TRUE
setmetatile 48, 6, 0x3B9, TRUE
setmetatile 48, 5, 0x3B1, TRUE
setmetatile 39, 21, 0x3B8, TRUE
setmetatile 39, 20, 0x3B0, TRUE
setmetatile 40, 21, 0x3B9, TRUE
setmetatile 40, 20, 0x3B1, TRUE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end


Mision7Lab4_Seteo_Metatiles_2::
setmetatile 39, 21, 0x3B8, TRUE
setmetatile 39, 20, 0x3B0, TRUE
setmetatile 40, 21, 0x3B9, TRUE
setmetatile 40, 20, 0x3B1, TRUE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end

Proteccion_Segunda_Cabina::
playse SE_UNLOCK
waitse
setmetatile 18, 21, 0x3B8, TRUE
setmetatile 18, 20, 0x3B0, TRUE
setmetatile 19, 21, 0x3B9, TRUE
setmetatile 19, 20, 0x3B1, TRUE
special DrawWholeMapView
delay 5
playse SE_M_THUNDER_WAVE
applymovement OBJ_EVENT_ID_PLAYER, Cabina_Move_1
waitmovement 0x0
release
end

Cabina_Move_1:
walk_fast_down
step_end


Mision7Lab4_Combate_Nidoking::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
delay 20
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
playmoncry SPECIES_NIDOKING, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_NIDOQUEEN, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_NIDOKING, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_138, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_NIDOQUEEN, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 30
playse SE_UNLOCK
waitse
setmetatile 18, 21, 0x335, FALSE
setmetatile 18, 20, 0x335, FALSE
setmetatile 19, 21, 0x334, FALSE
setmetatile 19, 20, 0x334, FALSE
special DrawWholeMapView
delay 10
msgbox Mision7Lab4_Combate_Nidoking_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 194
release
end

Mision7Lab4_Combate_Nidoking_Texto_1:
.string "(You have awakened a wild POKÉMON!)$"

Mision7Lab4_Combate_Nidoking_Texto_3:
.string "(The CABIN 2 has been opened!)$"

Mision7Lab4_Combate_Electivire_Texto_3:
.string "(The CABIN 3 has been opened!)$"

Mision7Lab4_Combate_Aerodactyl_Texto_3:
.string "(The CABIN 4 has been opened!)$"

Mision7Lab4_Combate_Porygon_Texto_3:
.string "(The CABIN 5 has been opened!)$"

Mision7Lab4_Combate_Deoxys_Texto_3:
.string "(The MAIN ENTRANCE has been opened!)$"

Mision7Lab4_Combate_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

Proteccion_Tercera_Cabina::
playse SE_UNLOCK
waitse
setmetatile 25, 21, 0x3B8, TRUE
setmetatile 25, 20, 0x3B0, TRUE
setmetatile 26, 21, 0x3B9, TRUE
setmetatile 26, 20, 0x3B1, TRUE
special DrawWholeMapView
delay 5
playse SE_M_THUNDER_WAVE
applymovement OBJ_EVENT_ID_PLAYER, Cabina_Move_1
waitmovement 0x0
release
end



Mision7Lab4_Combate_Electivire::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
delay 20
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
playmoncry SPECIES_ELECTIVIRE, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_MAGMORTAR, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_ELECTIVIRE, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_139, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_MAGMORTAR, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 40
playse SE_UNLOCK
waitse
setmetatile 25, 21, 0x335, FALSE
setmetatile 25, 20, 0x335, FALSE
setmetatile 26, 21, 0x334, FALSE
setmetatile 26, 20, 0x334, FALSE
special DrawWholeMapView
delay 30
msgbox Mision7Lab4_Combate_Electivire_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 195
release
end

Proteccion_Cuarta_Cabina::
playse SE_UNLOCK
waitse
setmetatile 6, 44, 0x3B8, TRUE
setmetatile 6, 43, 0x3B0, TRUE
setmetatile 7, 44, 0x3B9, TRUE
setmetatile 7, 43, 0x3B1, TRUE
special DrawWholeMapView
delay 5
playse SE_M_THUNDER_WAVE
applymovement OBJ_EVENT_ID_PLAYER, Cabina_Move_1
waitmovement 0x0
release
end

Proteccion_Quinta_Cabina::
playse SE_UNLOCK
waitse
setmetatile 47, 6, 0x3B8, TRUE
setmetatile 47, 5, 0x3B0, TRUE
setmetatile 48, 6, 0x3B9, TRUE
setmetatile 48, 5, 0x3B1, TRUE
special DrawWholeMapView
delay 5
playse SE_M_THUNDER_WAVE
applymovement OBJ_EVENT_ID_PLAYER, Cabina_Move_1
waitmovement 0x0
release
end

Proteccion_Sexta_Cabina::
playse SE_UNLOCK
waitse
setmetatile 39, 21, 0x3B8, TRUE
setmetatile 39, 20, 0x3B0, TRUE
setmetatile 40, 21, 0x3B9, TRUE
setmetatile 40, 20, 0x3B1, TRUE
special DrawWholeMapView
delay 5
playse SE_M_THUNDER_WAVE
applymovement OBJ_EVENT_ID_PLAYER, Cabina_Move_1
waitmovement 0x0
release
end



Mision7Lab4_Combate_Aerodactyl::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
delay 20
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_140, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 40
playse SE_UNLOCK
waitse
special DrawWholeMapView
delay 30
msgbox Mision7Lab4_Combate_Aerodactyl_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 196
release
end

Mision7Lab4_Combate_Porygon::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
delay 20
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
playmoncry SPECIES_PORYGON_Z, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_PORYGON_Z, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_141, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 40
playse SE_UNLOCK
waitse
special DrawWholeMapView
delay 30
msgbox Mision7Lab4_Combate_Porygon_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 197
release
end

Mision7Lab4_Combate_Deoxys::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
delay 20
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_144, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 40
playse SE_UNLOCK
waitse
special DrawWholeMapView
delay 30
msgbox Mision7Lab4_Combate_Deoxys_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 198
release
end

Mision7Lab4_Escena_Lance::
playse 501
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Mision7Lab4_Escena_Lance_Move_1
waitmovement 0x0
special RemoveCameraObject
fadescreen 1
delay 20
removeobject 11
msgbox RocketHideout_8F_Mision_Silph_text_25.3 MSGBOX_AUTOCLOSE
fadescreen 0
addobject 16
call Script_SetGrayscaleTint
msgbox RocketHideout_8F_Mision_Silph_text_25.4 MSGBOX_AUTOCLOSE
applymovement 14, Mision7Lab4_Escena_Lance_Move_2
waitmovement 0x0
delay 15
applymovement 15, Mision7Lab4_Escena_Lance_Move_4
applymovement 13, Mision7Lab4_Escena_Lance_Move_4
applymovement 12, Mision7Lab4_Escena_Lance_Move_4
applymovement 14, Mision7Lab4_Escena_Lance_Move_3
waitmovement 0x0
setmetatile 38, 27, 0x63, TRUE
call Script_SetGrayscaleTint
special DrawWholeMapView
delay 30
showmonpic SPECIES_DITTO, 10, 4  
call Script_SetGrayscaleTint
delay 20
msgbox RocketHideout_8F_Mision_Silph_text_25.5 MSGBOX_AUTOCLOSE
hidemonpic
applymovement 15, Mision7Lab4_Escena_Lance_Move_9
applymovement 14, Mision7Lab4_Escena_Lance_Move_5
applymovement 13, Mision7Lab4_Escena_Lance_Move_7
applymovement 12, Mision7Lab4_Escena_Lance_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_25.6 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 16
addobject 17
delay 20
setmetatile 38, 27, 0x62, TRUE
call Script_SetGrayscaleTint
fadescreen 0
call Script_SetGrayscaleTint
applymovement 15, Mision7Lab4_Escena_Lance_Move_8
applymovement 13, Mision7Lab4_Escena_Lance_Move_8
applymovement 12, Mision7Lab4_Escena_Lance_Move_8
applymovement 14, Mision7Lab4_Escena_Lance_Move_8
waitmovement 0x0
call Script_SetGrayscaleTint
msgbox RocketHideout_8F_Mision_Silph_text_26 MSGBOX_AUTOCLOSE
applymovement 14, Mision7Lab4_Escena_Lance_Move_2
waitmovement 0x0
delay 15
applymovement 15, Mision7Lab4_Escena_Lance_Move_4
applymovement 13, Mision7Lab4_Escena_Lance_Move_4
applymovement 12, Mision7Lab4_Escena_Lance_Move_4
applymovement 14, Mision7Lab4_Escena_Lance_Move_3
waitmovement 0x0
setmetatile 38, 27, 0x63, TRUE
call Script_SetGrayscaleTint
special DrawWholeMapView
delay 30
showmonpic SPECIES_MEWTWO, 10, 4  
call Script_SetGrayscaleTint
delay 30
applymovement 15, Mision7Lab4_Escena_Lance_Move_8
applymovement 13, Mision7Lab4_Escena_Lance_Move_8
applymovement 12, Mision7Lab4_Escena_Lance_Move_8
applymovement 14, Mision7Lab4_Escena_Lance_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_27 MSGBOX_AUTOCLOSE
hidemonpic
applymovement 14, Mision7Lab4_Escena_Lance_Move_12
applymovement 12, Mision7Lab4_Escena_Lance_Move_10
applymovement 13, Mision7Lab4_Escena_Lance_Move_11
applymovement 15, Mision7Lab4_Escena_Lance_Move_13
waitmovement 0x0
delay 20
applymovement 15, Mision7Lab4_Escena_Lance_Move_14
applymovement 13, Mision7Lab4_Escena_Lance_Move_3
applymovement 12, Mision7Lab4_Escena_Lance_Move_3
applymovement 14, Mision7Lab4_Escena_Lance_Move_15
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_28 MSGBOX_AUTOCLOSE
delay 20
fadescreen 1
delay 20
msgbox RocketHideout_8F_Mision_Silph_text_29 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40DC, 9
warpsilent MAP_POKEMON_LEAGUE_ESCENALANCE, 4, 3
call Script_SetGrayscaleTint
release
end

Seteo_Var_Guerra::
lock
setvar VAR_UNUSED_0x40DC, 13
release
end

Mision7Lab4_Escena_Lance_Move_15:
walk_in_place_left
step_end

Mision7Lab4_Escena_Lance_Move_14:
walk_in_place_right
step_end

Mision7Lab4_Escena_Lance_Move_13:
walk_right
walk_right
walk_right
step_end

Mision7Lab4_Escena_Lance_Move_12:
walk_down
walk_left
step_end

Mision7Lab4_Escena_Lance_Move_11:
face_up
step_end

Mision7Lab4_Escena_Lance_Move_10:
walk_right
walk_up
step_end

Mision7Lab4_Escena_Lance_Move_9:
face_down
step_end

Mision7Lab4_Escena_Lance_Move_8:
emote_exclamation_mark
step_end

Mision7Lab4_Escena_Lance_Move_7:
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
delay_4
delay_4
face_left
step_end

Mision7Lab4_Escena_Lance_Move_6:
face_up
delay_4
delay_4
delay_4
delay_4
delay_4
delay_4
delay_4
face_left
step_end

Mision7Lab4_Escena_Lance_Move_5:
walk_down
walk_left
walk_left
step_end

Mision7Lab4_Escena_Lance_Move_4:
face_right
step_end

Mision7Lab4_Escena_Lance_Move_3:
walk_in_place_up
step_end

Mision7Lab4_Escena_Lance_Move_2:
walk_right
walk_right
walk_up
step_end

Mision7Lab4_Escena_Lance_Move_1:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Mision7Lab4_Documento::
lock
msgbox Mision7Lab4_Documento_Texto_1 MSGBOX_SIGN
delay 10
msgbox Mision7Lab4_Documento_Texto_2 MSGBOX_SIGN
delay 10
msgbox Mision7Lab4_Documento_Texto_3 MSGBOX_SIGN
release
end

Mision7Lab4_Documento_Texto_3:
	.string "It has more than 1000 pages!$"

Mision7Lab4_Documento_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Mision7Lab4_Documento_Texto_1:
	.string "-How to improve a POKÉMON\n"
	.string "performance and overtake\l"
	.string "DEEP BOND power.-$"
