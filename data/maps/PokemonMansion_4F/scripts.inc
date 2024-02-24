PokemonMansion_4F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_4F_OnLoad
	.byte 0
	
PokemonMansion_4F_OnLoad::
	call_if_set FLAG_UNUSED_0x041, PokemonMansion_EventScript_PressSwitch_B1F
	end	

PokemonMansion4F_1::
end



PokemonMansion4F_2::
end



PokemonMansion4F_3::
end



PokemonMansion4F_4::
end



PokemonMansion4F_5::
end



PokemonMansion4F_6::
end



PokemonMansion4F_EventScript_Cientifico::
	trainerbattle_single TRAINER_ETHAN_3, PokemonMansion4F_Text_CientificoIntro, PokemonMansion4F_Text_CientificoDefeated
	msgbox PokemonMansion4F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonMansion4F_EventScript_Cientifico2::
	trainerbattle_single TRAINER_ELLIOT_4, PokemonMansion4F_Text_Cientifico2Intro, PokemonMansion4F_Text_Cientifico2Defeated
	msgbox PokemonMansion4F_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion4FDocumento_100::
lock     
msgbox PokemonMansion4FDocumento_Text_100, MSGBOX_DEFAULT
release     
end

PokemonMansion4FDocumento_Text_100:
.string "Diary: Sept. 1\n"
    .string "MEWTWO is far too powerful.\p"
    .string "We have failed to curb its vicious\n"
    .string "tendencies…$"

PokemonMansion_4F_Blaine_Fuji::
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_4F_Blaine_Fuji_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_4F_Blaine_Fuji_Move_2
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_1 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonMansion_4F_Blaine_Fuji_Move_3
waitmovement 0x0
special RemoveCameraObject
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, PokemonMansion_4F_Blaine_Fuji_Move_1
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_3 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 8, PokemonMansion_4F_Blaine_Fuji_Move_4.1
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_4 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_4F_Blaine_Fuji_Move_5
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_5 MSGBOX_AUTOCLOSE
applymovement 7, PokemonMansion_4F_Blaine_Fuji_Move_1
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_6 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 8, PokemonMansion_4F_Blaine_Fuji_Move_6
waitmovement 0x0
delay 10
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_7 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_4F_Blaine_Fuji_Move_4
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_8 MSGBOX_AUTOCLOSE
applymovement 7, PokemonMansion_4F_Blaine_Fuji_Move_1
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_9 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_4F_Blaine_Fuji_Move_5
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_11 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
fadescreen 1
playmoncry SPECIES_MAGMAR, CRY_MODE_ENCOUNTER
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_12 MSGBOX_AUTOCLOSE
waitmoncry
delay 20
removeobject 8
playse SE_WARP_IN
waitse
fadescreen 0
delay 25
applymovement 7, PokemonMansion_4F_Blaine_Fuji_Move_5
waitmovement 0x0
delay 20
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_13 MSGBOX_AUTOCLOSE
delay 20
fadescreen 1
removeobject 7
playse SE_WARP_IN
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_14 MSGBOX_AUTOCLOSE
waitse
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonMansion_4F_Blaine_Fuji_Move_7
waitmovement 0x0
special RemoveCameraObject
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox PokemonMansion_4F_Blaine_Fuji_Texto_15 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 76
release
end

PokemonMansion_4F_Blaine_Fuji_Texto_1:
	.string "????: This is our last chance BLAINE,\n"
	.string "you know where it hides, now the TEAM\l"
	.string "ROCKET has the MASTER BALL, only left\l"
	.string "to capture it and we will finish this!$"

PokemonMansion_4F_Blaine_Fuji_Texto_2:
	.string "BLAINE: It is not that easy, FUJI, OAK\n"
	.string "also knows about MEWTWO, do you think\l"
	.string "he wont tell LANCE that the TEAM\l"
	.string "ROCKET plans something, when he\l"
	.string "discovers that you are going in search\l"
	.string "of our creation? Also, I had understood\l"
	.string "that the invasion at SILPH was a\l"
	.string "failure.$"

PokemonMansion_4F_Blaine_Fuji_Texto_3:
	.string "FUJI: That is what they had made\n"
	.string "believe to the people, one of the\l"
	.string "ROCKET EXECUTIVES; PROTON has\l"
	.string "informed me about what just happened\l"
	.string "there, apparently GIOVANNI had\l"
	.string "convinced the PRESIDENT to rebel\l"
	.string "against LAN…$"

PokemonMansion_4F_Blaine_Fuji_Texto_4:
	.string "BLAINE: Dreamers! Did you think that\n"
	.string "just one LEGENDARY is enough to defeat\l"
	.string "LANCE? Do I need to remind you what the\l"
	.string "three beasts did to our region? THREE!\l"
	.string "Different legendaries, MEWTWO by itself\l"
	.string "is the most powerful POKÉMON ever\l"
	.string "created, we did a great job in this\l"
	.string "laboratory back in the day, but LANCE\l"
	.string "has the entire ELITE 4 protecting him,\l"
	.string "and those dragons… Don't you forget he\l"
	.string "has not just 1, but 3 of those\l"
	.string "pseudo-legendaries watching his back?$"

PokemonMansion_4F_Blaine_Fuji_Texto_5:
	.string "BLAINE: Everybody who wants to rebel\n"
	.string "against LANCE right now is a suicide, he\l"
	.string "has too much power despite he doesnt\l"
	.string "know about MEWTWO's existence, he has\l"
	.string "made honor to his SACRED POKÉMONS\l"
	.string "TRAINER.$"

PokemonMansion_4F_Blaine_Fuji_Texto_6:
	.string "FUJI: GIOVANNI has technology to clone\n"
	.string "the KANTO's BIRDS, also BLAINE, maybe\l"
	.string "we wouldn't have a chance like this in a\l"
	.string "long time, you've always been someone\l"
	.string "who can be reasoned with, what's\l"
	.string "holding you back from trying?$"

PokemonMansion_4F_Blaine_Fuji_Texto_7:
	.string "BLAINE: So the LEGENDARY BIRDS also…$"

PokemonMansion_4F_Blaine_Fuji_Texto_8:
	.string "BLAINE: I will see what I can do FUJI,\n"
	.string "go back to LAVENDER TOWN, it is not\l"
	.string "recommendable that people see you\l"
	.string "around here, they could suspect us, two\l"
	.string "ex-scientists as us together…$"

PokemonMansion_4F_Blaine_Fuji_Texto_9:
	.string "FUJI: Finally you have come to your\n"
	.string "senses, BLAINE, you will see how\l"
	.string "GIOVANNI finishes all this!$"

PokemonMansion_4F_Blaine_Fuji_Texto_10:
	.string "BLAINE: You'll hear from me in the next\n"
	.string "few hours. Until then...$"

PokemonMansion_4F_Blaine_Fuji_Texto_11:
.string "BLAINE: MAGMAR, TELEPORT!$"

PokemonMansion_4F_Blaine_Fuji_Texto_12:
.string "Mag!$"

PokemonMansion_4F_Blaine_Fuji_Texto_13:
.string "FUJI: ...$"

PokemonMansion_4F_Blaine_Fuji_Texto_14:
.string "(FUJI USED ESCAPE ROPE)$"

PokemonMansion_4F_Blaine_Fuji_Texto_15:
	.string "GIOVANNI: {PLAYER}? The assault on\n"
	.string "SILPH was a success in every way. RED\l"
	.string "took the bait. We're all back at the\l"
	.string "BASE now. Present yourself in my office\l"
	.string "as soon as possible.$"

PokemonMansion_4F_Blaine_Fuji_Move_1:
walk_in_place_left
step_end

PokemonMansion_4F_Blaine_Fuji_Move_2:
emote_exclamation_mark
step_end

PokemonMansion_4F_Blaine_Fuji_Move_3:
walk_left
walk_left
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
walk_up
step_end

PokemonMansion_4F_Blaine_Fuji_Move_4:
face_right
step_end

PokemonMansion_4F_Blaine_Fuji_Move_4.1:
walk_in_place_right
step_end

PokemonMansion_4F_Blaine_Fuji_Move_5:
face_up
step_end

PokemonMansion_4F_Blaine_Fuji_Move_6:
emote_exclamation_mark
face_down
step_end

PokemonMansion_4F_Blaine_Fuji_Move_7:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

PokemonMansion_4F_Entrada_Secreta::
lock
clearflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
addobject 9
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_4F_Entrada_Secreta_Move_1
waitmovement 0x0
msgbox PokemonMansion_4F_Entrada_Secreta_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_4F_Entrada_Secreta_Move_2
waitmovement 0x0
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 6, 3, 0x2D0, TRUE
setmetatile 6, 4, 0x2D8, TRUE
setmetatile 7, 3, 0x2D1, TRUE
setmetatile 7, 4, 0x2D9, TRUE
setmetatile 8, 3, 0x2D2, FALSE
setmetatile 8, 2, 0x2B2, TRUE
special DrawWholeMapView
delay 20
msgbox PokemonMansion_4F_Entrada_Secreta_Texto_2 MSGBOX_AUTOCLOSE
applymovement 9, PokemonMansion_4F_Entrada_Secreta_Move_3
waitmovement 0x0
setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
removeobject 9
playse SE_EXIT
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
setvar VAR_UNUSED_0x40F7, 114
delay 15
release
end

PokemonMansion_4F_Entrada_Secreta_Move_1:
walk_in_place_left
step_end

PokemonMansion_4F_Entrada_Secreta_Move_2:
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonMansion_4F_Entrada_Secreta_Move_3:
face_left
step_end

PokemonMansion_4F_Entrada_Secreta_Texto_1:
.string "So you decided to come.$"

PokemonMansion_4F_Entrada_Secreta_Texto_2:
	.string "So be it. In the face of the power we've\n"
	.string "created here, no TRAINER can compete.$"


PokemonMansion_4F_PC::
compare VAR_UNUSED_0x40F7, 113
goto_if_gt PokemonMansion_4F_Warp
msgbox PokemonMansion_4F_PC_PC_Texto_1 MSGBOX_AUTOCLOSE
release
end

PokemonMansion_4F_Warp::
msgbox RocketHideout_4F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 6, 3, 0x2D0, TRUE
setmetatile 6, 4, 0x2D8, TRUE
setmetatile 7, 3, 0x2D1, FALSE
setmetatile 7, 4, 0x2D9, TRUE
setmetatile 8, 3, 0x2D2, FALSE
setmetatile 8, 2, 0x2B2, TRUE
special DrawWholeMapView
delay 60
release
end

PokemonMansion_4F_PC_PC_Texto_1:
	.string "It doesn't seem like a regular machine\n"
	.string "like the others; it seems to serve a\l"
	.string "more important purpose...$"
