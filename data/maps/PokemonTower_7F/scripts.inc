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
	.string "LANCE: Du hast unsere einzige\n"
	.string "Möglichkeit geschaffen, diesem\l"
	.string "unterdrückenden System zu entfliehen,\l"
	.string "FUJI. Glaubst du nicht auch, dass\l"
	.string "dieser Zweck jedes erdenkliche Mittel\l"
	.string "heiligt? Ich hoffe, du denkst über\l"
	.string "unser Angebot nach!$"

PokemonTower_7F_Proton_Texto_2:
	.string "Verstehe. Nun gut, FUJI und ich sind\n"
	.string "hier fertig. Es wird Zeit, dass wir\n"
	.string "zur Basis zurückkehren, {PLAYER}!$"

PokemonTower_7F_Proton_Texto_3:
.string "Rüpel!\p"
	.string "Kommt sofort her!$"

PokemonTower_7F_Proton_Texto_4:
	.string "Bewacht FUJI bis ihr weitere\n"
	.string "Anweisungen erhaltet! Ist das klar?!$"

PokemonTower_7F_Proton_Texto_5:
.string "RÜPEL: SIR, ja, SIR!$"

PokemonTower_7F_Proton_Texto_6:
	.string "LANCE: Es ist immer wichtig den Schein\n"
	.string "zu wahren, {PLAYER}. Wenn dieser\l"
	.string "Idiot ROT hier nach oben kommt, wird er\l"
	.string "glauben, was alle anderen auch glauben.\p"
	.string "Und zwar, dass hirnlose Kriminelle ohne\n"
	.string "ersichtlichen Grund einen alten Mann\l"
	.string "entführen wollen.$"

PokemonTower_7F_Proton_Texto_6.1:
	.string "Niemand kann gegen etwas vorgehen,\n"
	.string "was er nicht versteht.$"

PokemonTower_7F_Proton_Texto_7:
.string "PIEPI!\p"
	.string "Setze TELEPORT zu unserem\n"
	.string "Unterschlupf ein!$"

PokemonTower_7F_Proton_Texto_8:
.string "PIEPI: Faaaaa!$"

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
