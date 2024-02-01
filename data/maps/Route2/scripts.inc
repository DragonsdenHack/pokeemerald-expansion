Route2_MapScripts::
	.byte 0

Route2_1::
lock     
faceplayer     
msgbox Route2_Text_1, MSGBOX_DEFAULT
release     
end

Route2_Text_1:
	.string "Can you leave me alone? Don't you see\n"
	.string "that I am trying to teach CUT to my\l"
	.string "SCYTHER?$"


Route2_2::
lock     
faceplayer     
msgbox Route2_Text_2, MSGBOX_DEFAULT
release     
end

Route2_Text_2:
	.string "Do you have any problems? If you wanna\n"
	.string "pass take another way, what a ROCKET\l"
	.string "has or not to do I care a shit.$"


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
	.string "Those cool trainers said that we would\n"
	.string "find a wild PINSIR here.$"


Route2_6::
lock     
faceplayer     
msgbox Route2_Text_6, MSGBOX_DEFAULT
release     
end

Route2_Text_6:
	.string "It is impossible for a wild PINSIR to\n"
	.string "exist in this forest.$"


Route2_7::
end


Route2_8::
end



Route2Documento_100::
msgbox Route2Documento_Text_100, MSGBOX_SIGN   
end

Route2Documento_Text_100:
.string "DIGLETT'S CAVE$"



Route2Documento_101::
msgbox Route2Documento_Text_101, MSGBOX_SIGN   
end

Route2Documento_Text_101:
.string "ROUTE 2\n"
	.string "VIRIDIAN CITY - PEWTER CITY$"

Route2_Cazabichos::
lock
msgbox Route2_Cazabichos_Texto_1 MSGBOX_DEFAULT
release
end

Route2_Cazabichos_Texto_1:
	.string "If I had a SCYTHER, everyone at\n"
	.string "VIRIDIAN FOREST would respect me, and\l"
	.string "this tree would disappear in one fell\l"
	.string "swoop…$"
