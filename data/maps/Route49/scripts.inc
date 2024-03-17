Route49_MapScripts::
	.byte 0

Route49_1::
lock     
faceplayer     
msgbox Route49_Text_1, MSGBOX_DEFAULT
release     
end

Route49_Text_1:
	.string "Nothing ever occurred in the past; it\n"
	.string "happened in the present. Nothing will\l"
	.string "ever happen in the future; it will\l"
	.string "happen in the present. What you\l"
	.string "perceive as the past is a record stored\l"
	.string "in the mind of a previous present. When\l"
	.string "you recall the past, you activate a\l"
	.string "memory record, and you do so in the\l"
	.string "present. The future is an imagined\l"
	.string "present, a projection of the mind. When\l"
	.string "the future arrives, it arrives as a\l"
	.string "present. When you think about the\l"
	.string "future, you think now. It's evident that\l"
	.string "the past and future have no inherent\l"
	.string "reality. Just as the Moon has no light\l"
	.string "of its own and can only reflect the\l"
	.string "light of the Sun, the past and the\l"
	.string "future are only pale reflections of the\l"
	.string "light, power, and reality of the eternal\l"
	.string "present. Their reality has been\l"
	.string "borrowed from the now.$"



Route49_2::
lock     
faceplayer     
msgbox Route49_Text_2, MSGBOX_DEFAULT
release     
end

Route49_Text_2:
	.string "This location is older still than the\n"
	.string "pagodas of ECRUTEAK and VIOLET; it's\l"
	.string "where the bond between humans and\l"
	.string "POKÉMON originated in JOHTO.$"



Route49_4::
lock     
faceplayer     
msgbox Route49_Text_4, MSGBOX_DEFAULT
release     
end

Route49_Text_4:
	.string "Presence is the key to freedom, so you\n"
	.string "can only be free now.$"



Route49_5::
lock     
faceplayer     
msgbox Route49_Text_5, MSGBOX_DEFAULT
release     
end

Route49_Text_5:
	.string "EUSINE brought you here? You must have\n"
	.string "something very special; EUSINE is very\l"
	.string "reluctant to let outsiders access this\l"
	.string "place.$"



Route49_7::
lock     
faceplayer     
msgbox Route49_Text_7, MSGBOX_DEFAULT
release     
end

Route49_Text_7:
	.string "Something changed not long ago in\n"
	.string "JOHTO, that change altered the laws of\l"
	.string "the POKÉMON WORLD forever.$"

Route49_Combate_Andra::
lock
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_2
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route49_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route49_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 10, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 10, Route49_Combate_Andra_Move_1
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, Route49_Combate_Andra_Move_2
applymovement 9, Route49_Combate_Andra_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Route49_Combate_Andra_Move_3
waitmovement 0x0
delay 20
msgbox Route49_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 9, Route49_Combate_Andra_Move_2
msgbox Route49_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Andra_Move_6
applymovement 10, Route49_Combate_Andra_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Route49_Combate_Andra_Move_1
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
applymovement 9, Route49_Combate_Andra_Move_4
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 10, Route49_Combate_Andra_Move_2
waitmovement 0x0
delay 20
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_8
applymovement 10, Route49_Combate_Andra_Move_5
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 20
playse SE_BREAKABLE_DOOR
applymovement 10, Route49_Combate_Andra_Move_6
waitmovement 0x0
delay 10
msgbox Route49_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, Route47_Encuentro_Maestro_Anciano_Move_2
waitmovement 0x0
delay 10
msgbox Route49_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_9, Route49_Combate_Andra_Texto_13
delay 20
playse SE_PIN
applymovement 9, Route49_Combate_Andra_Move_7
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_14 MSGBOX_AUTOCLOSE
applymovement 10, Route49_Combate_Andra_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Route49_Combate_Andra_Move_1
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_15 MSGBOX_AUTOCLOSE
delay 10
msgbox Route49_Combate_Andra_Texto_16 MSGBOX_AUTOCLOSE
delay 10
msgbox Route49_Combate_Andra_Texto_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, Route49_Combate_Andra_Move_7
applymovement OBJ_EVENT_ID_PLAYER, Route49_Combate_Andra_Move_7
applymovement 9, Route49_Combate_Andra_Move_2
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 11
playse SE_EXIT
waitse
msgbox Route49_Combate_Andra_Texto_18 MSGBOX_AUTOCLOSE
applymovement 11, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_19 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Maestro_Anciano_Move_2
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox Route49_Combate_Andra_Texto_21 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Andra_Move_6
applymovement 11, Route47_Encuentro_Andra_Move_6
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_22 MSGBOX_AUTOCLOSE
applymovement 11, Route49_Combate_Andra_Move_1
waitmovement 0x0
playse SE_DOOR
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 11
delay 15
applymovement 10, Route49_Combate_Andra_Move_8
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route49_Combate_Andra_Texto_23 MSGBOX_AUTOCLOSE
applymovement 10, Route49_Combate_Andra_Move_9
applymovement OBJ_EVENT_ID_PLAYER, Route49_Combate_Andra_Move_10
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
setflag FLAG_UNUSED_0x275
removeobject 10
playse SE_DOOR
delay 15
setvar VAR_VERDANTURF_TOWN_STATE, 9
release
end


Route49_Combate_Andra_Move_10:
lock_facing_direction
walk_right
unlock_facing_direction
step_end

Route49_Combate_Andra_Move_9:
walk_right
walk_up
step_end

Route49_Combate_Andra_Move_8:
walk_in_place_up
step_end

Route49_Combate_Andra_Move_7:
emote_exclamation_mark
step_end

Route49_Combate_Andra_Move_6:
walk_fast_right
face_up
step_end

Route49_Combate_Andra_Move_5:
walk_slow_left
step_end

Route49_Combate_Andra_Move_4:
walk_in_place_down
step_end

Route49_Combate_Andra_Move_3:
walk_slow_left
walk_slow_left
step_end

Route49_Combate_Andra_Move_2:
face_right
emote_exclamation_mark
step_end

Route49_Combate_Andra_Move_1:
face_up
step_end

Route49_Combate_Andra_Texto_1:
	.string "SAGE: This is… impossible. The last one\n"
	.string "to pass the test was EUSINE, over a\l"
	.string "decade ago.$"

Route49_Combate_Andra_Texto_2:
	.string "ANDRA: How do you know I passed it?\n"
	.string "It's true that the POKÉMON dropped a\l"
	.string "strange GOLDEN STONE after defeating\l"
	.string "it. However, one of my POKÉMON reacted\l"
	.string "to it and was consumed. I have no proof\l"
	.string "that I completed the challenge.$"

Route49_Combate_Andra_Texto_3:
	.string "SAGE: We share a profound connection\n"
	.string "with the SACRED POKÉMON; whatever I\l"
	.string "witness, our GRAND MASTER will witness\l"
	.string "as well.$"

Route49_Combate_Andra_Texto_4:
	.string "ANDRA: It wasn't that big of a deal;\n"
	.string "that POKÉMON was very strong. But, no\l"
	.string "matter how strong it is, a single\l"
	.string "POKÉMON can do little against a\l"
	.string "well-trained team of 6.$"

Route49_Combate_Andra_Texto_5:
	.string "SAGE: You don't understand, girl. The\n"
	.string "difficulty of the test lies in the\l"
	.string "sacred dragon deigning to appear;\l"
	.string "there's no other way to obtain that\l"
	.string "item.$"

Route49_Combate_Andra_Texto_6:
.string "…$"

Route49_Combate_Andra_Texto_7:
	.string "What? You also defeated the dragon?\n"
	.string "That's impossible; it has always blessed\l"
	.string "only one individual at a time.$"

Route49_Combate_Andra_Texto_8:
	.string "ANDRA: Didn't you say your GRAND\n"
	.string "MASTER knows everything? He can verify\l"
	.string "it then.$"

Route49_Combate_Andra_Texto_9:
	.string "SAGE: I'm sorry, but our customs don't\n"
	.string "allow for this exception. You must\l"
	.string "battle for the honor of entering this\l"
	.string "sacred place.$"

Route49_Combate_Andra_Texto_10:
.string "ANDRA: So it will be this way…$"

Route49_Combate_Andra_Texto_11:
	.string "Don't think I'll battle just because it's\n"
	.string "your will, old man, nor because I agree\l"
	.string "with this injustice. If I fight now with\l"
	.string "{PLAYER}, it's solely for the sheer\l"
	.string "pleasure of facing a rival of my caliber.$"

Route49_Combate_Andra_Texto_12:
	.string "Come on, let's leave these monks in awe,\n"
	.string "let's demonstrate the fruits of all our\l"
	.string "training!$"

Route49_Combate_Andra_Texto_13:
	.string "Ha, ha, ha… Even grazing the perfection\n"
	.string "is not enough against you.$"

Route49_Combate_Andra_Texto_14:
	.string "SAGE: Extraordinary, your level is\n"
	.string "nearly on par with our GRAND MASTER.$"

Route49_Combate_Andra_Texto_15:
	.string "ANDRA: Nearly? I've seen things in your\n"
	.string "region that you wouldn't believe,\l"
	.string "{PLAYER}, even more than I. I'm tired\l"
	.string "of facing supposed superior rivals only\l"
	.string "to defeat them with my tenacity.$"

Route49_Combate_Andra_Texto_16:
.string "SAGE: How dare you…?$"

Route49_Combate_Andra_Texto_17:
.string "EUSINE: They say the truth.$"

Route49_Combate_Andra_Texto_18:
.string "SAGE: EUSINE! You?$"

Route49_Combate_Andra_Texto_19:
	.string "EUSINE: The SACRED POKÉMON has\n"
	.string "communicated everything to the GRAND\l"
	.string "MASTER. Both of them must ascend,\l"
	.string "without exception.$"

Route49_Combate_Andra_Texto_20:
.string "SAGE: As the GRAND MASTER orders.$"

Route49_Combate_Andra_Texto_21:
.string "EUSINE: All right.$"

Route49_Combate_Andra_Texto_22:
	.string "We'll be waiting for both of you\n"
	.string "upstairs… if you're able to reach us.$"

Route49_Combate_Andra_Texto_23:
	.string "ANDRA: We will see, what is your master\n"
	.string "capable of.$"


Route49_Barrera::
lock
applymovement 9, Route47_Encuentro_Andra_Move_7
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route49_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_2
waitmovement 0x0
setvar VAR_VERDANTURF_TOWN_STATE, 7
release
end

Route49_Barrera_2::
lock
applymovement 9, Route47_Encuentro_Andra_Move_7
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route49_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_2
waitmovement 0x0
release
end

Route49_Barrera_Texto_1:
	.string "Whoever you are, you can't enter this\n"
	.string "sacred place. Only by obtaining the\l"
	.string "GOLDEN STONE on the northern route will\l"
	.string "you prove that you deserve a place\l"
	.string "here.$"

Route49_Protector_Pagoda::
lock
faceplayer
compare VAR_VERDANTURF_TOWN_STATE, 8
goto_if_gt Route49_Protector_Pagoda_2
msgbox Route49_Barrera_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Protector_Pagoda_2::
msgbox Route49_Protector_Pagoda_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route49_Protector_Pagoda_Texto_2:
	.string "I offer my sincerest apologies. We\n"
	.string "uphold strict rules; otherwise, this\l"
	.string "place wouldn't have remained untouched\l"
	.string "for so long.$"
