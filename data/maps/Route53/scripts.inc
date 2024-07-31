Route53_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route53_OnFrame
	.byte 0

Route53_OnFrame:
map_script_2 VAR_TEMP_0, 0, Ruta_53_Seteo_Metatiles
	.2byte 0

Route53_1::
lock     
faceplayer     
msgbox Route53_Text_1, MSGBOX_DEFAULT
release     
end

Route53_Text_1:
	.string "SAFFRON CITY is ridiculously far away.\n"
	.string "The worst part will be when we have to\l"
	.string "cross the mountains of ROUTEs 26 and\l"
	.string "27.$"



Route53_2::
end



Route53_3::
lock     
faceplayer     
msgbox Route53_Text_3, MSGBOX_DEFAULT
release     
end

Route53_Text_3:
	.string "It's not very common to see people of\n"
	.string "your status step into the arena to get\l"
	.string "their pants dirty like everyone else.\l"
	.string "That's the attitude!$"



Route53_4::
lock     
faceplayer     
msgbox Route53_Text_4, MSGBOX_DEFAULT
release     
end

Route53_Text_4:
	.string "The MAGNET TRAIN will represent a\n"
	.string "turning point in JOHTO's transformation\l"
	.string "into a technological powerhouse, but\l"
	.string "for it to happen, people like me have to\l"
	.string "toil under this blazing sun. Everything\l"
	.string "comes at a cost!$"



Route53_5::
lock     
faceplayer     
msgbox Route53_Text_5, MSGBOX_DEFAULT
release     
end

Route53_Text_5:
	.string "The union of GOLDENROD and SAFFRON by\n"
	.string "the MAGNET TRAIN is inevitable!\l"
	.string "Everything will be ready in two years!$"



Route53_6::
end



Route53_7::
lock
msgbox Route53_7_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route53_7_Texto_1:
	.string "There is still a lot of work to do to\n"
	.string "reach SAFFRON! Come on. Keep working!$"


Route53_8::
lock
msgbox Route53_8_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route53_8_Texto_1:
	.string "That boss… If he also started chipping\n"
	.string "away at the stone with us, perhaps we'd\l"
	.string "go faster…$"


Route53_9::
lock
msgbox Route53_9_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route53_9_Texto_1:
	.string "One… two… One… two… Patience and\n"
	.string "perseverance! You lower your head,\l"
	.string "start digging, and boom! SAFFRON in\l"
	.string "sight!$"


Route53_EventScript_Obrero::
	trainerbattle_single TRAINER_LISA_AND_RAY, Route53_Text_ObreroIntro, Route53_Text_ObreroDefeated
	msgbox Route53_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end


Ruta_53_Seteo_Metatiles::
lock
compare VAR_UNUSED_0x40F7, 180
goto_if_lt Ruta_53_Seteo_Metatiles_2
setvar VAR_TEMP_0, 1
release
end

Ruta_53_Seteo_Metatiles_2::
setmetatile 62, 12, 0x07B, FALSE
setmetatile 63, 12, 0x07C, FALSE
setmetatile 64, 12, 0x07C, FALSE
setmetatile 65, 12, 0x07C, FALSE
setmetatile 66, 12, 0x07C, FALSE
setmetatile 67, 12, 0x07C, FALSE
setmetatile 68, 12, 0x07C, FALSE
setmetatile 69, 12, 0x07C, FALSE
setmetatile 62, 11, 0x073, FALSE
setmetatile 63, 11, 0x071, FALSE
setmetatile 64, 11, 0x071, FALSE
setmetatile 65, 11, 0x071, FALSE
setmetatile 66, 11, 0x071, FALSE
setmetatile 67, 11, 0x071, FALSE
setmetatile 68, 11, 0x071, FALSE
setmetatile 69, 11, 0x071, FALSE
setmetatile 62, 10, 0x073, FALSE
setmetatile 63, 10, 0x071, FALSE
setmetatile 64, 10, 0x071, FALSE
setmetatile 65, 10, 0x071, FALSE
setmetatile 66, 10, 0x071, FALSE
setmetatile 67, 10, 0x071, FALSE
setmetatile 68, 10, 0x071, FALSE
setmetatile 69, 10, 0x071, FALSE
setmetatile 62, 9, 0x068, FALSE
setmetatile 63, 9, 0x069, FALSE
setmetatile 64, 9, 0x06C, FALSE
setmetatile 65, 9, 0x06C, FALSE
setmetatile 66, 9, 0x06C, FALSE
setmetatile 67, 9, 0x06C, FALSE
setmetatile 68, 9, 0x06C, FALSE
setmetatile 69, 9, 0x06C, FALSE
setmetatile 62, 13, 0x06C, FALSE
setmetatile 63, 13, 0x06C, FALSE
setmetatile 64, 13, 0x06C, FALSE
setmetatile 65, 13, 0x06C, FALSE
setmetatile 66, 13, 0x06C, FALSE
setmetatile 67, 13, 0x06C, FALSE
setmetatile 68, 13, 0x06C, FALSE
setmetatile 69, 13, 0x06C, FALSE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end
