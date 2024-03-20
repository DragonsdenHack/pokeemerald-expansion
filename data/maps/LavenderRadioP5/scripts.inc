LavenderRadioP5_MapScripts::
	.byte 0

LavenderRadioP5_2::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_2, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_2:
	.string "All workers beyond 1F in this tower are\n"
	.string "subject to strict oath. Our\l"
	.string "confidentiality agreement prohibits us\l"
	.string "from discussing everything we see here,\l"
	.string "even about TEAM ROCKET.$"




LavenderRadioP5_3::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_3, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_3:
	.string "Most modern efficiencies are deferred\n"
	.string "punishments.$"



LavenderRadioP5_4::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_4, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_4:
	.string "I have the feeling that the DEEP BOND\n"
	.string "phenomenon still has some magic to\l"
	.string "offer us, surprising our scientific\l"
	.string "community once again.$"




LavenderRadioP5_6::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_6, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_6:
	.string "Technology can degrade every aspect\n"
	.string "of an unwary person's life, convincing\l"
	.string "them that they are becoming more\l"
	.string "<efficient>. Because at the same time,\l"
	.string "it undermines their personal abilities\l"
	.string "by allowing something else to do it for\l"
	.string "them.$"




LavenderRadioP5_7::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_7, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_7:
	.string "It's much easier to strive for\n"
	.string "perfection when you're never bored.\l"
	.string "We're never bored here, and the best\l"
	.string "part is, out there, they believe none of\l"
	.string "this exists.$"





LavenderRadioP5_8::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_8, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_8:
	.string "In science, you need to understand the\n"
	.string "world; in business, you need others not\l"
	.string "to understand it.$"





LavenderRadioP5_9::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_9, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_9:
	.string "We could consider this a new undercover\n"
	.string "ROCKET BASE; if so, it would be the\l"
	.string "fourth in KANTO, and the eighth if we\l"
	.string "take into account the regions of JOHTO\l"
	.string "and HOENN.$"




LavenderRadioP5_10::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_10, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_10:
	.string "Thanks to the radio waves, we're going\n"
	.string "to turn KANTO into the greatest\l"
	.string "technological power in the POKÉMON\l"
	.string "world.$"




LavenderRadioP5_11::
lock     
faceplayer     
msgbox LavenderRadioP5_Text_11, MSGBOX_DEFAULT
release     
end

LavenderRadioP5_Text_11:
	.string "I feel a certain emptiness knowing that\n"
	.string "I'm in a place that doesn't exist for\l"
	.string "most people. This desk, everything\l"
	.string "around me, doesn't exist on paper. Yet,\l"
	.string "in the future, it will shape the entire\l"
	.string "known world.$"



LavenderRadioP5_EventScript_Cientifico::
	trainerbattle_single TRAINER_CRISTIN_4, LavenderRadioP5_Text_CientificoIntro, LavenderRadioP5_Text_CientificoDefeated
	msgbox LavenderRadioP5_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end

LavenderRadioP5_OndaToxica::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_819, LavenderRadioP5_OndaToxica_Despues
msgbox LavenderRadioP5_OndaToxica_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem 645
msgbox LavenderRadioP5_OndaToxica_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_819
release     
end

LavenderRadioP5_OndaToxica_Despues::
msgbox LavenderRadioP5_OndaToxica_Texto_2, MSGBOX_NPC
release
end

LavenderRadioP5_OndaToxica_Texto_2:
	.string "SLUDGE BOMB was already powerful, but\n"
	.string "SLUDGE WAVE manages to be even more.\l"
	.string "New times, right?$"

LavenderRadioP5_OndaToxica_Texto_1.1:
.string "{PLAYER} obtained the TM93\n"
	.string "SLUDGE WAVE from the scientist!!$"

LavenderRadioP5_OndaToxica_Texto_1:
	.string "This place optimizes everything we knew\n"
	.string "by 5%. POKÉMON moves are no exception.\l"
	.string "Look.$"

