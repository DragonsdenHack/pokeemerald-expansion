Route12_House1_MapScripts::
	.byte 0

Route12House1_1::
end

Route12_House_1_Secundaria_Squirtle::
compare VAR_UNUSED_0x4083, 2
goto_if_gt Route12_House_1_Secundaria_Squirtle_4
compare VAR_UNUSED_0x4083, 2
goto_if_eq Route12_House_1_Secundaria_Squirtle_3
compare VAR_UNUSED_0x4083, 1
goto_if_eq Route12_House_1_Secundaria_Squirtle_2
msgbox Route12_House_1_Secundaria_Squirtle_Texto_1 MSGBOX_SIGN
delay 20
msgbox Route12_House_1_Secundaria_Squirtle_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_3 MSGBOX_AUTOCLOSE
msgbox Route12_House_1_Secundaria_Squirtle_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route12_House_1_Secundaria_Squirtle_No
msgbox Route12_House_1_Secundaria_Squirtle_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2.1
waitmovement 0x0
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_11.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_12.2 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x4083, 1
release
end

FuchsiaCity_House4_Secundaria_Squirtle_Move_2.1:
delay_8
face_right
delay_16
delay_8
face_player
delay_8
step_end

Route12_House_1_Secundaria_Squirtle_2::
lock
faceplayer
msgbox Route12_House_1_Secundaria_Squirtle_Texto_8 MSGBOX_AUTOCLOSE
release
end

Route12_House_1_Secundaria_Squirtle_3::
lock
faceplayer
delay 20
msgbox Route12_House_1_Secundaria_Squirtle_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_TMHM
msgbox Route12_House_1_Secundaria_Squirtle_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
waitfanfare
msgbox Route12_House_1_Secundaria_Squirtle_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route12_House_1_Secundaria_Squirtle_Texto_7.2 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x4083, 3
release
end

Route12_House_1_Secundaria_Squirtle_4::
lock
faceplayer
msgbox Route12_House_1_Secundaria_Squirtle_Texto_4 MSGBOX_AUTOCLOSE
release
end


Route12_House_1_Secundaria_Squirtle_No::
msgbox Route12_House_1_Secundaria_Squirtle_Texto_13 MSGBOX_AUTOCLOSE
release
end

Route12_House_1_Secundaria_Squirtle_Texto_1:
	.string "I will never reach that appreciation\n"
	.string "and popularity level, it can't be…{PAUSE 45} I need\l"
	.string "to do something…$"

Route12_House_1_Secundaria_Squirtle_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Route12_House_1_Secundaria_Squirtle_Texto_3:
	.string "YOU! ROCKET! …{PAUSE 25} …{PAUSE 25} Also, you look quite\n"
	.string "competent compared to the others!$"

Route12_House_1_Secundaria_Squirtle_Texto_4:
	.string "The sea is so big, KANTO is just\n"
	.string "surrounded by a small part of it. Can\l"
	.string "you even imagine what kind of POKÉMON\l"
	.string "could exist in the high seas?$"

Route12_House_1_Secundaria_Squirtle_Texto_5:
	.string "For real?!! I can't believe you could\n"
	.string "actually have defeated him, his\l"
	.string "GYARADOS are redoutable! ROCKET, I\l"
	.string "can't thank you enough.$"

Route12_House_1_Secundaria_Squirtle_Texto_5.1:
	.string "From now, I can always use that\n"
	.string "defeat as an indelible smudge on his\l"
	.string "career! Here you have, ROCKET!\p"
	.string "Take well care of this POKÉMON!$"

Route12_House_1_Secundaria_Squirtle_Texto_6:
	.string "YOU OBTAINED A LV.5 SQUIRTLE!!$"

Route12_House_1_Secundaria_Squirtle_Texto_7:
	.string "One of the last SQUIRTLE that I\n"
	.string "inherited from my father!$"

Route12_House_1_Secundaria_Squirtle_Texto_7.1:
	.string "SQUIRTLE is in serious danger of\n"
	.string "extinction here in KANTO's today, it's\l"
	.string "impossible to find it in the wild, and\l"
	.string "only a few specimens remain in the\l"
	.string "hands of those who have lived in KANTO,\l"
	.string "before the war.$"

Route12_House_1_Secundaria_Squirtle_Texto_7.2:
	.string "Its final evolved form is the\n"
	.string "most powerful WATER TYPE you can find\l"
	.string "in this region, a POKÉMON that will\l"
	.string "amaze and intimidate everyone at first\l"
	.string "sight due to its strength and rarity, I\l"
	.string "hope you are conscious of the value of\l"
	.string "the POKÉMON you have just received.$"

Route12_House_1_Secundaria_Squirtle_Texto_8:
	.string "FUCHSIA CITY is at the southeast,\n"
	.string "so you'll need to cross the ROUTES\l"
	.string "12, 13, 14 and 15 to arrive.\p"
	.string "Use those ROUTES as trainment,\n"
	.string "before to challenge my brother!$"

Route12_House_1_Secundaria_Squirtle_Texto_9:
	.string "Listen up, are you interested in doing a\n"
	.string "mission for me? If you succeed, I\l"
	.string "will give you the best reward that any\l"
	.string "fisherman could offer you in KANTO.\p"
	.string "Do you accept it?$"

Route12_House_1_Secundaria_Squirtle_Texto_10:
	.string "That is the attitude! Okay…{PAUSE 45} Listen,\n"
	.string "ROCKET…{PAUSE 35} I have 2 brothers, the three of\l"
	.string "us inherited from our father the\l"
	.string "tradition of being exceptional\l"
	.string "fishermen. My younger brother lives in\l"
	.string "VERMILION and has decided to focus on\l"
	.string "an OLD ROD that only allows him to fish\l"
	.string "MAGIKARPS, which is a respectable and\l"
	.string "necessary thing, as thanks to him, many\l"
	.string "TRAINERS have the opportunity to have\l"
	.string "the most fearsome POKÉMON in these\l"
	.string "waters.$"

Route12_House_1_Secundaria_Squirtle_Texto_11:
	.string "My older brother and I, however, focus\n"
	.string "more on fishing for powerful POKÉMON,\l"
	.string "we compete to see who catches the best\l"
	.string "pieces, and therein lies the problem…{PAUSE 15} …{PAUSE 15}$"

Route12_House_1_Secundaria_Squirtle_Texto_11.1:
	.string " {PAUSE 15}…{PAUSE 15} My older brother's SUPER ROD turned\n"
	.string "out to be better than my GOOD ROD, and\l"
	.string "when you add that many consider him the\l"
	.string "top FISHERMAN in the region, the one\l"
	.string "with the best POKÉMON, it turns out he\l"
	.string "has surpassed me in every aspect.$"

Route12_House_1_Secundaria_Squirtle_Texto_11.2:
	.string "So, now, he emanates an aura of\n"
	.string "invincibility and success that\l"
	.string "completely outshines me, even though I\l"
	.string "know I am at his level, no one will pay\l"
	.string "attention to me until they see that my\l"
	.string "brother is also a human and can be\l"
	.string "defeated.$"

Route12_House_1_Secundaria_Squirtle_Texto_12:
	.string "Here is where you will act, ROCKET.\p"
	.string "If you go to his FUCHSIA CITY house\n"
	.string "and you defeat him, it would be a\l"
	.string "severe blow to his reputation, not\l"
	.string "just for being defeated, but for being\l"
	.string "defeated by a ROCKET who, pardon my\l"
	.string "directness, as trainerclass is consid-\l"
	.string "ered among the weakest, along with the\l"
	.string "BUG CATCHERS.$"

Route12_House_1_Secundaria_Squirtle_Texto_12.1:
	.string "If that were to happen, my GOOD ROD and\n"
	.string "I would have a second chance to prove\l"
	.string "our worth.$"

Route12_House_1_Secundaria_Squirtle_Texto_12.2:
	.string "Well. If you manage to do so, come\n"
	.string "back here to confirm it and receive\l"
	.string "something that any fisherman in this\l"
	.string "region would give his life for.$"

Route12_House_1_Secundaria_Squirtle_Texto_13:
	.string "Really? No fisherman besides my old\n"
	.string "brother could offer what I do, think\l"
	.string "twice.$"

Route12_House_1_Secundaria_Squirtle_Move_1:
emote_exclamation_mark
face_player
step_end

Route12_House_1_Secundaria_Squirtle_Move_2:
walk_in_place_right
step_end

Route12_House_1_Secundaria_Squirtle_Move_3:
face_player
step_end
