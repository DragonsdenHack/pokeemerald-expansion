ViridianForest_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, ViridianForest_OnResume
	.byte 0

ViridianForest_OnResume:
	call ViridianForest_SetupEscapeWarp
	end

ViridianForest_SetupEscapeWarp::
	setescapewarp MAP_ROUTE2, 5, 13
	return

ViridianForest1::
lock     
faceplayer     
msgbox ViridianForest_Text_1, MSGBOX_DEFAULT
release     
end

ViridianForest_Text_1:
	.string "Meine Freunde und ich wollten hier\n"
	.string "KÄFER-POKéMON fangen … Unsere\l"
	.string "POKéMON wollen kämpfen!!!$"



ViridianForest2::
end



ViridianForest3::
end



ViridianForest4::
end



ViridianForest5::
end



ViridianForest6::
end



ViridianForest7::
end



ViridianForest8::
end



ViridianForest9::
lock     
faceplayer     
msgbox ViridianForest_Text_9, MSGBOX_DEFAULT
release     
end

ViridianForest_Text_9:
	.string "Es gibt hier wohl keine starken\n"
	.string "POKéMON…$"



ViridianForest10::
end



ViridianForest11::
end



ViridianForest12::
end



ViridianForest_EventScript_Cazabichos::
	trainerbattle_single TRAINER_PATRICIA, ViridianForest_Text_CazabichosIntro, ViridianForest_Text_CazabichosDefeated
	msgbox ViridianForest_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos2::
	trainerbattle_single TRAINER_MAY_ROUTE_110_TREECKO, ViridianForest_Text_Cazabichos2Intro, ViridianForest_Text_Cazabichos2Defeated
	msgbox ViridianForest_Cazabichos2PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos3::
	trainerbattle_single TRAINER_MAY_ROUTE_103_TREECKO, ViridianForest_Text_Cazabichos3Intro, ViridianForest_Text_Cazabichos3Defeated
	msgbox ViridianForest_Cazabichos3PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos4::
	trainerbattle_single TRAINER_BROOKE_5, ViridianForest_Text_Cazabichos4Intro, ViridianForest_Text_Cazabichos4Defeated
	msgbox ViridianForest_Cazabichos4PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos5::
	trainerbattle_single TRAINER_BROOKE_4, ViridianForest_Text_Cazabichos5Intro, ViridianForest_Text_Cazabichos5Defeated
	msgbox ViridianForest_Cazabichos5PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForestDocumento_100::
msgbox ViridianForestDocumento_Text_100, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_100:
.string "LEAVING VIRIDIAN FOREST\n"
    .string "PEWTER CITY AHEAD$"



ViridianForestDocumento_101::
msgbox ViridianForestDocumento_Text_101, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_101:
.string "TRAINER TIPS\p"
    .string "You can't catch a POKÉMON that\n"
    .string "belongs to someone else.\p"
    .string "Throw POKé BALLS only at wild\n"
    .string "POKÉMON to catch them!$"



ViridianForestDocumento_102::
msgbox ViridianForestDocumento_Text_102, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_102:
.string "TRAINER TIPS\p"
    .string "Contact PROF. OAK via a PC to\n"
    .string "get your POKéDEX evaluated!$"



ViridianForestDocumento_103::
msgbox ViridianForestDocumento_Text_103, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_103:
.string "TRAINER TIPS\p"
    .string "If your POKÉMON are weak and you\n"
    .string "want to avoid battles, stay away\l"
    .string "from grassy areas!$"



ViridianForestDocumento_104::
msgbox ViridianForestDocumento_Text_104, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_104:
.string "TRAINER TIPS\p"
    .string "If your POKÉMON are weak and you\n"
    .string "want to avoid battles, stay away\l"
    .string "from grassy areas!$"



ViridianForestDocumento_105::
msgbox ViridianForestDocumento_Text_105, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_105:
.string "For poison, use ANTIDOTE!\n"
    .string "Get it at POKÉMON MARTS!$"

ViridianForest_Combate_Guays_Arriba::
applymovement OBJ_EVENT_ID_PLAYER, ViridianForest_Combate_Guays_Arriba_Move_1
waitmovement 0x0
goto ViridianForest_Combate_Guays

ViridianForest_Combate_Guays_Arriba_Move_1:
walk_down
face_left
step_end

ViridianForest_Combate_Guays_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, ViridianForest_Combate_Guays_Abajo_Move_1
waitmovement 0x0
goto ViridianForest_Combate_Guays

ViridianForest_Combate_Guays_Abajo_Move_1:
walk_up
face_left
step_end

ViridianForest_Combate_Guays::
applymovement 13, ViridianForest_Combate_Guays_Move_2
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_1 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_1
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 12, ViridianForest_Combate_Guays_Move_3
waitmovement 0x0
applymovement 12, ViridianForest_Combate_Guays_Move_4
waitmovement 0x0
applymovement 13, ViridianForest_Combate_Guays_Move_4
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, ViridianForest_Combate_Guays_Move_2
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_4 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_1
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_5 MSGBOX_AUTOCLOSE
applymovement 13, ViridianForest_Combate_Guays_Move_5
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_6 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_5
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_VERO_2, ViridianForest_Combate_Guays_Texto_8
msgbox ViridianForest_Combate_Guays_Texto_9 MSGBOX_AUTOCLOSE
msgbox ViridianForest_Combate_Guays_Texto_10 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_7
applymovement 13, ViridianForest_Combate_Guays_Move_8
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_11 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox ViridianForest_Combate_Guays_Texto_12 MSGBOX_DEFAULT
givemon SPECIES_PINSIR, 15, ITEM_SILVER_POWDER
waitfanfare
msgbox ViridianForest_Combate_Guays_Texto_13 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_1
applymovement 13, ViridianForest_Combate_Guays_Move_2
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_14 MSGBOX_AUTOCLOSE
msgbox ViridianForest_Combate_Guays_Texto_15 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_FANCLUB_LADY
fadescreen 1
delay 20
removeobject 12
removeobject 13
fadescreen 0
setvar VAR_UNUSED_0x408B, 1
release
end

ViridianForest_Combate_Guays_Texto_1:
	.string "VERO: Habe ich's dir doch gesagt! PINSIR\n"
	.string "ist kein ausgestorbenes POKéMON in\l"
	.string "diesem Wald! Und wir hatten richtig\l"
	.string "Glück, gleich ein Paar von ihnen zu\l"
	.string "entdecken!$"

ViridianForest_Combate_Guays_Texto_2:
	.string "JUAN: Mit dieser neuesten Ergänzung in\n"
	.string "unserem Team werden uns alle\l"
	.string "Ass-Trainer beneiden. Niemand hat ein\l"
	.string "Team wie wir. Das SICHLOR, das wir in\l"
	.string "der SAFARI-ZONE gefangen haben, ist\l"
	.string "ebenfalls eine Bereicherung. Zwei\l"
	.string "KÄFER-TYPEN, von denen die meisten\l"
	.string "mittelmäßigen Käfersammler hier nicht\l"
	.string "einmal träumen können.$"

ViridianForest_Combate_Guays_Texto_3:
	.string "VERO: Ich erinnere mich an dich. Du\n"
	.string "warst im FELSTUNNEL, als das Gerücht\l"
	.string "mit dem KANGAMA rumging. Scheint so, als\l"
	.string "wäre es nur eine Lüge gewesen,\l"
	.string "verglichen mit dem hier … Niemand hätte\l"
	.string "geglaubt, dass hier noch ein PINSIR\l"
	.string "sein würde und doch ist hier eins.$"

ViridianForest_Combate_Guays_Texto_4:
	.string "JUAN: Ist das der Typ von TEAM ROCKET,\n"
	.string "der dich besiegt hat?$"

ViridianForest_Combate_Guays_Texto_5:
	.string "VERO: Ja. Er muss ein Kommandant sein\n"
	.string "oder so. Gewöhnliche ROCKETs sind bei\l"
	.string "weitem nicht so stark wie er.$"

ViridianForest_Combate_Guays_Texto_6:
	.string "JUAN: I want to check that, a ROCKET\n"
	.string "with good POKÉMON! That is harder than\l"
	.string "finding PINSIR in places like this!$"

ViridianForest_Combate_Guays_Texto_7:
	.string "VERO: We have completed the ultimate\n"
	.string "team that we wanted. There is no chance\l"
	.string "for you to stop us!$"

ViridianForest_Combate_Guays_Texto_8:
	.string "It had to be a ROCKET who made us bite\n"
	.string "the dust!$"

ViridianForest_Combate_Guays_Texto_9:
	.string "JUAN: I for real didn't expect this, a\n"
	.string "ROCKET defeating the most cools of the\l"
	.string "COOL-TRAINERS.$"

ViridianForest_Combate_Guays_Texto_10:
	.string "VERO: Seems like you are competent,\n"
	.string "although we are sometimes a bit\l"
	.string "arrogant we recognize when someone is\l"
	.string "better than us.$"

ViridianForest_Combate_Guays_Texto_11:
	.string "JUAN: I want you to have the other\n"
	.string "PINSIR that we found, a TRAINER like\l"
	.string "you would take advantage of it more\l"
	.string "than anyone who we can give it to, and\l"
	.string "we are not your organization to sell it\l"
	.string "at the black market, you get it.$"

ViridianForest_Combate_Guays_Texto_12:
.string "YOU OBTAINED A LV.25 PINSIR!$"

ViridianForest_Combate_Guays_Texto_13:
	.string "VERO: Don't abuse! We weren't going to\n"
	.string "give you the other PINSIR! We've used\l"
	.string "all our rare candies to level it up to\l"
	.string "the rest of our POKÉMON!$"

ViridianForest_Combate_Guays_Texto_14:
	.string "JUAN: Ok let's head out, VERO.\p"
	.string "I heard in JOHTO there are some bugs\n"
	.string "even better than the ones here, and an\l"
	.string "old man will give you a DRATINI if you\l"
	.string "can complete his quest.$"

ViridianForest_Combate_Guays_Texto_15:
.string "VERO: No more talking, then.\p"
	.string "To the next destination!$"

ViridianForest_Combate_Guays_Move_1:
walk_in_place_down
step_end

ViridianForest_Combate_Guays_Move_1.1:
walk_in_place_left
step_end

ViridianForest_Combate_Guays_Move_2:
walk_in_place_up
step_end

ViridianForest_Combate_Guays_Move_3:
emote_exclamation_mark
step_end

ViridianForest_Combate_Guays_Move_4:
face_right
step_end

ViridianForest_Combate_Guays_Move_5:
walk_down
walk_right
walk_right
step_end

ViridianForest_Combate_Guays_Move_6:
walk_in_place_left
step_end

ViridianForest_Combate_Guays_Move_7:
walk_in_place_down
walk_in_place_right
step_end

ViridianForest_Combate_Guays_Move_8:
walk_in_place_up
walk_in_place_right
step_end
