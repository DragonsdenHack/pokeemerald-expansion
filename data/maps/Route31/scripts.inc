Route31_MapScripts::
	.byte 0

Route31_1::
lock     
faceplayer     
msgbox Route31_Text_1, MSGBOX_DEFAULT
release     
end

Route31_Text_1:
	.string "Cave access is currently barred due to\n"
	.string "a small landslide inside. We're ensuring\l"
	.string "everything's in order. We apologize for\l"
	.string "the inconvenience.$"



Route31_2::
end



Route31_3::
lock     
faceplayer     
msgbox Route31_Text_3, MSGBOX_DEFAULT
release     
end

Route31_Text_3:
	.string "You aren't from around here, right? Do\n"
	.string "you come from OLIVINE CITY? KANTO?!\l"
	.string "How did you cross the borders?!$"



Route31_4::
end



Route31_5::
end



Route31_6::
end



Route31_7::
lock
faceplayer
msgbox Route31_7_Texto_1, MSGBOX_NPC
release
end

Route31_7_Texto_1:
	.string "I caught a DUNSPARCE thinking it was a\n"
	.string "BUG TYPE, but it turns out it's a NORMAL\l"
	.string "type. Does that slow and clumsy snake\l"
	.string "really have nothing special about it?$"



Route31_8::
end



Route31_9::
end



Route31_10::
lock     
faceplayer     
msgbox Route31_Text_10, MSGBOX_DEFAULT
release     
end

Route31_Text_10:
	.string "In the west is VIOLET CITY, renowned\n"
	.string "for its SPROUT TOWER, the oldest and\l"
	.string "most spiritual location in JOHTO,\l"
	.string "second only to the towering pagodas of\l"
	.string "ECRUTEAK CITY.$"



Route31_11::
end



Route31_EventScript_Chico::
	trainerbattle_single TRAINER_LUCAS_1, Route31_Text_ChicoIntro, Route31_Text_ChicoDefeated
	msgbox Route31_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route31Documento_100::
msgbox Route31Documento_Text_100, MSGBOX_SIGN   
end

Route31Documento_Text_100:
	.string "ROUTE 31\n"
	.string "To the west VIOLET CITY$"



Route31Documento_101::
msgbox Route31Documento_Text_101, MSGBOX_SIGN   
end

Route31Documento_Text_101:
	.string "DARK CAVE$"
