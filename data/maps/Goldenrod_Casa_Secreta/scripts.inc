Goldenrod_Casa_Secreta_MapScripts::
	.byte 0


Goldenrod_Casa_Secreta_Exorcista::
lock
faceplayer
goto_if_set FLAG_HOENN_119, Goldenrod_Casa_Secreta_Exorcista_Final
goto_if_set FLAG_HOENN_120, Goldenrod_Casa_Secreta_Exorcista_Inicio
goto_if_set FLAG_HOENN_118, Goldenrod_Casa_Secreta_Exorcista_Encontrado
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_3 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_4 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_5 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_6 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_7 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_8 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_9 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_120
release
end

Goldenrod_Casa_Secreta_Exorcista_Inicio::
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_6 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_7 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_8 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_9 MSGBOX_AUTOCLOSE
goto_if_set FLAG_HOENN_118, Goldenrod_Casa_Secreta_Exorcista_Encontrado
release
end

Goldenrod_Casa_Secreta_Exorcista_Encontrado::
checkitem ITEM_OVAL_CHARM
goto_if_eq VAR_RESULT, FALSE, Goldenrod_Casa_Secreta_Exorcista_2 
delay 10
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_10 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 1, Goldenrod_Casa_Secreta_Exorcista_Move_1
waitmovement 0x0
playfanfare MUS_OBTAIN_BADGE
removeitem ITEM_OVAL_CHARM
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_11 MSGBOX_DEFAULT
waitfanfare
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_Casa_Secreta_Exorcista_Move_2
waitmovement 0x0
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_Casa_Secreta_Exorcista_Move_3
waitmovement 0x0
playfanfare MUS_OBTAIN_TMHM
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_15 MSGBOX_DEFAULT
givemon SPECIES_MARSHADOW, 80, ITEM_FIGHTING_GEM
waitfanfare
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_16 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_119
release
end

Goldenrod_Casa_Secreta_Exorcista_Final::
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_18 MSGBOX_AUTOCLOSE
release
end

Goldenrod_Casa_Secreta_Exorcista_2::
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_6 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_7 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_8 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Casa_Secreta_Exorcista_Texto_9 MSGBOX_AUTOCLOSE
release
end

Goldenrod_Casa_Secreta_Exorcista_Move_2:
face_up
step_end

Goldenrod_Casa_Secreta_Exorcista_Move_3:
walk_in_place_down
step_end

Goldenrod_Casa_Secreta_Exorcista_Move_1:
emote_exclamation_mark
step_end

Goldenrod_Casa_Secreta_Exorcista_Texto_1:
    .string "Uh? I'm surpred.\p"
	.string "Who are you?$"

Goldenrod_Casa_Secreta_Exorcista_Texto_2:
	.string "{PAUSE 15}… {PAUSE 15}…{PAUSE 15}$"

Goldenrod_Casa_Secreta_Exorcista_Texto_3:
	.string "So, KANTO you say?\p"
	.string "That's quite far from here.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_4:
	.string "I used to live in the SEVII islands. I\n"
	.string "moved here after the gyms closed.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_5:
	.string "Back in the day it was said a lot how\n"
	.string "similar these two regions are; now the\n"
	.string "differential is growing every day.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_6:
	.string "I wonder how much the SEVII islands\n"
	.string "have changed nowadays. However, there's\n"
	.string "a single thing I regret…$"

Goldenrod_Casa_Secreta_Exorcista_Texto_7:
	.string "I never found the OVAL CHARM\n"
	.string "of my deceased POKÉMON.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_8:
	.string "I lost it in the BERRY FOREST a long\n"
	.string "time ago, and I never saw it again.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_9:
	.string "It's been more than a decade since that.\p"
	.string "I think… it's time to let it go.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_10:
	.string "{PAUSE 15}… {PAUSE 15}…$"

Goldenrod_Casa_Secreta_Exorcista_Texto_11:
	.string "{PLAYER} gave the OVAL CHARM\n"
	.string "to the CHANNELER!$"

Goldenrod_Casa_Secreta_Exorcista_Texto_12:
	.string "No{PAUSE 15}…{PAUSE 15} it can't be{PAUSE 15}…{PAUSE 15}\p"
	.string "It has returned to my hands.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_13:
	.string "It's{PAUSE 15}...{PAUSE 15} amazing, only someone who knows\n"
	.string "every inch and mystery of THREE ISLAND\n"
	.string "could possibly find it.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_14:
	.string "Unfortunately, some of those mysteries\n"
	.string "are long gone in the flow of time. Only a\n"
	.string "few people remember them, and it won't\l"
	.string "be like that forever. I can only show\l"
	.string "you a few of them… the ones I know\l"
	.string "about.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_15:
	.string "YOU RECEIVED A LV.80 MARSHADOW!! $"

Goldenrod_Casa_Secreta_Exorcista_Texto_16:
	.string "The ex-THREE ISLAND gym LEADER says\n"
	.string "that finding one of these is a hundred\n"
	.string "times harder than a shiny POKÉMON.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_17:
	.string "An explorer like you is for sure what\n"
	.string "this POKÉMON needs best.$"

Goldenrod_Casa_Secreta_Exorcista_Texto_18:
	.string "Sometimes, I feel curious about what is\n"
	.string "now of everything I left behind in the\n"
	.string "SEVII ISLANDS, but I've never felt\l"
	.string "ready to return there.$"

