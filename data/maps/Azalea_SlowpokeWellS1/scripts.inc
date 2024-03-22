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
	.string "SLOWBRO is an amazing POKÉMON, its\n"
	.string "PHYSICAL DEFENSE is good, but did you\l"
	.string "know that it can match CLOYSTER in\l"
	.string "that regard? Few know because almost\l"
	.string "no one is able to train a SLOWBRO to\l"
	.string "that point.$"

SlowpokeWellS1_Combate_Texto_2:
	.string "It's a SLOWBRONITE, they are extremely\n"
	.string "rare to see. If you have a SLOWBRO, this\l"
	.string "item will unlock its full potential, and\l"
	.string "it will match CLOYSTER in PHYSICAL\l"
	.string "DEFENSE!$"

SlowpokeWellS1_Combate_Texto_3:
.string "{PAUSE 15}…\n"
	.string "{PAUSE 15}…$"

SlowpokeWellS1_Combate_Texto_4:
	.string "Did KURT send you to battle me? If you\n"
	.string "defeat me, will you be able to face him?\l"
	.string "It's strange, KURT is increasingly\l"
	.string "disinterested in POKÉMON battles. He\l"
	.string "must have seen something in you. My\l"
	.string "POKÉMON team is simple, but very solid.$"

SlowpokeWellS1_Combate_Texto_5:
.string "So, are you ready?$"

SlowpokeWellS1_Combate_Texto_6:
	.string "Alright! You are going to need\n"
	.string "something more than hitting hard to\l"
	.string "break the shell of my POKÉMON.$"

SlowpokeWellS1_Combate_Texto_7:
	.string "KURT wasn't wrong with you, that's for\n"
	.string "sure.$"

SlowpokeWellS1_Combate_Texto_8:
	.string "Impressive,to be honest I'm grateful\n"
	.string "that sometimes people like you appear,\l"
	.string "despite KURT I had forgotten what a\l"
	.string "real POKÉMON battle was like. I want you\l"
	.string "to have this stone, I hope you\l"
	.string "appreciate it. It's the third one I found\l"
	.string "in the SLOWPOKE WELL in over 10 years!$"

SlowpokeWellS1_Combate_Texto_9:
	.string "I understand, don't worry. I'll continue\n"
	.string "here, watching SLOWPOKE.$"
