Aqua2_MapScripts::
	.byte 0

Aqua2_1::
end	

Aqua2_Combate_Admin::
lock
faceplayer
msgbox Aqua2_Combate_Admin_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Magma1_Combate_Admin_Move_1
waitmovement 0x0
delay 10
msgbox Aqua2_Combate_Admin_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Aqua1_Combate_Admin_Move_1.1
waitmovement 0x0
delay 10
msgbox Aqua2_Combate_Admin_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Aqua1_Combate_Admin_Move_1.5
waitmovement 0x0
waitse
delay 10
msgbox Aqua2_Combate_Admin_Texto_2.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua2_Combate_Admin_Texto_2.3 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua2_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua2_Combate_Admin_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Magma1_Combate_Admin_Move_1.3
waitmovement 0x0
delay 10
msgbox Aqua2_Combate_Admin_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua2_Combate_Admin_Texto_4.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Magma1_Combate_Admin_Move_1.4
waitmovement 0x0
delay 10
msgbox Aqua2_Combate_Admin_Texto_4.3 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua2_Combate_Admin_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua2_Combate_Admin_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Aqua1_Combate_Admin_Move_1.5
waitmovement 0x0
waitse
delay 10
msgbox Aqua2_Combate_Admin_Texto_5.2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AQUAADMIN, Aqua2_Combate_Admin_Texto_6
msgbox Aqua2_Combate_Admin_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua2_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 15
playse SE_BANG
waitse
delay 10
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma1_Combate_Admin_Move_2
applymovement 1, Magma1_Combate_Admin_Move_1.2
waitmovement 0x0
waitse
delay 15
msgbox Aqua2_Combate_Admin_Texto_8 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
fadescreen 1
delay 20
removeobject 1
fadescreen 0
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
release
end

Magma1_Combate_Admin_Move_1.3:
face_left
step_end

Magma1_Combate_Admin_Move_1.4:
face_down
step_end

Aqua1_Combate_Admin_Move_1.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

Aqua1_Combate_Admin_Move_1.5:
walk_in_place_down
step_end

Aqua2_Combate_Admin_Texto_1:
	.string "Well, not many TRAINERS measure up with\n"
	.string "SHELLY. It seems your presence here\l"
	.string "isn't purely coincidental after all.$"

Aqua2_Combate_Admin_Texto_1.1:
	.string "However, at this point, what someone\n"
	.string "like you or me can do is insignificant\l"
	.string "compared to what is about to happen in\l"
	.string "the deepest part of this place.$"

Aqua2_Combate_Admin_Texto_2:
	.string "You have no idea who we are, ROCKET.\n"
	.string "Unlike those fake captains, like the\l"
	.string "one on the SS ANNE or CAPT.STERN, we've\l"
	.string "sailed the seven seas without obeying\l"
	.string "anything other than our will and\l"
	.string "insatiable sense of exploration.$"
	
Aqua2_Combate_Admin_Texto_2.1:
	.string "We had the courage to get lost to reach\n"
	.string "unreachable destinations. All of this\l"
	.string "has made us have the roughest crew and\l"
	.string "the bravest sea POKÉMON you can imagine.$"

Aqua2_Combate_Admin_Texto_2.2:
	.string "All our journey, only with a clear\n"
	.string "purpose{PAUSE 15}…{PAUSE 15} find the king,\l"
	.string "the origin of the sea: KYOGRE!$"

Aqua2_Combate_Admin_Texto_2.3:
	.string "Our leader, ARCHIE, is the ideal\l"
	.string "person to awaken it, and his sea\l"
	.string "POKÉMON are the only ones worthy of\l"
	.string "witnessing the rebirth of KYOGRE.$"

Aqua2_Combate_Admin_Texto_3:
.string "{PAUSE 5}…{PAUSE 5}$"

Aqua2_Combate_Admin_Texto_4:
	.string "It seems you're still not aware of what\n"
	.string "lies behind these walls, kid.$"

Aqua2_Combate_Admin_Texto_4.1:
	.string "With just a flap of its fins, KYOGRE\n"
	.string "can create tsunamis that would flood\l"
	.string "entire cities.$"

Aqua2_Combate_Admin_Texto_4.2:
	.string "If it decided to unleash its full\n"
	.string "power, it could turn the entire planet\l"
	.string "into a giant blue sphere with only water\l"
	.string "on its surface.$"

Aqua2_Combate_Admin_Texto_4.3:
	.string "Fortunately for the world, we\n"
	.string "know how KYOGRE works, and we'll\l"
	.string "only use it in moderation to restore\l"
	.string "everything to its original course.$"

Aqua2_Combate_Admin_Texto_5:
	.string "What I've just told you still hasn't\n"
	.string "convinced you to turn back?$"

Aqua2_Combate_Admin_Texto_5.1:
	.string "Then, you asked for it.\p"
	.string "Duty comes first, and you\n"
	.string "are forcing me to fight.$"

Aqua2_Combate_Admin_Texto_5.2:
	.string "My POKÉMON are more than seasoned from\n"
	.string "traveling the seven seas. It won't be\l"
	.string "any problem for them to take down a\l"
	.string "lightweight like you!$"

Aqua2_Combate_Admin_Texto_6:
	.string "My loyal POKÉMON! Really?$"

Aqua2_Combate_Admin_Texto_7:
	.string "So, you'll persist until the final\n"
	.string "consequences; you brought this upon\l"
	.string "yourself. Don't claim later that we\l"
	.string "didn't warn you.$"

Aqua2_Combate_Admin_Texto_8:
.string "Listen!\p"
	.string "The rebirth of KYOGRE has begun!\p"
	.string "I must prepare everything for\n"
	.string "our triumphant return to HOENN!$"

