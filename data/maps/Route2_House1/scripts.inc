Route2_House1_MapScripts::
	.byte 0

Route2House1_1::
lock     
faceplayer     
msgbox Route2_House1_Text_1, MSGBOX_DEFAULT
release     
end

Route2_House1_Text_1:
	.string "Wenn das Rechtssystem zur Abwechslung\n"
	.string "mal so funktionieren würde, wie es\l"
	.string "verflucht nochmal sollte, würdet ihr\l"
	.string "ROCKETs aufhören, die Krümel zu\l"
	.string "aufzupicken, die wir zurücklassen.\p"
	.string "Das ist das Einzige, was euch in\n"
	.string "eurer erbärmlichen Existenz bleibt.$"



Route2House1_2::
lock     
faceplayer     
msgbox Route2_House1_Text_2, MSGBOX_DEFAULT
release     
end

Route2_House1_Text_2:
	.string "Ich würde meine POKéMON niemals einem\n"
	.string "von TEAM ROCKET anvertrauen.\p"
	.string "Darauf kannst du Gift nehmen.$"
