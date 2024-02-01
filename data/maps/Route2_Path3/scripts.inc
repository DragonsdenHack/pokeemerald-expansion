Route2_Path3_MapScripts::
	.byte 0

Route2Path3_1::
lock     
faceplayer     
msgbox Route2_Path3_Text_1, MSGBOX_DEFAULT
release     
end

Route2_Path3_Text_1:
	.string "Do not talk to me ROCKET, or people will\n"
	.string "think that I have some relation with\l"
	.string "your organization.$"



Route2Path3_2::
end

Route2_Path3_Combate_Ayudante_Oak::
lock
faceplayer
compare VAR_UNUSED_0x40B8, 0
goto_if_gt Route2_Path3_Combate_Ayudante_Oak_2
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route2_Path3_Combate_Ayudante_Oak_3
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AYUDANTE_2, Route2_Path3_Combate_Ayudante_Oak_Texto_6
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_TM15
waitfanfare
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 2, Route2_Path3_Combate_Ayudante_Oak_Move_1
waitmovement 0x0
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40B8, 1
release
end

Route2_Path3_Combate_Ayudante_Oak_2::
lock
faceplayer
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route2_Path3_Combate_Ayudante_Oak_3::
lock
faceplayer
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_9 MSGBOX_AUTOCLOSE
release
end

Route2_Path3_Combate_Ayudante_Oak_Texto_1:
	.string "People like you, who only obstruct the\n"
	.string "flow of things and progress, shouldn't\l"
	.string "even exist, get out of my sight before I\l"
	.string "have to tell you again.$"

Route2_Path3_Combate_Ayudante_Oak_Texto_2:
.string "...\n"
	.string "...$"

Route2_Path3_Combate_Ayudante_Oak_Texto_3:
	.string "Do you dare to cross your gaze with an\n"
	.string "OAK'S AIDE?$"

Route2_Path3_Combate_Ayudante_Oak_Texto_4:
	.string "The OAK's pupil will crunch all your\n"
	.string "POKÉMON as if they were thin sheets of\l"
	.string "paper.$"

Route2_Path3_Combate_Ayudante_Oak_Texto_5:
	.string "It will be the last thing that you do.$"

Route2_Path3_Combate_Ayudante_Oak_Texto_6:
.string "Impossible!$"

Route2_Path3_Combate_Ayudante_Oak_Texto_7:
	.string "({PLAYER} stealth the TM15 HYPER\n"
	.string "BEAM from OAK'S AIDE)$"

Route2_Path3_Combate_Ayudante_Oak_Texto_8:
	.string "You are going to pay this, ROCKET, I will\n"
	.string "burn all your entire organization for\l"
	.string "what you did here.$"

Route2_Path3_Combate_Ayudante_Oak_Texto_9:
	.string "You still have time to disappear before\n"
	.string "I regret it.$"

Route2_Path3_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end
