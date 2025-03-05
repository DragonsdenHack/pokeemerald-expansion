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
	.string "My NIDORINO loves to stroll these\n"
	.string "routes; sometimes, we relax at the ILEX\l"
	.string "FOREST.$"



Route36_6::
end



Route36_7::
lock     
faceplayer     
msgbox Route36_Text_7, MSGBOX_DEFAULT
release     
end

Route36_Text_7:
	.string "There are a lot of POKÉMON that no one\n"
	.string "could have imagined to evolve, but they\l"
	.string "do, such as GLIGAR or AIPOM. What other\l"
	.string "POKÉMON can evolve without most people\l"
	.string "knowing?$"



Route36_8::
lock     
faceplayer     
msgbox Route36_Text_8, MSGBOX_DEFAULT
release     
end

Route36_Text_8:
	.string "I love PINSIR. Unlike SCYTHER or\n"
	.string "HERACROSS, it's a genuine BUG, fast,\l"
	.string "with great ATTACK and solid DEFENSE.\l"
	.string "The only thing lacking is SPECIAL\l"
	.string "DEFENSE…$"



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
	.string "POKÉMON you can catch in the NATIONAL\l"
	.string "PARK!$"



Route36_SudowoodoRest::
msgbox Route36_SudowoodoRest_Text, MSGBOX_NPC   
end

Route36_SudowoodoRest_Text:
	.string "…\n"
	.string "…\p"
	.string "-It's a POKÉMON; it seems\n"
	.string "like it's resting.-$"



Route36Documento_101::
msgbox Route36Documento_Text_101, MSGBOX_SIGN   
end

Route36Documento_Text_101:
	.string "ROUTE 36\n"
	.string "Further east is VIOLET CITY.$"



Route36_EventScript_Pareja1::
	trainerbattle_single TRAINER_JOHN_AND_JAY_2, Route36_Text_Pareja1Intro, Route36_Text_Pareja1Defeated
	msgbox Route36_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route36_EventScript_Pareja2::
	trainerbattle_single TRAINER_JOHN_AND_JAY_2, Route36_Text_Pareja2Intro, Route36_Text_Pareja2Defeated
	msgbox Route36_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route36_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, UnionCave_Llamada_Giovanni_Move_1
playse SE_POKENAV_CALL
waitse
delay 30
playse SE_POKENAV_HANG_UP
waitse
delay 10
msgbox Route36_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route36_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
delay 10
playse SE_PC_OFF
waitse
delay 15
setvar VAR_UNUSED_0x40F7, 138
release
end

Route36_Llamada_Giovanni_Texto_1:
	.string "GIOVANNI: Good job, {PLAYER}. That\n"
	.string "KINGDRA's balanced total of 665 BASE\l"
	.string "STATs surprises our scientists. Did you\l"
	.string "know four out of its six STATs have a\l"
	.string "BASE 120?\p"
	.string "The JOHTO beasts you faced had only two\n"
	.string "115 as their best BASE STATs.$"

Route36_Llamada_Giovanni_Texto_2:
	.string "Now that you've seen GOLDENROD CITY, I\n"
	.string "suppose ECRUTEAK CITY is your next\l"
	.string "destination. You could take the\l"
	.string "opportunity to investigate the\l"
	.string "legendary HO-OH. Meanwhile, the grand\l"
	.string "meeting at the RADIO TOWER is becoming\l"
	.string "a reality. The question is when it will\l"
	.string "take place. As one of the pillars of\l"
	.string "TEAM ROCKET, you will have the honor of\l"
	.string "attending. Your presence at the RADIO\l"
	.string "TOWER will be required in due time.$"
