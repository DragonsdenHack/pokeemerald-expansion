Route11_Path_2F_MapScripts::
	.byte 0

Route11Path2F_1::
lock     
faceplayer     
msgbox Route11Path2F_Text_1, MSGBOX_DEFAULT
release     
end

Route11Path2F_Text_1:
	.string "What? A POKÉMON trade with you? I\n"
    .string "wouldn't negotiate with a ROCKET even\l"
    .string "if you offer me a ZAPDOS!$"



Route11Path2F_2::
end



Route11Path2FDocumento_100::
msgbox Route11Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route11Path2FDocumento_Text_100:
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "What a breathtaking view!$"



Route11Path2FDocumento_101::
msgbox Route11Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route11Path2FDocumento_Text_101:
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "To get to LAVENDER TOWN from\n"
	.string "CERULEAN CITY…\p"
	.string "ROCK TUNNEL appears to be a good\n"
	.string "route to take.$"

Route11_Path_2F_Combate_Ayudante_Oak::
lock
faceplayer
compare VAR_UNUSED_0x40E5, 0
goto_if_gt Route11_Path_2F_Combate_Ayudante_Oak_2
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route11_Path_2F_Combate_Ayudante_Oak_3
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AYUDANTE_3, Route11_Path_2F_Combate_Ayudante_Oak_Texto_6
playfanfare MUS_OBTAIN_ITEM
additem ITEM_DOWSING_MACHINE
waitfanfare
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_7 MSGBOX_DEFAULT
delay 20
playse SE_PIN
applymovement 2, Route11_Path_2F_Combate_Ayudante_Oak_Move_1
waitmovement 0x0
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40E5, 1
release
end

Route11_Path_2F_Combate_Ayudante_Oak_2::
lock
faceplayer
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route11_Path_2F_Combate_Ayudante_Oak_3::
lock
faceplayer
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_9 MSGBOX_AUTOCLOSE
release
end

Route11_Path_2F_Combate_Ayudante_Oak_Texto_1:
    .string "The social scourge like you is a\n"
    .string "disgrace to this region, get out of here\l"
    .string "before your presence contaminates my\l"
    .string "status.$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_2:
.string "...\n"
	.string "...$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_3:
	.string "Do you want to lose the small amount of\n"
    .string "freedom that remains in your miserable\l"
    .string "existence?$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_4:
	.string "Just wait, ROCKET, I'll suggest a set of\n"
    .string "actions to the POKÉMON LEAGUE\l"
    .string "COMMITTEE to finish squashing you, like\l"
    .string "bugs you and your organization are,\l"
    .string "this time you won't escape.$"


Route11_Path_2F_Combate_Ayudante_Oak_Texto_5:
	.string "As you wish, it was your choice.$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_6:
	.string "It must be a mistake! ROCKETS doesn't\n"
    .string "have more than a RATTATA or ZUBAT!$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_7:
	.string "{PLAYER} stole an ITEMFINDER from\n"
    .string "OAK's AIDE.$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_8:
	.string "Just wait, ROCKET, I'll suggest a set of\n"
    .string "actions to the POKÉMON LEAGUE\l"
    .string "COMMITTEE to finish squashing you, like\l"
    .string "bugs you and your organization are,\l"
    .string "this time you won't escape.$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_9:
	.string "It appears you're still rational, at\n"
    .string "least.$"

Route11_Path_2F_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end
