Magma1_MapScripts::
	.byte 0

Magma1_1::
end

Magma1_Combate_Admin::
lock
faceplayer
msgbox Magma1_Combate_Admin_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Magma1_Combate_Admin_Move_1
waitmovement 0x0
delay 10
msgbox Magma1_Combate_Admin_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_4 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Magma1_Combate_Admin_Move_1.1
waitmovement 0x0
waitse
delay 10
msgbox Magma1_Combate_Admin_Texto_4.1 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MAGMAADMIN, Magma1_Combate_Admin_Texto_6
msgbox Magma1_Combate_Admin_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 20
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
msgbox Magma1_Combate_Admin_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox Magma1_Combate_Admin_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
fadescreen 1
delay 20
removeobject 1
fadescreen 0
release
end

Magma1_Combate_Admin_Move_1.2:
delay_8
face_up
delay_16
delay_8
face_down
delay_16
step_end

Magma1_Combate_Admin_Move_1.1:
walk_in_place_down
step_end

Magma1_Combate_Admin_Move_1:
walk_in_place_up
delay_16
face_player
step_end

Magma1_Combate_Admin_Move_2:
emote_exclamation_mark
step_end

Magma1_Combate_Admin_Texto_1:
	.string "So, you've managed to defeat our HIGH\n"
	.string "RANK{PAUSE 20}…{PAUSE 20} TEAM ROCKET ADMINISTRATOR?\p"
	.string "Then, you haven't disbanded as it's\n"
	.string "said; either way, someone like you\l"
	.string "doesn't belong here.$"

Magma1_Combate_Admin_Texto_2:
	.string "Our LEADER MAXIE spent years creating\n"
	.string "the best team of FIRE and GROUND-type\l"
	.string "POKÉMON possible, solely as a\l"
	.string "preparation to deem himself worthy of\l"
	.string "being in GROUDON presence.$"

Magma1_Combate_Admin_Texto_3:
.string "{PAUSE 5}…{PAUSE 5}$"

Magma1_Combate_Admin_Texto_4:
	.string "ROCKET, I believe you still haven't\n"
	.string "understood. In your region, there is\l"
	.string "no MAJOR LEGENDARY like GROUDON;\l"
	.string "those LEGENDARY BIRDS don't even\l"
	.string "compare in hierarchy and raw power.$"

Magma1_Combate_Admin_Texto_4.1:
	.string "It's a force of nature in its purest\n"
	.string "state that, once awakened, will\l"
	.string "change the game.$"

Magma1_Combate_Admin_Texto_5:
	.string "It seems you're unwilling to reconsider.\n"
	.string "If that's your choice, you'll have to\l"
	.string "defeat me first, and by then, GROUDON's\l"
	.string "awakening will be unavoidable. Prepare\l"
	.string "to witness the might of ground-type\l"
	.string "POKÉMON, ROCKET ADMINISTRATOR!$"

Magma1_Combate_Admin_Texto_6:
	.string "I thought everyone in\n"
	.string "TEAM ROCKET was weak!$"

Magma1_Combate_Admin_Texto_7:
	.string "Well, if that's how you want it, our\n"
	.string "LEADER will take care of you.$"

Magma1_Combate_Admin_Texto_8:
.string "Did you hear that?\p"
	.string "GROUDON is about to awaken!\p"
	.string "It makes no sense to stay here.\p"
	.string "I must return to our nave and prepare\n"
	.string "everything for our return to HOENN.$"

Magma1_Combate_Admin_Texto_8.1:
	.string "If you still have any sanity left,\n"
	.string "you should do the same, before\l"
	.string "GROUDON's fury explodes in your face.$"
