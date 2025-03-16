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
.string "PROTÓN: Tú creaste nuestra única\n"
	.string "esperanza de escapar de este\l"
	.string "sistema esclavista, FUJI.\p"
	.string "¿No crees que ese fin justifica\n"
	.string "cualquier posible medio para obtenerlo?\p"
	.string "¡Espero que medites nuestra oferta!$"

PokemonTower_7F_Proton_Texto_2:
.string "PROTÓN: Ya veo, de todos modos,\n"
	.string "FUJI y yo ya hemos acabado.\p"
	.string "¡Hora de volver al cuartel, {PLAYER}!$"

PokemonTower_7F_Proton_Texto_3:
.string "PROTÓN: ¡Reclutas!\p"
	.string "¡Subid arriba inmediatamente!$"

PokemonTower_7F_Proton_Texto_4:
.string "PROTÓN: Custodiad a FUJI hasta que\n"
	.string "no se os dé otra orden.\p"
	.string "¡¿Entendido?!$"

PokemonTower_7F_Proton_Texto_5:
.string "RECLUTAS: ¡Totalmente, SIR!$"

PokemonTower_7F_Proton_Texto_6:
.string "PROTÓN: Siempre hay que guardar\n"
	.string "las apariencias, {PLAYER}.\p"
	.string "Si ese necio sube hasta aquí, creerá\n"
	.string "lo que todos creen: que unos\l"
	.string "descerebrados delincuentes secuestran\l"
	.string "a un anciano, sin sentido alguno.$"

PokemonTower_7F_Proton_Texto_6.1:
	.string "Después de todo, nadie puede\n"
	.string "actuar en contra de una realidad\l"
	.string "que siquiera conoce.$"

PokemonTower_7F_Proton_Texto_7:
.string "PROTÓN: ¡CLEFAIRY!\p"
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
