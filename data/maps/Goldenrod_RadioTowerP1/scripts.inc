Goldenrod_RadioTowerP1_MapScripts::
	.byte 0

RadioTowerP1_1::
end



RadioTowerP1_2::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_2:
	.string "Lullabies on the radio may make POKÉMON\n"
	.string "sleep. And some others can wake them\l"
	.string "up!$"



RadioTowerP1_3::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_3:
	.string "Enough with the nonsense… I came here\n"
	.string "to illegally boost my POKÉMON's base\l"
	.string "stats by manipulating radio waves, not\l"
	.string "to edit children's songs…$"



RadioTowerP1_4::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_4:
	.string "The sea breeze creates a pleasant\n"
	.string "working environment here; I imagine the\l"
	.string "urban atmosphere at SILPH must feel\l"
	.string "rather suffocating.$"



RadioTowerP1_5::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_5:
	.string "This building reflects GOLDENROD's\n"
	.string "current position as the capital of\l"
	.string "JOHTO. The comparisons with the SILPH\l"
	.string "building in SAFFRON are unavoidable,\l"
	.string "although the latter is wider, our TORRE\l"
	.string "RADIO is taller.$"



RadioTowerP1_6::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_6, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_6:
	.string "The radio waves are the future, trust\n"
	.string "me!$"



RadioTowerP1_7::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_7, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_7:
	.string "I love MARY, from POKÉMON TALK. I only\n"
	.string "know what she sounds like, though.$"



RadioTowerP1_8::
lock     
faceplayer     
msgbox Goldenrod_RadioTowerP1_Text_8, MSGBOX_DEFAULT
release     
end

Goldenrod_RadioTowerP1_Text_8:
	.string "They sell very good POKÉMON at the GAME\n"
	.string "CORNER, but there's a guy in the\l"
	.string "underground who sells POKÉMON from\l"
	.string "other regions, including PSEUDO\l"
	.string "LEGENDARY ones from there. I think I\l"
	.string "should take a look there before they\l"
	.string "run out.$"



GoldenrodRadioTowerP1_EventScript_Necio::
	trainerbattle_single TRAINER_ROGER, GoldenrodRadioTowerP1_Text_NecioIntro, GoldenrodRadioTowerP1_Text_NecioDefeated
	msgbox GoldenrodRadioTowerP1_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end


GoldenrodRadioTowerP1Documento_100::
msgbox GoldenrodRadioTowerP1Documento_Text_100, MSGBOX_SIGN   
end

GoldenrodRadioTowerP1Documento_Text_100:
.string "2F SALES$"



GoldenrodRadioTowerP1Documento_101::
msgbox GoldenrodRadioTowerP1Documento_Text_101, MSGBOX_SIGN   
end

GoldenrodRadioTowerP1Documento_Text_101:
.string "Anywhere, Anytime \n"
	.string "POKÉMON Radio$"
