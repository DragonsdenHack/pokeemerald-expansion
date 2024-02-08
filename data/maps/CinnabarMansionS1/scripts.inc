CinnabarMansionS1_MapScripts::
	.byte 0

CinnabarMansionS1_EventScript_Cientifico::
	trainerbattle_single TRAINER_CINDY_1, CinnabarMansionS1_Text_CientificoIntro, CinnabarMansionS1_Text_CientificoDefeated
	msgbox CinnabarMansionS1_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarMansionS1_1::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_1, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_1:
	.string "This location was destroyed after\n"
	.string "MEWTWO escaped, many things were lost\l"
	.string "here, but the significance of what\l"
	.string "happened here still resonates in our\l"
	.string "memories.$"



CinnabarMansionS1_3::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_3, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_3:
	.string "Nothing withstands the passage of\n"
	.string "time; in three years, this place may not\l"
	.string "exist anymore. Furthermore, the entire\l"
	.string "CINNABAR ISLAND could vanish,\l"
	.string "swallowed by its volcano. However, none\l"
	.string "of that can undo what happened here.$"



CinnabarMansionS1_4::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_4, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_4:
	.string "If they can't take you down, you can\n"
	.string "bounce back from the toughest hits and\l"
	.string "come back even stronger than before.\l"
	.string "The way we've kept this place going and\l"
	.string "finally finished our big project despite\l"
	.string "all the craziness is proof; no one, not\l"
	.string "even you, can revert this fact.$"
