Ecruteak_DanceTheater_MapScripts::
	.byte 0

DanceTheater1::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_1, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_1:
	.string "Only a noble person whose bond with\n"
	.string "their POKÉMON is unbreakable will be\l"
	.string "able to bring the LEGENDARY HO-OH back\l"
	.string "to BELL TOWER once more.$"



DanceTheater2::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_2:
	.string "The monks of BELL TOWER are\n"
	.string "fascinating. From the moment they rise,\l"
	.string "they dedicate themselves to\l"
	.string "perfection, whatever the purpose they\l"
	.string "pursue. You won't find that level of\l"
	.string "discipline anywhere else.$"



DanceTheater3::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_3:
.string "Huh?\n"
.string "Ah, yeah!\l"
	.string "We have several Eeveelutions.\l"
	.string "Depending on the opponent, we use\l"
	.string "the best or worst trained ones.\l"
	.string "Additionally, some get upset if they\l"
	.string "lose, but we're not interested in those\l"
	.string "people, so we give them what they want\l"
	.string "and move on.$"



DanceTheater4::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_4:
	.string "All EEVEEs trace their origin back to a\n"
	.string "single source. What is it? Only our GYM\l"
	.string "LEADER could answer that.$"



DanceTheater5::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_5:
	.string "According to legend, each evolution of\n"
	.string "the 7 EEVEEs represents one of the 7\l"
	.string "colors of HO-OH's rainbow, although I\l"
	.string "suspect there are more than 7 distinct\l"
	.string "EEVEE evolutions.$"



DanceTheater6::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_6:
	.string "The KIMONO GIRLS not only dance, they\n"
	.string "are also exceptional TRAINERS. I always\l"
	.string "challenge them but have never even\l"
	.string "scratched them… I wish my POKÉMON were\l"
	.string "as graceful as the KIMONO GIRLS…$"



DanceTheater7::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_7, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_7:
	.string "Each KIMONO GIRL represents a form of\n"
	.string "EEVEE, but also its specific TYPE. This\l"
	.string "is reflected in their dancing style.$"



DanceTheater8::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_8, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_8:
	.string "These girls have the dance art in their\n"
	.string "blood. I will immortalize them in my next\l"
	.string "painting!$"



DanceTheater9::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_9, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_9:
	.string "The KIMONO GIRLS are so beautiful… But\n"
	.string "they have to train a lot. And they must\l"
	.string "learn the different dances before the\l"
	.string "performance. But if you love something,\l"
	.string "anything is possible.$"



DanceTheater11::
lock     
faceplayer     
msgbox Ecruteak_DanceTheater_Text_11, MSGBOX_DEFAULT
release     
end

Ecruteak_DanceTheater_Text_11:
	.string "Spectacles like this keep JOHTO alive in\n"
	.string "its essence!$"


Ecruteak_DanceTheater_Batallas::
lock
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_2
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_1 MSGBOX_AUTOCLOSE
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Ecruteak_DanceTheater_Batallas_No
delay 15
playse SE_PIN
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_4
waitmovement 0x0
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_5
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_6
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_3 MSGBOX_AUTOCLOSE
delay 15
playse SE_M_TWISTER
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_7
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BRYANT, Ecruteak_DanceTheater_Batallas_Texto_5
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_8
msgbox Ecruteak_DanceTheater_Batallas_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_9
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_10
waitmovement 0x0
delay 15
playse SE_M_TWISTER
applymovement 4, Ecruteak_DanceTheater_Batallas_Move_7
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SHAYLA, Ecruteak_DanceTheater_Batallas_Texto_9 
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_8
msgbox Ecruteak_DanceTheater_Batallas_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_9
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_11 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_11
waitmovement 0x0
delay 15
playse SE_M_TWISTER
applymovement 3, Ecruteak_DanceTheater_Batallas_Move_7
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_12 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_KYRA, Ecruteak_DanceTheater_Batallas_Texto_13
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_8
msgbox Ecruteak_DanceTheater_Batallas_Texto_14 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_9
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_15 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_10
waitmovement 0x0
delay 15
playse SE_M_TWISTER
applymovement 2, Ecruteak_DanceTheater_Batallas_Move_7
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_16 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_JAIDEN, Ecruteak_DanceTheater_Batallas_Texto_17 
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_8
msgbox Ecruteak_DanceTheater_Batallas_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_9
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_19 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_11
waitmovement 0x0
delay 15
playse SE_M_TWISTER
applymovement 1, Ecruteak_DanceTheater_Batallas_Move_7
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_20 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ALIX, Ecruteak_DanceTheater_Batallas_Texto_21
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_8
msgbox Ecruteak_DanceTheater_Batallas_Texto_22 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_12
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_13
waitmovement 0x0
delay 15
applymovement 3, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
delay 15
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_SACRED_ASH
msgbox Ecruteak_DanceTheater_Batallas_Texto_24.1 MSGBOX_DEFAULT
waitfanfare
msgbox Ecruteak_DanceTheater_Batallas_Texto_24 MSGBOX_AUTOCLOSE
delay 15
playse SE_EXIT
clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
addobject 10
applymovement 10, Ecruteak_DanceTheater_Batallas_Move_14
waitmovement 0x0
playse SE_PIN
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_12
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_25 MSGBOX_AUTOCLOSE
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_3
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_26 MSGBOX_AUTOCLOSE
msgbox Ecruteak_DanceTheater_Batallas_Texto_27 MSGBOX_AUTOCLOSE
delay 15
msgbox Ecruteak_DanceTheater_Batallas_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox Ecruteak_DanceTheater_Batallas_Texto_29 MSGBOX_AUTOCLOSE
msgbox Ecruteak_DanceTheater_Batallas_Texto_30 MSGBOX_AUTOCLOSE
msgbox Ecruteak_DanceTheater_Batallas_Texto_31 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_15
waitmovement 0x0
playse SE_PIN
applymovement 10, Ecruteak_DanceTheater_Batallas_Move_4
waitmovement 0x0
applymovement 10, Ecruteak_DanceTheater_Batallas_Move_9
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_32 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, Ecruteak_DanceTheater_Batallas_Move_4
applymovement 4, Ecruteak_DanceTheater_Batallas_Move_4
applymovement 3, Ecruteak_DanceTheater_Batallas_Move_4
applymovement 2, Ecruteak_DanceTheater_Batallas_Move_4
applymovement 1, Ecruteak_DanceTheater_Batallas_Move_4
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_33 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_15
waitmovement 0x0
delay 10
msgbox Ecruteak_DanceTheater_Batallas_Texto_34 MSGBOX_AUTOCLOSE
applymovement 10, Ecruteak_DanceTheater_Batallas_Move_16
waitmovement 0x0
msgbox Ecruteak_DanceTheater_Batallas_Texto_35 MSGBOX_AUTOCLOSE
applymovement 10, Ecruteak_DanceTheater_Batallas_Move_17
waitmovement 0x0
setflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
clearflag FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER
removeobject 10
setvar VAR_UNUSED_0x40F7, 139
release
end

Ecruteak_DanceTheater_Batallas_Texto_24.1:
.string "You obtained a SACRED ASH\n"
	.string "from the KIMONO GIRL!!$"

Ecruteak_DanceTheater_Batallas_No::
msgbox Ecruteak_DanceTheater_Batallas_Texto_36 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_DanceTheater_Batallas_Move_18
waitmovement 0x0
release
end

Ecruteak_DanceTheater_Batallas_Texto_1:
.string "Oh!\n"
	.string "But how audacious! \l"
	.string "No one steps onto our stage\l"
	.string "with no consequences!$"

Ecruteak_DanceTheater_Batallas_Texto_2:
	.string "If you step onto the stage you will\n"
	.string "have to dance with all of us and our\l"
	.string "POKÈMON. Do you have the courage to do\l"
	.string "it?$"

Ecruteak_DanceTheater_Batallas_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}$"

Ecruteak_DanceTheater_Batallas_Texto_4:
	.string "You should know that no one has been\n"
	.string "able to match our rhythm consistently.\l"
	.string "Will you be the first?$"

Ecruteak_DanceTheater_Batallas_Texto_5:
.string "But what a rhythm!$"

Ecruteak_DanceTheater_Batallas_Texto_6:
	.string "Did you say that you are from KANTO?\n"
	.string "Enjoy ECRUTEAK CITY, then. On KANTO\l"
	.string "you can't see places like this.$"

Ecruteak_DanceTheater_Batallas_Texto_7:
.string "It's my turn now, kind sir.$"

Ecruteak_DanceTheater_Batallas_Texto_8:
	.string "Has my sister KOUME tired you out? I\n"
	.string "would gladly give a SACRED ASH to your\l"
	.string "team, but we have a rule to dance until\l"
	.string "exhaustion.$"


Ecruteak_DanceTheater_Batallas_Texto_9:
.string "I have no more POKÈMON left…$"

Ecruteak_DanceTheater_Batallas_Texto_10:
.string "You are formidable. {PLAYER}?\n"
	.string "I won't forget your name.$"


Ecruteak_DanceTheater_Batallas_Texto_11:
.string "Cof, cof…\n"
	.string "It is my turn…$"

Ecruteak_DanceTheater_Batallas_Texto_12:
	.string "You are offering a great show, can you\n"
	.string "see the audience? It's not time to let\l"
	.string "your arms rest!$"

Ecruteak_DanceTheater_Batallas_Texto_13:
.string "Bravo!\n"
	.string "It was a great battle!$"

Ecruteak_DanceTheater_Batallas_Texto_14:
	.string "Someone like you deserves entrance at\n"
	.string "BELL TOWER, there is no doubt about it.$"

Ecruteak_DanceTheater_Batallas_Texto_15:
.string "The dance is not over yet.$"

Ecruteak_DanceTheater_Batallas_Texto_16:
.string "You are so tired!\n"
	.string "Can you stand another round?$"

Ecruteak_DanceTheater_Batallas_Texto_17:
	.string "I admire you. You have shown great skill\n"
	.string "with your POKÉMON.$"

Ecruteak_DanceTheater_Batallas_Texto_18:
	.string "You have withered my POKÉMON like an\n"
	.string "autumnal tree on BELLCHIME TRAIL…$"

Ecruteak_DanceTheater_Batallas_Texto_19:
.string "Wait a minute, brave gentleman.\n"
	.string "You're left the last dance!$"

Ecruteak_DanceTheater_Batallas_Texto_20:
	.string "After dancing with all my sisters,\n"
	.string "victory will be sweeter, or defeat more\l"
	.string "bitter!$"

Ecruteak_DanceTheater_Batallas_Texto_21:
.string "You have a special talent.$"

Ecruteak_DanceTheater_Batallas_Texto_22:
	.string "You have just impressed all of us all\n"
	.string "with your courage and bravery!$"

Ecruteak_DanceTheater_Batallas_Texto_23:
	.string "Come, good sir, let us present you with\n"
	.string "this item, so you can quickly recover\l"
	.string "your entire team of POKÉMON.$"

Ecruteak_DanceTheater_Batallas_Texto_24:
	.string "A SACRED ASH, once part of the body of\n"
	.string "the LEGENDARY HO-OH, before burning in\l"
	.string "flames to rise again from its ashes.\l"
	.string "They could always be found throughout\l"
	.string "the region of JOHTO, although it\l"
	.string "becomes increasingly difficult.$"

Ecruteak_DanceTheater_Batallas_Texto_25:
	.string "ALDER: I'm sorry to interrupt, ladies,\n"
	.string "but I want to ask some questions.$"

Ecruteak_DanceTheater_Batallas_Texto_26:
.string "Do it, gentleman.$"

Ecruteak_DanceTheater_Batallas_Texto_27:
	.string "ALDER: I had understood that you can\n"
	.string "access at the BELL TOWER and to the\l"
	.string "GRAND MASTER of ECRUTEAK CITY.$"

Ecruteak_DanceTheater_Batallas_Texto_28:
.string "Indeed.$"

Ecruteak_DanceTheater_Batallas_Texto_29:
	.string "ALDER: And could you{PAUSE 15}…{PAUSE 15} take a companion\n"
	.string "inside that place?$"

Ecruteak_DanceTheater_Batallas_Texto_30:
	.string "Unfortunately, no. ECRUTEAK CITY\n"
	.string "faithfully adheres to its history and\l"
	.string "tradition. Some laws and customs are\l"
	.string "unchanging. As descendants of the\l"
	.string "family that constructed the DANCE\l"
	.string "THEATER, we can visit BELL TOWER, but\l"
	.string "the privilege of bringing companions is\l"
	.string "only reserved for the GYM LEADER of\l"
	.string "ECRUTEAK CITY and the JOHTO-KANTO\l"
	.string "CHAMPION. The rest of the GYM LEADERS\l"
	.string "and the ELITE 4 can enter as well, but\l"
	.string "without bringing companions.$"

Ecruteak_DanceTheater_Batallas_Texto_31:
	.string "ALDER: Oh, so it is impossible then{PAUSE 25}…{PAUSE 25} The\n"
	.string "ECRUTEAK CITY LEADER never comes out\l"
	.string "of BELL TOWER, and I have understood\l"
	.string "that the actual CHAMP…$"

Ecruteak_DanceTheater_Batallas_Texto_32:
	.string "ALDER: You are the real CHAMPION!!?$"

Ecruteak_DanceTheater_Batallas_Texto_33:
	.string "ALDER: This can't be true. In that case,\n"
	.string "would you help me and try to convince\l"
	.string "the SAGES of that place?$"

Ecruteak_DanceTheater_Batallas_Texto_34:
	.string "ALDER: I have no words of gratitude,\n"
	.string "truly {PLAYER}. I won't forget this.$"

Ecruteak_DanceTheater_Batallas_Texto_35:
	.string "ALDER: I will be waiting for you at the\n"
	.string "BELLCHIME TRAIL access, then. Thanks\l"
	.string "for your attention, ladies.$"

Ecruteak_DanceTheater_Batallas_Texto_36:
	.string "We understand, as most people prefer to\n"
	.string "be spectators rather than\l"
	.string "protagonists. Have a good day.$"

Ecruteak_DanceTheater_Batallas_Move_1:
walk_in_place_up
step_end

Ecruteak_DanceTheater_Batallas_Move_2:
emote_exclamation_mark
walk_in_place_left
step_end

Ecruteak_DanceTheater_Batallas_Move_3:
walk_in_place_down
step_end

Ecruteak_DanceTheater_Batallas_Move_4:
emote_exclamation_mark
step_end

Ecruteak_DanceTheater_Batallas_Move_5:
face_down
step_end

Ecruteak_DanceTheater_Batallas_Move_6:
walk_up
walk_right
face_up
step_end

Ecruteak_DanceTheater_Batallas_Move_7:
step_end

Ecruteak_DanceTheater_Batallas_Move_8:
face_up
step_end

Ecruteak_DanceTheater_Batallas_Move_9:
face_right
step_end

Ecruteak_DanceTheater_Batallas_Move_10:
walk_right
walk_right
walk_up
step_end

Ecruteak_DanceTheater_Batallas_Move_11:
walk_down
walk_right
walk_right
face_up
step_end

Ecruteak_DanceTheater_Batallas_Move_12:
face_left
step_end

Ecruteak_DanceTheater_Batallas_Move_13:
walk_left
walk_left
walk_left
walk_left
face_up
step_end

Ecruteak_DanceTheater_Batallas_Move_14:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Ecruteak_DanceTheater_Batallas_Move_15:
walk_in_place_left
step_end

Ecruteak_DanceTheater_Batallas_Move_16:
walk_in_place_right
step_end

Ecruteak_DanceTheater_Batallas_Move_17:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


Ecruteak_DanceTheater_Batallas_Move_18:
walk_down
step_end
