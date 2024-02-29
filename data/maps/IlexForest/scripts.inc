IlexForest_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, IlexForest_OnResume
	.byte 0

IlexForest_OnResume:
	call IlexForest_SetupEscapeWarp
	end

IlexForest_SetupEscapeWarp::
	setescapewarp MAP_AZALEA_TOWN, 7, 11
	return

IlexForest1::
lock     
faceplayer     
msgbox IllexForest_Text_1, MSGBOX_DEFAULT
release     
end

IllexForest_Text_1:
	.string "AZALEA TOWN has always obtained the\n"
	.string "wood that we use for charcoal\l"
	.string "production from this forest. We are\l"
	.string "very thankful for it.$"



IlexForest2::
end



IlexForest3::
lock     
faceplayer     
msgbox IllexForest_Text_3, MSGBOX_DEFAULT
release     
end

IllexForest_Text_3:
	.string "Damn trees… Why do they regenerate if I\n"
	.string "just cut them a moment ago? Do I really\l"
	.string "have to go back to AZALEA for CUT?$"



IlexForest4::
end



IlexForest5::
end



IlexForest6::
end



IlexForest7::
end



IlexForest8::
end



IlexForest9::
lock     
faceplayer     
msgbox IllexForest_Text_9, MSGBOX_DEFAULT
release     
end

IllexForest_Text_9:
	.string "So, FARFETCH'D is weak, but there is not\n"
	.string "any other POKÉMON that chop down trees\l"
	.string "as it…$"



IlexForest10::
end



IlexForest11::
end



IlexForest_EventScript_Cazabichos::
	trainerbattle_single TRAINER_WALLY_VR_4, IlexForest_Text_CazabichosIntro, IlexForest_Text_CazabichosDefeated
	msgbox IlexForest_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



IlexForest_EventScript_Chico::
	trainerbattle_single TRAINER_BRENDAN_LILYCOVE_MUDKIP, IlexForest_Text_ChicoIntro, IlexForest_Text_ChicoDefeated
	msgbox IlexForest_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



IlexForest_EventScript_Chica::
	trainerbattle_single TRAINER_WALLY_VR_5, IlexForest_Text_ChicaIntro, IlexForest_Text_ChicaDefeated
	msgbox IlexForest_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end


IlexForest_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
msgbox IlexForest_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox IlexForest_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 132
release
end

IlexForest_Llamada_Giovanni_Texto_1:
	.string "GIOVANNI: {PLAYER}? The sound\n"
	.string "quality is poor, you must be on the ILEX\l"
	.string "FOREST, aren't you? That place brings\l"
	.string "back great memories… We have the\l"
	.string "information on KURT's DEEP BOND\l"
	.string "BUTTERFREE. The most extraordinary\l"
	.string "thing isn't its 505 BASE STATS, but its\l"
	.string "unmatched distribution of useful\l"
	.string "STATS. It has just… 5 BASE in ATTACK!\l"
	.string "Considering this and its ADAPTABILITY\l"
	.string "ability, practically, it becomes a much\l"
	.string "more dangerous POKÉMON than most\l"
	.string "PSEUDO-LEGENDARIES. It's incredible\l"
	.string "what a POKÉMON like BUTTERFREE,\l"
	.string "initially destined to be mediocre with\l"
	.string "its 395 BASE, how dangerous can it\l"
	.string "become, don't you think?$"

IlexForest_Llamada_Giovanni_Texto_2:
	.string "However, I've sent ARCHER to GOLDENROD\n"
	.string "CITY. I require you to meet up with him\l"
	.string "at the RADIO TOWER. ARCHER will provide\l"
	.string "you with the details upon your\l"
	.string "encounter. I anticipate further\l"
	.string "communication from you, {PLAYER}.$"


IlexForestDocumento_100::
msgbox IlexForestDocumento_Text_100, MSGBOX_SIGN   
end

IlexForestDocumento_Text_100:
	.string "There are so many trees in the ILEX\n"
	.string "FOREST that you can't even see the sky.\l"
	.string "Please search for any items on the\l"
	.string "floor.$"

IlexForest_IdaVuelta::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_808, IlexForest_Despues
msgbox IlexForest_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM91
msgbox IlexForest_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_808
release     
end

IlexForest_Despues::
msgbox IlexForest_Texto_2, MSGBOX_NPC
release
end

IlexForest_Texto_1.1:
	.string "{PLAYER} obtained the TM91 U-TURN\n"
	.string "from BUG CATCHER!$"

IlexForest_Texto_1:
	.string "I'm here secretly developing the\n"
	.string "ultimate BUG-TYPE move in terms of\l"
	.string "strategy. U-TURN will revolutionize\l"
	.string "battle dynamics. Take a look.$"

IlexForest_Texto_2:
	.string "You're going to have the most elusive\n"
	.string "and unpredictable POKÉMON thanks to\l"
	.string "U-TURN, you'll see!$"
