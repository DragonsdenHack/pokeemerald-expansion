Indigo_Johto_MapScripts::
	.byte 0

IndigoJohto1::
lock     
faceplayer     
msgbox IndigoJohto_Text_1, MSGBOX_DEFAULT
release     
end

IndigoJohto_Text_1:
	.string "I'm so sorry, CHIEF ADMIN. {PLAYER}, I\n"
	.string "didn't know you were someone\l"
	.string "thisimportant.$"



IndigoJohto2::
lock     
faceplayer     
msgbox IndigoJohto_Text_2, MSGBOX_DEFAULT
release     
end

IndigoJohto_Text_2:
	.string "KANTO and JOHTO collaborating for a\n"
	.string "single POKÉMON LEAGUE, can you imagine\l"
	.string "it?$"



IndigoJohto3::
lock     
faceplayer     
msgbox IndigoJohto_Text_3, MSGBOX_DEFAULT
release     
end

IndigoJohto_Text_3:
	.string "MOUNT SILVER has always been the great\n"
	.string "border that delineated the territories\l"
	.string "of KANTO and JOHTO. After JOHTO won\l"
	.string "the war, it also retained control of\l"
	.string "ROUTE 26. Perhaps now, as relations\l"
	.string "improve, this route may once again be\l"
	.string "considered a transition between both\l"
	.string "regions.$"



IndigoJohto5::
lock     
faceplayer     
msgbox IndigoJohto_Text_5, MSGBOX_DEFAULT
release     
end

IndigoJohto_Text_5:
	.string "LANCE should publicly be held\n"
	.string "accountable for his crimes, although\l"
	.string "disclosing the truth might be too harsh\l"
	.string "for society.$"



IndigoJohto7::
end

Indigo_Johto_Atlas_Izq::
lock
addobject 6
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
applymovement OBJ_EVENT_ID_PLAYER, Indigo_Johto_Atlas_Move_1
applymovement 1, Indigo_Johto_Atlas_Move_2
waitmovement 0x0
goto Indigo_Johto_Atlas

Indigo_Johto_Atlas_Der::
lock
addobject 6
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
applymovement OBJ_EVENT_ID_PLAYER, Indigo_Johto_Atlas_Move_1.1
applymovement 1, Indigo_Johto_Atlas_Move_2
waitmovement 0x0
goto Indigo_Johto_Atlas

Indigo_Johto_Atlas::
msgbox Indigo_Johto_Atlas_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 1, Indigo_Johto_Atlas_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Indigo_Johto_Atlas_Move_4
waitmovement 0x0
msgbox Indigo_Johto_Atlas_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, Indigo_Johto_Atlas_Move_5
waitmovement 0x0
msgbox Indigo_Johto_Atlas_Texto_3 MSGBOX_AUTOCLOSE
msgbox Indigo_Johto_Atlas_Texto_4 MSGBOX_AUTOCLOSE
msgbox Indigo_Johto_Atlas_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Indigo_Johto_Atlas_Move_2
applymovement 6, Indigo_Johto_Atlas_Move_6
waitmovement 0x0
msgbox Indigo_Johto_Atlas_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, Indigo_Johto_Atlas_Move_2
waitmovement 0x0
msgbox Indigo_Johto_Atlas_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, Indigo_Johto_Atlas_Move_7
waitmovement 0x0
msgbox Indigo_Johto_Atlas_Texto_8 MSGBOX_AUTOCLOSE
applymovement 6, Indigo_Johto_Atlas_Move_8
waitmovement 0x0
removeobject 6
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 156
release
end

Indigo_Johto_Atlas_Texto_1:
	.string "Only former champions or individuals\n"
	.string "directly involved with this place are\l"
	.string "allowed to pass from here; those are\l"
	.string "the rules.$"

Indigo_Johto_Atlas_Texto_2:
	.string "Watch your tone, POLICE, you are\n"
	.string "talking to the real KANTO CHAMPION.$"

Indigo_Johto_Atlas_Texto_3:
.string "A-ARCHER, I didn't kn…$"

Indigo_Johto_Atlas_Texto_4:
	.string "ARCHER: Now you know it, do I also need\n"
	.string "to remind you that the three CHIEF\l"
	.string "ADMINS. of TEAM ROCKET have free\l"
	.string "access to this place? {PLAYER} thus\l"
	.string "deserves to enter here twice over.$"

Indigo_Johto_Atlas_Texto_5:
	.string "I'm really sorry for the misunderstanding,\n"
	.string "mister ARCHER, this won't happen again.$"

Indigo_Johto_Atlas_Texto_6:
	.string "I see that you are not wasting your\n"
	.string "time, {PLAYER}, there is a chance that\l"
	.string "you find more than a surprise here.$"

Indigo_Johto_Atlas_Texto_7:
	.string "You're probably aware, but we're mere\n"
	.string "meters away from the entrance to the\l"
	.string "KANTO POKÉMON LEAGUE. Giovanni intends\l"
	.string "to combine this checkpoint with the one\l"
	.string "in KANTO to establish a unified POKÉMON\l"
	.string "LEAGUE for both regions.$"

Indigo_Johto_Atlas_Texto_8:
	.string "We are in the midst of a transition\n"
	.string "period, {PLAYER}, experiencing it from\l"
	.string "our perspective will be crucial to\l"
	.string "understanding the reasons behind many\l"
	.string "things in the future.$"

Indigo_Johto_Atlas_Move_1:
face_left
step_end

Indigo_Johto_Atlas_Move_1.1:
walk_left
step_end

Indigo_Johto_Atlas_Move_2:
walk_in_place_right
step_end

Indigo_Johto_Atlas_Move_3:
emote_exclamation_mark
face_up
step_end

Indigo_Johto_Atlas_Move_4:
face_up
step_end

Indigo_Johto_Atlas_Move_5:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Indigo_Johto_Atlas_Move_6:
walk_left
walk_down
step_end

Indigo_Johto_Atlas_Move_7:
face_down
step_end

Indigo_Johto_Atlas_Move_8:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_left
walk_down
walk_down
step_end
