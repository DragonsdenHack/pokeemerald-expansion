Azalea_CesarHouse_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Azalea_CesarHouse_OnFrame
	.byte 0

Azalea_CesarHouse_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 128, Azalea_CesarHouse_Evento_Mirto
	.2byte 0

AzaleaCesarHouse_1::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 129
goto_if_gt AzaleaCesarHouse_1_2
msgbox AzaleaCesarHouse_1_Texto_1 MSGBOX_NPC
release
end

AzaleaCesarHouse_1_2::
msgbox AzaleaCesarHouse_1_Texto_2 MSGBOX_NPC
delay 20
msgbox AzaleaCesarHouse_1_Texto_3 MSGBOX_NPC
delay 20
msgbox AzaleaCesarHouse_1_Texto_4 MSGBOX_NPC
msgbox AzaleaCesarHouse_1_Texto_5 MSGBOX_NPC
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
fadescreen 1
delay 20
removeobject 1
fadescreen 0
end

AzaleaCesarHouse_1_Texto_1:
	.string "You'll find him in the SLOWPOKE WELL. If\n"
	.string "you defeat him, head back here with the\l"
	.string "item he'll hand you. Then I'll give you\l"
	.string "your battle.$"

AzaleaCesarHouse_1_Texto_2:
.string "And so?$"

AzaleaCesarHouse_1_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}$"

AzaleaCesarHouse_1_Texto_4:
	.string "Oh{PAUSE 15}…{PAUSE 15} Impressive, I didn't expect you to\n"
	.string "win at all. Keep that SLOWBRONITE safe,\l"
	.string "young one. Any item capable of\l"
	.string "expanding a POKÉMON's limits is sacred.$"

AzaleaCesarHouse_1_Texto_5:
	.string "Having said that, I'll be waiting for you\n"
	.string "at the GYM. I'll keep my word and battle\l"
	.string "you, so I hope you'll give it your all.\l"
	.string "You'll need it.$"



AzaleaCesarHouse_2::
end

Azalea_CesarHouse_Evento_Mirto::
lock
delay 15
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_1
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_1 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Azalea_CesarHouse_Evento_Mirto_Move_2
waitmovement 0x0
special RemoveCameraObject
playbgm 438, FALSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_3
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_4
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_8 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_1
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_5
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_7 MSGBOX_AUTOCLOSE
delay 20
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_1
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_11 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Azalea_CesarHouse_Evento_Mirto_Move_7
applymovement OBJ_EVENT_ID_CAMERA, Azalea_CesarHouse_Evento_Mirto_Move_6
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_8
waitmovement 0x0
applymovement OBJ_EVENT_ID_CAMERA, Azalea_CesarHouse_Evento_Mirto_Move_13
waitmovement 0x0
special RemoveCameraObject
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
removeobject 2
playse SE_EXIT
fadedefaultbgm
delay 40
playse SE_PIN
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_9
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_10
applymovement OBJ_EVENT_ID_PLAYER, Azalea_CesarHouse_Evento_Mirto_Move_11
waitmovement 0x0
delay 40
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_13 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_14 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_12
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_16 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_17 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_12
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_19 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_20 MSGBOX_AUTOCLOSE
delay 40
setvar VAR_UNUSED_0x40F7, 129
@warpsilent MAP_AZALEA_CESAR_HOUSE, 5, 5
@waitstate
release
end

Azalea_CesarHouse_Evento_Mirto_Texto_1:
	.string "????: But{PAUSE 15}…{PAUSE 15} You also have a BUG TYPE\n"
	.string "that has undergone the same process as\l"
	.string "mine.$"

Azalea_CesarHouse_Evento_Mirto_Texto_2:
	.string "????: I'm afraid they can't be compared,\n"
	.string "ALDER. They're two BUG types, yes, and\l"
	.string "both have been affected by the DEEP\l"
	.string "BOND with their TRAINER.$"

Azalea_CesarHouse_Evento_Mirto_Texto_3:
.string "ALDER: But{PAUSE 15}…{PAUSE 15} KURT{PAUSE 15}…{PAUSE 15}$"

Azalea_CesarHouse_Evento_Mirto_Texto_4:
	.string "KURT: The difference is that mine\n"
	.string "started from a very modest power\l"
	.string "overall. After the DEEP BOND it\l"
	.string "became extremely efficient, but only\l"
	.string "'noticeable' in the overall. It has not\l"
	.string "crossed any boundaries that we\l"
	.string "consider{PAUSE 25}…{PAUSE 25} sacred.$"

Azalea_CesarHouse_Evento_Mirto_Texto_5:
	.string "Your POKEMON, on the other hand, was\n"
	.string "already extraordinary, even before\l"
	.string "experiencing the DEEP BOND. What has\l"
	.string "resulted from merge something that was\l"
	.string "already special, some that could\l"
	.string "already compete with a MINOR\l"
	.string "LEGENDARY, with the DEEP BOND{PAUSE 25}…{PAUSE 25} such a\l"
	.string "phenomenon has crossed limits unknown\l"
	.string "to a mortal; an aberration in terms of\l"
	.string "power.$"

Azalea_CesarHouse_Evento_Mirto_Texto_6:
	.string "Throughout all my literature and\n"
	.string "extensive experience, I've never\l"
	.string "encountered anything quite like this.\l"
	.string "Your POKÉMON has been blessed with\l"
	.string "the gift to shine brighter than any\l"
	.string "other NON-LEGENDARY, yet it's also\l"
	.string "fated to dim sooner, as one inevitably\l"
	.string "follows the other.$"

Azalea_CesarHouse_Evento_Mirto_Texto_7:
.string "{PAUSE 15}…{PAUSE 15}$"

Azalea_CesarHouse_Evento_Mirto_Texto_8:
.string "Isn't there{PAUSE 20}…{PAUSE 20} anything{PAUSE 20}…{PAUSE 20} that I can do?$"

Azalea_CesarHouse_Evento_Mirto_Texto_9:
	.string "KURT: I can't help you. I'm sorry. But…$"

Azalea_CesarHouse_Evento_Mirto_Texto_10:
	.string "There are many wise people in JOHTO.\p"
	.string "I'm not the only TRAINER with a DEEP\n"
	.string "BOND. I suggest you visit the\l"
	.string "PHARMACY in CIANWOOD CITY, and\l"
	.string "ECRUTEAK CITY too. You might find\l"
	.string "people there who would help you.$"

Azalea_CesarHouse_Evento_Mirto_Texto_11:
	.string "ALDER: Thank you so much, KURT. I won't\n"
	.string "waste a single second. I'll scour every\l"
	.string "corner of JOHTO, if necessary.$"

Azalea_CesarHouse_Evento_Mirto_Texto_12:
	.string "KURT: Well, well! You look very\n"
	.string "interested in this topic.\p"
	.string "Did you want something?\p"
	.string "Come in!$"

Azalea_CesarHouse_Evento_Mirto_Texto_13:
	.string "So challenging me to a battle? You\n"
	.string "should know I'm retired. I keep the GYM\l"
	.string "for my students, but from now on, I'll\l"
	.string "focus on growing APRICORNS and raising\l"
	.string "my little granddaughter.$"

Azalea_CesarHouse_Evento_Mirto_Texto_14:
	.string "You must understand that it would be\n"
	.string "unfair if I accepted your battle after\l"
	.string "rejecting every other challenger.$"

Azalea_CesarHouse_Evento_Mirto_Texto_15:
	.string "But{PAUSE 15}…{PAUSE 15} You look like you came from far\n"
	.string "away, as well as ALDER{PAUSE 20}…{PAUSE 20}$"

Azalea_CesarHouse_Evento_Mirto_Texto_16:
	.string "I will give you the chance to battle\n"
	.string "me, but you should demonstrate that\l"
	.string "you deserve it first.\p"
	.string "Listen.$"

Azalea_CesarHouse_Evento_Mirto_Texto_17:
	.string "A good friend loves strolling around\n"
	.string "the SLOWPOKE WELL. He's usually deep in\l"
	.string "there, an expert on SLOWPOKE and its\l"
	.string "entire evolutionary line; he knows\l"
	.string "everything about that POKÉMON.$"

Azalea_CesarHouse_Evento_Mirto_Texto_18:
	.string "He's also a good TRAINER, the only one\n"
	.string "I can battle pretty seriously around\l"
	.string "these parts.$"

Azalea_CesarHouse_Evento_Mirto_Texto_19:
	.string "If you really want to battle me, you\n"
	.string "should defeat him first. Tell him I sent\l"
	.string "you. If you can win, he'll reward you\l"
	.string "with a special item.$"

Azalea_CesarHouse_Evento_Mirto_Texto_20:
	.string "Simply bring back the item here as\n"
	.string "evidence of your victory, and I'll be\l"
	.string "willing to engage in a GYM battle with\l"
	.string "you.$"

Azalea_CesarHouse_Evento_Mirto_Move_1:
walk_in_place_right
step_end

Azalea_CesarHouse_Evento_Mirto_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
step_end

Azalea_CesarHouse_Evento_Mirto_Move_3:
face_up
step_end

Azalea_CesarHouse_Evento_Mirto_Move_4:
walk_up
walk_up
step_end

Azalea_CesarHouse_Evento_Mirto_Move_5:
walk_down
walk_down
walk_in_place_left
step_end

Azalea_CesarHouse_Evento_Mirto_Move_6:
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

Azalea_CesarHouse_Evento_Mirto_Move_7:
delay_16
delay_16
walk_right
face_up
step_end

Azalea_CesarHouse_Evento_Mirto_Move_8:
walk_left
walk_down
walk_left
walk_down
walk_down
walk_down
step_end

Azalea_CesarHouse_Evento_Mirto_Move_9:
emote_exclamation_mark
face_down
step_end

Azalea_CesarHouse_Evento_Mirto_Move_10:
face_left
step_end

Azalea_CesarHouse_Evento_Mirto_Move_11:
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_right
step_end

Azalea_CesarHouse_Evento_Mirto_Move_12:
walk_in_place_left
step_end

Azalea_CesarHouse_Evento_Mirto_Move_13:
walk_left
step_end
