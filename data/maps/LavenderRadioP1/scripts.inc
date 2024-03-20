LavenderRadioP1_MapScripts::
	.byte 0


LavenderRadioP1_1::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_1, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_1:
	.string "I also work for SILPH; they've\n"
	.string "transferred me here to organize some\l"
	.string "documents regarding magnetic waves.\l"
	.string "Although I can't go up to see what\l"
	.string "they're doing on the upper floors.$"



LavenderRadioP1_2::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_2, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_2:
	.string "Just mentioning the word <security> is\n"
	.string "enough to make everyone acquiesce like\l"
	.string "sheep. The word has become a wildcard in\l"
	.string "the modern world to justify any\l"
	.string "restriction, no matter how\l"
	.string "disproportionate.$"




LavenderRadioP1_3::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_3, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_3:
	.string "The graves have been relocated to the\n"
	.string "cemetery in the south, and they've\l"
	.string "constructed enormous underground\l"
	.string "catacombs to accommodate them all.$"




LavenderRadioP1_4::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_4, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_4:
	.string "At certain frequencies, the radio waves\n"
	.string "we work with can turn exposed POKÉMON\l"
	.string "into <Shinies>. Here, we're only\l"
	.string "interested in the pure increase of BASE\l"
	.string "STATS, but this utility might come in\l"
	.string "handy for giving a scare or two.$"




LavenderRadioP1_5::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_5, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_5:
	.string "The tragedy here is that most of what\n"
	.string "you consider random is under your\l"
	.string "control. Worse than that, it also\l"
	.string "happens viceversa.$"




LavenderRadioP1_6::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_6, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_6:
	.string "How do you think that RED would react\n"
	.string "if he saw the “defeated by him” and\l"
	.string "dissolved TEAM ROCKET doing as they\l"
	.string "want? Exactly! All his reality will rip\l"
	.string "apart. In the blink of an eye he'd see\l"
	.string "the world just as it is!$"




LavenderRadioP1_7::
lock     
faceplayer     
msgbox LavenderRadioP1_Text_7, MSGBOX_DEFAULT
release     
end

LavenderRadioP1_Text_7:
	.string "NIDOKING and NIDOQUEEN have reached\n"
	.string "their full potential thanks to their X\l"
	.string "and Y versions. Maybe if we fused their\l"
	.string "genes we could achieve something even\l"
	.string "better…$"



LavenderRadioP1_EventScript_Cientifico::
	trainerbattle_single TRAINER_CRISTIN_2, LavenderRadioP1_Text_CientificoIntro, LavenderRadioP1_Text_CientificoDefeated
	msgbox LavenderRadioP1_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



LavenderRadioP1Documento_100::
msgbox LavenderRadioP1Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP1Documento_Text_100:
.string "2nd Sales & Production$"



LavenderRadioP1Documento_101::
msgbox LavenderRadioP1Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP1Documento_Text_101:
	.string "-Will of immatureness may help you\n"
	.string "achieve great things-$"
