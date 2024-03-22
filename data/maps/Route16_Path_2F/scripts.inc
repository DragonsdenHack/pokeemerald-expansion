Route16_Path_2F_MapScripts::
	.byte 0

Route16Path2F_1::
lock     
faceplayer     
msgbox Route16_Path2F_Text_1, MSGBOX_DEFAULT
release     
end

Route16_Path2F_Text_1:
	.string "Do not get closer to me ROCKET, if\n"
	.string "someone sees me interacting with\l"
	.string "someone like you no one would be my\l"
	.string "friend!$"



Route16Path2F_2::
lock     
faceplayer     
msgbox Route16_Path2F_Text_2, MSGBOX_DEFAULT
release     
end

Route16_Path2F_Text_2:
.string "If you touch me I'll\n"
.string "call the POLICEMAN at 1F.$"



Route16Path2F_3::
end



Route16Path2FDocumento_100::
msgbox Route16Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route16Path2FDocumento_Text_100:
.string "Let's see what the binoculars have\n"
    .string "to show…\p"
    .string "It's the CELADON DEPT. STORE!$"



Route16Path2FDocumento_101::
msgbox Route16Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route16Path2FDocumento_Text_101:
    .string "Let's see what the binoculars have\n"
    .string "to show…\p"
    .string "There's a long path over water far\n"
    .string "away.$"

Route16_Path_2F_Combate_Ayudante_Oak::
lock
faceplayer
compare VAR_UNUSED_0x40A8, 0
goto_if_gt Route16_Path_2F_Combate_Ayudante_Oak_2
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route16_Path_2F_Combate_Ayudante_Oak_3
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AYUDANTE_4, Route16_Path_2F_Combate_Ayudante_Oak_Texto_6
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_AMULET_COIN
waitfanfare
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, Route16_Path_2F_Combate_Ayudante_Oak_Move_1
waitmovement 0x0
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40A8, 1
release
end

Route16_Path_2F_Combate_Ayudante_Oak_2::
lock
faceplayer
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route16_Path_2F_Combate_Ayudante_Oak_3::
lock
faceplayer
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_9 MSGBOX_AUTOCLOSE
release
end

Route16_Path_2F_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end

Route16_Path_2F_Combate_Ayudante_Oak_Texto_1:
.string "Once the region is rid of parasites like\n"
.string "you and your organization, we can finally\l"
.string "shape KANTO as it should be.$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_3:
.string "Get out of my sight, I don't want to\n"
.string "see your face again, do you dare\l"
.string "to contradict an OAK'S AIDE?$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_4:
	.string "TEAM ROCKET's days are running out,\n"
    .string "we're preparing something big to take\l"
    .string "you all down.$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_5:
.string "It will be the last thing you do, ROCKET.$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_6:
.string "Where did all those POKÉMON\n"
.string "come from?!$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_7:
.string "({PLAYER} stole an AMULET COIN from\n"
.string "OAK'S AIDE).$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_8:
.string "This doesn't make sense, you're not supposed\n"
.string "to have anything better than a RATICATE or\l"
.string "KOFFING on your team,\l"
.string "you'll see when I report this to OAK.$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_9:
.string "Next time I won't be so\n"
.string "compassionate with you.$"
