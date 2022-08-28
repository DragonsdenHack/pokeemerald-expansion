Pass_RuinsOfAlphNorth_MapScripts::
	.byte 0

RuinsOfAlphNorth1::
lock     
faceplayer     
msgbox RuinsOfAlphNorth_Text_1, MSGBOX_DEFAULT
release     
end

RuinsOfAlphNorth_Text_1:
.string "Creo que apenas llegamos a rascar\n"
.string "la superficie de lo que\l"
.string "verdaderamente esconde este lugar.$"



RuinsOfAlphNorth2::
lock     
faceplayer     
msgbox RuinsOfAlphNorth_Text_2, MSGBOX_DEFAULT
release     
end

RuinsOfAlphNorth_Text_2:
.string "Esos científicos de las RUINAS\n"
.string "ALFA no me dijeron nada\l"
.string "importante, ¡saben menos que yo\l"
.string "sobre ellas!$"



RuinsOfAlphNorth3::
lock     
faceplayer     
msgbox RuinsOfAlphNorth_Text_3, MSGBOX_DEFAULT
release     
end

RuinsOfAlphNorth_Text_3:
.string "¿No te imaginas quién pudo hacer\n"
.string "algo así?\l"
.string "¿Y por qué?$"
