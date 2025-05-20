Route2_Path_MapScripts::
	.byte 0

Route2Path_1::
lock     
faceplayer     
msgbox Route2_Path_Text_1, MSGBOX_DEFAULT
release     
end

Route2_Path_Text_1:
	.string "Es gibt viele POKéMON, die einfach nur\n"
	.string "in Wäldern oder Höhlen herumlaufen.\p"
	.string "Du musst wachsam sein und Ausdauer\n"
	.string "mitbringen, wenn du sie alle fangen\l"
	.string "willst.$"



Route2Path_2::
lock     
faceplayer     
msgbox Route2_Path_Text_2, MSGBOX_DEFAULT
release     
end

Route2_Path_Text_2:
	.string "An diesem Ort ist nichts interessanter\n"
	.string "als ein ASS-TRAINER wie ich. Außer den\l"
	.string "Gerüchten eines wilden PINSIRS {PAUSE 5}…{PAUSE 5}$"



Route2Path_3::
lock     
faceplayer     
msgbox Route2_Path_Text_3, MSGBOX_DEFAULT
release     
end

Route2_Path_Text_3:
	.string "Der unsterbliche VERTANIA WALD! Ahhh!\n"
	.string "Nicht einmal dieser Ort wird dem Zahn\l"
	.string "der Zeit standhalten!$"
