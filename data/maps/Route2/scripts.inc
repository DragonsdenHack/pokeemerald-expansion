Route2_MapScripts::
	.byte 0

Route2_1::
lock     
faceplayer     
msgbox Route2_Text_1, MSGBOX_DEFAULT
release     
end

Route2_Text_1:
	.string "Kannst du mich allein lassen? Siehst du\n"
	.string "nicht, dass ich versuche meinem\l"
	.string "SICHLOR ZERSCHNEIDER beizubringen?$"


Route2_2::
lock     
faceplayer     
msgbox Route2_Text_2, MSGBOX_DEFAULT
release     
end

Route2_Text_2:
	.string "Hast du ein Problem? Wenn du weiter\n"
	.string "willst, nimm einen anderen Weg. Was einer\l"
	.string "von TEAM ROCKET zu tun hat oder nicht,\l"
	.string "ist mir scheißegal.$"


Route2_3::
end


Route2_4::
end


Route2_5::
lock     
faceplayer     
msgbox Route2_Text_5, MSGBOX_DEFAULT
release     
end

Route2_Text_5:
	.string "Diese Ass-Trainer sagten, wir würden\n"
	.string "hier ein PINSIR finden.$"


Route2_6::
lock     
faceplayer     
msgbox Route2_Text_6, MSGBOX_DEFAULT
release     
end

Route2_Text_6:
	.string "Es ist unmöglich, dass ein wildes\n"
	.string "PINSIR in diesem Wald lebt!$"


Route2_7::
end


Route2_8::
end



Route2Documento_100::
msgbox Route2Documento_Text_100, MSGBOX_SIGN   
end

Route2Documento_Text_100:
.string "DIGDAs HÖHLE$"



Route2Documento_101::
msgbox Route2Documento_Text_101, MSGBOX_SIGN   
end

Route2Documento_Text_101:
.string "ROUTE 2\n"
	.string "VERTANIA CITY - MARMORIA CITY$"

Route2_Cazabichos::
lock
msgbox Route2_Cazabichos_Texto_1 MSGBOX_DEFAULT
release
end

Route2_Cazabichos_Texto_1:
	.string "Wenn ich ein SICHLOR hätte, würde mich\n"
	.string "jeder im VERTANIA-WALD respektieren\l"
	.string "und dieser Baum hier wäre auf einen\l"
	.string "Schlag gefällt {PAUSE 5}…{PAUSE 5}$"
