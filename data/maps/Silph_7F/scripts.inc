Silph_7F_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, SilphCo_7F_OnLoad
	.byte 0

SilphCo_7F_OnLoad::
	call_if_unset FLAG_UNUSED_0x032, EventScript_Close7FDoor1
	call_if_unset FLAG_UNUSED_0x033, EventScript_Close7FDoor2
	call_if_unset FLAG_UNUSED_0x034, EventScript_Close7FDoor3
	end

Silph7F_2::
end



Silph7F_3::
end



Silph7F_4::
end



Silph7F_5::
end



Silph7F_6::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph7F_6_Despues_Invasion
msgbox Silph7F_6_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph7F_6_Despues_Invasion::
msgbox Silph7F_6_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph7F_6_Texto_1:
.string "No please!\n"
	.string "I want somebody to rescue me!$"

Silph7F_6_Texto_2:
	.string "You are not so brave now once you have\n"
	.string "fallen miserably down, huh!$"



Silph7F_7::
end



Silph7F_8::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph7F_8_Despues_Invasion
msgbox Silph7F_8_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph7F_8_Despues_Invasion::
msgbox Silph7F_8_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph7F_8_Texto_1:
	.string "The MASTER BALL will be a luxury just\n"
	.string "available to the most prominent\l"
	.string "TRAINERS that could buy it, that BALL\l"
	.string "is too much for thieves like you!$"

Silph7F_8_Texto_2:
	.string "Look what you've done! Due to your\n"
	.string "fault, our PRESIDENT decided to cancel\l"
	.string "the MASTER BALL project!$"



Silph7F_9::
end



Silph7F_10::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph7F_10_Despues_Invasion
msgbox Silph7F_10_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph7F_10_Despues_Invasion::
msgbox Silph7F_10_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph7F_10_Texto_1:
	.string "You will never make this company fall\n"
	.string "down, our PRESIDENT knows how to deal\l"
	.string "with thieves like you!$"

Silph7F_10_Texto_2:
	.string "You got what you deserved ROCKETS, now\n"
	.string "just we need to wait for your judgment.$"



Silph7F_11::
end



Silph7F_12::
lock
faceplayer 
msgbox Silph7F_12_Texto_1 MSGBOX_NPC
release
end



Silph7F_EventScript_Policia::
	trainerbattle_single TRAINER_TALIA, Silph7F_Text_PoliciaIntro, Silph7F_Text_PoliciaDefeated
	msgbox Silph7F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph7F_EventScript_Policia2::
	trainerbattle_single TRAINER_DONNY, Silph7F_Text_Policia2Intro, Silph7F_Text_Policia2Defeated
	msgbox Silph7F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph7F_EventScript_Policia3::
	trainerbattle_single TRAINER_KATELYN_1, Silph7F_Text_Policia3Intro, Silph7F_Text_Policia3Defeated
	msgbox Silph7F_Policia3PostBattle, MSGBOX_AUTOCLOSE
	end



Silph7F_EventScript_Cientifico::
	trainerbattle_single TRAINER_BARNY, Silph7F_Text_CientificoIntro, Silph7F_Text_CientificoDefeated
	msgbox Silph7F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph7FDocumento_100::
msgbox Silph7FDocumento_Text_100, MSGBOX_SIGN   
end

Silph7FDocumento_Text_100:
.string "SILPH CO. HEAD OFFICE\n"
    .string "7F$"

Silph_7F_Combate_Empleado::
lock
faceplayer
compare VAR_ROUTE131_STATE, 0
goto_if_gt Silph_7F_Combate_Empleado_2
msgbox Silph_7F_Combate_Empleado_Texto_1 MSGBOX_NPC
delay 15
msgbox Silph_7F_Combate_Empleado_Texto_2 MSGBOX_NPC
delay 15
playse SE_PIN
applymovement 9, Silph_7F_Combate_Empleado_Move_1
waitmovement 0x0
msgbox Silph_7F_Combate_Empleado_Texto_3 MSGBOX_NPC
playse MUS_RG_ENCOUNTER_BOY
msgbox Silph_7F_Combate_Empleado_Texto_4 MSGBOX_NPC
trainerbattle_no_intro TRAINER_SILPH, Silph_7F_Combate_Empleado_Texto_5
msgbox Silph_7F_Combate_Empleado_Texto_6 MSGBOX_NPC
setvar VAR_ROUTE131_STATE, 1
release
end

Silph_7F_Combate_Empleado_2::
msgbox Silph_7F_Combate_Empleado_Texto_7 MSGBOX_NPC
release
end



Silph_7F_Combate_Empleado_Move_1:
emote_exclamation_mark
step_end

Silph_7F_Combate_Empleado_Texto_1:
	.string "Without the CARD KEY no one of you will\n"
	.string "reach nowhere, you won't touch our\l"
	.string "PRESIDENT.$"

Silph_7F_Combate_Empleado_Texto_2:
.string "... ...$"

Silph_7F_Combate_Empleado_Texto_3:
.string "Hmm?\n"
	.string "You want me to tell you where it is?$"

Silph_7F_Combate_Empleado_Texto_4:
	.string "I am not like the rest of the employees\n"
	.string "here, ROCKET, I won't be staying here\l"
	.string "seeing how you menace us, prepare to be\l"
	.string "crushed!$"

Silph_7F_Combate_Empleado_Texto_5:
	.string "Did a ROCKET just smash me, really?$"

Silph_7F_Combate_Empleado_Texto_6:
	.string "Okay okay, I will talk. One of our\n"
	.string "employees at 5F is the one in charge of\l"
	.string "security, he is a coward so you will\l"
	.string "easily get the CARD KEY if you talk to\l"
	.string "him about it.$"

Silph_7F_Combate_Empleado_Texto_7:
	.string "What do you want from me now? Already\n"
	.string "told you all I know, leave me alone!$"


Silph_7F_Encuentro_Azul_Arriba::
lockall
playse SE_WARP_OUT
clearflag FLAG_HIDE_FANCLUB_BOY
addobject 1
applymovement 1, Silph_7F_Encuentro_Azul_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_7F_Encuentro_Azul_Move_2
waitmovement 0x0
goto Silph_7F_Encuentro_Azul

Silph_7F_Encuentro_Azul_Abajo::
lockall
playse SE_WARP_OUT
clearflag FLAG_HIDE_FANCLUB_BOY
addobject 1
applymovement 1, Silph_7F_Encuentro_Azul_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_7F_Encuentro_Azul_Move_2.1
waitmovement 0x0
goto Silph_7F_Encuentro_Azul

Silph_7F_Encuentro_Azul::
playse MUS_RG_ENCOUNTER_RIVAL
applymovement 1, Silph_7F_Encuentro_Azul_Move_3
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_1 MSGBOX_AUTOCLOSE
msgbox Silph_7F_Encuentro_Azul_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_4
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_4
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_4 MSGBOX_AUTOCLOSE
msgbox Silph_7F_Encuentro_Azul_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_5
waitmovement 0x0
playse MUS_RG_SILPH
msgbox Silph_7F_Encuentro_Azul_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_6
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_7 MSGBOX_AUTOCLOSE
msgbox Silph_7F_Encuentro_Azul_Texto_8 MSGBOX_AUTOCLOSE
msgbox Silph_7F_Encuentro_Azul_Texto_9 MSGBOX_AUTOCLOSE
msgbox Silph_7F_Encuentro_Azul_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_7
waitmovement 0x0
setflag FLAG_HIDE_FANCLUB_BOY
clearflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
setvar VAR_UNUSED_0x40F7, 74
release
end

Silph_7F_Encuentro_Azul_Move_1:
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
step_end

Silph_7F_Encuentro_Azul_Move_2:
emote_exclamation_mark
walk_in_place_right
step_end

Silph_7F_Encuentro_Azul_Move_2.1:
emote_exclamation_mark
walk_up
walk_in_place_right
step_end

Silph_7F_Encuentro_Azul_Move_3:
walk_left
walk_left
step_end

Silph_7F_Encuentro_Azul_Move_4:
walk_in_place_down
walk_in_place_left
step_end

Silph_7F_Encuentro_Azul_Move_5:
face_up
step_end

Silph_7F_Encuentro_Azul_Move_6:
face_left
step_end

Silph_7F_Encuentro_Azul_Move_7:
walk_down
walk_left
walk_down
walk_in_place_up
step_end

Silph_7F_Encuentro_Azul_Texto_1:
	.string "BLUE: So you were here, {PLAYER}!$"

Silph_7F_Encuentro_Azul_Texto_2:
	.string "GIOVANNI sent me to SAFFRON, he wants\n"
	.string "me to keep him informed, especially\l"
	.string "about RED's whereabouts, let's set up a\l"
	.string "trap for him, surely the fool will fall\l"
	.string "for it, thinking he's the smartest one\l"
	.string "in the room, listen.$"

Silph_7F_Encuentro_Azul_Texto_3:
	.string "ANDRA and I were able to obtain 2 CARD\n"
	.string "KEYS from the SILPH employees, without\l"
	.string "these, RED could not reach the meeting\l"
	.string "between GIOVANNI and the PRESIDENT\l"
	.string "until we want him to…$"

Silph_7F_Encuentro_Azul_Texto_4:
	.string "The plan is to keep these keys on safe\n"
	.string "until you give me the signal that\l"
	.string "GIOVANNI finishes negotiating with the\l"
	.string "PRESIDENT.$"

Silph_7F_Encuentro_Azul_Texto_5:
	.string "After that, we will close the doors and\n"
	.string "let one of the CARD KEYS throwed\l"
	.string "somewhere in SILPH.$"

Silph_7F_Encuentro_Azul_Texto_6:
	.string "That obtrusive RED for sure will find it\n"
	.string "someway, he's an expert at snatching\l"
	.string "other people's items and sticking his\l"
	.string "nose where it doesn't belong, then, he'll\l"
	.string "do us the favor of reaching GIOVANNI\l"
	.string "to pretend he's been defeated\l"
	.string "miserably, the fool will think he's come\l"
	.string "out on top, and trust me, he will, he's\l"
	.string "used to battling opponents far worse\l"
	.string "than GIOVANNI's already mediocre team\l"
	.string "that he'll bring here to SILPH, we'll\l"
	.string "even leave the weaker ROCKETS behind\l"
	.string "to highlight the difference in skill\l"
	.string "levels.$"

Silph_7F_Encuentro_Azul_Texto_7:
	.string "After this, you will have what you want\n"
	.string "and I will continue with my plans to be\l"
	.string "the new CHAMP.$"

Silph_7F_Encuentro_Azul_Texto_8:
	.string "Don't worry ROCKETS, nothing would be\n"
	.string "better for you more than having a CHAMP\l"
	.string "related to your organization instead of\l"
	.string "LANCE, don't you?$"

Silph_7F_Encuentro_Azul_Texto_9:
	.string "If everything goes well, this region\n"
	.string "could make a lot of changes very soon.$"

Silph_7F_Encuentro_Azul_Texto_10:
	.string "I won't keep wasting your time\n"
	.string "{PLAYER}, ANDRA already informed to\l"
	.string "GIVANNI, he must be on way, you should\l"
	.string "keep defeating all the rest of the\l"
	.string "security for your LEADER have free way\l"
	.string "to talk with the PRESIDENT instantly\l"
	.string "when arrives, I will be stay here,\l"
	.string "waiting that you give me the signal to\l"
	.string "drop the CARD KEY once the negotiation\l"
	.string "finishes.$"


Silph7F_12_Texto_1:
	.string "BLUE: Hurry up, {PLAYER}, and defeat\n"
	.string "what's left of the security before\l"
	.string "GIOVANNI shows up.$"

