LavenderRadioP2_MapScripts::
	.byte 0



LavenderRadioP2_1::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_1, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_1:
	.string "POKÉMON RADIO is just a coverup,\n"
	.string "though I admit it's fun. It will provide\l"
	.string "entertainment for the citizens from\l"
	.string "now on.$"



LavenderRadioP2_2::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_2, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_2:
	.string "Do you think we'll be able to control the\n"
	.string "power we're creating? If MEWTWO\l"
	.string "escaped years ago, nowadays, with a\l"
	.string "greater power, I'm not sure…$"





LavenderRadioP2_3::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_3, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_3:
	.string "Sometimes, reality surpasses fiction.\n"
	.string "Not even the craziest theories of some\l"
	.string "people would have ever imagined that it\l"
	.string "was TEAM ROCKET who was working on the\l"
	.string "RADIO TOWER of LAVENDER TOWN. The best\l"
	.string "part of it is that we use the assault of\l"
	.string "SILPH as a shield for protecting the\l"
	.string "upper floors!$"





LavenderRadioP2_4::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_4, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_4:
	.string "We will be creating such a mighty\n"
	.string "POKÉMON that every single region will\l"
	.string "fear us. I know, it's just for defending\l"
	.string "us from an attack, but still… With this\l"
	.string "kind of power, any region would vow to\l"
	.string "it!$"





LavenderRadioP2_5::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_5, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_5:
	.string "Change has more cons than pros,\n"
	.string "inducing a bias that favors the status\l"
	.string "quo. Nevertheless, it hasn't prevented\l"
	.string "the enormous engineering machine from\l"
	.string "becoming a reality.$"





LavenderRadioP2_6::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_6, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_6:
	.string "Everybody wants to get a living from\n"
	.string "the state. However, they forget that\l"
	.string "the state gets a living form everybody.$"




LavenderRadioP2_7::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_7, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_7:
	.string "The ones who got the worst\n"
	.string "disadvantage are the CUBONE that\l"
	.string "inhabited the old POKÉMON TOWER. But\l"
	.string "they have up North the ROCK TUNNEL,\l"
	.string "which makes such a good habitat for\l"
	.string "them starting over.$"


LavenderRadioP2Documento_100::
msgbox LavenderRadioP2Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP2Documento_Text_100:
.string "3rd Efficiency & Performance$"



LavenderRadioP2Documento_101::
msgbox LavenderRadioP2Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP2Documento_Text_101:
	.string "-Whenever you get used to it, it is hard\n"
	.string "to surrender. It's better to remain\l"
	.string "hungry.-$"

LavenderRadioP2_Evento_Fuji::
lock
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Fuji_Move_2
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_1
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Fuji_Texto_1 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP2_Evento_Fuji_Texto_2 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_3
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Fuji_Texto_3 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP2_Evento_Fuji_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_4
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Fuji_Texto_5 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_5
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Fuji_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP2_Evento_Fuji_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP2_Evento_Fuji_Texto_8 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP2_Evento_Fuji_Texto_9 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_6
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Fuji_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
fadescreen 1
delay 20
removeobject 9
fadescreen 0
setvar VAR_UNUSED_0x40F7, 208
release
end

LavenderRadioP2_Evento_Fuji_Move_6:
walk_slow_right
step_end

LavenderRadioP2_Evento_Fuji_Move_5:
walk_in_place_right
step_end

LavenderRadioP2_Evento_Fuji_Move_4:
face_right
step_end

LavenderRadioP2_Evento_Fuji_Move_3:
face_up
step_end

LavenderRadioP2_Evento_Fuji_Move_1:
walk_slow_down
walk_slow_right
step_end

LavenderRadioP2_Evento_Fuji_Move_2:
face_left
step_end

LavenderRadioP2_Evento_Fuji_Texto_1:
	.string "FUJI: Oh! You've arrived so soon,\n"
	.string "{PLAYER}, ANDRA hasn't arrived yet.$"

LavenderRadioP2_Evento_Fuji_Texto_2:
	.string "I should be at the new GRAVEYARD, I have\n"
	.string "to relocate all the graves. I wanted to\l"
	.string "take a walk around here and compare the\l"
	.string "new place with the old one.$"

LavenderRadioP2_Evento_Fuji_Texto_3:
	.string "The RADIO TOWER has preserved the\n"
	.string "original measurements and floors of the\l"
	.string "LAVENDER TOWER. Although it will only be\l"
	.string "perceptible to those of us who work\l"
	.string "here, the rest will not be able to go\l"
	.string "beyond the first floor, and for a\l"
	.string "reason…$"

LavenderRadioP2_Evento_Fuji_Texto_4:
	.string "BILL and ELM know their operation\n"
	.string "better. Apparently, these radio waves\l"
	.string "track possible mutations, 99.9% of\l"
	.string "which are harmful to a POKÉMON and its\l"
	.string "performance. Here we will be in charge\l"
	.string "of selecting that remaining 0.1%, which\l"
	.string "can be useful to us for producing\l"
	.string "increases in a POKÉMON's power…$"

LavenderRadioP2_Evento_Fuji_Texto_5:
	.string "This kind of issue no longer concerns\n"
	.string "me; I had enough with MEWTWO.$"

LavenderRadioP2_Evento_Fuji_Texto_6:
	.string "I just hope to be able to take care of\n"
	.string "the displaced souls. Finally, I see\l"
	.string "glimpses of peace and tranquility in\l"
	.string "LAVENDER TOWN. Maybe this tower will\l"
	.string "bring an unexpected stability, although\l"
	.string "most are unaware of its purpose.$"

LavenderRadioP2_Evento_Fuji_Texto_7:
.string "{PAUSE 15}…{PAUSE 15}$"

LavenderRadioP2_Evento_Fuji_Texto_8:
	.string "It would be a special pleasure for me if\n"
	.string "you visited the new GRAVEYARD, south of\l"
	.string "the town.$"

LavenderRadioP2_Evento_Fuji_Texto_9:
	.string "According to what BILL has told me, the\n"
	.string "inauguration is still pending. The truth\l"
	.string "is, I would like you to do something for\l"
	.string "me. I believe you are the most suitable\l"
	.string "person for the task.$"

LavenderRadioP2_Evento_Fuji_Texto_10:
	.string "I'll meet you at the GRAVEYARD, south of\n"
	.string "the town. It's hard to miss, {PLAYER}.$"


Radio_P2_Barrera::
compare VAR_UNUSED_0x40F7, 210
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, Radio_P2_Barrera_Move_1
waitmovement 0x0
msgbox Radio_P2_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Radio_P2_Barrera_Move_2
waitmovement 0x0
release
end

Radio_P2_Barrera_Move_1:
walk_in_place_up
step_end

Radio_P2_Barrera_Move_2:
walk_slow_up
step_end

Radio_P2_Barrera_Texto_1:
	.string "(You should see FUJI and the town's\n"
	.string "GRAVEYARD first.)$"

LavenderRadioP2_Policia_Cartel::
lock
faceplayer
msgbox LavenderRadioP2_Policia_Cartel_Texto_1 MSGBOX_AUTOCLOSE
release
end

LavenderRadioP2_Policia_Cartel_Texto_1:
	.string "There's a directional sign on the ground\n"
	.string "floor indicating what we supposedly do\l"
	.string "on each floor. Of course, that sign is\l"
	.string "just a facade. If you want to see what\l"
	.string "actually happens on each floor, look at\l"
	.string "the signs starting from P1.$"

LavenderRadioP2_11::
lock     
faceplayer     
msgbox LavenderRadioP2_Text_11, MSGBOX_DEFAULT
release     
end

LavenderRadioP2_Text_11:
	.string "No common GRUNTS have access to the\n"
	.string "upper floors; at the very least, you\l"
	.string "must be a HIGH RANK.$"
