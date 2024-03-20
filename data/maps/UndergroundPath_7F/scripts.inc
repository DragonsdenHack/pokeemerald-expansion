UndergroundPath_7F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, UndergroundPath_7F_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, UndergroundPath_7F_OnFrame
	.byte 0

UndergroundPath_7F_OnFrame:
map_script_2 VAR_ROUTE105_STATE, 7, UndergroundPath_7F_Combates_Motoristas
map_script_2 VAR_TEMP_0, 0, UndergroundPath_7F_Seteo_Metatiles
	.2byte 0

UndergroundPath_7F_Activacion_Zona_Sur::
compare VAR_ROUTE105_STATE, 10
goto_if_gt UndergroundPath_7F_Activacion_Zona_Sur_2
msgbox UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_3 MSGBOX_AUTOCLOSE
release
end

UndergroundPath_7F_Activacion_Zona_Sur_2::
msgbox UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_1 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_ICE_CRACK
delay 20
playse SE_UNLOCK
setmetatile 35, 110, 0x29C, FALSE
setmetatile 35, 111, 0x29C, FALSE
setmetatile 36, 110, 0x289, FALSE
setmetatile 36, 111, 0x289, FALSE
setmetatile 37, 110, 0x29E, FALSE
setmetatile 37, 111, 0x29E, FALSE
special DrawWholeMapView
release
end

UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_3:
	.string "(It seems this barrier can be\n"
	.string "deactivated using some kind of key.)$"

UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_1:
	.string "This barrier can be deactivated using\n"
	.string "the SOUTH CABIN KEY.$"

UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_2:
.string "Do you want to deactivate the barrier?$"

UndergroundPath_7F_Motero_Llave::
lock
faceplayer
compare VAR_ROUTE105_STATE, 9
goto_if_gt UndergroundPath_7F_Motero_Llave_2
msgbox UndergroundPath_7F_Motero_Llave_Texto_1 MSGBOX_NPC
setvar VAR_ROUTE105_STATE, 10
release
end

UndergroundPath_7F_Motero_Llave_2::
msgbox UndergroundPath_7F_Motero_Llave_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_7F_Cajas::
compare VAR_ROUTE105_STATE, 10
goto_if_eq UndergroundPath_7F_Cajas_2
release
end

UndergroundPath_7F_Cajas_2::
delay 10
msgbox UndergroundPath_7F_Cajas_Texto_1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER UndergroundPath_7F_Combates_Motoristas_Move_3
waitmovement 0x0
msgbox UndergroundPath_7F_Cajas_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox UndergroundPath_7F_Cajas_Texto_1 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_TMHM
msgbox UndergroundPath_7F_Cajas_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_TEPIG, 15, ITEM_NONE
waitfanfare
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM106_POWER_UP_PUNCH
msgbox UndergroundPath_7F_Cajas_Texto_4 MSGBOX_DEFAULT
waitfanfare
delay 10
msgbox UndergroundPath_7F_Cajas_Texto_1 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox UndergroundPath_7F_Cajas_Texto_5 MSGBOX_DEFAULT
waitfanfare
setvar VAR_ROUTE105_STATE, 11
release
end

UndergroundPath_7F_Cajas_Texto_5:
.string "YOU OBTAINED THE SOUTH CABIN KEY!!$"

UndergroundPath_7F_Cajas_Texto_4:
.string "YOU OBTAINED TM106 POWER-UP PUNCH!!$"

UndergroundPath_7F_Cajas_Texto_3:
.string "YOU OBTAINED A LV.15 TEPIG!!$"

UndergroundPath_7F_Cajas_Texto_2:
	.string "(In this BOX, there are several valuable\n"
	.string "items).$"

UndergroundPath_7F_Cajas_Texto_1:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_7F_Motero_Llave_Texto_1:
	.string "Do you see those boxes? That's what's\n"
	.string "left of the old black market. These\l"
	.string "still had several valuable items inside.\l"
	.string "I believe there was another black\l"
	.string "market northeast of here, but I am too\l"
	.string "lazy to go there to inspect the boxes…$"



UndergroundPath_7F_Seteo_Metatiles::
compare VAR_ROUTE105_STATE, 9
goto_if_eq UndergroundPath_7F_Seteo_Metatiles_2
compare VAR_ROUTE105_STATE, 10
goto_if_eq UndergroundPath_7F_Seteo_Metatiles_2
compare VAR_ROUTE105_STATE, 11
goto_if_eq UndergroundPath_7F_Seteo_Metatiles_2
compare VAR_ROUTE105_STATE, 12
goto_if_eq UndergroundPath_7F_Seteo_Metatiles_2
setvar VAR_TEMP_0, 1
release
end

UndergroundPath_7F_Seteo_Metatiles_2::
setmetatile 52, 70, 0x110, TRUE
setmetatile 53, 70, 0x110, TRUE
setmetatile 52, 69, 0x108, TRUE
setmetatile 53, 69, 0x108, TRUE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end

UndergroundPath_7F_Combates_Motoristas::
lock
delay 10
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_1 MSGBOX_AUTOCLOSE
delay 5
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_2 MSGBOX_AUTOCLOSE
delay 5
playse SE_PIN
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_2
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, UndergroundPath_7F_Combates_Motoristas_Move_3
applymovement 2, UndergroundPath_7F_Combates_Motoristas_Move_3
applymovement 21, UndergroundPath_7F_Combates_Motoristas_Move_3
waitmovement 0x0
delay 10
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_5 MSGBOX_AUTOCLOSE
applymovement 21, UndergroundPath_7F_Combates_Motoristas_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_9 MSGBOX_AUTOCLOSE
delay 15
playse MUS_RG_ENCOUNTER_BOY
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_197, UndergroundPath_7F_Combates_Motoristas_Texto_12
delay 5
playse MUS_RG_ENCOUNTER_BOY
applymovement 21, UndergroundPath_7F_Combates_Motoristas_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_198, UndergroundPath_7F_Combates_Motoristas_Texto_14
delay 5
playse MUS_RG_ENCOUNTER_BOY
applymovement 2, UndergroundPath_7F_Combates_Motoristas_Move_6
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combates_Motoristas_Move_7
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_15 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_199, UndergroundPath_7F_Combates_Motoristas_Texto_16
delay 5
playse MUS_RG_ENCOUNTER_BOY
applymovement 3, UndergroundPath_7F_Combates_Motoristas_Move_8
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combates_Motoristas_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_17 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_200, UndergroundPath_7F_Combates_Motoristas_Texto_18
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_10
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combates_Motoristas_Move_1.1
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_21 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE105_STATE, 8
release
end

UndergroundPath_7F_Combates_Motoristas_Move_10:
lock_facing_direction
walk_down
unlock_facing_direction
step_end


UndergroundPath_7F_Combates_Motoristas_Move_9:
face_right
step_end

UndergroundPath_7F_Combates_Motoristas_Move_8:
walk_left
step_end

UndergroundPath_7F_Combates_Motoristas_Move_7:
face_left
step_end

UndergroundPath_7F_Combates_Motoristas_Move_6:
walk_right
step_end

UndergroundPath_7F_Combates_Motoristas_Move_5:
walk_slow_up
step_end

UndergroundPath_7F_Combates_Motoristas_Move_4:
walk_in_place_up
step_end

UndergroundPath_7F_Combates_Motoristas_Move_3:
emote_exclamation_mark
step_end

UndergroundPath_7F_Combates_Motoristas_Move_2:
emote_exclamation_mark
lock_facing_direction
walk_down
unlock_facing_direction
step_end

UndergroundPath_7F_Combates_Motoristas_Move_1.1:
face_down
step_end

UndergroundPath_7F_Combates_Motoristas_Move_1:
walk_up
step_end

UndergroundPath_7F_Combates_Motoristas_Texto_1:
	.string "Hah! Another POLICE, huh? Haven't you\n"
	.string "had enough yet? We won't move from h…$"

UndergroundPath_7F_Combates_Motoristas_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_7F_Combates_Motoristas_Texto_3:
.string "It's the CHIEF ADMIN. {PLAYER}!$"

UndergroundPath_7F_Combates_Motoristas_Texto_4:
.string "We… we didn't expect to see you here.$"

UndergroundPath_7F_Combates_Motoristas_Texto_5:
	.string "Listen, sir… the BIKERS, we respect you\n"
	.string "a lot for what you did by defeating\l"
	.string "LANCE. But to be honest, the recent\l"
	.string "decisions made by TEAM ROCKET\l"
	.string "regarding KANTO are disgusting.$"

UndergroundPath_7F_Combates_Motoristas_Texto_6:
	.string "The plan was to return to pre-war\n"
	.string "KANTO, not turn it into a new\l"
	.string "technological powerhouse.$"

UndergroundPath_7F_Combates_Motoristas_Texto_7:
	.string "I ask you gently to stay at the margin,\n"
	.string "I know that is not your decision to\l"
	.string "close the UNDERGROUND PATHS.$"

UndergroundPath_7F_Combates_Motoristas_Texto_8:
.string "Do you decide to leave?$"

UndergroundPath_7F_Combates_Motoristas_Texto_9:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_7F_Combates_Motoristas_Texto_10:
	.string "So… We have no choice but to take you\n"
	.string "down, the four of us, just like we've\l"
	.string "done with the other POLICE.$"

UndergroundPath_7F_Combates_Motoristas_Texto_11:
.string "On guard!$"

UndergroundPath_7F_Combates_Motoristas_Texto_12:
.string "I expected it…$"

UndergroundPath_7F_Combates_Motoristas_Texto_13:
	.string "We're not going to show mercy, surviving\n"
	.string "so many WEEZING is impossible!$"

UndergroundPath_7F_Combates_Motoristas_Texto_14:
	.string "Grr… I thought I could have done\n"
	.string "something else.$"

UndergroundPath_7F_Combates_Motoristas_Texto_15:
	.string "You're proving your reputation, but can\n"
	.string "you sense the fatigue setting in?$"

UndergroundPath_7F_Combates_Motoristas_Texto_16:
.string "Apparently not…$"

UndergroundPath_7F_Combates_Motoristas_Texto_17:
	.string "It's over, I'm sorry CHIEF ADMIN. I have\n"
	.string "to finish you off and prevent you from\l"
	.string "entering the war shelters. I can't fail!$"

UndergroundPath_7F_Combates_Motoristas_Texto_18:
.string "I failed!$"

UndergroundPath_7F_Combates_Motoristas_Texto_19:
	.string "Damn it… It was to be expected that\n"
	.string "someone who defeated the JOHTO\l"
	.string "LEGENDARY BEASTS and the three\l"
	.string "DRAGONITE could handle all four of us…$"

UndergroundPath_7F_Combates_Motoristas_Texto_20:
	.string "But this place is an immense labyrinth,\n"
	.string "serving as refuge for all of KANTO\l"
	.string "during the war years.$"

UndergroundPath_7F_Combates_Motoristas_Texto_21:
	.string "You'll never be able to kick all of us\n"
	.string "out if you don't know the place\l"
	.string "beforehand!$"

UndergroundPath_7F_Primer_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_19 MSGBOX_NPC
release
end

UndergroundPath_7F_Segundo_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_21 MSGBOX_NPC
release
end

UndergroundPath_7F_Tercer_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Tercer_Motorista_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_7F_Tercer_Motorista_Texto_1:
	.string "This place is an immense labyrinth,\n"
	.string "serving as refuge for all of KANTO\l"
	.string "during the war years.$"

UndergroundPath_7F_Cuarto_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Cuarto_Motorista_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_7F_Cuarto_Motorista_Texto_1:
	.string "Will you join our side, or will you just\n"
	.string "follow orders?$"

UndergroundPath_7F_EventScript_Primer_Motero::
	trainerbattle_single TRAINER_TRAINER_201, UndergroundPath_7F_Text_Primer_MoteroIntro, UndergroundPath_7F_Text_Primer_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Primer_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Segundo_Motero::
	trainerbattle_single TRAINER_TRAINER_202, UndergroundPath_7F_Text_Segundo_MoteroIntro, UndergroundPath_7F_Text_Segundo_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Segundo_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Tercer_Motero::
	trainerbattle_single TRAINER_TRAINER_203, UndergroundPath_7F_Text_Tercer_MoteroIntro, UndergroundPath_7F_Text_Tercer_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Tercer_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Cuarto_Motero::
	trainerbattle_single TRAINER_TRAINER_204, UndergroundPath_7F_Text_Cuarto_MoteroIntro, UndergroundPath_7F_Text_Cuarto_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Cuarto_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Quinto_Motero::
	trainerbattle_single TRAINER_TRAINER_205, UndergroundPath_7F_Text_Quinto_MoteroIntro, UndergroundPath_7F_Text_Quinto_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Quinto_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Sexto_Motero::
	trainerbattle_single TRAINER_TRAINER_206, UndergroundPath_7F_Text_Sexto_MoteroIntro, UndergroundPath_7F_Text_Sexto_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Sexto_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Septimo_Motero::
	trainerbattle_single TRAINER_TRAINER_207, UndergroundPath_7F_Text_Septimo_MoteroIntro, UndergroundPath_7F_Text_Septimo_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Septimo_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Octavo_Motero::
	trainerbattle_single TRAINER_TRAINER_208, UndergroundPath_7F_Text_Octavo_MoteroIntro, UndergroundPath_7F_Text_Octavo_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Octavo_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Noveno_Motero::
	trainerbattle_single TRAINER_TRAINER_209, UndergroundPath_7F_Text_Noveno_MoteroIntro, UndergroundPath_7F_Text_Noveno_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Noveno_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Decimo_Motero::
	trainerbattle_single TRAINER_TRAINER_210, UndergroundPath_7F_Text_Decimo_MoteroIntro, UndergroundPath_7F_Text_Decimo_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Decimo_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Undecimo_Motero::
	trainerbattle_single TRAINER_TRAINER_211, UndergroundPath_7F_Text_Undecimo_MoteroIntro, UndergroundPath_7F_Text_Undecimo_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Undecimo_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Duodecimo_Motero::
	trainerbattle_single TRAINER_TRAINER_212, UndergroundPath_7F_Text_Duodecimo_MoteroIntro, UndergroundPath_7F_Text_Duodecimo_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Duodecimo_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end


UndergroundPath_7F_Combate_LtSurge::
lock
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combate_LtSurge_Move_1
waitmovement 0x0
goto UndergroundPath_7F_Combate_LtSurge_2

UndergroundPath_7F_Combate_LtSurge_2::
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 15
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combate_LtSurge_Move_2
waitmovement 0x0
delay 15
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_3
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_2 MSGBOX_AUTOCLOSE
delay 30
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_3 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_4 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_5 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_6
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_5.1 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_7
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_8 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_2
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_9 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combate_LtSurge_Move_8
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_6
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_11 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_12 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_7
waitmovement 0x0
playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combate_LtSurge_Move_10
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_13 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_7
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_14 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
trainerbattle_no_intro TRAINER_TRAINER_216, UndergroundPath_7F_Combate_LtSurge_Texto_15
delay 15
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_16 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_17 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_196, UndergroundPath_7F_Combate_LtSurge_Texto_18
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_18.1 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_19 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_11
waitmovement 0x0
playse SE_ICE_CRACK
delay 20
playse SE_UNLOCK
setmetatile 52, 70, 0x110, TRUE
setmetatile 53, 70, 0x110, TRUE
setmetatile 52, 69, 0x108, TRUE
setmetatile 53, 69, 0x108, TRUE
special DrawWholeMapView
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combate_LtSurge_Move_10
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_20 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_7
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_21 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_12
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 15
delay 30
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_23 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_24 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_25 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_26 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_27 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2
addobject 22
setvar VAR_ROUTE105_STATE, 9
release
end

UndergroundPath_7F_Combate_LtSurge_Move_12:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

UndergroundPath_7F_Combate_LtSurge_Move_11:
lock_facing_direction
walk_up
unlock_facing_direction
step_end

UndergroundPath_7F_Combate_LtSurge_Move_10:
emote_exclamation_mark
step_end

UndergroundPath_7F_Combate_LtSurge_Move_9:
walk_down
step_end

UndergroundPath_7F_Combate_LtSurge_Move_8:
walk_in_place_up
step_end

UndergroundPath_7F_Combate_LtSurge_Move_7:
walk_in_place_down
step_end

UndergroundPath_7F_Combate_LtSurge_Move_6:
face_down
step_end

UndergroundPath_7F_Combate_LtSurge_Move_5:
walk_in_place_right
step_end

UndergroundPath_7F_Combate_LtSurge_Move_4:
face_right
step_end

UndergroundPath_7F_Combate_LtSurge_Move_3:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

UndergroundPath_7F_Combate_LtSurge_Move_2:
face_up
step_end

UndergroundPath_7F_Combate_LtSurge_Move_1:
walk_slow_left
face_up
step_end


UndergroundPath_7F_Combate_LtSurge_Texto_1:
	.string "????: Do you truly believe you're\n"
	.string "fighting for the right cause,\l"
	.string "{PLAYER}?$"

UndergroundPath_7F_Combate_LtSurge_Texto_2:
	.string "LT.SURGE: I am, according to my own\n"
	.string "terms. Are you, according to yours?$"

UndergroundPath_7F_Combate_LtSurge_Texto_3:
.string "Are you so surprised to see me here?$"

UndergroundPath_7F_Combate_LtSurge_Texto_4:
	.string "Honestly, after LANCE's fall,\n"
	.string "everything in KANTO became more boring.\l"
	.string "I even regretted the compassion\l"
	.string "GIOVANNI showed; far from retaliating,\l"
	.string "he never demanded my removal as the\l"
	.string "LEADER in VERMILION CITY.$"

UndergroundPath_7F_Combate_LtSurge_Texto_5:
	.string "To be honest, I'd have rather ended up\n"
	.string "in jail than be part of the bland\l"
	.string "transition phase in KANTO; that\l"
	.string "lifestyle isn't my cup of tea.$"

UndergroundPath_7F_Combate_LtSurge_Texto_5.1:
	.string "In the end, a fighter lives for battle,\n"
	.string "right? Someone like you must surely\l"
	.string "understand.$"

UndergroundPath_7F_Combate_LtSurge_Texto_6:
	.string "Fortunately… the mission of these\n"
	.string "BIKERS reignited that warlike spark\l"
	.string "I've always had.$"

UndergroundPath_7F_Combate_LtSurge_Texto_7:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_7F_Combate_LtSurge_Texto_8:
	.string "I must admit, the people of KANTO are\n"
	.string "resilient and tenacious; building such\l"
	.string "an underground network… half of KANTO\l"
	.string "must have taken refuge here during the\l"
	.string "war. You can imagine what would have\l"
	.string "happened if we had this information a\l"
	.string "few years ago.$"

UndergroundPath_7F_Combate_LtSurge_Texto_9:
	.string "However, times have changed; now it's me\n"
	.string "who defends this place, while the\l"
	.string "supposed -savior- of KANTO aims to\l"
	.string "destroy it. How ironic, don't you think?$"

UndergroundPath_7F_Combate_LtSurge_Texto_10:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_7F_Combate_LtSurge_Texto_11:
.string "Hah, defeat me so easily?$"

UndergroundPath_7F_Combate_LtSurge_Texto_12:
	.string "We're not in a regulated fight,\n"
	.string "CHAMPION… this…$"

UndergroundPath_7F_Combate_LtSurge_Texto_13:
	.string "(LT. SURGE released several explosive\n"
	.string "POKÉMON).$"

UndergroundPath_7F_Combate_LtSurge_Texto_14:
.string "It's a guerrilla-style war!$"

UndergroundPath_7F_Combate_LtSurge_Texto_15:
.string "…$"

UndergroundPath_7F_Combate_LtSurge_Texto_16:
	.string "What did you think of that little\n"
	.string "skirmish? Now…$"

UndergroundPath_7F_Combate_LtSurge_Texto_17:
	.string "Let's start the real war!$"

UndergroundPath_7F_Combate_LtSurge_Texto_18:
.string "I lost the battle and… the war?$"

UndergroundPath_7F_Combate_LtSurge_Texto_18.1:
	.string "How is this possible? When my faithful\n"
	.string "RAICHU responded to that new STONE\l"
	.string "developed by you, I thought I could\l"
	.string "finally defeat you. But neither that\l"
	.string "nor my explosives have been sufficient.$"

UndergroundPath_7F_Combate_LtSurge_Texto_19:
	.string "Grrr… it seems you've become an even\n"
	.string "better TRAINER, you leave me no choice.$"

UndergroundPath_7F_Combate_LtSurge_Texto_20:
	.string "There's a reason they hired me,\n"
	.string "{PLAYER}. You may beat me in a\l"
	.string "POKÉMON battle, but here, I'm in my\l"
	.string "element. Without the key, you'll never\l"
	.string "enter.$"

UndergroundPath_7F_Combate_LtSurge_Texto_21:
	.string "Now, you'll have to excuse me, we must\n"
	.string "continue mapping out the action plan.\l"
	.string "In the meantime, feel free to continue\l"
	.string "wandering through the refuge if you\l"
	.string "wish.$"

UndergroundPath_7F_Combate_LtSurge_Texto_22:
	.string "ANDRA: {PLAYER}!? The POLICEMAN from\n"
	.string "LAVENDER TOWN just told me everything.$"

UndergroundPath_7F_Combate_LtSurge_Texto_23:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_7F_Combate_LtSurge_Texto_24:
.string "Are you really inside already?$"

UndergroundPath_7F_Combate_LtSurge_Texto_25:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_7F_Combate_LtSurge_Texto_26:
	.string "That SURGE… Listen, {PLAYER}. There\n"
	.string "must be a KEY somewhere, perhaps one of\l"
	.string "the BIKERS has it… or knows something.\l"
	.string "If I were you, I'd talk to everyone and\l"
	.string "try to get something out of them.$"

UndergroundPath_7F_Combate_LtSurge_Texto_27:
	.string "Either way, keep fighting. I'll be there\n"
	.string "soon, and we'll see what's happening\l"
	.string "there.$"

UndergroundPath_7F_Escena_Final::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 17, UndergroundPath_7F_Escena_Final_Move_3
applymovement 16, UndergroundPath_7F_Escena_Final_Move_3
applymovement 23, UndergroundPath_7F_Escena_Final_Move_2
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Escena_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_3 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_4
applymovement 23, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_6
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_7
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_8
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_6 MSGBOX_AUTOCLOSE
applymovement 16, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_9 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_10 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_65 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 23, UndergroundPath_7F_Escena_Final_Move_8
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_66 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_10
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_67 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_68 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Escena_Final_Texto_69 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_5
applymovement 16, UndergroundPath_7F_Escena_Final_Move_11
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_70 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_71 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_13
applymovement 17, UndergroundPath_7F_Escena_Final_Move_14
applymovement 23, UndergroundPath_7F_Escena_Final_Move_12
applymovement 16, UndergroundPath_7F_Escena_Final_Move_12
waitmovement 0x0
applymovement 17, UndergroundPath_7F_Escena_Final_Move_15
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_11 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_72 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_14
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_12 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_13 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_15
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_73 MSGBOX_AUTOCLOSE
delay 15
applymovement 17, UndergroundPath_7F_Escena_Final_Move_15
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 17, UndergroundPath_7F_Escena_Final_Move_16
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_17 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_17
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_74 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_3
waitmovement 0x0
applymovement 23, UndergroundPath_7F_Escena_Final_Move_18
applymovement 16, UndergroundPath_7F_Escena_Final_Move_18
waitmovement 0x0
applymovement 23, UndergroundPath_7F_Escena_Final_Move_20
applymovement 16, UndergroundPath_7F_Escena_Final_Move_19
waitmovement 0x0
delay 10
msgbox UndergroundPath_7F_Escena_Final_Texto_75 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 16, UndergroundPath_7F_Escena_Final_Move_20
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_18 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_195, UndergroundPath_7F_Escena_Final_Texto_19
msgbox UndergroundPath_7F_Escena_Final_Texto_19.1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_6
applymovement 17, UndergroundPath_7F_Escena_Final_Move_15
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_20 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_21 MSGBOX_AUTOCLOSE
playse 603
applymovement 17, UndergroundPath_7F_Escena_Final_Move_15
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_22 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_194, UndergroundPath_7F_Escena_Final_Texto_23
msgbox UndergroundPath_7F_Escena_Final_Texto_24 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_25 MSGBOX_AUTOCLOSE
delay 15
playse SE_BREAKABLE_DOOR
applymovement 23, UndergroundPath_7F_Escena_Final_Move_20
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_26 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 17, UndergroundPath_7F_Escena_Final_Move_8
applymovement 16, UndergroundPath_7F_Escena_Final_Move_8
waitmovement 0x0
applymovement 17, UndergroundPath_7F_Escena_Final_Move_14
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_14
applymovement 23, UndergroundPath_7F_Escena_Final_Move_21
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_27 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_28 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 23, UndergroundPath_7F_Escena_Final_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_29 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_30 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 17, UndergroundPath_7F_Escena_Final_Move_22
applymovement 16, UndergroundPath_7F_Escena_Final_Move_22
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_22
applymovement 23, UndergroundPath_7F_Escena_Final_Move_22
msgbox UndergroundPath_7F_Escena_Final_Texto_31 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 24
applymovement 24, UndergroundPath_7F_Escena_Final_Move_23
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_32 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_33 MSGBOX_AUTOCLOSE
applymovement 16, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_34 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_7F_Escena_Final_Texto_35 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_36 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_38 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_39 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 17, UndergroundPath_7F_Escena_Final_Move_8
applymovement 16, UndergroundPath_7F_Escena_Final_Move_8
waitmovement 0x0
applymovement 24, UndergroundPath_7F_Escena_Final_Move_24
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_40 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_25
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_41 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_42 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_43 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_26
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_44 MSGBOX_AUTOCLOSE
delay 10
msgbox UndergroundPath_7F_Escena_Final_Texto_45 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
delay 15
applymovement 24, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_46 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_25
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_47 MSGBOX_AUTOCLOSE
delay 10
msgbox UndergroundPath_7F_Escena_Final_Texto_48 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_24
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_49 MSGBOX_AUTOCLOSE
delay 10
msgbox UndergroundPath_7F_Escena_Final_Texto_49.1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 17, UndergroundPath_7F_Escena_Final_Move_8
applymovement 16, UndergroundPath_7F_Escena_Final_Move_8
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_49.2 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_50 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_51 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_52 MSGBOX_AUTOCLOSE
applymovement 16, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_53 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_14
applymovement 16, UndergroundPath_7F_Escena_Final_Move_27
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_54 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_841
fadescreen 1
removeobject 1
removeobject 2
removeobject 3
removeobject 4
removeobject 7
removeobject 9
removeobject 11
removeobject 12
removeobject 14
removeobject 19
removeobject 20
removeobject 21
removeobject 22
removeobject 16
removeobject 17
delay 20
fadescreen 0
delay 10
applymovement 23, UndergroundPath_7F_Escena_Final_Move_28
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_55 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_56 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_29
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_57 MSGBOX_AUTOCLOSE
removeobject 23
applymovement 24, UndergroundPath_7F_Escena_Final_Move_30
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_58 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_59 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_6
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_60 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_31
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_61 MSGBOX_AUTOCLOSE
delay 20
applymovement 24, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_62 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_63 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_3
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_64 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_29
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2
setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 22
removeobject 24
removeobject 15
setvar VAR_ROUTE105_STATE, 13
release
end

UndergroundPath_7F_Escena_Final_Move_31:
walk_down
step_end

UndergroundPath_7F_Escena_Final_Move_30:
walk_right
walk_up
step_end

UndergroundPath_7F_Escena_Final_Move_29:
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
step_end

UndergroundPath_7F_Escena_Final_Move_28:
walk_down
walk_down
walk_left
step_end

UndergroundPath_7F_Escena_Final_Move_27:
walk_down
face_left
step_end

UndergroundPath_7F_Escena_Final_Move_26:
walk_down
step_end

UndergroundPath_7F_Escena_Final_Move_24:
walk_slow_right
step_end

UndergroundPath_7F_Escena_Final_Move_25:
walk_slow_left
step_end

UndergroundPath_7F_Escena_Final_Move_23:
walk_up
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_up
step_end

UndergroundPath_7F_Escena_Final_Move_22:
emote_exclamation_mark
face_down
step_end

UndergroundPath_7F_Escena_Final_Move_21:
walk_up
face_left
step_end

UndergroundPath_7F_Escena_Final_Move_20:
walk_up
step_end

UndergroundPath_7F_Escena_Final_Move_19:
walk_left
face_up
step_end

UndergroundPath_7F_Escena_Final_Move_18:
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

UndergroundPath_7F_Escena_Final_Move_17:
walk_right
step_end

UndergroundPath_7F_Escena_Final_Move_16:
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end

UndergroundPath_7F_Escena_Final_Move_15:
walk_in_place_right
step_end

UndergroundPath_7F_Escena_Final_Move_14:
face_right
step_end

UndergroundPath_7F_Escena_Final_Move_13:
walk_slow_up
walk_slow_up
face_left
step_end

UndergroundPath_7F_Escena_Final_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_down
walk_down
step_end


UndergroundPath_7F_Escena_Final_Move_11:
walk_right
walk_down
walk_down
step_end

UndergroundPath_7F_Escena_Final_Move_10:
walk_left
step_end

UndergroundPath_7F_Escena_Final_Move_9:
walk_in_place_left
step_end

UndergroundPath_7F_Escena_Final_Move_8:
emote_exclamation_mark
step_end

UndergroundPath_7F_Escena_Final_Move_7:
walk_slow_up
walk_slow_up
walk_slow_left
walk_slow_up
step_end

UndergroundPath_7F_Escena_Final_Move_6:
face_left
step_end

UndergroundPath_7F_Escena_Final_Move_5:
face_up
step_end

UndergroundPath_7F_Escena_Final_Move_4:
walk_in_place_down
step_end

UndergroundPath_7F_Escena_Final_Move_3:
face_down
step_end

UndergroundPath_7F_Escena_Final_Move_2:
emote_exclamation_mark
delay_8
face_down
step_end

UndergroundPath_7F_Escena_Final_Move_1:
walk_in_place_up
step_end

UndergroundPath_7F_Escena_Final_Texto_1:
.string "LT.SURGE: How is this possible?$"

UndergroundPath_7F_Escena_Final_Texto_2:
	.string "Those incompetents, I already ordered\n"
	.string "them to get rid of all the keys.\l"
	.string "Mistakes like these are what tip the\l"
	.string "scales.$"

UndergroundPath_7F_Escena_Final_Texto_3:
	.string "But not this time, you may have bested\n"
	.string "me and my explosives, or those 3 poor\l"
	.string "sods, but not 2 more like m...!$"

UndergroundPath_7F_Escena_Final_Texto_4:
	.string "????: Stop, SURGE! We can't hide this\n"
	.string "anymore, let him pass.$"

UndergroundPath_7F_Escena_Final_Texto_5:
	.string "LT.SURGE: Hah, the question is, what are\n"
	.string "you going to do now, {PLAYER}?$"

UndergroundPath_7F_Escena_Final_Texto_6:
	.string "PETREL: Indeed, {PLAYER}. KOGA and I\n"
	.string "are in charge of this rebellion.$"

UndergroundPath_7F_Escena_Final_Texto_7:
	.string "KOGA: We've always been loyal to TEAM\n"
	.string "ROCKET, {PLAYER}. But we can't stand\l"
	.string "idly by in this situation. Things are\l"
	.string "changing too fast in our region.$"

UndergroundPath_7F_Escena_Final_Texto_8:
	.string "PETREL: I'm not a CHIEF ADMIN. to know\n"
	.string "everything that's been discussed in\l"
	.string "those GOLDENROD meetings. But in the\l"
	.string "span of a year, KANTO has turned into a\l"
	.string "wasteland: POKÉMON TOWER demolished,\l"
	.string "SILPH closed, SAFARI ZONE closed, and\l"
	.string "now, the UNDERGROUND PATHS closed as\l"
	.string "well.$"

UndergroundPath_7F_Escena_Final_Texto_9:
	.string "KOGA: Anyone coming from outside will\n"
	.string "think this is an empty region, and yet,\l"
	.string "we're in the midst of opening up to the\l"
	.string "world.$"

UndergroundPath_7F_Escena_Final_Texto_10:
	.string "LT.SURGE: Commerce, KOGA, commercial\n"
	.string "opening. I told you before, KANTO will\l"
	.string "now serve to do business with other\l"
	.string "regions. Forget about its iconic places!\l"
	.string "They'll either disappear or won't be\l"
	.string "visitable!$"

UndergroundPath_7F_Escena_Final_Texto_65:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_7F_Escena_Final_Texto_66:
	.string "LT.SURGE: Having a private\n"
	.string "conversation with PETREL? Are you\l"
	.string "kidding!?$"

UndergroundPath_7F_Escena_Final_Texto_67:
	.string "Hah! Who do you think you are, kid? We\n"
	.string "call the shots here, you're not going to\l"
	.string "walk around as you please anymo…$"

UndergroundPath_7F_Escena_Final_Texto_68:
.string "PETREL: SURGE!$"

UndergroundPath_7F_Escena_Final_Texto_69:
	.string "Alright, {PLAYER} is currently\n"
	.string "confused. We're both members of TEAM\l"
	.string "ROCKET, and he deserves an explanation\l"
	.string "in private.$"

UndergroundPath_7F_Escena_Final_Texto_70:
	.string "KOGA: He won't attempt anything,\n"
	.string "{PLAYER} has shown to be\l"
	.string "trustworthy. SURGE and I will leave,\l"
	.string "take all the time you need.$"

UndergroundPath_7F_Escena_Final_Texto_71:
	.string "LT.SURGE: …$"

UndergroundPath_7F_Escena_Final_Texto_11:
	.string "PETREL: Listen, {PLAYER}. Whether\n"
	.string "KANTO is empty or not, that's not the\l"
	.string "truly important thing. I've witnessed\l"
	.string "the trend our organization has taken\l"
	.string "since you defeated LANCE.$"

UndergroundPath_7F_Escena_Final_Texto_72:
	.string "TEAM ROCKET has expanded massively.\n"
	.string "Now we have branches in several\l"
	.string "regions, countless secret bases, new\l"
	.string "contacts… But…$"

UndergroundPath_7F_Escena_Final_Texto_12:
	.string "I'm afraid this expansion might lead us\n"
	.string "to abandon our ideals and forget where\l"
	.string "we come from. The way the issue of the\l"
	.string "BIKERS was handled, those who\l"
	.string "supported us when we were at our worst,\l"
	.string "made me reconsider many things.$"

UndergroundPath_7F_Escena_Final_Texto_13:
	.string "It's true that GIOVANNI has a thousand\n"
	.string "things in his mind, and he didn't give it\l"
	.string "the importance that he normally would…$"

UndergroundPath_7F_Escena_Final_Texto_14:
	.string "PETREL: And that's why we're here,\n"
	.string "{PLAYER}. By holding firm here, we'll\l"
	.string "make sure he'll listen to us, the BIKERS\l"
	.string "deserve something better after their\l"
	.string "years of loyalty to TEAM ROCKET.$"

UndergroundPath_7F_Escena_Final_Texto_73:
	.string "It's their identity that's at stake, not\n"
	.string "just their future. They're also part of\l"
	.string "KANTO.$"

UndergroundPath_7F_Escena_Final_Texto_15:
.string "You understand us, right?\n"
	.string "{PLAYER}?$"

UndergroundPath_7F_Escena_Final_Texto_16:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_7F_Escena_Final_Texto_17:
	.string "I see. You want us to surrender and beg\n"
	.string "for mercy from GIOVANNI. You know\l"
	.string "that's impossible.$"

UndergroundPath_7F_Escena_Final_Texto_74:
	.string "I'm sorry {PLAYER}, but you leave us no\n"
	.string "choice. You force us to speak a\l"
	.string "language that everyone here can\l"
	.string "understand.$"

UndergroundPath_7F_Escena_Final_Texto_75:
	.string "LT.SURGE: The war language!$"

UndergroundPath_7F_Escena_Final_Texto_18:
	.string "KOGA: I'm afraid… We have no choice but\n"
	.string "to fight again to reclaim the old KANTO!$"

UndergroundPath_7F_Escena_Final_Texto_19:
.string "Stay true to what you believe in!$"

UndergroundPath_7F_Escena_Final_Texto_19.1:
	.string "KOGA: Your journey is immeasurable,\n"
	.string "{PLAYER}. It was a luxury to have you\l"
	.string "as an ally, but not this time. We won't\l"
	.string "leave KANTO's fate to chance.$"

UndergroundPath_7F_Escena_Final_Texto_20:
	.string "PETREL: I'm sorry, {PLAYER}. In this\n"
	.string "case, the end is above all. If I have to\l"
	.string "defeat you by taking advantage of your\l"
	.string "battle with KOGA, I will.$"

UndergroundPath_7F_Escena_Final_Texto_21:
	.string "You wouldn't understand, we've seen and\n"
	.string "suffered too much in this region, and I\l"
	.string "won't let others interfere in something\l"
	.string "that is ours.$"

UndergroundPath_7F_Escena_Final_Texto_22:
.string "We'll do it all our way!$"

UndergroundPath_7F_Escena_Final_Texto_23:
	.string "WEEZING… You defended the honor of\n"
	.string "your comrades…$"

UndergroundPath_7F_Escena_Final_Texto_24:
	.string "PETREL: I see, your combat skills are\n"
	.string "unique.$"

UndergroundPath_7F_Escena_Final_Texto_25:
	.string "I suppose, after all, we never won the\n"
	.string "war. The KANTO we still envision no\l"
	.string "longer exists, and it never will again.$"

UndergroundPath_7F_Escena_Final_Texto_26:
	.string "LT.SURGE: This is not over yet!$"

UndergroundPath_7F_Escena_Final_Texto_27:
	.string "That's why you lost! Because you don't\n"
	.string "know how to push the enemy to the limit.\l"
	.string "{PLAYER}'s POKÉMON are close to faint,\l"
	.string "and you'll let them go now?$"

UndergroundPath_7F_Escena_Final_Texto_28:
.string "KOGA: SURGE, it's enou… $"

UndergroundPath_7F_Escena_Final_Texto_29:
	.string "LT.SURGE: No! Now is the opportunity to\n"
	.string "finish off the enemy! That's why I'm\l"
	.string "here!$"

UndergroundPath_7F_Escena_Final_Texto_30:
.string "RAICHU! THUND…!$"

UndergroundPath_7F_Escena_Final_Texto_31:
.string "????: It's over!$"

UndergroundPath_7F_Escena_Final_Texto_32:
.string "PETREL: A…ANDRA.$"

UndergroundPath_7F_Escena_Final_Texto_33:
.string "ANDRA: I see… You… $"

UndergroundPath_7F_Escena_Final_Texto_34:
	.string "KOGA: There's no turning back, we'll take\n"
	.string "responsibility for our actions and…$"

UndergroundPath_7F_Escena_Final_Texto_35:
.string "ANDRA: Wait.$"

UndergroundPath_7F_Escena_Final_Texto_36:
	.string "I may not come from KANTO like you, but\n"
	.string "I respect the customs and traditions\l"
	.string "of those who came before me.$"

UndergroundPath_7F_Escena_Final_Texto_37:
	.string "I have an idea, but we must act quickly.$"

UndergroundPath_7F_Escena_Final_Texto_38:
.string "PETREL: We're listening, ANDRA.$"

UndergroundPath_7F_Escena_Final_Texto_39:
	.string "ANDRA: I'll use all my power and\n"
	.string "influence in TEAM ROCKET to convince\l"
	.string "GIOVANNI to cede SAFARI ZONE to the\l"
	.string "BIKERS.$"

UndergroundPath_7F_Escena_Final_Texto_40:
	.string "There, they can settle in just as they\n"
	.string "did here, and they can also\l"
	.string "re-establish a black market, as the\l"
	.string "SAFARI ZONE will remain closed to the\l"
	.string "general public.$"

UndergroundPath_7F_Escena_Final_Texto_41:
	.string "The place is in FUCHSIA CITY, next to\n"
	.string "the CYCLING ROAD, and it's a paradise\l"
	.string "that will go to waste.$"

UndergroundPath_7F_Escena_Final_Texto_42:
.string "What do you think?$"

UndergroundPath_7F_Escena_Final_Texto_43:
.string "KOGA: That… That would be… $"

UndergroundPath_7F_Escena_Final_Texto_44:
	.string "PETREL: It would be a dream for them,\n"
	.string "for us. We would definitely accept it!$"

UndergroundPath_7F_Escena_Final_Texto_45:
.string "ANDRA: {PLAYER}?$"

UndergroundPath_7F_Escena_Final_Texto_46:
	.string "No more talk, you have my word and\n"
	.string "promise.$"

UndergroundPath_7F_Escena_Final_Texto_47:
	.string "But now we must act quickly. Luckily,\n"
	.string "the rebellion has been brief, and you\l"
	.string "haven't made enough noise yet to\l"
	.string "attract GIOVANNI's attention.$"

UndergroundPath_7F_Escena_Final_Texto_48:
	.string "LT.SURGE: Not for long, If they see\n"
	.string "that {PLAYER} takes longer to return,\l"
	.string "they'll call SILPH's PRESIDENT, and from\l"
	.string "there, GIOVANNI will know about this.$"

UndergroundPath_7F_Escena_Final_Texto_49:
	.string "ANDRA: What I mean is, GIOVANNI is still\n"
	.string "not aware of what you've done. You still\l"
	.string "have time to make things right and\l"
	.string "convince all the BIKERS.$"

UndergroundPath_7F_Escena_Final_Texto_49.1:
	.string "Also, he trusts you. Do you know what he\n"
	.string "said in GOLDENROD, KOGA? That you're\l"
	.string "going to fill AGATHA's vacant position in\l"
	.string "the ELITE FOUR.$"

UndergroundPath_7F_Escena_Final_Texto_49.2:
.string "KOGA: Oh… $"

UndergroundPath_7F_Escena_Final_Texto_50:
	.string "You know that you have {PLAYER}'s\n"
	.string "word and mine to convince GIOVANNI to\l"
	.string "hand over the SAFARI ZONE to you.$"

UndergroundPath_7F_Escena_Final_Texto_51:
	.string "Along with ARCHER, we're the\n"
	.string "highest-ranked ROCKET members. He will\l"
	.string "definitely listen to us!$"

UndergroundPath_7F_Escena_Final_Texto_52:
.string "PETREL: No more talk!\n"
	.string "We trust your word.$"

UndergroundPath_7F_Escena_Final_Texto_53:
.string "KOGA! Let's go!$"

UndergroundPath_7F_Escena_Final_Texto_54:
	.string "KOGA: Young lady, it's because of people\n"
	.string "like you that this region and TEAM\l"
	.string "ROCKET have a future. Indeed,\l"
	.string "greatness can come from anywhere, even\l"
	.string "from a small island.$"

UndergroundPath_7F_Escena_Final_Texto_55:
	.string "LT.SURGE: Insolent girl! You've ruined\n"
	.string "the party just when I was about to\l"
	.string "finish off {PLAYER}.$"

UndergroundPath_7F_Escena_Final_Texto_56:
	.string "I should have gotten rid of you that\n"
	.string "day at the POWER PLANT, when you were\l"
	.string "barely holding on, instead of going\l"
	.string "after {PLAYER}!$"

UndergroundPath_7F_Escena_Final_Texto_57:
	.string "ANDRA: Hah! He got what he deserved,\n"
	.string "now he's leaving without fighting\l"
	.string "because he knows he doesn't have any\l"
	.string "chance in a 1-on-1 battle.$"

UndergroundPath_7F_Escena_Final_Texto_58:
	.string "By the way, I saw FUJI in LAVENDER TOWN.\n"
	.string "They were just about to open the RADIO\l"
	.string "TOWER; by now, it should already be\l"
	.string "open.$"

UndergroundPath_7F_Escena_Final_Texto_59:
	.string "The thing is that FUJI was looking for\n"
	.string "you, I think he has something important\l"
	.string "to tell you.$"

UndergroundPath_7F_Escena_Final_Texto_60:
	.string "In the meantime, I'll go talk to\n"
	.string "GIOVANNI. Don't worry, I'm sure he'll\l"
	.string "agree.$"

UndergroundPath_7F_Escena_Final_Texto_61:
.string "I see you at LAVENDER TOWN RADIO TOWER.$"

UndergroundPath_7F_Escena_Final_Texto_62:
	.string "Being honest, I feel a bit dizzy about\n"
	.string "whatever that place might have on its\l"
	.string "upper floors.$"

UndergroundPath_7F_Escena_Final_Texto_63:
	.string "But… It's not time to back down, right?\n"
	.string "We've come too far and seen too much,\l"
	.string "it's just another damn event.$"

UndergroundPath_7F_Escena_Final_Texto_64:
.string "Everything will be alright!$"



