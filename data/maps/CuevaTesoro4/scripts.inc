CuevaTesoro4_MapScripts::
	.byte 0



CuevaTesoro4_EventScript_Policia::
	trainerbattle_single TRAINER_TRAINER_99, CuevaTesoro4_Text_PoliciaIntro, CuevaTesoro4_Text_PoliciaDefeated
	msgbox CuevaTesoro4_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



CuevaTesoro4_EventScript_Policia2::
	trainerbattle_single TRAINER_TRAINER_100, CuevaTesoro4_Text_Policia2Intro, CuevaTesoro4_Text_Policia2Defeated
	msgbox CuevaTesoro4_Text_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



CuevaTesoro4_EventScript_Cientifico::
	trainerbattle_single TRAINER_TRAINER_101, CuevaTesoro4_Text_CientificoIntro, CuevaTesoro4_Text_CientificoDefeated
	msgbox CuevaTesoro4_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



CuevaTesoro4_EventScript_Cientifico2::
	trainerbattle_single TRAINER_TRAINER_102, CuevaTesoro4_Text_Cientifico2Intro, CuevaTesoro4_Text_Cientifico2Defeated
	msgbox CuevaTesoro4_Text_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



CuevaTesoro4_EventScript_Cientifico3::
	trainerbattle_single TRAINER_TRAINER_103, CuevaTesoro4_Text_Cientifico3Intro, CuevaTesoro4_Text_Cientifico3Defeated
	msgbox CuevaTesoro4_Text_Cientifico3PostBattle, MSGBOX_AUTOCLOSE
	end

CuevaTesoro4_Jefe_Final::
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro4_Jefe_Final_Move_1
waitmovement 0x0
playmoncry SPECIES_NIHILEGO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro4_Jefe_Final_Move_2
waitmovement 0x0
delay 15
playse SE_FAINT
msgbox CuevaTesoro4_Jefe_Final_Texto_1 MSGBOX_AUTOCLOSE
waitse
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro4_Jefe_Final_Move_3
waitmovement 0x0
applymovement 9, CuevaTesoro4_Jefe_Final_Move_4
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_4
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox CuevaTesoro4_Jefe_Final_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 9, CuevaTesoro4_Jefe_Final_Move_5
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 9, CuevaTesoro4_Jefe_Final_Move_4
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox CuevaTesoro4_Jefe_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_6
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_7.1 MSGBOX_AUTOCLOSE
msgbox CuevaTesoro4_Jefe_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_4
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox CuevaTesoro4_Jefe_Final_Texto_10 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_7
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_11 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_4
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_12 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_104, CuevaTesoro4_Jefe_Final_Texto_13
playse SE_BREAKABLE_DOOR
applymovement 9, CuevaTesoro4_Jefe_Final_Move_9
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_5
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_15 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_8
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_16 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_3
waitmovement 0x0
applymovement 9, CuevaTesoro4_Jefe_Final_Move_1
waitmovement 0x0
delay 15
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox CuevaTesoro4_Jefe_Final_Texto_17 MSGBOX_DEFAULT
waitse
applymovement 9, CuevaTesoro4_Jefe_Final_Move_8
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_18 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
fadescreen 1
delay 20
removeobject 9
removeobject 4
removeobject 11
removeobject 3
removeobject 6
removeobject 1
fadescreen 0
setvar VAR_ROUTE111_STATE, 5
release
end

CuevaTesoro4_Jefe_Final_Move_1:
walk_in_place_up
step_end

CuevaTesoro4_Jefe_Final_Move_2:
emote_exclamation_mark
step_end

CuevaTesoro4_Jefe_Final_Move_3:
walk_slow_up
step_end

CuevaTesoro4_Jefe_Final_Move_4:
walk_in_place_down
step_end

CuevaTesoro4_Jefe_Final_Move_5:
face_right
step_end

CuevaTesoro4_Jefe_Final_Move_6:
face_up
step_end

CuevaTesoro4_Jefe_Final_Move_7:
walk_down
step_end

CuevaTesoro4_Jefe_Final_Move_8:
face_down
step_end

CuevaTesoro4_Jefe_Final_Move_9:
lock_facing_direction
walk_up
unlock_facing_direction
step_end

CuevaTesoro4_Jefe_Final_Texto_1:
	.string "(???? defeated the MYSTERIOUS\n"
	.string "POKÉMON).$"

CuevaTesoro4_Jefe_Final_Texto_2:
	.string "You must be a very disciplined and\n"
	.string "methodical TRAINER. Otherwise, you\l"
	.string "couldn't have made it this far, leaving\l"
	.string "our lower-ranked employees behind.$"

CuevaTesoro4_Jefe_Final_Texto_3:
	.string "As you've reached this point, I'll reward\n"
	.string "you with a small talk. Tell me, do you\l"
	.string "know the secret this place holds?$"

CuevaTesoro4_Jefe_Final_Texto_4:
.string "… …$"

CuevaTesoro4_Jefe_Final_Texto_5:
	.string "I assumed it; you've come here just out\n"
	.string "of inertia. Ultimately, you're nothing\l"
	.string "more than another one of those lifeless\l"
	.string "TRAINERS dragging themselves through\l"
	.string "the routes, just to a higher degree.$"

CuevaTesoro4_Jefe_Final_Texto_6:
	.string "This location used to be an ancient\n"
	.string "portal. POKÉMON with remarkable\l"
	.string "properties dwelled in it centuries ago,\l"
	.string "maybe even longer.$"

CuevaTesoro4_Jefe_Final_Texto_7:
	.string "The cave is like a massive underwater\n"
	.string "bunker, sealed off from the outside.\l"
	.string "This has allowed the preservation of all\l"
	.string "this biodiversity, but...$"
	
CuevaTesoro4_Jefe_Final_Texto_7.1:	
	.string "Also keeping a few POKÉMON prisoners\n"
	.string "who arrived from those portals.$"

CuevaTesoro4_Jefe_Final_Texto_8:
	.string "Specifically one of them: NIHILEGO, is\n"
	.string "the one that interests us the most.$"

CuevaTesoro4_Jefe_Final_Texto_9:
	.string "It's not just one of the best at\n"
	.string "distributing its STATS; its\l"
	.string "regeneration properties and lack of\l"
	.string "will make it an ideal subject for study.$"

CuevaTesoro4_Jefe_Final_Texto_10:
	.string "No matter how prepared you are, or how\n"
	.string "genetically gifted for combat you or\l"
	.string "your team may be, you cannot prevent\l"
	.string "DEVON's progress.$"

CuevaTesoro4_Jefe_Final_Texto_11:
	.string "If one of the variables fails, there's\n"
	.string "nothing to be done against someone\l"
	.string "excellent; you're only as strong as your\l"
	.string "weakest part. Your technology is\l"
	.string "light-years behind ours, do you know\l"
	.string "what that means?$"

CuevaTesoro4_Jefe_Final_Texto_12:
	.string "You'll never be able to defeat me in a\n"
	.string "POKÉMON battle!$"

CuevaTesoro4_Jefe_Final_Texto_13:
	.string "It's... impossible?$"

CuevaTesoro4_Jefe_Final_Texto_14:
	.string "This is unbelievable; if my level is a 9 in\n"
	.string "all aspects, there's no way you, with a 0\l"
	.string "in technology, could have won, even if\l"
	.string "you're a 10 in everything else.$"

CuevaTesoro4_Jefe_Final_Texto_15:
	.string "The only plausible response is that I\n"
	.string "may not genuinely be a 9; in that case,\l"
	.string "we'd have to reevaluate the value of\l"
	.string "10...$"

CuevaTesoro4_Jefe_Final_Texto_16:
	.string "How unfortunate for you to lack the\n"
	.string "tools for long-term improvement. You\l"
	.string "have a significant inherent potential\l"
	.string "that will never reach its peak.$"

CuevaTesoro4_Jefe_Final_Texto_17:
	.string "(???? OBTAINED A SAMPLE OF NIHILEGO).$"

CuevaTesoro4_Jefe_Final_Texto_18:
	.string "This is more than enough for us; keep\n"
	.string "the POKÉMON if it brings you joy. Even a\l"
	.string "miracle of nature like this pales in\l"
	.string "comparison to our goals.$"

CuevaTesoro4_Nihilego_Obtencion::
playmoncry SPECIES_NIHILEGO, CRY_MODE_ENCOUNTER
msgbox CuevaTesoro4_Nihilego_Obtencion_Texto_1 MSGBOX_AUTOCLOSE
msgbox CuevaTesoro4_Nihilego_Obtencion_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro4_Nihilego_Obtencion_No
playfanfare MUS_OBTAIN_TMHM
setflag FLAG_HIDE_ROUTE_116_DROPPED_GLASSES_MAN
removeobject 13
msgbox CuevaTesoro4_Nihilego_Obtencion_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_NIHILEGO, 50, ITEM_POISON_GEM
waitfanfare 
release
end

CuevaTesoro4_Nihilego_Obtencion_No::
release
end

CuevaTesoro4_Nihilego_Obtencion_Texto_1:
	.string "This POKÉMON has no more energy. It\n"
	.string "appears to want to be saved from this\l"
	.string "location.$"

CuevaTesoro4_Nihilego_Obtencion_Texto_2:
	.string "Do you want to take it with you?$"

CuevaTesoro4_Nihilego_Obtencion_Texto_3:
	.string "¡YOU OBTAINED A LV.50 NIHILEGO!$"


CuevaTesoro4_Combate_Guzzlord::
	lock
	playmoncry SPECIES_GUZZLORD, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_GUZZLORD, 50, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, CuevaTesoro4_Combate_Guzzlord_2
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, CuevaTesoro4_Combate_Guzzlord_2
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, CuevaTesoro4_Combate_Guzzlord_2
	setflag FLAG_DEFEATED_REGICE
	setflag FLAG_HIDE_REGIROCK
	fadescreen 1
	removeobject 12
	delay 20
    fadescreen 0
	release
	end

	CuevaTesoro4_Combate_Guzzlord_2::
	release
	end

CuevaTesoro4_Prueba::
release
end

