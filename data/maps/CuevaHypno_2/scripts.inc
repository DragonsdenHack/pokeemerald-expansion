CuevaHypno_2_MapScripts::
	.byte 0


CuevaHypno_2_Bloqueo_Gym::
lock
applymovement OBJ_EVENT_ID_PLAYER, CuevaHypno_2_Bloqueo_Gym_Move_1
waitmovement 0x0
msgbox CuevaHypno_2_Bloqueo_Gym_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CuevaHypno_2_Bloqueo_Gym_Move_2
waitmovement 0x0
release
end

CuevaHypno_2_Bloqueo_Gym_Move_2:
walk_slow_down
step_end

CuevaHypno_2_Bloqueo_Gym_Move_1:
walk_in_place_up
step_end

CuevaHypno_2_Bloqueo_Gym_Texto_1:
	.string "(The door is locked)$"

CuevaTesoro4_Prueba::
lock
clearflag FLAG_HIDE_REGIROCK
release
end


CuevaTesoro4_Combate_Blacephalon::
	lock
	playmoncry SPECIES_BLACEPHALON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_BLACEPHALON, 50, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, CuevaTesoro4_Combate_Guzzlord_2
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, CuevaTesoro4_Combate_Guzzlord_2
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, CuevaTesoro4_Combate_Guzzlord_2
	setflag FLAG_DEFEATED_REGIROCK
	setflag FLAG_HIDE_REGICE
	fadescreen 1
	removeobject 1
	delay 20
    fadescreen 0
	release
	end

CuevaHypno_2_Descripcion_Gym::
lock
msgbox CuevaHypno_2_Descripcion_Gym_Texto_1 MSGBOX_SIGN
release
end

CuevaHypno_2_Descripcion_Gym_Texto_1:
.string "THREE ISLAND GYM\n"
	.string "LEADER: MORFEUS\l"
	.string "The grand master of dreams,\l"
	.string "illusions, and hopes!$"
