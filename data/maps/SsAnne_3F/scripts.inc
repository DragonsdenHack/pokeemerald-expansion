SsAnne_3F_MapScripts::
	.byte 0

SsAnne3F_1::
end



SsAnne3F_2::
lock     
faceplayer     
msgbox SsAnne3F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne3F_Text_2:
	.string "C'mon! Chill, man! We're here for some\n"
	.string "fun! I mean, not like you're some\l"
	.string "infiltrator on a top-secret mission,\l"
	.string "right?$"



SsAnne3F_3::
lock          
msgbox SsAnne3F_Text_3, MSGBOX_SIGN
release     
end

SsAnne3F_Text_3:
.string "Yeah!\n"
.string "Teach that beardless young man from\l"
	.string "KANTO how we fight here!$"



SsAnne3F_4::
lock          
msgbox SsAnne3F_Text_4, MSGBOX_SIGN
release     
end

SsAnne3F_Text_4:
.string "Come on, POLIWHIRL!\n"
	.string "Fly our fleet's flag!$"



SsAnne3F_5::
lock          
msgbox SsAnne3F_Text_5, MSGBOX_SIGN
playmoncry SPECIES_POLIWHIRL, CRY_MODE_ENCOUNTER
msgbox SsAnne3F_Text_5_2, MSGBOX_SIGN
release     
end

SsAnne3F_Text_5:
.string "POLIWHIRL!\n"
	.string "BUBBLE BEAM!$"

SsAnne3F_Text_5_2:
.string "Whirl!$"



SsAnne3F_7::
lock          
msgbox SsAnne3F_Text_7, MSGBOX_SIGN
release     
end

SsAnne3F_Text_7:
	.string "Amateurs! If I send out my PINSIR, this\n"
	.string "match'd be over instantly!$"

SsAnne3F_Andra::
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, SsAnne3F_Andra_move_1
applymovement 1, SsAnne3F_Andra_move_2
waitmovement 0x0
msgbox SsAnne3F_Andra_Text_1, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SsAnne3F_Andra_move_3
applymovement 1, SsAnne3F_Andra_move_4
waitmovement 0x0
release
end

SsAnne3F_Andra_Text_1:
	.string "ANDRA: Seems like this is the CAPTAIN's\n"
	.string "cabin. PETREL wanted us to hold up a\l"
	.string "sec before he gives us our last signal.\l"
	.string "Wouldn't hurt to roam a bit and get some\l"
	.string "training in.$"

SsAnne3F_Andra_move_1:
walk_in_place_up
step_end

SsAnne3F_Andra_move_2:
face_down
step_end

SsAnne3F_Andra_move_3:
walk_down
step_end

SsAnne3F_Andra_move_4:
face_up
step_end

SsAnne3F_Andra_lista::
lock
faceplayer
msgbox SsAnne3F_Andra_lista_Text_1, MSGBOX_AUTOCLOSE
applymovement 1, SsAnne3F_Andra_lista_move1
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
removeobject 1
release
end

SsAnne3F_Andra_lista_Text_1:
	.string "{PLAYER}! We're good to go! Let's show\n"
	.string "that CAPTAIN how ROCKET handles\l"
	.string "things here in KANTO!$"

SsAnne3F_Andra_lista_move1:
walk_up
walk_up
face_right
step_end
