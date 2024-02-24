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

PalletTown_Text_2: 
	.string "People like you should be banned from\n"
	.string "accessing technology.$"


PalletTown3::
lock     
faceplayer     
msgbox PalletTown_Text_3, MSGBOX_DEFAULT
release     
end

PalletTown_Text_3:
.string "A ROCKET here?\n"
.string "What are you plotting?$"


PalletTownDocumento_100::
lock     
msgbox PalletTownDocumento_Text_100, MSGBOX_SIGN
release     
end

PalletTownDocumento_Text_100:
.string "RED's House$"



PalletTownDocumento_101::
lock     
msgbox PalletTownDocumento_Text_101, MSGBOX_SIGN
release     
end

PalletTownDocumento_Text_101:
.string "BLUE's House$"



PalletTownDocumento_102::
msgbox PalletTownDocumento_Text_102, MSGBOX_SIGN   
end

PalletTownDocumento_Text_102:
.string "OAK POKÉMON RESEARCH LAB$"



PalletTownDocumento_103::
lock     
msgbox PalletTownDocumento_Text_103, MSGBOX_AUTOCLOSE
release     
end

PalletTownDocumento_Text_103:
    .string "TRAINER TIPS\p"
	.string "Press START to open the MENU!$"



PalletTownDocumento_104::
lock     
msgbox PalletTownDocumento_Text_104, MSGBOX_DEFAULT
release     
end

PalletTownDocumento_Text_104:
.string "PALLET TOWN\n"
    .string "Shades of your journey await!$"

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
	.string "(I am not on vacation to go exploring\n"
	.string "KANTO, I have more important things to\l"
	.string "do).$"

Pueblo_Paleta_Barrera_Sur_Move_1:
walk_in_place_down
step_end

Pueblo_Paleta_Barrera_Sur_Move_2:
walk_slow_up
step_end
