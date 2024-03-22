CultoS8_MapScripts::
	.byte 0

CultoS8_Combate_Lider::
lock
applymovement OBJ_EVENT_ID_PLAYER, CultoS8_Combate_Lider_Move_1
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_1 MSGBOX_AUTOCLOSE
applymovement 10, CultoS8_Combate_Lider_Move_2
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_2 MSGBOX_AUTOCLOSE
applymovement 10, CultoS8_Combate_Lider_Move_3
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CULTO_2, CultoS8_Combate_Lider_Texto_4 
applymovement OBJ_EVENT_ID_PLAYER, CultoS8_Combate_Lider_Move_4
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_5 MSGBOX_AUTOCLOSE
applymovement 10, CultoS8_Combate_Lider_Move_4
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_6 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 10, CultoS8_Combate_Lider_Move_5
waitmovement 0x0
applymovement 10, CultoS8_Combate_Lider_Move_2
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox CultoS8_Combate_Lider_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox CultoS8_Combate_Lider_Texto_9 MSGBOX_AUTOCLOSE
msgbox CultoS8_Combate_Lider_Texto_10 MSGBOX_AUTOCLOSE
applymovement 10, CultoS8_Combate_Lider_Move_4
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_11 MSGBOX_AUTOCLOSE
applymovement 10, CultoS8_Combate_Lider_Move_6
waitmovement 0x0
msgbox CultoS8_Combate_Lider_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 171
release
end

CultoS8_Combate_Lider_Texto_1:
.string "{PLAYER}, you are back.$"

CultoS8_Combate_Lider_Texto_2:
	.string "Don't say a word, let your POKÉMON team\n"
	.string "talk by itself. This time I will really\l"
	.string "test you.$"

CultoS8_Combate_Lider_Texto_3:
	.string "I hope you are prepared enough to see\n"
	.string "this.$"

CultoS8_Combate_Lider_Texto_4:
	.string "So you have been improving as a\n"
	.string "TRAINER…$"

CultoS8_Combate_Lider_Texto_5:
	.string "I'm not used to flattering people, but I\n"
	.string "must admit, the journey you've\l"
	.string "undertaken to reach this point, in this\l"
	.string "state, is impressive, so much so that\l"
	.string "you've nearly reached the limits allowed\l"
	.string "by the laws of this world.$"

CultoS8_Combate_Lider_Texto_6:
	.string "Yes, you could even be able to see the\n"
	.string "ESSENCE POKÉ…$"

CultoS8_Combate_Lider_Texto_7:
	.string "Did a mysterious TRAINER succeed in\n"
	.string "capturing LUGIA and HO-OH? And does he\l"
	.string "claim to lack a piece to release what he\l"
	.string "calls the creator of everything?$"

CultoS8_Combate_Lider_Texto_8:
.string "{PAUSE 25}…{PAUSE 25}$"

CultoS8_Combate_Lider_Texto_9:
	.string "No, he can't refer to the ESSENCE\n"
	.string "POKÉMON. Whatever it is, {PLAYER},\l"
	.string "what it's looking for has nothing to do\l"
	.string "with us, and its power is inferior to\l"
	.string "that of the ESSENCE POKÉMON, since the\l"
	.string "latter is truly everything.$"

CultoS8_Combate_Lider_Texto_10:
	.string "So now, the RUINS OF ALPH keep several\n"
	.string "secrets, maybe he knows some legend\l"
	.string "that I don't. But you, {PLAYER},\l"
	.string "seeing how you've battled… Someone like\l"
	.string "you can only be defeated in battle by\l"
	.string "the ESSENCE POKÉMON.$"

CultoS8_Combate_Lider_Texto_11:
	.string "All I can say is, take the challenge as\n"
	.string "just another one. No LEGENDARY or\l"
	.string "ANCESTRAL POKÉMON, no matter how\l"
	.string "strong, can completely disable the rest\l"
	.string "of the POKÉMON, despite what that\l"
	.string "charlatan may say. LUGIA and HO-OH\l"
	.string "haven't been caught for the ESSENCE\l"
	.string "POKÉMON; he simply did it to complete\l"
	.string "his team of powerful POKÉMON.$"

CultoS8_Combate_Lider_Texto_12:
	.string "There's still time to learn about the\n"
	.string "ESSENCE POKÉMON, {PLAYER}, if you\l"
	.string "retrieve LUGIA and HO-OH. I trust you,\l"
	.string "{PLAYER}.$"

CultoS8_Combate_Lider_Move_1:
walk_in_place_up
step_end

CultoS8_Combate_Lider_Move_2:
face_down
step_end

CultoS8_Combate_Lider_Move_3:
walk_down
step_end

CultoS8_Combate_Lider_Move_4:
face_up
step_end

CultoS8_Combate_Lider_Move_5:
emote_exclamation_mark
step_end

CultoS8_Combate_Lider_Move_6:
walk_up
walk_in_place_up
step_end

CultoS8_Meditando::
lock
msgbox CultoS8_Meditando_Texto_1 MSGBOX_AUTOCLOSE
release
end

CultoS8_Meditando_Texto_1:
.string "{PAUSE 15}…{PAUSE 15}$"

CultoS8_Llamada_Giovanni::
lock
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
msgbox CultoS8_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 172
delay 20
msgbox CultoS8_Llamada_Giovanni_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_SOUTH_ROUTE45, 5, 114
release
end

CultoS8_Llamada_Giovanni_Texto_2:
	.string "Do you want to return to ROCKET BASE in\n"
	.string "JOHTO?$"

CultoS8_Llamada_Giovanni_Texto_1:
	.string "GIOVANNI: Have you discovered\n"
	.string "something, {PLAYER}? {PAUSE 15}…{PAUSE 15} … {PAUSE 15}RUINS OF\l"
	.string "ALPH? Just as we suspected, if a NATU\l"
	.string "sneezes in its tall grass, we'll be aware.\l"
	.string "We're keeping the entire area under\l"
	.string "surveillance.{PAUSE 15} …{PAUSE 15} …{PAUSE 15} You say lUGIA and\l"
	.string "HO-OH have nothing to do with that\l"
	.string "TRAINER's purpose? That's better. Now,\l"
	.string "head to BLACKTHORN CITY, {PLAYER},\l"
	.string "the DRAGON MASTER should be there,\l"
	.string "possibly with the strongest DEEP BOND\l"
	.string "POKÉMON.$"
