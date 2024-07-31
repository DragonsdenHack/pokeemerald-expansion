Route34_MapScripts::
	.byte 0

Route34_1::
end



Route34_2::
lock     
faceplayer     
msgbox Route34_Text_2, MSGBOX_DEFAULT
release     
end

Route34_Text_2:
	.string "The DAYCARE's caretakers are on\n"
	.string "vacation. They say they won't return\l"
	.string "until the KANTO-JOHTO political\l"
	.string "situation is clarified.$"



Route34_3::
end



Route34_9::
lock     
faceplayer     
msgbox Route34_Text_9, MSGBOX_DEFAULT
release     
end

Route34_Text_9:
	.string "Fishing's just been terrible lately! It's\n"
	.string "like all the aquatic POKÉMON are\l"
	.string "avoiding GOLDENROD like the plague!$"



Route34_10::
end



Route34_11::
lock     
faceplayer     
msgbox Route34_Text_11, MSGBOX_DEFAULT
release     
end

Route34_Text_11:
	.string "GOLDENROD CITY is unrecognizable now;\n"
	.string "modern life has completely transformed\l"
	.string "it!$"



Route34_12::
end



Route34_13::
end



Route34_14::
end



Route34_EventScript_Guarda::
	trainerbattle_single TRAINER_REED, Route34_Text_GuardaIntro, Route34_Text_GuardaDefeated
	msgbox Route34_Text_GuardaPostBattle, MSGBOX_AUTOCLOSE
	end



Route34_EventScript_Guarda2::
	trainerbattle_single TRAINER_CALLIE, Route34_Text_Guarda2Intro, Route34_Text_Guarda2Defeated
	msgbox Route34_Text_Guarda2PostBattle, MSGBOX_AUTOCLOSE
	end



Route34_EventScript_Karateka::
	trainerbattle_single TRAINER_CALE, Route34_Text_KaratekaIntro, Route34_Text_KaratekaDefeated
	msgbox Route34_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



Route34_EventScript_Guay::
	trainerbattle_single TRAINER_HENRY, Route34_Text_GuayIntro, Route34_Text_GuayDefeated
	msgbox Route34_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



Route34_EventScript_Rico::
	trainerbattle_single TRAINER_BRENDAN_LILYCOVE_TREECKO, Route34_Text_RicoIntro, Route34_Text_RicoDefeated
	msgbox Route34_Text_RicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route34Documento_100::
msgbox Route34Documento_Text_100, MSGBOX_SIGN   
end

Route34Documento_Text_100:
	.string "ROUTE 34\n"
	.string "GOLDENROD CITY - AZALEA TOWN\l"
	.string "ILEX FOREST SOMEWHERE BETWEEN.$"



Route34Documento_101::
msgbox Route34Documento_Text_101, MSGBOX_SIGN   
end

Route34Documento_Text_101:
	.string "TRAINER TIPS \n"
	.string "The BERRIES on trees regenerate after\l"
	.string "a certain amount of time. Be sure to\l"
	.string "keep an eye out to collect your\l"
	.string "favorites!$"



Route34Documento_102::
msgbox Route34Documento_Text_102, MSGBOX_SIGN   
end

Route34Documento_Text_102:
	.string "DAY-CARE\n"
	.string "LET US RAISE YOUR\l"
	.string "POKÉMON FOR YOU!$"
