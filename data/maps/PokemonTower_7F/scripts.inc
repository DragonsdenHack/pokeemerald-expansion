PokemonTower_7F_MapScripts::
	.byte 0

PokemonTower_7F_Proton::
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
addobject 4
addobject 1
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_7F_Proton_Move_1
waitmovement 0x0
delay 15
msgbox PokemonTower_7F_Proton_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 4, PokemonTower_7F_Proton_Move_2
waitmovement 0x0
delay 20
msgbox PokemonTower_7F_Proton_Texto_2 MSGBOX_AUTOCLOSE
applymovement 4, PokemonTower_7F_Proton_Move_3
waitmovement 0x0
playse SE_POKENAV_ON
delay 20
msgbox PokemonTower_7F_Proton_Texto_3 MSGBOX_AUTOCLOSE
applymovement 4, PokemonTower_7F_Proton_Move_4
waitmovement 0x0
playse SE_PC_OFF
waitse
delay 20
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
addobject 2
addobject 3
addobject 5
delay 60
playse SE_EXIT
delay 10
playse SE_EXIT
delay 10
playse SE_EXIT
delay 10
applymovement 2, PokemonTower_7F_Proton_Move_5
delay 8
applymovement 3, PokemonTower_7F_Proton_Move_5
delay 8
applymovement 5, PokemonTower_7F_Proton_Move_5
waitmovement 0x0
delay 25
playse SE_BREAKABLE_DOOR
applymovement 4, PokemonTower_7F_Proton_Move_4
waitmovement 0x0
waitse
delay 10
msgbox PokemonTower_7F_Proton_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, PokemonTower_7F_Proton_Move_6
applymovement 3, PokemonTower_7F_Proton_Move_6
applymovement 5, PokemonTower_7F_Proton_Move_6
waitmovement 0x0
delay 10
msgbox PokemonTower_7F_Proton_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_7F_Proton_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, PokemonTower_7F_Proton_Move_4.1
waitmovement 0x0
msgbox PokemonTower_7F_Proton_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, PokemonTower_7F_Proton_Move_3
waitmovement 0x0
playse SE_BALL_OPEN
waitse
delay 15
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
addobject 6
playmoncry SPECIES_CLEFAIRY, CRY_MODE_ENCOUNTER
waitmoncry
msgbox PokemonTower_7F_Proton_Texto_7 MSGBOX_AUTOCLOSE
delay 20
special HealPlayerParty
playmoncry SPECIES_CLEFAIRY, CRY_MODE_ENCOUNTER
waitmoncry
msgbox PokemonTower_7F_Proton_Texto_8 MSGBOX_AUTOCLOSE
playse SE_M_TELEPORT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
warpsilent MAP_ROCKET_HIDEOUT_4F, 20, 24
setvar VAR_UNUSED_0x40F7, 51
release
end

PokemonTower_7F_Proton_Move_4.1:
delay_8
face_up
delay_16
delay_8
face_right
delay_16
delay_8
face_down
delay_8
step_end

PokemonTower_7F_Proton_Texto_1:
	.string "PROTON: You created our only chance to\n"
	.string "escape from this enslaving system\l"
	.string "FUJI, don't you think that milestone\l"
	.string "justifies any possible means to achieve\l"
	.string "it?\p"
	.string "I hope you'll think about our offer!$"

PokemonTower_7F_Proton_Texto_2:
	.string "I see. Anyways, I'm done with FUJI.\p"
	.string "Time to go back to the\n"
	.string "headquarter, {PLAYER}!$"

PokemonTower_7F_Proton_Texto_3:
.string "GRUNTs!\p"
	.string "Come upstairs immediately!$"

PokemonTower_7F_Proton_Texto_4:
	.string "Guard FUJI until you receive any\n"
	.string "other instructions. Understood?$"

PokemonTower_7F_Proton_Texto_5:
.string "GRUNTS: Understood, SIR!$"

PokemonTower_7F_Proton_Texto_6:
	.string "PROTON: It's always important to keep\n"
	.string "up appearances, {PLAYER}, if that\l"
	.string "foolish RED makes his way up here, he'll\l"
	.string "believe what everyone else believes,\l"
	.string "that mindless criminals are senselessly\l"
	.string "abducting an old man.$"

PokemonTower_7F_Proton_Texto_6.1:
	.string "After all, no one can act\n"
	.string "against an unknown reality.$"

PokemonTower_7F_Proton_Texto_7:
.string "CLEFAIRY!\p"
	.string "TELEPORT to the warehouse!$"

PokemonTower_7F_Proton_Texto_8:
.string "CLEFAIRY: Faaaaa!$"

PokemonTower_7F_Proton_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonTower_7F_Proton_Move_2:
emote_exclamation_mark
walk_in_place_down
step_end

PokemonTower_7F_Proton_Move_3:
face_right
step_end

PokemonTower_7F_Proton_Move_4:
walk_in_place_down
step_end

PokemonTower_7F_Proton_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonTower_7F_Proton_Move_6:
walk_in_place_up
step_end
