ViasSur3_MapScripts::
	.byte 0

ViasSur3_Evento_Pegaso_Abajo::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, ViasSur3_Evento_Pegaso_Move_1
waitmovement 0x0
goto ViasSur3_Evento_Pegaso


ViasSur3_Evento_Pegaso_Arriba::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, ViasSur3_Evento_Pegaso_Move_1.1
waitmovement 0x0
goto ViasSur3_Evento_Pegaso


ViasSur3_Evento_Pegaso::
delay 20
msgbox ViasSur3_Evento_Pegaso_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, ViasSur3_Evento_Pegaso_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 1, ViasSur3_Evento_Pegaso_Move_3
waitmovement 0x0
msgbox ViasSur3_Evento_Pegaso_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, ViasSur3_Evento_Pegaso_Move_4
waitmovement 0x0
msgbox ViasSur3_Evento_Pegaso_Texto_3 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, ViasSur3_Evento_Pegaso_Move_5
waitmovement 0x0
special RemoveCameraObject
msgbox ViasSur3_Evento_Pegaso_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox ViasSur3_Evento_Pegaso_Texto_5 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, ViasSur3_Evento_Pegaso_Move_6
waitmovement 0x0
special RemoveCameraObject
applymovement 1, ViasSur3_Evento_Pegaso_Move_7
waitmovement 0x0
msgbox ViasSur3_Evento_Pegaso_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, ViasSur3_Evento_Pegaso_Move_8
waitmovement 0x0
msgbox ViasSur3_Evento_Pegaso_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, ViasSur3_Evento_Pegaso_Move_9
waitmovement 0x0
msgbox ViasSur3_Evento_Pegaso_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, ViasSur3_Evento_Pegaso_Move_7
waitmovement 0x0
msgbox ViasSur3_Evento_Pegaso_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, ViasSur3_Evento_Pegaso_Move_10
waitmovement 0x0
setflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
removeobject 1
setvar VAR_PACIFIDLOG_TOWN_STATE, 3
release
end

ViasSur3_Evento_Pegaso_Move_10:
walk_left
walk_down
walk_left
walk_left
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

ViasSur3_Evento_Pegaso_Move_9:
walk_in_place_down
step_end

ViasSur3_Evento_Pegaso_Move_8:
face_down
step_end

ViasSur3_Evento_Pegaso_Move_7:
face_right
step_end

ViasSur3_Evento_Pegaso_Move_6:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

ViasSur3_Evento_Pegaso_Move_5:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

ViasSur3_Evento_Pegaso_Move_4:
walk_in_place_left
step_end

ViasSur3_Evento_Pegaso_Move_3:
emote_exclamation_mark
walk_in_place_right
step_end

ViasSur3_Evento_Pegaso_Move_2:
walk_left
walk_down
walk_left
step_end

ViasSur3_Evento_Pegaso_Move_1.1:
walk_down
emote_exclamation_mark
walk_in_place_left
step_end

ViasSur3_Evento_Pegaso_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

ViasSur3_Evento_Pegaso_Texto_1:
	.string "????: It is near, you also feel it, don't\n"
	.string "you, my loyal POKÉMON?$"

ViasSur3_Evento_Pegaso_Texto_2:
	.string "FALKNER: Oh, {PLAYER}! You always\n"
	.string "find a way to be everywhere!$"

ViasSur3_Evento_Pegaso_Texto_3:
.string "What do you think about this place?$"

ViasSur3_Evento_Pegaso_Texto_4:
	.string "Despite the erosion caused by nature,\n"
	.string "traces of what seems to be an old\l"
	.string "village remain.$"

ViasSur3_Evento_Pegaso_Texto_5:
	.string "Perhaps even older than the RUINS OF\n"
	.string "ALPH, who knows. We know so little about\l"
	.string "our own region… and it's normal. Faced\l"
	.string "with the vastness of time, we are just a\l"
	.string "mere drop in the ocean.$"

ViasSur3_Evento_Pegaso_Texto_6:
	.string "My THUNDURUS has been agitated for\n"
	.string "weeks now. It seems to be reacting to a\l"
	.string "strong presence, with its energy source\l"
	.string "located around this area.$"

ViasSur3_Evento_Pegaso_Texto_7:
	.string "I've decided to come here to\n"
	.string "investigate. I'm not sure if this\l"
	.string "POKÉMON also belongs to the FLYING\l"
	.string "TYPE but its electrical charge is\l"
	.string "immense.$"

ViasSur3_Evento_Pegaso_Texto_8:
	.string "I have to figure it out. Even being an\n"
	.string "expert in birds, it's quite a challenge\l"
	.string "for me. Although… I have serious\l"
	.string "suspicions about what it really is.$"

ViasSur3_Evento_Pegaso_Texto_9:
	.string "I'll continue on my own, {PLAYER}. My\n"
	.string "POKÉMON are eager to face such an\l"
	.string "opponent, and I don't want to spoil\l"
	.string "their fun in a region that's becoming\l"
	.string "increasingly predictable.$"

ViasSur3_EventScript_Obrero::
	trainerbattle_single TRAINER_TRAINER_223, ViasSur3_Text_ObreroIntro, ViasSur3_Text_ObreroDefeated
	msgbox ViasSur3_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end


ViasSur3_Primer_Obrero::
lock
faceplayer
msgbox ViasSur3_Primer_Obrero_Texto_1 MSGBOX_AUTOCLOSE
release
end

ViasSur3_Primer_Obrero_Texto_1:
	.string "Who was that guy? He dismissed me in an\n"
	.string "instant using some strange bird. And\l"
	.string "here I thought I was safe with my ROCK\l"
	.string "TYPES. I can't imagine what would have\l"
	.string "happened if that other bird we're\l"
	.string "looking for had shown up…$"

