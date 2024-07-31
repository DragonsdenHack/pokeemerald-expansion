Azalea_SlowpokeWellS1_MapScripts::
	.byte 0

SlowpokeWellS1_1::
end



SlowpokeWellS1_2::
end

SlowpokeWellS1_Combate::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 129
goto_if_gt SlowpokeWellS1_Combate_2
msgbox SlowpokeWellS1_Combate_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 128
goto_if_gt SlowpokeWellS1_Combate_3
release
end

SlowpokeWellS1_Combate_3::
delay 20
msgbox SlowpokeWellS1_Combate_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 2, SlowpokeWellS1_Combate_3_Move_1
waitmovement 0x0
msgbox SlowpokeWellS1_Combate_Texto_4 MSGBOX_AUTOCLOSE
msgbox SlowpokeWellS1_Combate_Texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SlowpokeWellS1_Combate_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox SlowpokeWellS1_Combate_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SLOWBRO, SlowpokeWellS1_Combate_Texto_7
msgbox SlowpokeWellS1_Combate_Texto_8 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_SLOWBRONITE
msgbox SlowpokeWellS1_Combate_Texto_8.1 MSGBOX_DEFAULT
waitfanfare
setvar VAR_UNUSED_0x40F7, 130
release
end

SlowpokeWellS1_Combate_Texto_8.1:
.string "You obtained a SLOWBRONITE\n"
	.string "from SUPERNERD!$"


SlowpokeWellS1_Combate_No::
msgbox SlowpokeWellS1_Combate_Texto_9 MSGBOX_AUTOCLOSE
release
end


SlowpokeWellS1_Combate_2::
msgbox SlowpokeWellS1_Combate_Texto_2 MSGBOX_AUTOCLOSE
release
end


SlowpokeWellS1_Combate_3_Move_1:
emote_exclamation_mark
step_end

SlowpokeWellS1_Combate_Texto_1:
	.string "SLOWBRO's an amazing POKÉMON. It's\n"
	.string "PHYSICAL DEFENSE is top-notch, but did\l"
	.string "you know it can even match CLOYSTER\l"
	.string "there? Few know because almost no one\l"
	.string "is able to train a SLOWBRO to that\l"
	.string "point.$"

SlowpokeWellS1_Combate_Texto_2:
	.string "It's a SLOWBRONITE. You'll find one once\n"
	.string "in a blue moon, but if you have a\l"
	.string "SLOWBRO, this'll unlock its full\l"
	.string "potential. That's how it'll match\l"
	.string "CLOYSTER's PHYSICAL DEFENSE!$"

SlowpokeWellS1_Combate_Texto_3:
.string "{PAUSE 15}…\n"
	.string "{PAUSE 15}…$"

SlowpokeWellS1_Combate_Texto_4:
	.string "Did KURT send you to battle me? If you\n"
	.string "defeat me, will he let you challenge him?\l"
	.string "How curious. KURT's been steadily more\l"
	.string "uninterested in battles. So he must've\l"
	.string "seen something in you. My team's simple,\l"
	.string "but I assure you it's fairly solid.$"

SlowpokeWellS1_Combate_Texto_5:
.string "So, are you ready?$"

SlowpokeWellS1_Combate_Texto_6:
	.string "All right! You'll need more than just\n"
	.string "brute strength to crack open my\l"
	.string "POKÉMON's shell!$"

SlowpokeWellS1_Combate_Texto_7:
	.string "KURT wasn't wrong with you, that's for\n"
	.string "sure.$"

SlowpokeWellS1_Combate_Texto_8:
	.string "Impressive! To be honest, I'm grateful\n"
	.string "people like you sometimes pop up. Like\l"
	.string "KURT, I'd forgotten what a real POKÉMON\l"
	.string "battle's like. I want you to have this\l"
	.string "stone-and I hope you appreciate it. It's\l"
	.string "only the third one I've found in the\l"
	.string "past decade!$"

SlowpokeWellS1_Combate_Texto_9:
	.string "I understand. Don't you worry. I'll\n"
	.string "continue here, watching SLOWPOKE.$"
