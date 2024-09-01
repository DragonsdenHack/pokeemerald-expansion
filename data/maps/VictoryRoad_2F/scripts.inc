VictoryRoad_2F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, VictoryRoad_2F_OnResume
	.byte 0

VictoryRoad_2F_OnResume:
	call VictoryRoad_2F_SetupEscapeWarp
	end

VictoryRoad_2F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE23, 18, 29
	return

VictoryRoad2F_1::
end



VictoryRoad2F_2::
end



VictoryRoad2F_3::
end



VictoryRoad2F_4::
end



VictoryRoad2F_5::
end



VictoryRoad2F_6::
end



VictoryRoad2F_7::
end



VictoryRoad2F_10::
end



VictoryRoad2F_11::
end



VictoryRoad2F_13::
end



VictoryRoad2F_EventScript_Necio::
	trainerbattle_single TRAINER_SANTIAGO, VictoryRoad2F_Text_NecioIntro, VictoryRoad2F_Text_NecioDefeated
	msgbox VictoryRoad2F_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Karateka::
	trainerbattle_single TRAINER_JAYLEN, VictoryRoad2F_Text_KaratekaIntro, VictoryRoad2F_Text_KaratekaDefeated
	msgbox VictoryRoad2F_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Chico::
	trainerbattle_single TRAINER_ANNA_AND_MEG_2, VictoryRoad2F_Text_ChicoIntro, VictoryRoad2F_Text_ChicoDefeated
	msgbox VictoryRoad2F_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Chico2::
	trainerbattle_single TRAINER_ANNA_AND_MEG_5, VictoryRoad2F_Text_Chico2Intro, VictoryRoad2F_Text_Chico2Defeated
	msgbox VictoryRoad2F_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Domador::
	trainerbattle_single TRAINER_VICTORIA, VictoryRoad2F_Text_DomadorIntro, VictoryRoad2F_Text_DomadorDefeated
	msgbox VictoryRoad2F_Text_DomadorPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_2F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE115_STATE, 0
goto_if_gt VictoryRoad_2F_Entrenador_Especial_2
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq VictoryRoad_2F_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_JACOB, VictoryRoad_2F_Entrenador_Especial_Texto_5
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_LIFE_ORB
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setvar VAR_ROUTE115_STATE, 1
release
end

VictoryRoad_2F_Entrenador_Especial_Texto_1.1:
.string "You obtained a LIFE ORB\n"
	.string "from COOLTRAINER hands!$"

VictoryRoad_2F_Entrenador_Especial_2_No::
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
release
end

VictoryRoad_2F_Entrenador_Especial_2::
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

VictoryRoad_2F_Entrenador_Especial_Texto_1:
	.string "Moves with recoil damage are incredibly\n"
	.string "strong, but they come with their risks.\l"
	.string "DOUBLE-EDGE is known for its powerful\l"
	.string "yet risky nature. While I'd be happy to\l"
	.string "teach you, I've already instructed\l"
	.string "someone else. However, I can offer you\l"
	.string "an alternative, provided you\l"
	.string "demonstrate your worthiness. It's not\l"
	.string "something I give out lightly.$"


VictoryRoad_2F_Entrenador_Especial_Texto_2:
	.string "So, you gonna take on the challenge or\n"
	.string "what?$"

VictoryRoad_2F_Entrenador_Especial_Texto_3:
	.string "LIFE ORB offers a unique advantage by\n"
	.string "amplifying the power of offensive\l"
	.string "moves by 30%. However, its usage comes\l"
	.string "at a cost, deducting 10% of the user's\l"
	.string "health with each turn. Strategically\l"
	.string "employed, it has the potential to\l"
	.string "foster POKÉMON of remarkable strength.\l"
	.string "Yet, it's crucial to consider the\l"
	.string "repercussions of recoil damage.\l"
	.string "Combining it with moves like\l"
	.string "DOUBLE-EDGE or BRAVE BIRD can result\l"
	.string "in devastating blows to opponents,\l"
	.string "though at the expense of the user's\l"
	.string "own health. Given its rarity in KANTO, it\l"
	.string "should be utilized judiciously.$"

VictoryRoad_2F_Entrenador_Especial_Texto_4:
	.string "Alright! Get set, I'm the baddest\n"
	.string "COOLTRAINER you'll run into on VICTORY\l"
	.string "ROAD!$"

VictoryRoad_2F_Entrenador_Especial_Texto_5:
	.string "Wow, that's awesome! Someone like you\n"
	.string "totally deserves what I'm gonna give\l"
	.string "you.$"

VictoryRoad_2F_Entrenador_Especial_Texto_6:
	.string "Dang, you beat me! You're something\n"
	.string "else, you know? So, here's your prize.$"

VictoryRoad_2F_Entrenador_Especial_Texto_7:
	.string "Alright, I hear ya. Not everyone's got\n"
	.string "what it takes to go up against a real\l"
	.string "COOLTRAINER, y'know.$"

	