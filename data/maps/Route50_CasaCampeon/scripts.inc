Route50_CasaCampeon_MapScripts::
	.byte 0


Route50_CasaCampeon_Dialogo_Anciana::
lock
faceplayer
compare VAR_SECRET_BASE_LOW_TV_FLAGS, 8
goto_if_gt Route50_CasaCampeon_Dialogo_Anciana_3
compare VAR_SECRET_BASE_LOW_TV_FLAGS, 7
goto_if_gt Route50_CasaCampeon_Dialogo_Anciana_2
msgbox Route50_CasaCampeon_Dialogo_Anciana_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route50_CasaCampeon_Dialogo_Anciana_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route50_CasaCampeon_Dialogo_Anciana_Texto_3 MSGBOX_AUTOCLOSE
msgbox Route50_CasaCampeon_Dialogo_Anciana_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 8
release
end

Route50_CasaCampeon_Dialogo_Anciana_2::
msgbox Route50_CasaCampeon_Dialogo_Anciana_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route50_CasaCampeon_Dialogo_Anciana_3::
msgbox Route50_CasaCampeon_Dialogo_Anciana_Texto_5 MSGBOX_AUTOCLOSE
release
end


Route50_CasaCampeon_Dialogo_Anciana_Texto_1:
.string "W{PAUSE 15}…{PAUSE 15} who?!$"

Route50_CasaCampeon_Dialogo_Anciana_Texto_2:
	.string "Oh{PAUSE 15}…{PAUSE 15} I thought you were my husband that\n"
	.string "came back.$"

Route50_CasaCampeon_Dialogo_Anciana_Texto_3:
	.string "He dedicated to traveling through\n"
	.string "JOHTO, but he already knows every\l"
	.string "corner.$"

Route50_CasaCampeon_Dialogo_Anciana_Texto_4:
	.string "Now I think he's retired to MT. SILVER.\n"
	.string "If you see him, could you remind him of\l"
	.string "this place? Tell him that I've returned.$"

Route50_CasaCampeon_Dialogo_Anciana_Texto_5:
	.string "Thanks to you, we're reunited in this\n"
	.string "place once again. It's been a while\l"
	.string "since we lost contact, each pursuing\l"
	.string "our own objectives{PAUSE 15}…{PAUSE 15} Now we can savor\l"
	.string "this tranquility together.$"


Route50_CasaCampeon_Combate_Campeon::
lock
faceplayer
compare VAR_SECRET_BASE_LOW_TV_FLAGS, 9
goto_if_gt Route50_CasaCampeon_Combate_Campeon_2
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route50_CasaCampeon_Combate_Campeon_No
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CAMPEON_VENENO, Route50_CasaCampeon_Combate_Campeon_Texto_5
delay 15
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_6 MSGBOX_AUTOCLOSE
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_7 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_8 MSGBOX_DEFAULT
givemon SPECIES_POIPOLE, 50, ITEM_NONE
waitfanfare
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_9 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 10
release
end

Route50_CasaCampeon_Combate_Campeon_2::
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_10 MSGBOX_AUTOCLOSE
release
end

Route50_CasaCampeon_Combate_Campeon_No::
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_3 MSGBOX_AUTOCLOSE

Route50_CasaCampeon_Combate_Campeon_Texto_1:
	.string "Ah, {PLAYER}! I didn't expect to see\n"
	.string "you again. Old glories are usually more\l"
	.string "for gazing at than for truly being\l"
	.string "heard.$"

Route50_CasaCampeon_Combate_Campeon_Texto_2:
	.string "However, you seem to want to delve\n"
	.string "deeper beyond the surface. Tell me,\l"
	.string "would you be up for a battle with this\l"
	.string "old CHAMPION?$"

Route50_CasaCampeon_Combate_Campeon_Texto_3:
	.string "Don't worry, I won't move from here. Ho,\n"
	.string "ho, ho!$"

Route50_CasaCampeon_Combate_Campeon_Texto_4:
	.string "That's the spirit! Let's see how the new\n"
	.string "generations fare. My POISON techniques\l"
	.string "would make KOGA cry!$"

Route50_CasaCampeon_Combate_Campeon_Texto_5:
	.string "Impressive, you have countered the\n"
	.string "poison of my POKÉMON$"

Route50_CasaCampeon_Combate_Campeon_Texto_6:
	.string "Now I think I know who you are, you're\n"
	.string "that TRAINER in the shadows. They say\l"
	.string "you faced the same ESSENCE that\l"
	.string "shapes this world, and came out\l"
	.string "victorious. Knowing that, it's no wonder\l"
	.string "your level is so high.$"

Route50_CasaCampeon_Combate_Campeon_Texto_7:
	.string "I'll give you a very special gift, one of\n"
	.string "the most bizarre species I found during\l"
	.string "one of my many journeys.$"

Route50_CasaCampeon_Combate_Campeon_Texto_8:
.string "YOU OBTAINED A LV.50 POIPOLE!$"

Route50_CasaCampeon_Combate_Campeon_Texto_9:
	.string "As it grows, it becomes one of the\n"
	.string "fastest and most lethal POKÉMON I\l"
	.string "know, very few match its versatility.$"

Route50_CasaCampeon_Combate_Campeon_Texto_10:
	.string "It's been a pleasure spending this time\n"
	.string "with you. People our age often fall into\l"
	.string "monotony and boredom. For a moment, you\l"
	.string "made me feel what it's like to be a true\l"
	.string "TRAINER, like in the old days…$"
