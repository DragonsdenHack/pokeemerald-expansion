Route30_MapScripts::
	.byte 0

Route30_1::
end



Route30_2::
end



Route30_3::
end



Route30_4::
lock     
faceplayer     
msgbox Route30_Text_4, MSGBOX_DEFAULT
release     
end

Route30_Text_4:
	.string "I would really like that the GYM LEADERS\n"
	.string "of JOHTO back to be valid for the\l"
	.string "POKÉMON LEAGUE, since the war, they can\l"
	.string "barely be seen.$"



Route30_5::
lock
faceplayer
msgbox Route30_5_Texto_1, MSGBOX_NPC
release
end

Route30_5_Texto_1:
	.string "I will train my PIDGEY and someday I will\n"
	.string "be able to fight in this route against a\l"
	.string "TRAINER.$"



Route30_6::
end



Route30_7::
end



Route30_8::
lock     
faceplayer     
msgbox Route30_Text_8, MSGBOX_DEFAULT
release     
end

Route30_Text_8:
.string "The DARK CAVE…\n"
.string "If any of my POKÉMON could\l"
.string "use flash, I would explore it.$"



Route30_9::
end



Route30_10::
end



Route30_11::
end



Route30_12::
lock          
msgbox Route30_Text_12, MSGBOX_DEFAULT
release     
end

Route30_Text_12:
	.string "It is said that if you butt your head to\n"
	.string "the trees, a wild HERACROSS would\l"
	.string "appear…{PAUSE 25} But I think this is not working.\l"
	.string "Maybe a POKÉMON should do it instead of\l"
	.string "me…$"



Route30_13::
end



Route30_14::
lock     
faceplayer     
msgbox Route30_Text_14, MSGBOX_DEFAULT
release     
end

Route30_Text_14:
	.string "I love walking around here in the\n"
	.string "morning, this place's tranquility is\l"
	.string "unique. My husband prefers to\l"
	.string "contemplate the landscape from above.$"



Route30_EventScript_Sabio::
	trainerbattle_single TRAINER_TRENT_1, Route30_Text_SabioIntro, Route30_Text_SabioDefeated
	msgbox Route30_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route30_EventScript_Cazabichos::
	trainerbattle_single TRAINER_LENNY, Route30_Text_CazabichosIntro, Route30_Text_CazabichosDefeated
	msgbox Route30_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end


Route30Documento_100::
msgbox Route30Documento_Text_100, MSGBOX_SIGN   
end

Route30Documento_Text_100:
	.string "ROUTE 30\n"
	.string "A fresh grass path\l"
	.string "where trainers battle.$"



Route30Documento_101::
msgbox Route30Documento_Text_101, MSGBOX_SIGN   
end

Route30Documento_Text_101:
	.string "MR.POKÉMON'S HOUSE.$"


Route30_Anciano_Togepi::
lock
faceplayer
checkmoncatch SPECIES_TOGEPI
goto_if_eq VAR_RESULT, FALSE, Route30_Anciano_Togepi_2
msgbox Route30_Anciano_Togepi_Texto_7 MSGBOX_NPC
release
end

Route30_Anciano_Togepi_2::
msgbox Route30_Anciano_Togepi_Texto_1 MSGBOX_NPC
delay 15
msgbox Route30_Anciano_Togepi_Texto_2 MSGBOX_NPC
delay 15
msgbox Route30_Anciano_Togepi_Texto_3 MSGBOX_NPC
applymovement 10, Route30_Anciano_Togepi_Move_1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route30_Anciano_Togepi_Move_2
waitmovement 0x0
special RemoveCameraObject
msgbox Route30_Anciano_Togepi_Texto_4 MSGBOX_NPC
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route30_Anciano_Togepi_Move_3
waitmovement 0x0
special RemoveCameraObject
msgbox Route30_Anciano_Togepi_Texto_5 MSGBOX_NPC
applymovement 10, Route30_Anciano_Togepi_Move_4
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route30_Anciano_Togepi_Move_5
waitmovement 0x0
special RemoveCameraObject
msgbox Route30_Anciano_Togepi_Texto_6 MSGBOX_NPC
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route30_Anciano_Togepi_Move_6
waitmovement 0x0
special RemoveCameraObject
applymovement 10, Route30_Anciano_Togepi_Move_1.1
waitmovement 0x0
msgbox Route30_Anciano_Togepi_Texto_7 MSGBOX_NPC
applymovement 10, Route30_Anciano_Togepi_Move_1.2
waitmovement 0x0
msgbox Route30_Anciano_Togepi_Texto_8 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox Route30_Anciano_Togepi_Texto_9, MSGBOX_DEFAULT
givemon SPECIES_TOGEPI, 5, ITEM_NONE
waitfanfare
msgbox Route30_Anciano_Togepi_Texto_10 MSGBOX_NPC
release
end

Route30_Anciano_Togepi_Texto_1:
	.string "I love to move up here, and watch all\n"
	.string "everything that happens on the ROUTE\l"
	.string "since this position.$"

Route30_Anciano_Togepi_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Route30_Anciano_Togepi_Texto_3:
.string "Hmm?\n"
	.string "Nothing is happening here right now?\l"
	.string "Take a look, younger!$"

Route30_Anciano_Togepi_Texto_4:
	.string "Witness the gradual growth of new\n"
	.string "fruits on the KELPSY BERRY plant.$"

Route30_Anciano_Togepi_Texto_5:
	.string "How that SPEAROW tries to search for\n"
	.string "prey in the midst of tall grass, and how\l"
	.string "the WEEDLE and CATERPIE disappear\l"
	.string "around it.$"

Route30_Anciano_Togepi_Texto_6:
	.string "See how the young TRAINER and his\n"
	.string "PIDGEY are constantly learning new\l"
	.string "things, filled with expectations and\l"
	.string "excitement.$"

Route30_Anciano_Togepi_Texto_7:
	.string "Things are always happening, even on\n"
	.string "the ROUTE that may appear the most\l"
	.string "ordinary and insignificant. It's all\l"
	.string "about keen observation and being\l"
	.string "present.$"

Route30_Anciano_Togepi_Texto_8:
	.string "You know, I appreciate you. I want you\n"
	.string "to take this with you.$"

Route30_Anciano_Togepi_Texto_9:
.string "YOU OBTAINED A A LV.5 TOGEPI!!$"

Route30_Anciano_Togepi_Texto_10:
	.string "Many researchers around here would\n"
	.string "sacrifice a lot to have the POKÉMON I\l"
	.string "just gave you. I hope you find a place\l"
	.string "for it and know how to use it to your\l"
	.string "advantage.$"

Route30_Anciano_Togepi_Move_1:
face_right
step_end

Route30_Anciano_Togepi_Move_1.1:
face_left
step_end

Route30_Anciano_Togepi_Move_1.2:
walk_in_place_left
step_end

Route30_Anciano_Togepi_Move_2:
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
step_end

Route30_Anciano_Togepi_Move_3:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Route30_Anciano_Togepi_Move_4:
face_player
step_end

Route30_Anciano_Togepi_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Route30_Anciano_Togepi_Move_6:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

