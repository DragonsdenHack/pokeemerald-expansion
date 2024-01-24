Magma1_MapScripts::
	.byte 0

Magma1_1::
end

Magma1_Combate_Admin::
lock
faceplayer
msgbox Magma1_Combate_Admin_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Magma1_Combate_Admin_Move_1
waitmovement 0x0
msgbox Magma1_Combate_Admin_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_4 MSGBOX_AUTOCLOSE
msgbox Magma1_Combate_Admin_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MAGMAADMIN, Magma1_Combate_Admin_Texto_6
msgbox Magma1_Combate_Admin_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_BANG
waitse
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma1_Combate_Admin_Move_2
waitmovement 0x0
delay 15
msgbox Magma1_Combate_Admin_Texto_8 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
fadescreen 1
delay 20
removeobject 1
fadescreen 0
release
end

Magma1_Combate_Admin_Move_1:
walk_in_place_up
face_player
step_end

Magma1_Combate_Admin_Move_2:
emote_exclamation_mark
step_end

Magma1_Combate_Admin_Texto_1:
	.string "So, you've managed to defeat our HIGH\n"
	.string "RANK... TEAM ROCKET ADMINISTRATOR, you\l"
	.string "say? Then you haven't disbanded as it's\l"
	.string "said; either way, someone like you\l"
	.string "doesn't belong here.$"

Magma1_Combate_Admin_Texto_2:
	.string "Our LEADER MAXIE spent years creating\n"
	.string "the best team of FIRE and GROUND-type\l"
	.string "POKÉMON possible, solely as a\l"
	.string "preparation to deem himself worthy of\l"
	.string "being in GROUDON presence, the best\l"
	.string "GROUND-type POKÉMON ever, which also\l"
	.string "took him years to find this location.$"

Magma1_Combate_Admin_Texto_3:
.string "...$"

Magma1_Combate_Admin_Texto_4:
	.string "ROCKET, I believe you still haven't\n"
	.string "understood. In your region, there are\l"
	.string "no Pokémon of the caliber of GROUDON;\l"
	.string "those LEGENDARY BIRDS don't even\l"
	.string "compare in hierarchy and raw power. It's\l"
	.string "a force of nature in its purest state\l"
	.string "that, once awakened, will alter\l"
	.string "everything permanently.$"

Magma1_Combate_Admin_Texto_5:
	.string "It seems you're unwilling to reconsider.\n"
	.string "If that's your choice, you'll have to\l"
	.string "defeat me first, and by then, GROUDON's\l"
	.string "awakening will be unavoidable. Prepare\l"
	.string "to witness the might of ground-type\l"
	.string "POKÉMON, ROCKET ADMINISTRATOR!$"

Magma1_Combate_Admin_Texto_6:
	.string "I thought everyone in TEAM ROCKET was\n"
	.string "weak!$"

Magma1_Combate_Admin_Texto_7:
	.string "Well, if that's how you want it, our\n"
	.string "LEADER will take care of you.$"

Magma1_Combate_Admin_Texto_8:
	.string "Do you hear that? GROUDON is about to\n"
	.string "awaken! It makes no sense to stay here;\l"
	.string "I must return to our ship and prepare\l"
	.string "everything for our return to HOENN. If\l"
	.string "you still have any sanity left, you\l"
	.string "should do the same before GROUDON\l"
	.string "decides to unleash all its pent-up fury\l"
	.string "from thousands of years on the first\l"
	.string "poor soul it encounters. Perhaps when\l"
	.string "you realize the mistake of playing with\l"
	.string "ANCIENT and MYTHOLOGICAL POKÉMON\l"
	.string "that were part of the same creation,\l"
	.string "it'll be too late.$"
