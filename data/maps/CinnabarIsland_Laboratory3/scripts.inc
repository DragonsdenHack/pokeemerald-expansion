CinnabarIsland_Laboratory3_MapScripts::
	.byte 0

CinnabarIslandLaboratory3_1::
lock     
faceplayer     
msgbox CinnabarIsland_Laboratory3_Text_1, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Laboratory3_Text_1:
	.string "Selbst wenn du ARKTOS\n"
	.string "höchstpersönlich hättest und nur ein\l"
	.string "SMOGON im Gegenzug wolltest, würde ich\l"
	.string "ablehnen, denn eure POKéMON sind durch\l"
	.string "eure Schandtaten beschmutzt.$"



CinnabarIslandLaboratory3_2::
lock
faceplayer
msgbox CinnabarIslandLaboratory3_2_Texto_1 MSGBOX_DEFAULT
delay 20
msgbox CinnabarIslandLaboratory3_2_Texto_2 MSGBOX_DEFAULT
delay 20
applymovement 2, CinnabarIslandLaboratory3_2_Move_1
waitmovement 0x0
playse SE_PIN
msgbox CinnabarIslandLaboratory3_2_Texto_3 MSGBOX_DEFAULT
msgbox CinnabarIslandLaboratory3_2_Texto_4 MSGBOX_DEFAULT
release
end

CinnabarIslandLaboratory3_2_Move_1:
emote_exclamation_mark
step_end

CinnabarIslandLaboratory3_2_Texto_4:
.string "Oh…{PAUSE 20}$"

CinnabarIslandLaboratory3_2_Texto_3:
	.string "Du besitzt bereits ein AMONITAS,\n"
	.string "KABUTO und AERODACTYL?!\p"
	.string "Und du brauchst nicht unsere dumme\n"
	.string "Maschine, die einen mühsamen\l"
	.string "Wiederbelebungsprozess durchläuft,\l"
	.string "um sie wiederzubeleben?$"

CinnabarIslandLaboratory3_2_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

CinnabarIslandLaboratory3_2_Texto_1:
	.string "TEAM ROCKET wird keinen Zugriff auf\n"
	.string "unsere Technologie zur Wiederbelebung\l"
	.string "von FOSSILIEN erhalten! Ihr müsst euch\l"
	.string "damit abfinden, dass sie für\l"
	.string "euresgleichen ausgestorben bleiben!$"


