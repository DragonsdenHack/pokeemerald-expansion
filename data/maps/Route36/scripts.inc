Route36_MapScripts::
	.byte 0

Route36_1::
end



Route36_2::
end



Route36_3::
end



Route36_4::
end



Route36_5::
lock     
faceplayer     
msgbox Route36_Text_5, MSGBOX_DEFAULT
release     
end

Route36_Text_5:
	.string "My NIDORINO loves to walk around these\n"
	.string "routes, sometimes we go to the ILEX\l"
	.string "FOREST to relax.$"



Route36_6::
end



Route36_7::
lock     
faceplayer     
msgbox Route36_Text_7, MSGBOX_DEFAULT
release     
end

Route36_Text_7:
	.string "Apparently there are a lot of POKÉMON\n"
	.string "that no one could have imagined that\l"
	.string "evolves, but they do, as GLIGAR or\l"
	.string "AIPOM. What other POKÉMON can evolve\l"
	.string "without most people knowing?$"



Route36_8::
lock     
faceplayer     
msgbox Route36_Text_8, MSGBOX_DEFAULT
release     
end

Route36_Text_8:
	.string "I love PINSIR. Unlike SCYTHER or\n"
	.string "HERACROSS, it's a genuine BUG, fast,\l"
	.string "with great ATTACK, and solid DEFENSE.\l"
	.string "The only thing lacking is SPECIAL DEF…$"



Route36_9::
end



Route36_10::
end



Route36_11::
end



Route36_EventScript_Chica::
	trainerbattle_single TRAINER_MEL_AND_PAUL, Route36_Text_ChicaIntro, Route36_Text_ChicaDefeated
	msgbox Route36_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route36_EventScript_Sabio::
	trainerbattle_single TRAINER_JOHN_AND_JAY_3, Route36_Text_SabioIntro, Route36_Text_SabioDefeated
	msgbox Route36_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route36Documento_100::
msgbox Route36Documento_Text_100, MSGBOX_SIGN   
end

Route36Documento_Text_100:
	.string "SCYTHER and PINSIR are the best\n"
	.string "POKÉMON that you can catch on the\l"
	.string "NATIONAL PARK!$"



Route36_SudowoodoRest::
msgbox Route36_SudowoodoRest_Text, MSGBOX_NPC   
end

Route36_SudowoodoRest_Text:
	.string "...\n"
	.string "...\l"
	.string "(It is a POKÉMON, seems\l"
	.string "like it is resting)$"



Route36Documento_101::
msgbox Route36Documento_Text_101, MSGBOX_SIGN   
end

Route36Documento_Text_101:
	.string "ROUTE 36\n"
	.string "Further the east VIOLET CITY$"



Route36_EventScript_Pareja1::
	trainerbattle_single TRAINER_JOHN_AND_JAY_2, Route36_Text_Pareja1Intro, Route36_Text_Pareja1Defeated
	msgbox Route36_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route36_EventScript_Pareja2::
	trainerbattle_single TRAINER_JOHN_AND_JAY_2, Route36_Text_Pareja2Intro, Route36_Text_Pareja2Defeated
	msgbox Route36_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route36_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
waitse
playse SE_PIN
msgbox Route36_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route36_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 138
release
end

Route36_Llamada_Giovanni_Texto_1:
	.string "GIOVANNI: Great job, {PLAYER}, that\n"
	.string "KINGDRA's balanced total of 650 BASE\l"
	.string "stats is surprising our scientists. Did\l"
	.string "you know that 5 out of its 6 STATS have\l"
	.string "a base of 115? The JOHTO beasts you\l"
	.string "faced only had 2 115 as their best BASE\l"
	.string "STATS.$"

Route36_Llamada_Giovanni_Texto_2:
	.string "Now that you've seen GOLDENROD CITY, I\n"
	.string "suppose ECRUTEAK CITY is your next\l"
	.string "destination. You could take the\l"
	.string "opportunity to investigate the\l"
	.string "legendary HO-OH. Meanwhile, the grand\l"
	.string "meeting at the RADIO TOWER is becoming\l"
	.string "a reality, the question is when it will\l"
	.string "take place. As one of the pillars of\l"
	.string "TEAM ROCKET, you will have the honor of\l"
	.string "attending. Your presence at the RADIO\l"
	.string "TOWER will be required in due time.$"
