PokemonTower_7F_MapScripts::
	.byte 0

PokemonTower_7F_Proton::
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_7F_Proton_Move_1
waitmovement 0x0
msgbox PokemonTower_7F_Proton_Texto_1 MSGBOX_AUTOCLOSE
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
playse SE_POKENAV_OFF
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
applymovement 3, PokemonTower_7F_Proton_Move_5
applymovement 5, PokemonTower_7F_Proton_Move_5
waitmovement 0x0
applymovement 4, PokemonTower_7F_Proton_Move_4
waitmovement 0x0
msgbox PokemonTower_7F_Proton_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, PokemonTower_7F_Proton_Move_6
applymovement 3, PokemonTower_7F_Proton_Move_6
applymovement 5, PokemonTower_7F_Proton_Move_6
waitmovement 0x0
msgbox PokemonTower_7F_Proton_Texto_5 MSGBOX_AUTOCLOSE
msgbox PokemonTower_7F_Proton_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, PokemonTower_7F_Proton_Move_3
waitmovement 0x0
playse SE_BALL_OPEN
delay 30
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
addobject 6
playmoncry SPECIES_CLEFAIRY, CRY_MODE_ENCOUNTER
msgbox PokemonTower_7F_Proton_Texto_7 MSGBOX_AUTOCLOSE
delay 20
special HealPlayerParty
playmoncry SPECIES_CLEFAIRY, CRY_MODE_ENCOUNTER
msgbox PokemonTower_7F_Proton_Texto_8 MSGBOX_AUTOCLOSE
playse SE_M_TELEPORT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
warpsilent MAP_ROCKET_HIDEOUT_4F, 20, 24
setvar VAR_UNUSED_0x40F7, 51
release
end

PokemonTower_7F_Proton_Texto_1:
.string "PROTÓN: Tú creaste nuestra única\n"
	.string "esperanza de escapar de este\l"
	.string "sistema esclavista FUJI, ¿no crees\l"
	.string "que ese fin justifica cualquier\l"
	.string "posible medio para obtenerlo?\l"
	.string "¡Espero que medites nuestra\l"
	.string "oferta!$"

PokemonTower_7F_Proton_Texto_2:
.string "PROTÓN: Ya veo, de todos modos\n"
	.string "FUJI y yo ya hemos acabado, ¡hora\l"
	.string "de volver al cuartel {PLAYER}!$"

PokemonTower_7F_Proton_Texto_3:
.string "PROTÓN: ¡Reclutas!\n"
	.string "¡Subid arriba inmediatamente!$"

PokemonTower_7F_Proton_Texto_4:
.string "PROTÓN: Custodiad a FUJI hasta que\n"
	.string "no se os dé otra orden,\l"
	.string "¿entendido?$"

PokemonTower_7F_Proton_Texto_5:
.string "RECLUTAS: ¡Totalmente SIR!$"

PokemonTower_7F_Proton_Texto_6:
.string "PROTÓN: Siempre hay que guardar\n"
	.string "las apariencias {PLAYER}, si ese\l"
	.string "necio de ROJO sube hasta aquí\l"
	.string "creerá lo que todos creen, que\l"
	.string "unos descerebrados delincuentes\l"
	.string "secuestran a un anciano sin\l"
	.string "sentido alguno, nadie puede actuar\l"
	.string "contra una realidad que siquiera\l"
	.string "conoce.$"

PokemonTower_7F_Proton_Texto_7:
.string "PROTÓN: ¡CLEFAIRY!\n"
	.string "¡Teletransporte hacia la guarida!$"

PokemonTower_7F_Proton_Texto_8:
.string "CLEFAIRY: ¡Faaaaa!$"

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
