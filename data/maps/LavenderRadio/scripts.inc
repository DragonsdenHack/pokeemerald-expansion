LavenderRadio_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, LavenderRadio_OnResume
	.byte 0

LavenderRadio_OnResume:
	call LavenderRadio_SetupEscapeWarp
	end

LavenderRadio_SetupEscapeWarp::
	setescapewarp MAP_NEO_LAVANDA_PUEBLO, 18, 10
	return


LavenderRadio_1::
lock     
faceplayer     
msgbox LavenderRadio_Text_1, MSGBOX_DEFAULT
release     
end

LavenderRadio_Text_1:
	.string "What do you think? Look wherever you\n"
	.string "want on this floor.$"



LavenderRadio_2::
lock     
faceplayer     
msgbox LavenderRadio_Text_2, MSGBOX_DEFAULT
release     
end

LavenderRadio_Text_2:
	.string "What do you think of the new RADIO\n"
	.string "TOWER? Did you ever visit the POKÉMON\l"
	.string "TOWER before it was demolished?$"




LavenderRadio_3::
lock     
faceplayer     
msgbox LavenderRadio_Text_3, MSGBOX_DEFAULT
release     
end

LavenderRadio_Text_3:
	.string "Welcome, SR. CHIEF ADMIN. We're all here\n"
	.string "at your service for whatever you need.\l"
	.string "I'll escort you to the upper floors if\l"
	.string "you wish.$"




LavenderRadio_4::
lock     
faceplayer     
msgbox LavenderRadio_Text_4, MSGBOX_DEFAULT
release     
end

LavenderRadio_Text_4:
	.string "There are many hardworking people in\n"
	.string "the radio tower. They're probably\l"
	.string "working hard to broadcast quality\l"
	.string "programs, although I've never had the\l"
	.string "opportunity to go upstairs.$"



LavenderRadioDocumento_100::
msgbox LavenderRadioDocumento_Text_100, MSGBOX_SIGN   
end

LavenderRadioDocumento_Text_100:
	.string "Inspire your POKÉMON with the\n"
	.string "enchanting music of the POKÉ FLUTE,\l"
	.string "broadcasting on Channel 20.$"



LavenderRadioDocumento_101::
msgbox LavenderRadioDocumento_Text_101, MSGBOX_SIGN   
end

LavenderRadioDocumento_Text_101:
	.string "1st Floor - RECEPTION\n"
	.string "2nd Floor - PRODUCTION & SALES\l"
	.string "3rd Floor - DIRECTOR'S OFFICE\l"
	.string "4th Floor - ROOFTOP$"

LavenderRadio_Evento_Guay_Arriba::
msgbox LavenderRadio_Evento_Guay_Texto_1 MSGBOX_AUTOCLOSE
playse SE_FAILURE
applymovement 5, LavenderRadio_Evento_Guay_Arriba_Move_1
waitmovement 0x0
msgbox LavenderRadio_Evento_Guay_Texto_2 MSGBOX_AUTOCLOSE
applymovement 5, LavenderRadio_Evento_Guay_Arriba_Move_2
waitmovement 0x0
msgbox LavenderRadio_Evento_Guay_Texto_3 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 3, LavenderRadio_Evento_Guay_Arriba_Move_3
waitmovement 0x0
delay 10
applymovement 3, LavenderRadio_Evento_Guay_Arriba_Move_4
waitmovement 0x0
msgbox LavenderRadio_Evento_Guay_Texto_4 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
removeobject 5
setvar VAR_UNUSED_0x40F7, 207
release
end

LavenderRadio_Evento_Guay_Centro::
msgbox LavenderRadio_Evento_Guay_Texto_1 MSGBOX_AUTOCLOSE
playse SE_FAILURE
applymovement 5, LavenderRadio_Evento_Guay_Arriba_Move_1
waitmovement 0x0
msgbox LavenderRadio_Evento_Guay_Texto_2 MSGBOX_AUTOCLOSE
applymovement 5, LavenderRadio_Evento_Guay_Arriba_Move_2.1
waitmovement 0x0
msgbox LavenderRadio_Evento_Guay_Texto_3 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 3, LavenderRadio_Evento_Guay_Arriba_Move_3
waitmovement 0x0
delay 10
applymovement 3, LavenderRadio_Evento_Guay_Arriba_Move_4
waitmovement 0x0
msgbox LavenderRadio_Evento_Guay_Texto_4 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
removeobject 5
setvar VAR_UNUSED_0x40F7, 207
release
end

LavenderRadio_Evento_Guay_Abajo::
msgbox LavenderRadio_Evento_Guay_Texto_1 MSGBOX_AUTOCLOSE
playse SE_FAILURE
applymovement 5, LavenderRadio_Evento_Guay_Arriba_Move_1
waitmovement 0x0
msgbox LavenderRadio_Evento_Guay_Texto_2 MSGBOX_AUTOCLOSE
applymovement 5, LavenderRadio_Evento_Guay_Arriba_Move_2
waitmovement 0x0
msgbox LavenderRadio_Evento_Guay_Texto_3 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 3, LavenderRadio_Evento_Guay_Arriba_Move_3
waitmovement 0x0
delay 10
applymovement 3, LavenderRadio_Evento_Guay_Arriba_Move_4
waitmovement 0x0
msgbox LavenderRadio_Evento_Guay_Texto_4 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
removeobject 5
setvar VAR_UNUSED_0x40F7, 207
release
end

LavenderRadio_Evento_Guay_Arriba_Move_4:
walk_in_place_left
step_end

LavenderRadio_Evento_Guay_Arriba_Move_3:
emote_exclamation_mark
step_end

LavenderRadio_Evento_Guay_Arriba_Move_2.1:
walk_left
walk_down
walk_left
walk_left
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

LavenderRadio_Evento_Guay_Arriba_Move_2:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

LavenderRadio_Evento_Guay_Arriba_Move_1:
walk_in_place_right
step_end

LavenderRadio_Evento_Guay_Texto_1:
	.string "POLICEMAN: Sorry, but you can only tour\n"
	.string "the ground floor. Ever since SILPH C.O.\l"
	.string "was taken over by a criminal gang, we\l"
	.string "have had to step up our security.$"

LavenderRadio_Evento_Guay_Texto_2:
	.string "COOL TRAINER: Oh man! I was so excited\n"
	.string "about seeing the upper floors! Now we\l"
	.string "can't even get into SILPH. KANTO feels\l"
	.string "deserted!$"

LavenderRadio_Evento_Guay_Texto_3:
	.string "POLICEMAN: KANTO is fuller than ever…\n"
	.string "but just for the right people.$"

LavenderRadio_Evento_Guay_Texto_4:
	.string "We've been expecting you, CHIEF ADMIN.\n"
	.string "{PLAYER}. We have a grand opening\l"
	.string "ceremony planned on the rooftop. You\l"
	.string "can visit the upper floors whenever you\l"
	.string "like.$"

