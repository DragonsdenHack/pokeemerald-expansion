CianwoodEusineHouse_MapScripts::
	.byte 0

CianwoodEusineHouse_Combate::
lock
compare VAR_VERDANTURF_TOWN_STATE, 16
goto_if_gt CianwoodEusineHouse_Dialogo_Post_Mision
delay 20
msgbox CianwoodEusineHouse_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox CianwoodEusineHouse_Combate_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, CianwoodEusineHouse_Combate_Move_1
waitmovement 0x0
msgbox CianwoodEusineHouse_Combate_Texto_3 MSGBOX_AUTOCLOSE
delay 30
playse SE_PIN
applymovement 1, CianwoodEusineHouse_Combate_Move_2
waitmovement 0x0
msgbox CianwoodEusineHouse_Combate_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, CianwoodEusineHouse_Combate_Move_3
waitmovement 0x0
msgbox CianwoodEusineHouse_Combate_Texto_5 MSGBOX_AUTOCLOSE
msgbox CianwoodEusineHouse_Combate_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox CianwoodEusineHouse_Combate_Texto_1.1 MSGBOX_AUTOCLOSE
delay 20
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 1, CianwoodEusineHouse_Combate_Move_1
waitmovement 0x0
msgbox CianwoodEusineHouse_Combate_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_EUSINE, CianwoodEusineHouse_Combate_Texto_1.1
msgbox CianwoodEusineHouse_Combate_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox CianwoodEusineHouse_Combate_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, CianwoodEusineHouse_Combate_Move_4
waitmovement 0x0
msgbox CianwoodEusineHouse_Combate_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, CianwoodEusineHouse_Combate_Move_1
waitmovement 0x0
msgbox CianwoodEusineHouse_Combate_Texto_12 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_VERDANTURF_TOWN_STATE, 3
release
end

CianwoodEusineHouse_Combate_Move_4:
face_up
step_end

CianwoodEusineHouse_Combate_Move_3:
walk_in_place_right
step_end

CianwoodEusineHouse_Combate_Move_1:
face_player
step_end

CianwoodEusineHouse_Combate_Move_2:
emote_exclamation_mark
step_end

CianwoodEusineHouse_Combate_Texto_1:
.string "????: … …$"

CianwoodEusineHouse_Combate_Texto_1.1:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

CianwoodEusineHouse_Combate_Texto_2:
	.string "It appears they have found a solution.\n"
	.string "I should hurry back; I am curious to\l"
	.string "know the reason behind it…$"

CianwoodEusineHouse_Combate_Texto_3:
.string "Huh, do you need something?$"

CianwoodEusineHouse_Combate_Texto_4:
	.string "I don't know how you got hold of that\n"
	.string "information, but you're correct, there\l"
	.string "is a considerable landmass to the west\l"
	.string "of this location. Nevertheless, the\l"
	.string "question is…$"

CianwoodEusineHouse_Combate_Texto_5:
	.string "Does someone like you deserve to visit\n"
	.string "it? A pristine place, pure and distant\l"
	.string "from all those GOLDENROD EXECUTIVES,\l"
	.string "who seem to have forgotten who we are\l"
	.string "and where we come from.$"

CianwoodEusineHouse_Combate_Texto_6:
	.string "You claim to have visited BELL TOWER\n"
	.string "and received the blessing of the two\l"
	.string "GRAND MASTERS of JOHTO. All I see is\l"
	.string "someone trying to hang medals, like\l"
	.string "everyone else nowadays. Would you\l"
	.string "exhibit such experiences in a museum if\l"
	.string "you could, or not?$"

CianwoodEusineHouse_Combate_Texto_7:
.string "Lemme doubt it, {PLAYER}?\n"
	.string "You'll have to prove what you just said.$"

CianwoodEusineHouse_Combate_Texto_8:
	.string "????: Well… it seems I've judged you\n"
	.string "unfairly, despite your young age and\l"
	.string "high position. Your POKÉMON fight in\l"
	.string "total harmony, just as the wisest of\l"
	.string "sages would.$"

CianwoodEusineHouse_Combate_Texto_9:
	.string "Allow me to introduce myself, my name is\n"
	.string "EUSINE. I have dedicated my life to\l"
	.string "studying the legendary creatures\l"
	.string "known as the LEGENDARY BEASTS, those\l"
	.string "that emerged following the famous fire\l"
	.string "that destroyed BURNED TOWER nearly\l"
	.string "150 years ago.$"

CianwoodEusineHouse_Combate_Texto_10:
	.string "EUSINE: You're an intriguing individual.\n"
	.string "I thought there were no young people\l"
	.string "like you left in JOHTO. Undoubtedly, you\l"
	.string "deserve the opportunity to visit such\l"
	.string "an extraordinary place.$"

CianwoodEusineHouse_Combate_Texto_12:
	.string "See you outside, get ready to broaden\n"
	.string "the world you know.$"

CianwoodEusineHouse_Dialogo_Post_Mision::
lock
faceplayer
compare VAR_VERDANTURF_TOWN_STATE, 17
goto_if_gt CianwoodEusineHouse_Dialogo_Post_Mision_2
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_1 MSGBOX_AUTOCLOSE
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_2 MSGBOX_AUTOCLOSE
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_3 MSGBOX_AUTOCLOSE
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_4 MSGBOX_AUTOCLOSE
delay 40
applymovement 1, CianwoodEusineHouse_Combate_Move_4
waitmovement 0x0
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, CianwoodEusineHouse_Combate_Move_1
waitmovement 0x0
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_6 MSGBOX_AUTOCLOSE
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 18
addvar VAR_UNUSED_0x40F7, 1
compare VAR_UNUSED_0x40F7, 183
goto_if_eq Misiones_DLC_Fin_Llamada_Giovanni_Eusine
release
end

Misiones_DLC_Fin_Llamada_Giovanni_Eusine::
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, Misiones_DLC_Fin_Llamada_Giovanni_Eusine_Move_1
waitmovement 0x0
msgbox Misiones_DLC_Fin_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
delay 20
release
end

Misiones_DLC_Fin_Llamada_Giovanni_Eusine_Move_1:
walk_fast_left
walk_fast_left
step_end

Misiones_DLC_Fin_Llamada_Giovanni_Texto_1:
	.string "GIOVANNI: {PLAYER}? Based on the\n"
	.string "gathered data, it seems you've finished\l"
	.string "all the assigned missions. Is that\l"
	.string "correct? If so, I'll meet you in my\l"
	.string "office.$"

CianwoodEusineHouse_Dialogo_Post_Mision_2::
msgbox CianwoodEusineHouse_Dialogo_Post_Mision_Texto_9 MSGBOX_AUTOCLOSE
release
end

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_1:
.string "Ah, {PLAYER}, thanks for coming.$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_2:
	.string "The suspicions I had about you all were\n"
	.string "confirmed just as I was leaving.$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_3:
	.string "I overheard your friend talking about\n"
	.string "the master's POKÉMON as data,\l"
	.string "mentioning someone named GIOVANNI…$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_4:
.string "You belong to some kind\n"
	.string "of organization, right?$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_5:
	.string "I see. You are in search of pushing the\n"
	.string "limits of some kind of POKÉMON. So…$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_6:
	.string "My knowledge of the LEGENDARY BEASTS\n"
	.string "could be of great assistance for your\l"
	.string "organization. I firmly believe that,\l"
	.string "although they are inferior in power to\l"
	.string "EN, RAI, and SUI, they are much more\l"
	.string "adaptable. Therein lies the trap where\l"
	.string "divine intervention is surpassed by the\l"
	.string "bond.$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_7:
	.string "I would like to be able to prove this and\n"
	.string "unleash the latent power of these\l"
	.string "beasts in such a way that they contain\l"
	.string "the same essence as EN, RAI, and SUI.\l"
	.string "What do you think?$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_8:
	.string "I knew you'd agree! So… you've got a\n"
	.string "massive team of scientists who'll be\l"
	.string "very interested in hearing all of this…\l"
	.string "well, I won't budge from here. Once you\l"
	.string "confirm my joining, I'll get to work with\l"
	.string "them.$"

CianwoodEusineHouse_Dialogo_Post_Mision_Texto_9:
	.string "I won't budge from here. As soon as you\n"
	.string "confirm my inclusion, I'll get to work\l"
	.string "with them.$"


