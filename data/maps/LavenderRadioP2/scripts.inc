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
delay 10
msgbox LavenderRadioP2_Evento_Fuji_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox LavenderRadioP2_Evento_Fuji_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_3
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Fuji_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox LavenderRadioP2_Evento_Fuji_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_4
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Fuji_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_5
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Fuji_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP2_Evento_Fuji_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP2_Evento_Fuji_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox LavenderRadioP2_Evento_Fuji_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderRadioP2_Evento_Fuji_Move_6
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Fuji_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
fadescreen 1
delay 20
removeobject 9
fadescreen 0
clearflag FLAG_HOENN_102
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
clearflag FLAG_HOENN_90
clearflag FLAG_HOENN_91
clearflag FLAG_HOENN_92
clearflag FLAG_HOENN_93
clearflag FLAG_HOENN_94
clearflag FLAG_HOENN_95
clearflag FLAG_HOENN_96
clearflag FLAG_HOENN_97
clearflag FLAG_HOENN_98
clearflag FLAG_HOENN_99
setflag FLAG_HOENN_640
setflag FLAG_HOENN_641
setflag FLAG_HOENN_642
setflag FLAG_HOENN_643
setflag FLAG_HOENN_644
setflag FLAG_HOENN_645
setflag FLAG_HOENN_646
setflag FLAG_HOENN_647
setflag FLAG_HOENN_648
setflag FLAG_HOENN_649
clearflag FLAG_NUEVA_165
clearflag FLAG_NUEVA_136
clearflag FLAG_NUEVA_133
clearflag FLAG_NUEVA_137
clearflag FLAG_NUEVA_144
clearflag FLAG_NUEVA_147
clearflag FLAG_NUEVA_152
clearflag FLAG_NUEVA_153
clearflag FLAG_NUEVA_154
clearflag FLAG_NUEVA_155
clearflag FLAG_NUEVA_156
clearflag FLAG_NUEVA_159
clearflag FLAG_NUEVA_511
clearflag FLAG_NUEVA_512
clearflag FLAG_NUEVA_513
clearflag FLAG_NUEVA_514
clearflag FLAG_NUEVA_632
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
	.string "POKÉMON TOWER. Although it will only be\l"
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
	.string "-You should see FUJI and the\n"
	.string "town's GRAVEYARD first.-$"

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
.string "Ningún RECLUTA común tiene acceso a\n"
	.string "los pisos superiores, como mínimo\l"
	.string "debes ser ALTO RANGO.$"

LavenderRadioP2_Evento_Elm_Move_1:
walk_in_place_up
step_end

LavenderRadioP2_Evento_Elm_Move_2:
walk_slow_up
step_end

LavenderRadioP2_Evento_Elm_Move_2.1:
walk_slow_down
step_end

LavenderRadioP2_Evento_Elm_Move_3:
walk_slow_left
walk_slow_up
step_end

LavenderRadioP2_Evento_Elm_Move_4:
face_down
step_end

LavenderRadioP2_Evento_Elm_Move_5:
emote_exclamation_mark
step_end

LavenderRadioP2_Evento_Elm_Move_6:
walk_down
step_end

LavenderRadioP2_Evento_Elm_Izq::
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_1
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_2
waitmovement 0x0
goto LavenderRadioP2_Evento_Elm

LavenderRadioP2_Evento_Elm_Der::
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_1
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_3
waitmovement 0x0
goto LavenderRadioP2_Evento_Elm

LavenderRadioP2_Evento_Elm::
lock
delay 10
applymovement 13, LavenderRadioP2_Evento_Elm_Move_4
applymovement 12, LavenderRadioP2_Evento_Elm_Move_4
waitmovement 0x0
playse SE_PIN
applymovement 13, LavenderRadioP2_Evento_Elm_Move_5
waitmovement 0x0
waitse
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_2 MSGBOX_AUTOCLOSE
applymovement 12, LavenderRadioP2_Evento_Elm_Move_6
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Elm_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 12, LavenderRadioP2_Evento_Elm_Move_7
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 12, LavenderRadioP2_Evento_Elm_Move_8
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_10
applymovement 12, LavenderRadioP2_Evento_Elm_Move_9
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 12, LavenderRadioP2_Evento_Elm_Move_8
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 12, LavenderRadioP2_Evento_Elm_Move_7
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_11
applymovement 12, LavenderRadioP2_Evento_Elm_Move_12
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_15 MSGBOX_AUTOCLOSE
delay 30
msgbox LavenderRadioP2_Evento_Elm_Texto_16 MSGBOX_AUTOCLOSE
delay 30
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_14
applymovement 12, LavenderRadioP2_Evento_Elm_Move_13
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP2_Evento_Elm_Move_11
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Elm_Texto_17 MSGBOX_AUTOCLOSE
applymovement 13, LavenderRadioP2_Evento_Elm_Move_2.1
waitmovement 0x0
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_18 MSGBOX_AUTOCLOSE
applymovement 13, LavenderRadioP2_Evento_Elm_Move_10
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Elm_Texto_19 MSGBOX_AUTOCLOSE
delay 15
applymovement 13, LavenderRadioP2_Evento_Elm_Move_4
waitmovement 0x0
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_20 MSGBOX_AUTOCLOSE
delay 15
applymovement 13, LavenderRadioP2_Evento_Elm_Move_15
waitmovement 0x0
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_21 MSGBOX_AUTOCLOSE
applymovement 13, LavenderRadioP2_Evento_Elm_Move_16
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Elm_Texto_22 MSGBOX_AUTOCLOSE
applymovement 13, LavenderRadioP2_Evento_Elm_Move_6
waitmovement 0x0
msgbox LavenderRadioP2_Evento_Elm_Texto_23 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox LavenderRadioP2_Evento_Elm_Texto_24 MSGBOX_DEFAULT
waitfanfare
additem ITEM_Z_POWER_RING
msgbox LavenderRadioP2_Evento_Elm_Texto_25 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, LavenderRadioP2_Evento_Elm_Move_14
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, LavenderRadioP2_Evento_Elm_Move_16
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_27 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, LavenderRadioP2_Evento_Elm_Move_11
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_28 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, LavenderRadioP2_Evento_Elm_Move_17
waitmovement 0x0
delay 10
msgbox LavenderRadioP2_Evento_Elm_Texto_29 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderRadioP2_Evento_Elm_Texto_30 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, LavenderRadioP2_Evento_Elm_Move_18
waitmovement 0x0
delay 25
msgbox LavenderRadioP2_Evento_Elm_Texto_31 MSGBOX_AUTOCLOSE
applymovement 13, LavenderRadioP2_Evento_Elm_Move_19
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_102
removeobject 12
removeobject 13
setvar VAR_UNUSED_0x40F8, 36
waitse
release
end

LavenderRadioP2_Evento_Elm_Move_19:
walk_up
walk_right
walk_up
face_right
delay_8
step_end

LavenderRadioP2_Evento_Elm_Move_18:
walk_up
walk_up
step_end

LavenderRadioP2_Evento_Elm_Move_17:
delay_8
face_down
delay_16
delay_8
face_left
step_end

LavenderRadioP2_Evento_Elm_Move_16:
walk_in_place_down
step_end

LavenderRadioP2_Evento_Elm_Move_15:
face_left
delay_16
delay_8
face_down
step_end

LavenderRadioP2_Evento_Elm_Move_13:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

LavenderRadioP2_Evento_Elm_Move_14:
delay_16
delay_8
face_right
step_end

LavenderRadioP2_Evento_Elm_Move_12:
walk_right
face_down
step_end

LavenderRadioP2_Evento_Elm_Move_11:
delay_16
face_up
step_end

LavenderRadioP2_Evento_Elm_Move_10:
delay_16
delay_16
face_left
step_end

LavenderRadioP2_Evento_Elm_Move_9:
walk_down
walk_left
walk_left
step_end

LavenderRadioP2_Evento_Elm_Move_8:
face_down
step_end

LavenderRadioP2_Evento_Elm_Move_7:
face_left
step_end

LavenderRadioP2_Evento_Elm_Texto_1:
	.string "ARCHER: It'll be revolutionary, there's\n"
	.string "no doubt about that.$"

LavenderRadioP2_Evento_Elm_Texto_2:
	.string "ELM: Oh, {PLAYER}, at last.$"

LavenderRadioP2_Evento_Elm_Texto_3:
	.string "ARCHER: Glad to see you around,\n"
	.string "{PLAYER}.$"

LavenderRadioP2_Evento_Elm_Texto_4:
	.string "You may not have believed it yet, but\n"
	.string "now you can see it with your very own\n"
	.string "eyes: the RADIO TOWER is here, in\l"
	.string "LAVENDER TOWN.$"

LavenderRadioP2_Evento_Elm_Texto_5:
	.string "A new era of the understanding of\n"
	.string "POKÉMON is to arrive.$"

LavenderRadioP2_Evento_Elm_Texto_6:
	.string "We were going to celebrate its grand\n"
	.string "opening on the rooftop, with a\n"
	.string "demonstration of the power of radio\l"
	.string "waves.$"

LavenderRadioP2_Evento_Elm_Texto_7:
	.string "But the incident with the BIKERS has\n"
	.string "affected these plans.$"

LavenderRadioP2_Evento_Elm_Texto_8:
	.string "The event will be held as scheduled…\n"
	.string "but only briefly.$"

LavenderRadioP2_Evento_Elm_Texto_9:
	.string "Neither of you nor ANDRA have seen the\n"
	.string "whole place, so you'll be attending the\n"
	.string "grand opening.$"

LavenderRadioP2_Evento_Elm_Texto_10:
	.string "GIOVANNI, PETREL, KOGA and me, we'll\n"
	.string "be busy talking to the BIKERS in the\n"
	.string "SAFARI ZONE.$"

LavenderRadioP2_Evento_Elm_Texto_11:
	.string "We've agreed on adapting the place for\n"
	.string "some new conditions that are yet to be\n"
	.string "agreed on.$"

LavenderRadioP2_Evento_Elm_Texto_12:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

LavenderRadioP2_Evento_Elm_Texto_13:
	.string "Maybe… we thought this was the perfect\n"
	.string "KANTO wanted by all of us.$"

LavenderRadioP2_Evento_Elm_Texto_14:
	.string "But the truth is that, whether it is on\n"
	.string "the top or a few meters under the\n"
	.string "ground, we aren't as capable of knowing\l"
	.string "how things are on the streets.$"

LavenderRadioP2_Evento_Elm_Texto_15:
	.string "However, not a single thing of what I\n"
	.string "said can nullify an elementary truth.$"

LavenderRadioP2_Evento_Elm_Texto_16:
	.string "There is no progress without change.$"

LavenderRadioP2_Evento_Elm_Texto_17:
	.string "ELM: ARCHER is right. Everything we did\n"
	.string "here came with a sacrifice.$"

LavenderRadioP2_Evento_Elm_Texto_18:
	.string "Remember the day we met? Ages ago,\n"
	.string "when you stepped on JOHTO for the\n"
	.string "first time.$"

LavenderRadioP2_Evento_Elm_Texto_19:
	.string "You already had a lot of experience and\n"
	.string "have lived through a lot.$"

LavenderRadioP2_Evento_Elm_Texto_20:
	.string "In spite of that, you kept growing and\n"
	.string "learning even more.$"

LavenderRadioP2_Evento_Elm_Texto_21:
	.string "It truly is outstanding, but your\n"
	.string "progress as a TRAINER and our\n"
	.string "scientific advancements paralleled one\l"
	.string "another.$"

LavenderRadioP2_Evento_Elm_Texto_22:
	.string "The day I gave you that MEGA RING, you\n"
	.string "remember? Back then, it was peak\n"
	.string "technology.$"

LavenderRadioP2_Evento_Elm_Texto_23:
	.string "Now, barely a year later, I'm giving you\n"
	.string "today's peak technology!$"

LavenderRadioP2_Evento_Elm_Texto_24:
	.string "You received a Z-RING!$"

LavenderRadioP2_Evento_Elm_Texto_25:
	.string "It replicates the effects of a powerful\n"
	.string "artifact from a region far far away.\n"
	.string "With it, you will be able to execute a\l"
	.string "great mechanic while battling.$"

LavenderRadioP2_Evento_Elm_Texto_26:
	.string "Although I have a report that indicates\n"
	.string "that DEVON made it before us.$"

LavenderRadioP2_Evento_Elm_Texto_27:
	.string "Thanks to the Z-RING, you'll be able to\n"
	.string "execute a Z MOVE of the TYPE of the\n"
	.string "crystal your POKÉMON is holding. A Z\l"
	.string "MOVE is an insanely powerful move.$"

LavenderRadioP2_Evento_Elm_Texto_28:
	.string "Upstairs you can buy the elemental Z\n"
	.string "crystals.$"

LavenderRadioP2_Evento_Elm_Texto_29:
	.string "Now if x and y aren't enough, there you\n"
	.string "got a z.$"


LavenderRadioP2_Evento_Elm_Texto_30:
	.string "Something… dangerous and\n"
	.string "unpredictable, capable of tearing apart\n"
	.string "teams and defenses that, until now, we\l"
	.string "considered them invulnerable.$"

LavenderRadioP2_Evento_Elm_Texto_31:
	.string "In the end… I only hope that, as you did\n"
	.string "so far, you keep your pace and your\n"
	.string "adaptability. You get what I'm trying to\l"
	.string "say, right?$"
