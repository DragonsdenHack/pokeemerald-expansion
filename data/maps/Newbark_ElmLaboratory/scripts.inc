Newbark_ElmLaboratory_MapScripts::
	.byte 0

ElmLaboratory1::
end



ElmLaboratory2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "¡Hay mucho por hacer!\n"
.string "¡Toda la región ha de ser\l"
.string "acomodada para ello!$"



ElmLaboratory3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "Oh, debes de ser [player], ¿verdad?\n"
.string "¿Cómo es estar en presencia de\l"
.string "OAK?$"
