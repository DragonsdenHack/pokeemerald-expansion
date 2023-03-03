IcefallCave_Lapras_MapScripts::
	.byte 0

CuevaTesoro4_Combate_Glastrier::
	lock
	waitse
	playmoncry SPECIES_GLASTRIER, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_GLASTRIER, 55, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, CuevaTesoro4_Combate_Guzzlord_2
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, CuevaTesoro4_Combate_Guzzlord_2
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, CuevaTesoro4_Combate_Guzzlord_2
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
	fadescreen 1
	removeobject 1
	delay 20
    fadescreen 0
	setvar VAR_ROUTE109_STATE, 5
	release
	end
