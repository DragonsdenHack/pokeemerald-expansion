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
	.string "AZALEA TOWN's always obtained the wood\n"
	.string "we use for charcoal production from\l"
	.string "this forest. We're very thankful for it.$"



IlexForest2::
end



IlexForest3::
lock     
faceplayer     
msgbox IllexForest_Text_3, MSGBOX_DEFAULT
release     
end

IllexForest_Text_3:
	.string "Damn trees… How're they regenerating\n"
	.string "when I'd just lopped them a moment ago?\l"
	.string "Do I really have to trek back to AZALEA\l"
	.string "for CUT?$"



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
	.string "So-FARFETCH'D is pretty weak, but no\n"
	.string "other POKÉMON's as handy at chopping\l"
	.string "up trees.$"



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
	.string "GIOVANNI: {PLAYER}? This poor sound\n"
	.string "quality… You'd already arrived in ILEX\l"
	.string "FOREST, haven't you? That name makes\l"
	.string "me wax nostalgic. Regardless, we've\l"
	.string "acquired intel on KURT's DEEP BOND\l"
	.string "BUTTERFREE. Its most extraordinary\l"
	.string "aspect isn't the combined total of its\l"
	.string "STATS at 505, but rather, how finely\l"
	.string "they'd been distributed. Like its\l"
	.string "ATTACK pushed to the extreme minimum\l"
	.string "of… five. Together with its\l"
	.string "ADAPTABILITY, it's orders more\l"
	.string "dangerous than than most\l"
	.string "PSEUDO-LEGENDARIES on a practical\l"
	.string "level. Isn't it incredible to see the\l"
	.string "heights an otherwise mediocre POKÉMON\l"
	.string "doomed to its 395-BASE STATS can\l"
	.string "achieve? Just how terrifying such a\l"
	.string "thing can become?$"

IlexForest_Llamada_Giovanni_Texto_2:
	.string "That aside, I've sent ARCHER ahead to\n"
	.string "GOLDENROD CITY. You're required to meet\l"
	.string "him at the RADIO TOWER. He'll present\l"
	.string "you the details there. I anticipate\l"
	.string "further communication from you,\l"
	.string "{PLAYER}.$"


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
	.string "U-TURN. You'll see!$"
