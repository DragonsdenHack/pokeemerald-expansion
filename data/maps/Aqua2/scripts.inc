Aqua2_MapScripts::
	.byte 0

Aqua2_1::
end	

Aqua2_Combate_Admin::
lock
faceplayer
msgbox Aqua2_Combate_Admin_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Magma1_Combate_Admin_Move_1
waitmovement 0x0
msgbox Aqua2_Combate_Admin_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua2_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua2_Combate_Admin_Texto_4 MSGBOX_AUTOCLOSE
msgbox Aqua2_Combate_Admin_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AQUAADMIN, Aqua2_Combate_Admin_Texto_6
msgbox Aqua2_Combate_Admin_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua2_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 15
playse SE_BANG
waitse
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma1_Combate_Admin_Move_2
waitmovement 0x0
delay 15
msgbox Aqua2_Combate_Admin_Texto_8 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
fadescreen 1
delay 20
removeobject 1
fadescreen 0
release
end

Aqua2_Combate_Admin_Texto_1:
	.string "Well, not many trainers measure up with\n"
	.string "SHELLY. It seems your presence here\l"
	.string "isn't purely coincidental after all.\l"
	.string "However, at this point, what someone\l"
	.string "like you or me can do is insignificant\l"
	.string "compared to what is about to happen in\l"
	.string "the deepest part of this place.$"

Aqua2_Combate_Admin_Texto_2:
	.string "You have no idea who we are, ROCKET.\n"
	.string "Unlike those fake captains, like the\l"
	.string "one on the SS ANNE or CAPT.STERN, we've\l"
	.string "sailed the seven seas without obeying\l"
	.string "anything other than our will and\l"
	.string "insatiable sense of exploration. We've\l"
	.string "had the courage to get lost to reach\l"
	.string "unreachable destinations. All of this\l"
	.string "has made us have the roughest crew and\l"
	.string "the bravest sea POKÉMON you can\l"
	.string "imagine. Finally, we found the king, the\l"
	.string "origin of all the power contained in the\l"
	.string "sea: KYOGRE. Our leader, ARCHIE, is the\l"
	.string "ideal person to awaken it. His sea\l"
	.string "POKÉMON are the only ones worthy of\l"
	.string "witnessing the rebirth of KYOGRE.$"

Aqua2_Combate_Admin_Texto_3:
.string "...$"

Aqua2_Combate_Admin_Texto_4:
	.string "It seems you're still not aware of what\n"
	.string "lies behind these walls, kid. With just a\l"
	.string "flap of its fins, KYOGRE can create\l"
	.string "tsunamis that would flood entire\l"
	.string "cities. If it decided to unleash its full\l"
	.string "power, it could turn the entire planet\l"
	.string "into a giant blue sphere with only water\l"
	.string "on its surface. Fortunately for\l"
	.string "everyone, we know KYOGRE well, and we'll\l"
	.string "only use it in moderation to restore\l"
	.string "everything to its original course.$"

Aqua2_Combate_Admin_Texto_5:
	.string "What I've just told you still hasn't\n"
	.string "convinced you to turn back. You asked\l"
	.string "for it; if you insist on seeing KYOGRE,\l"
	.string "you'll have to pass through me first. My\l"
	.string "POKÉMON are more than seasoned from\l"
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
	.string "Listen! The rebirth of KYOGRE has\n"
	.string "begun! I must prepare everything for\l"
	.string "our triumphant return to HOENN!\l"
	.string "Nothing will be the same after what\l"
	.string "happened here; there's no time to\l"
	.string "waste!$"
