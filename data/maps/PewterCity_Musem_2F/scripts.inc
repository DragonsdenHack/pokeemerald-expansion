PewterCity_Musem_2F_MapScripts::
	.byte 0

PewterMuseum2F_1::
lock     
faceplayer     
msgbox PewterCity_Museum_Text_1, MSGBOX_DEFAULT
release     
end

PewterCity_Museum_Text_1:
.string "I want a PIKACHU!\n"
    .string "It's so cute!\p"
    .string "I asked my daddy to catch me one!$"



PewterMuseum2F_2::
lock     
faceplayer     
msgbox PewterCity_Museum_Text_2, MSGBOX_DEFAULT
release     
end

PewterCity_Museum_Text_2:
.string "Yeah, a PIKACHU soon, I promise!$"



PewterMuseum2F_3::
end



PewterMuseum2F_4::
lock     
faceplayer     
msgbox PewterCity_Museum_Text_4, MSGBOX_DEFAULT
release     
end

PewterCity_Museum_Text_4:
	.string "MOON STONE, huh? What's so special\n"
	.string "about it? Looks like an ordinary rock to\l"
	.string "me.$"



PewterMuseum2F_5::
lock     
faceplayer     
msgbox PewterCity_Museum_Text_5, MSGBOX_DEFAULT
release     
end

PewterCity_Museum_Text_5:
	.string "This month, we're running a space\n"
	.string "exhibit, where, of course, you are not\l"
	.string "invited.$"


PewterMuseum2FDocumento_100::
msgbox PewterMuseum2FDocumento_Text_100, MSGBOX_SIGN   
end

PewterMuseum2FDocumento_Text_100:
.string "Space Shuttle$"



PewterMuseum2FDocumento_101::
msgbox PewterMuseum2FDocumento_Text_101, MSGBOX_SIGN   
end

PewterMuseum2FDocumento_Text_101:
.string "A meteorite that fell on MT. MOON.\n"
    .string "It is thought to be a MOON STONE.$"

PewterCity_Musem_2F_Secundaria_Azafran::
lock
faceplayer
compare VAR_ROUTE133_STATE, 2
goto_if_eq PewterCity_Musem_2F_Secundaria_Azafran_3
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_ROUTE133_STATE, 1
goto_if_eq PewterCity_Musem_2F_Secundaria_Azafran_2
release
end

PewterCity_Musem_2F_Secundaria_Azafran_2::
delay 20
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, PewterCity_Musem_2F_Secundaria_Azafran_move_1
waitmovement 0x0
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_4 MSGBOX_AUTOCLOSE
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_5 MSGBOX_AUTOCLOSE
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PewterCity_Musem_2F_Secundaria_Azafran_No
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_7 MSGBOX_AUTOCLOSE
release
end


PewterCity_Musem_2F_Secundaria_Azafran_No::
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ISABELLE, PewterCity_Musem_2F_Secundaria_Azafran_Texto_9
delay 15
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, PewterCity_Musem_2F_Secundaria_Azafran_move_1
waitmovement 0x0
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_11 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE133_STATE, 2
release
end




PewterCity_Musem_2F_Secundaria_Azafran_3::
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_2 MSGBOX_AUTOCLOSE
release
end















PewterCity_Musem_2F_Secundaria_Azafran_move_1:
emote_exclamation_mark
step_end

PewterCity_Musem_2F_Secundaria_Azafran_Texto_1:
	.string "July 20, 1969! Humankind first set foot\n"
	.string "on the moon that day. I bought a color\l"
	.string "TV just so I could watch that news.$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_2:
	.string "Keep it on your mind ROCKET, you've only\n"
	.string "managed to delay the date when those\l"
	.string "underground paths will be closed, in 3\l"
	.string "years, there won't be a trace of them.$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_3:
.string "...\n"
	.string "...$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_4:
	.string "Did you come in the name of the BIKERS\n"
	.string "to tell me that do not touch your\l"
	.string "UNDERGROUND PATHS?$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_5:
	.string "I will be clear kid, I came from JOHTO\n"
	.string "and your internal war, if you are or not\l"
	.string "from the TEAM ROCKET, or BIKER, it is\l"
	.string "the same for me, it is not personal it's\l"
	.string "just business, the only thing those\l"
	.string "BIKERS are afraid of is their black\l"
	.string "market running dry that they have\l"
	.string "armed down there, but I don't care\l"
	.string "about that.$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_6:
	.string "You look like someone reasonable and\n"
	.string "important in the TEAM ROCKET, you don't\l"
	.string "need to help those BIKERS, and your\l"
	.string "interests do not have a reason to\l"
	.string "confront the mine. What do you think?$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_7:
	.string "That is what I meant! Maybe we could do\n"
	.string "some business, kid!$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_8:
	.string "What a pity that this has to finish like\n"
	.string "this, anyway, my POKÉMON and me we will\l"
	.string "care of teaching you a lesson.$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_9:
	.string "Did my AMPHAROS's light extinguish?$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_10:
	.string "I didn't know that in KANTO there would\n"
	.string "exist such strong people apart from\l"
	.string "the GYM LEADERS, this region is more\l"
	.string "than I expected…$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_11:
	.string "What!? That you work for GIOVANNI\n"
	.string "directly under his orders and you hold\l"
	.string "one of the most important positions\l"
	.string "within the TEAM ROCKET? And If I do not\l"
	.string "stop my intentions of removing those\l"
	.string "underground paths you will tell this to\l"
	.string "GIOVANNI?$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_12:
	.string "Okay, okay. Calm down kid, I think there\n"
	.string "has been a misunderstanding, the\l"
	.string "magnetrain track construction process\l"
	.string "will take another couple of years, I\l"
	.string "don't care about those paths for now,\l"
	.string "it can continue for 1, 2, or 3 more years,\l"
	.string "there will be time to worry about them,\l"
	.string "don't you think?$"
