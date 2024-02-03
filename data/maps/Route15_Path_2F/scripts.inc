Route15_Path_2F_MapScripts::
	.byte 0

Route15Path2F_1::
end



Route15Path2FDocumento_100::
msgbox Route15Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route15Path2FDocumento_Text_100:
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "A large, shining bird is flying\n"
	.string "toward the sea.$"




Route15Path2FDocumento_101::
msgbox Route15Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route15Path2FDocumento_Text_101:
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "It looks like a small island on\n"
	.string "the horizon!$"


Route15_Path_2F_Combate_Ayudante_Oak::
lock
faceplayer
compare VAR_UNUSED_0x40BB, 0
goto_if_gt Route15_Path_2F_Combate_Ayudante_Oak_2
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route15_Path_2F_Combate_Ayudante_Oak_3
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AYUDANTE_5, Route15_Path_2F_Combate_Ayudante_Oak_Texto_6
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_TOXIC_ORB
waitfanfare
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, Route15_Path_2F_Combate_Ayudante_Oak_Move_1
waitmovement 0x0
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40BB, 1
release
end

Route15_Path_2F_Combate_Ayudante_Oak_2::
lock
faceplayer
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route15_Path_2F_Combate_Ayudante_Oak_3::
lock
faceplayer
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_9 MSGBOX_AUTOCLOSE
release
end

Route15_Path_2F_Combate_Ayudante_Oak_Texto_1:
	.string "I know that your zero IQ can't let you\n"
	.string "understand it, but recognized\l"
	.string "scientists like us don't associate with\l"
	.string "social scum, get out of here before I\l"
	.string "tell the guard that you've stolen from\l"
	.string "me, people like you will never be\l"
	.string "believed.$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_2:
.string "...\n"
	.string "...$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_3:
	.string "It is the last warning. Are you looking\n"
	.string "for trouble?$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_4:
	.string "We already have plans for the future of\n"
	.string "this region, ROCKET, and none of them\l"
	.string "include you, get ready for extinction.$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_5:
	.string "You've just signed your sentence\n"
	.string "ROCKET.$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_6:
.string "That's impossible!\n"
	.string "Who are you?$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_7:
	.string "({PLAYER} stole a TOXIC ORB from\n"
	.string "OAK's ASSISTANT).$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_8:
	.string "You don't know what you've just done,\n"
	.string "ROCKET. You're unlucky that I won't call\l"
	.string "the POLICE right now, just to see how\l"
	.string "OAK crushes your entire team when he\l"
	.string "finds out what you're up to.$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_9:
	.string "I understand, you already have enough\n"
	.string "problems dragging that miserable life\l"
	.string "with you, disappear.$"

Route15_Path_2F_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end
