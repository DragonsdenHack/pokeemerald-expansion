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
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox Route12_House_1_Secundaria_Squirtle_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x4083, 1
release
end

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
playfanfare MUS_OBTAIN_TMHM
msgbox Route12_House_1_Secundaria_Squirtle_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_SQUIRTLE, 5, ITEM_NONE
waitfanfare
msgbox Route12_House_1_Secundaria_Squirtle_Texto_7 MSGBOX_AUTOCLOSE
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
	.string "can't thank you enough. After that\l"
	.string "tough blow, I can always use that\l"
	.string "defeat as an indelible smudge on his\l"
	.string "career! Here you have, ROCKET! Take well\l"
	.string "care of this POKÉMON, it is unique!$"

Route12_House_1_Secundaria_Squirtle_Texto_6:
	.string "YOU OBTAINED A LV.5 SQUIRTLE!!$"

Route12_House_1_Secundaria_Squirtle_Texto_7:
	.string "One of the last SQUIRTLE that I\n"
	.string "inherited from my father! It is a\l"
	.string "POKÉMON in serious danger of\l"
	.string "extinction here in KANTO's today, it's\l"
	.string "impossible to find it in the wild, and\l"
	.string "only a few specimens remain in the\l"
	.string "hands of those who have lived in KANTO\l"
	.string "before. Its final evolved form is the\l"
	.string "most powerful WATER type you can find\l"
	.string "in this region, a POKÉMON that will\l"
	.string "amaze and intimidate everyone at first\l"
	.string "sight due to its strength and rarity, I\l"
	.string "hope you are conscious of the value of\l"
	.string "the POKÉMON you have just received.$"

Route12_House_1_Secundaria_Squirtle_Texto_8:
	.string "FUCHSIA CITY is at the southeast,\n"
	.string "after that, you will need to cross the\l"
	.string "ROUTES 12, 13, 14 and 15 to arrive. Use\l"
	.string "those ROUTES as trainment before to\l"
	.string "challenge my brother!$"

Route12_House_1_Secundaria_Squirtle_Texto_9:
	.string "Listen up, are you interested in doing a\n"
	.string "mission for me? If you have success, I\l"
	.string "will give you the best reward that any\l"
	.string "fisherman could offer you in this KANTO\l"
	.string "region. Do you accept it?$"


Route12_House_1_Secundaria_Squirtle_Texto_10:
	.string "That is the attitude! Okay…{PAUSE 45} Listen,\n"
	.string "ROCKET…{PAUSE 35} I have 2 brothers, the three of\l"
	.string "us inherited from our father the\l"
	.string "tradition of being exceptional\l"
	.string "fishermen, y younger brother lives in\l"
	.string "VERMILION and has decided to focus on\l"
	.string "an OLD ROD that only allows him to fish\l"
	.string "MAGIKARPS, which is a respectable and\l"
	.string "necessary thing, as thanks to him, many\l"
	.string "trainers have the opportunity to have\l"
	.string "the most fearsome POKÉMON in these\l"
	.string "waters.$"

Route12_House_1_Secundaria_Squirtle_Texto_11:
	.string "My older brother and I, however, focus\n"
	.string "more on fishing for powerful POKÉMON,\l"
	.string "we compete to see who catches the best\l"
	.string "pieces, and therein lies the problem…{PAUSE 15} …{PAUSE 15}\l"
	.string "…{PAUSE 15} My older brother's SUPER ROD turned\l"
	.string "out to be better than my GOOD ROD, and\l"
	.string "when you add that many consider him the\l"
	.string "top FISHERMAN in the region, the one\l"
	.string "with the best POKÉMON, it turns out he\l"
	.string "has surpassed me in every aspect. So\l"
	.string "now, he emanates an aura of\l"
	.string "invincibility and success that\l"
	.string "completely outshines me, even though I\l"
	.string "know I am at his level, no one will pay\l"
	.string "attention to me until they see that my\l"
	.string "brother is also a human and can be\l"
	.string "defeated.$"

Route12_House_1_Secundaria_Squirtle_Texto_12:
	.string "Here is where you will act, ROCKET, if\n"
	.string "you go to his FUCHSIA CITY house and\l"
	.string "you defeat him, it would be a severe\l"
	.string "blow to his reputation, not just for\l"
	.string "being defeated, but for being defeated\l"
	.string "by a ROCKET who, pardon my directness,\l"
	.string "is considered among the weakest\l"
	.string "trainers along with the BUG CATCHERS.\l"
	.string "If that were to happen, my GOOD ROD and\l"
	.string "I would have a second chance to prove\l"
	.string "our worth. So, that's your mission,\l"
	.string "ROCKET: go to FUCHSIA and defeat my\l"
	.string "brother, if you manage to do so, come\l"
	.string "back here to confirm it and receive\l"
	.string "something that any fisherman in this\l"
	.string "region would give their all.$"

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
