Newbark_ElmLaboratory_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Newbark_ElmLaboratory_OnFrame
	.byte 0

Newbark_ElmLaboratory_OnFrame:
map_script_2 VAR_UNUSED_0x40F8, 57, Newbark_ElmLaboratory_Final
	.2byte 0

ElmLaboratory1::
end



ElmLaboratory2::
lock     
faceplayer     
msgbox NewBarkTown_ElmLaboratory_Text_2, MSGBOX_DEFAULT
release     
end

NewBarkTown_ElmLaboratory_Text_2:
.string "There's a lot of work to do!\n"
.string "The entire region must be\l"
.string "accommodated for it!$"



ElmLaboratory3::
lock     
faceplayer     
msgbox NewBarkTown_ElmLaboratory_Text_3, MSGBOX_DEFAULT
release     
end

NewBarkTown_ElmLaboratory_Text_3:
.string "Oh, you must be {PLAYER}, aren't you?\n"
.string "How does it feel to stay ahead of OAK?$"

NewBarkTown_ElmLaboratory_Combate_Elm::
lock
faceplayer
compare VAR_UNUSED_0x40F8, 54
goto_if_gt NewBarkTown_ElmLaboratory_Combate_Elm_Hoenn
goto_if_set FLAG_HOENN_112, NewBarkTown_ElmLaboratory_Combate_Elm_2
delay 10
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq NewBarkTown_ElmLaboratory_Combate_Elm_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_4 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_ELM_2, NewBarkTown_ElmLaboratory_Combate_Elm_Texto_5
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_AERODACTYLITE
setflag FLAG_HOENN_112
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_6.1 MSGBOX_DEFAULT
waitfanfare
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_7 MSGBOX_AUTOCLOSE
release
end

NewBarkTown_ElmLaboratory_Combate_Elm_2::
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_3 MSGBOX_AUTOCLOSE
release
end

NewBarkTown_ElmLaboratory_Combate_Elm_Hoenn::
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Hoenn_Texto_1 MSGBOX_AUTOCLOSE
release
end

NewBarkTown_ElmLaboratory_Combate_Elm_Hoenn_Texto_1:
.string "Buenos días, {PLAYER}.\p"
	.string "Y por si no volvemos a vernos,\n"
	.string "buenas tardes y buenas noches.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_6.1:
.string "You obtained an AERODACTYLITE\n"
	.string "from PROFESSOR ELM!!$"

NewBarkTown_ElmLaboratory_Combate_Elm_No::
msgbox NewBarkTown_ElmLaboratory_Combate_Elm_Texto_8 MSGBOX_AUTOCLOSE
release
end

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_1:
	.string "The TEAM ROCKET has achieved what\n"
	.string "seemed impossible just a couple of\l"
	.string "years ago. Not only are KANTO and JOHTO\l"
	.string "starting to align their efforts, but\l"
	.string "also their most influential figures are\l"
	.string "collaborating.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_2:
	.string "Tell me, {PLAYER}, would you like to\n"
	.string "see the recent progress that we have\l"
	.string "achieved?$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_3:
	.string "What's going to happen now? Let's get to\n"
	.string "work on the future. In two years, we\l"
	.string "won't recognize the land we walk on\l"
	.string "today!$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_4:
	.string "I didn't expect less. My prototype\n"
	.string "army is ready!$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_5:
	.string "You combined technology with\n"
	.string "technique. That's pretty interesting.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_6:
	.string "When everyone contributes a little,\n"
	.string "{PLAYER}, this is the result. BILL's\l"
	.string "PORYGON3, BLAINE's MAGMORTAR-Y, OAK's\l"
	.string "experiments{PAUSE 25}…{PAUSE 25} They're all now part of\l"
	.string "KANTO and JOHTO's efforts. The\l"
	.string "collaboration between these two\l"
	.string "regions will make them the dominant\l"
	.string "force in the POKÉMON world, and you'll\l"
	.string "be among their top leaders. That's why\l"
	.string "I'm giving you this.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_7:
	.string "BILL's main collaborator managed to\n"
	.string "develop this MEGA STONE, which restores\l"
	.string "AERODACTYL to 95% of its primal state.\l"
	.string "He told me to give you one if I saw you.$"

NewBarkTown_ElmLaboratory_Combate_Elm_Texto_8:
	.string "Hmph, that's your choice. I thought you\n"
	.string "were interested in extraordinary\l"
	.string "things.$"

Newbark_ElmLaboratory_Final_Move_1:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Newbark_ElmLaboratory_Final_Move_2:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Newbark_ElmLaboratory_Final_Move_3:
walk_slow_left
walk_slow_left
walk_slow_up
step_end

Newbark_ElmLaboratory_Final::
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Newbark_ElmLaboratory_Final_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_53 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_54 MSGBOX_AUTOCLOSE
delay 45
applymovement 4, Newbark_ElmLaboratory_Final_Move_2
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_55 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_56 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_57 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Combate_Ganado_Texto_58 MSGBOX_AUTOCLOSE
applymovement 1, Newbark_ElmLaboratory_Final_Move_3
clearflag FLAG_VISITED_LITTLEROOT_TOWN
setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
clearflag FLAG_NUEVA_292
setflag FLAG_HOENN_289
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
setvar VAR_UNUSED_0x40F8, 58
setvar VAR_TEMP_1, 1
goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
release
end

