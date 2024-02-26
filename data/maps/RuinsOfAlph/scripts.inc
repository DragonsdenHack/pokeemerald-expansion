RuinsOfAlph_MapScripts::
	.byte 0

RuinsOfAlph1::
lock     
faceplayer     
msgbox RuinsOfAlph_Text_1, MSGBOX_DEFAULT
release     
end

RuinsOfAlph_Text_1:
	.string "Shh! Did you know that if you tune the\n"
	.string "radio to a specific frequency inside\l"
	.string "the ruins, you'll hear some really weird\l"
	.string "sounds? I knew it! It's all a conspiracy\l"
	.string "between the UNOWN and the RADIO TOWER!\l"
	.string "… … What? That makes no sense at all?$"



RuinsOfAlph2::
lock     
faceplayer     
msgbox RuinsOfAlph_Text_2, MSGBOX_DEFAULT
release     
end

RuinsOfAlph_Text_2:
	.string "-We, humans, must walk along them.\n"
	.string "That's why, we go-. The phrase is\l"
	.string "recorded in one of the chambers. What\l"
	.string "could it mean?$"



RuinsOfAlph3::
end

RuinsOfAlph_Terremoto::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_Terremoto_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_Terremoto_Move_2
waitmovement 0x0
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
msgbox RuinsOfAlph_Terremoto_Texto_1 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 175
release
end

RuinsOfAlph_Terremoto_Texto_1:
	.string "(Something that had been closed for a\n"
	.string "long time has opened to the south of\l"
	.string "the RUINS OF ALPH).$"

RuinsOfAlph_Terremoto_Move_1:
emote_exclamation_mark
step_end

RuinsOfAlph_Terremoto_Move_2:
walk_in_place_down
step_end

RuinsOfAlph_Casa::
lock
msgbox RuinsOfAlph_Casa_texto_1, MSGBOX_SIGN
release
end

RuinsOfAlph_Casa_texto_1:
.string "RUINS OF ALPH RESEARCH CENTER\n"
	.string "THE AUTHORITY ON THE RUINS OF ALPH$"

RuinsOfAlph_Cartel::
lock
msgbox RuinsOfAlph_Cartel_texto_1, MSGBOX_SIGN
release
end

RuinsOfAlph_Cartel_texto_1:
.string "RUINS OF ALPH\n"
	.string "VISITORS WELCOME$"

