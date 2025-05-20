Route2_Path2_MapScripts::
	.byte 0

Route2Path2_1::
lock     
faceplayer     
msgbox Route2_Path2_Text_1, MSGBOX_DEFAULT
release     
end

Route2_Path2_Text_1:
	.string "RATTFRATZ mag zwar klein sein, aber\n"
	.string "unterschätze bloß nicht seinen fiesen\l"
	.string "Biss. Ich denke, deine Organisation weiß\l"
	.string "das besser als jeder andere, oder?$"



Route2Path2_2::
lock     
faceplayer     
msgbox Route2_Path2_Text_2, MSGBOX_DEFAULT
release     
end

Route2_Path2_Text_2:
	.string "Zolle dem Wald zumindest ein bisschen\n"
	.string "Respekt. Es gilt als Ursprungsort\l"
	.string "vieler Legenden!$"
