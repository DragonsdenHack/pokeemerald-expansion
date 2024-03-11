Route52_Maze_MapScripts::
	.byte 0

Route52Maze1::
end



Route52Maze2::
end



Route52Maze3::
end



Route52Maze4::
end



Route52Maze5::
end



Route52Maze6::
end



Route52MazeDocumento_100::
msgbox Route52MazeDocumento_Text_100, MSGBOX_SIGN   
end

Route52MazeDocumento_Text_100:
.string "ADVANCED FINANCIAL MARKET\n"
	.string "MANIPULATION TECHNIQUES.\l"
	.string "...\l"
	.string "...\l"
	.string "It's over 700 pages long!$"

Route52_Maze_Combate_1::
compare VAR_UNUSED_0x4091, 2
goto_if_gt Route52_Maze_Combate_1_2
msgbox Route52_Maze_Combate_1_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route52_Maze_Combate_1_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, Route52_Maze_Combate_1_Move_1
waitmovement 0x0
applymovement 3, Route52_Maze_Combate_1_Move_2
waitmovement 0x0
msgbox Route52_Maze_Combate_1_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route52_Maze_Combate_1_Move_3
waitmovement 0x0
playse MUS_RG_ENCOUNTER_ROCKET
msgbox Route52_Maze_Combate_1_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, Route52_Maze_Combate_1_Move_4
waitmovement 0x0
trainerbattle_no_intro TRAINER_ANGELO, Route52_Maze_Combate_1_Texto_5
msgbox Route52_Maze_Combate_1_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, Route52_Maze_Combate_1_Move_5
waitmovement 0x0
setvar VAR_UNUSED_0x4091, 3
release
end

Route52_Maze_Combate_1_2::
lock
msgbox Route52_Maze_Combate_1_Texto_7 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route52_Maze_Combate_1_2_No
delay 40
playse SE_PC_ON
delay 40
playse SE_WALL_HIT
setmetatile 12, 5, 0x2A8, FALSE
special DrawWholeMapView
delay 20
release
end

Route52_Maze_Combate_1_2_No::
release
end


Route52_Maze_Combate_1_Move_1:
emote_exclamation_mark
step_end

Route52_Maze_Combate_1_Move_2:
face_up
step_end

Route52_Maze_Combate_1_Move_3:
face_down
step_end

Route52_Maze_Combate_1_Move_4:
walk_up
walk_up
walk_up
walk_up
step_end

Route52_Maze_Combate_1_Move_5:
walk_down
walk_down
walk_down
walk_down
walk_in_place_left
step_end



Route52_Maze_Combate_1_Texto_1:
.string "...\n"
	.string "...$"

Route52_Maze_Combate_1_Texto_2:
	.string "This PC is kinda suspicious…$"

Route52_Maze_Combate_1_Texto_3:
.string "Hey, you!\n"
	.string "What the hell are you doing?$"

Route52_Maze_Combate_1_Texto_4:
	.string "That PC has very important private\n"
	.string "information, do not even try to touch\l"
	.string "it!$"

Route52_Maze_Combate_1_Texto_5:
	.string "Oh hell, you have discovered the ruse!$"

Route52_Maze_Combate_1_Texto_6:
	.string "Beware of the consequences if you\n"
	.string "decide to touch that computer, you've\l"
	.string "been warned.$"

Route52_Maze_Combate_1_Texto_7:
.string "There is a function named\n"
	.string "-reverse arrow-.\l"
	.string "Do I push it?$"

Route52_Maze_Cientifico_1::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Cientifico_1_3
compare VAR_UNUSED_0x4091, 2
goto_if_gt Route52_Maze_Cientifico_1_2
msgbox Route52_Maze_Cientifico_1_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Cientifico_1_2::
msgbox Route52_Maze_Cientifico_1_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Cientifico_1_3::
msgbox Route52_Maze_Cientifico_1_Texto_3 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Cientifico_1_Texto_1:
	.string "Who are you, and how did you get here?\n"
	.string "This place used to be an important\l"
	.string "research center, but it closed down a\l"
	.string "long time ago. I've only come to\l"
	.string "retrieve some documents. You should go\l"
	.string "back the way you came; there's nothing\l"
	.string "interesting here.$"

Route52_Maze_Cientifico_1_Texto_2:
	.string "We don't owe anyone any explanations\n"
	.string "here; that's why we set up the\l"
	.string "warehouse in the middle of nowhere.\l"
	.string "There's nothing better than operating\l"
	.string "without interference.$"

Route52_Maze_Cientifico_1_Texto_3:
	.string "We can see the OLIVINE LIGHTHOUSE\n"
	.string "from here, but the OLIVINE LIGHTHOUSE\l"
	.string "cant see us!$"

Route52_Maze_Combate_2::
playse SE_PIN
applymovement 6, Route52_Maze_Combate_2_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Route52_Maze_Combate_2_Move_2
waitmovement 0x0
applymovement 6, Route52_Maze_Combate_2_Move_3
waitmovement 0x0
delay 20
msgbox Route52_Maze_Combate_2_Texto_1 MSGBOX_AUTOCLOSE
delay 20
playse MUS_RG_ENCOUNTER_ROCKET
msgbox Route52_Maze_Combate_2_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, Route52_Maze_Combate_2_Move_4
waitmovement 0x0
trainerbattle_no_intro TRAINER_DARIUS, Route52_Maze_Combate_2_Texto_3
setvar VAR_UNUSED_0x4091, 4
release
end

Route52_Maze_Combate_2_Texto_1:
.string "Who are you?\n"
	.string "Did you also get hired?$"

Route52_Maze_Combate_2_Texto_2:
	.string "So, I can't let you go any further.$"

Route52_Maze_Combate_2_Texto_3:
.string "You're not going to mess\n"
	.string "up this business.$"

Route52_Maze_Combate_2_Move_1:
emote_exclamation_mark
step_end

Route52_Maze_Combate_2_Move_2:
face_down
step_end

Route52_Maze_Combate_2_Move_3:
face_up
step_end

Route52_Maze_Combate_2_Move_4:
walk_left
walk_up
step_end

Route52_Maze_Segundo_Cientifico::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Segundo_Cientifico_2
msgbox Route52_Maze_Segundo_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Segundo_Cientifico_2::
lock
faceplayer
msgbox Route52_Maze_Segundo_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Segundo_Cientifico_Texto_1:
	.string "What? Why are we in the middle of\n"
	.string "nowhere? Don't misunderstand, we're not\l"
	.string "fleeing from justice or anything like\l"
	.string "that; it's just that we enjoy exotic\l"
	.string "places, yeah, that's all, yeah.$"

Route52_Maze_Segundo_Cientifico_Texto_2:
	.string "What? Why are we in the middle of\n"
	.string "nowhere? Don't misunderstand, we're not\l"
	.string "fleeing from justice or anything like\l"
	.string "that; it's just that we enjoy exotic\l"
	.string "places, yeah, that's all, yeah.$"



Route52_Maze_Trabajador::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Trabajador_2
msgbox Route52_Maze_Trabajador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Trabajador_2::
msgbox Route52_Maze_Trabajador_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Trabajador_Texto_1:
	.string "I made the right choice by deserting\n"
	.string "from the OLIVINE MARINE. Here, I earn\l"
	.string "twice as much, although I end up worn\l"
	.string "out from unloading boxes!$"

Route52_Maze_Trabajador_Texto_2:
	.string "At this rate, I'm going to get stronger\n"
	.string "than a MACHOKE. This warehouse can't\l"
	.string "keep up with all our demand anymore.$"

Route52_Maze_Electricista::
lock
faceplayer
compare VAR_UNUSED_0x4091, 7
goto_if_gt Route52_Maze_Electricista_2
msgbox Route52_Maze_Electricista_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Electricista_2::
msgbox Route52_Maze_Electricista_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route52_Maze_Electricista_Texto_1:
	.string "The lesser questions you do; the\n"
	.string "better, I just know that I am well-paid\l"
	.string "here.$"

Route52_Maze_Electricista_Texto_2:
	.string "So, are you part of our club now?$"
