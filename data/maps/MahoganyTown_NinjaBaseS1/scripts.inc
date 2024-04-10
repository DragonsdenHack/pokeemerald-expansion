MahoganyTown_NinjaBaseS1_MapScripts::
	.byte 0

NinjaBaseS1_1::
end



NinjaBaseS1_2::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_2, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_2:
	.string "I wonder who was the fool who left the\n"
	.string "security system like this. It's going to\l"
	.string "be a real pain to fix it.$"



NinjaBaseS1_3::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_3, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_3:
	.string "Deactivate the security of this base?\n"
	.string "I personally took care of disabling this\l"
	.string "system! If you want to make it to the\l"
	.string "end, you'll have to do it without cheats\l"
	.string "or assistance!$"



NinjaBaseS1_4::
end



NinjaBaseS1_5::
end



NinjaBaseS1_6::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_6, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_6:
	.string "Now I understand why you hold the\n"
	.string "position you do in TEAM ROCKET; you're\l"
	.string "an exceptional TRAINER, CHIEF ADMIN!$"



NinjaBaseS1_7::
end



NinjaBaseS1_8::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_8, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_8:
	.string "We're going to learn a lot from those\n"
	.string "traps used by the ninjas; they're very\l"
	.string "much in the ROCKET style too!$"



NinjaBaseS1_9::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_9, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_9:
	.string "The POKÉMON that inhabit the LAKE OF\n"
	.string "RAGE will be, from right now, very\l"
	.string "interesting study subjects.$"



NinjaBaseS1_10::
end



NinjaBaseS1_11::
end



NinjaBaseS1_12::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_12, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_12:
.string "You're the best one, sir!\n"
.string "Not even 20 TRAINERS together\l"
.string "were enough to stop you!$"



NinjaBaseS1_13::
end



NinjaBaseS1_14::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS1_Text_14, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS1_Text_14:
.string "Hah!\n"
	.string "They couldn't make use of our POKÉMON\l"
	.string "trap system! Look at those KOFFING\l"
	.string "exploding!$"



NinjaBaseS1_15::
end



NinjaBaseS1_16::
end



NinjaBaseS1_17::
end



NinjaBaseS1_18::
end



NinjaBaseS1_EventScript_Ladron::
	trainerbattle_single TRAINER_DREW, NinjaBaseS1_Text_LadronIntro, NinjaBaseS1_Text_LadronDefeated
	msgbox NinjaBaseS1_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end



NinjaBaseS1_EventScript_Calvo::
	trainerbattle_single TRAINER_MYLES, NinjaBaseS1_Text_CalvoIntro, NinjaBaseS1_Text_CalvoDefeated
	msgbox NinjaBaseS1_Text_CalvoPostBattle, MSGBOX_AUTOCLOSE
	end

NinjaBaseS1_Primera_Trampa_Abajo::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 1
addobject 5
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
applymovement 1, NinjaBaseS1_Primera_Trampa_Move_3
applymovement 5, NinjaBaseS1_Primera_Trampa_Move_4
waitmovement 0x0
goto NinjaBaseS1_Primera_Trampa

NinjaBaseS1_Primera_Trampa_Arriba::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 1
addobject 5
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
applymovement 1, NinjaBaseS1_Primera_Trampa_Move_3.1
applymovement 5, NinjaBaseS1_Primera_Trampa_Move_4.1
waitmovement 0x0
goto NinjaBaseS1_Primera_Trampa

NinjaBaseS1_Primera_Trampa::
msgbox NinjaBaseS1_Primera_Trampa_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_STAN, NinjaBaseS1_Primera_Trampa_Texto_2
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
waitmovement 0x0
msgbox NinjaBaseS1_Primera_Trampa_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_5
waitmovement 0x0
msgbox NinjaBaseS1_Primera_Trampa_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_STEVE_3, NinjaBaseS1_Primera_Trampa_Texto_5
delay 10
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_5
waitmovement 0x0
msgbox NinjaBaseS1_Primera_Trampa_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
removeobject 1
removeobject 5
fadescreen 0
release
end

NinjaBaseS1_Primera_Trampa_Texto_1:
	.string "Another fool that fell in the trap. We\n"
	.string "will kick you out of here.$"

NinjaBaseS1_Primera_Trampa_Texto_2:
.string "We have a rebel.$"

NinjaBaseS1_Primera_Trampa_Texto_3:
.string "You will fall, as everyone.$"

NinjaBaseS1_Primera_Trampa_Texto_4:
	.string "This base belonged to my ancestors; I'm\n"
	.string "just reclaiming what's mine, even if I\l"
	.string "have to share it!$"

NinjaBaseS1_Primera_Trampa_Texto_5:
.string "You're trapped.$"

NinjaBaseS1_Primera_Trampa_Texto_6:
	.string "Our security measures are relentless;\n"
	.string "if you seek entry into the base, you'll\l"
	.string "have what you deserve.$"

NinjaBaseS1_Primera_Trampa_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

NinjaBaseS1_Primera_Trampa_Move_2:
face_left
step_end

NinjaBaseS1_Primera_Trampa_Move_3:
walk_down
walk_in_place_left
step_end

NinjaBaseS1_Primera_Trampa_Move_4:
walk_down
walk_in_place_right
step_end

NinjaBaseS1_Primera_Trampa_Move_5:
face_right
step_end

NinjaBaseS1_Primera_Trampa_Move_3.1:
walk_in_place_left
step_end

NinjaBaseS1_Primera_Trampa_Move_4.1:
walk_in_place_right
step_end

NinjaBaseS1_Segunda_Trampa_Abajo::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 14
addobject 15
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
applymovement 14, NinjaBaseS1_Primera_Trampa_Move_3
applymovement 15, NinjaBaseS1_Primera_Trampa_Move_4
waitmovement 0x0
goto NinjaBaseS1_Segunda_Trampa

NinjaBaseS1_Segunda_Trampa_Arriba::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 14
addobject 15
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
applymovement 14, NinjaBaseS1_Primera_Trampa_Move_3.1
applymovement 15, NinjaBaseS1_Primera_Trampa_Move_4.1
waitmovement 0x0
goto NinjaBaseS1_Segunda_Trampa

NinjaBaseS1_Segunda_Trampa::
msgbox NinjaBaseS1_Segunda_Trampa_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CHAD, NinjaBaseS1_Segunda_Trampa_Texto_2
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
waitmovement 0x0
msgbox NinjaBaseS1_Segunda_Trampa_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_5
waitmovement 0x0
msgbox NinjaBaseS1_Segunda_Trampa_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SHEILA, NinjaBaseS1_Segunda_Trampa_Texto_5
delay 10
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_5
waitmovement 0x0
msgbox NinjaBaseS1_Segunda_Trampa_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
removeobject 14
removeobject 15
fadescreen 0
release
end

NinjaBaseS1_Segunda_Trampa_Texto_1:
.string "Pheeeeew!\n"
	.string "I'm faster than the wind!$"

NinjaBaseS1_Segunda_Trampa_Texto_2:
.string "I think it is time to disappear.$"

NinjaBaseS1_Segunda_Trampa_Texto_3:
	.string "You won't be able to invade this base,\n"
	.string "we are too many.$"

NinjaBaseS1_Segunda_Trampa_Texto_4:
	.string "Looks like we'll have to kick you from\n"
	.string "here by force. No problem, we have\l"
	.string "plenty of experience dealing with TEAM\l"
	.string "ROCKET.$"

NinjaBaseS1_Segunda_Trampa_Texto_5:
.string "You're trapped.$"

NinjaBaseS1_Segunda_Trampa_Texto_6:
	.string "Slowly but surely, we're draining your\n"
	.string "strength with the venom of weariness,\l"
	.string "so when you attempt to reach the end,\l"
	.string "we'll be poised to strike you down.$"

NinjaBaseS1_Tercera_Trampa_Abajo::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 10
addobject 4
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
applymovement 10, NinjaBaseS1_Primera_Trampa_Move_3
applymovement 4, NinjaBaseS1_Primera_Trampa_Move_4
waitmovement 0x0
goto NinjaBaseS1_Primera_Trampa

NinjaBaseS1_Tercera_Trampa_Arriba::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 10
addobject 4
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
applymovement 10, NinjaBaseS1_Primera_Trampa_Move_3.1
applymovement 4, NinjaBaseS1_Primera_Trampa_Move_4.1
waitmovement 0x0
goto NinjaBaseS1_Tercera_Trampa

NinjaBaseS1_Tercera_Trampa::
msgbox NinjaBaseS1_Tercera_Trampa_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CHAD, NinjaBaseS1_Tercera_Trampa_Texto_2
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_2
waitmovement 0x0
msgbox NinjaBaseS1_Tercera_Trampa_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_5
waitmovement 0x0
msgbox NinjaBaseS1_Tercera_Trampa_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SHEILA, NinjaBaseS1_Tercera_Trampa_Texto_5
delay 10
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_5
waitmovement 0x0
msgbox NinjaBaseS1_Tercera_Trampa_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
removeobject 10
removeobject 4
fadescreen 0
release
end

NinjaBaseS1_Tercera_Trampa_Texto_1:
	.string "We're experts in ambush tactics, as you\n"
	.string "may have already experienced.$"

NinjaBaseS1_Tercera_Trampa_Texto_2:
.string "My ninjas POKÉMON!$"

NinjaBaseS1_Tercera_Trampa_Texto_3:
	.string "I should have brought a POKÉMON with\n"
	.string "TOXIC, that way I could prolong your\l"
	.string "agony even further.$"

NinjaBaseS1_Tercera_Trampa_Texto_4:
	.string "Isn't TEAM ROCKET already too\n"
	.string "powerful? Can't you leave some room for\l"
	.string "the others?$"

NinjaBaseS1_Tercera_Trampa_Texto_5:
.string "We will crush you.$"

NinjaBaseS1_Tercera_Trampa_Texto_6:
	.string "You won't be able to escape from the\n"
	.string "spiderweb that we have weaved.$"

NinjaBaseS1_Cuarta_Trampa::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Cuarta_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 16
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Cuarta_Trampa_Move_2
waitmovement 0x0
msgbox NinjaBaseS1_Cuarta_Trampa_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_WATTSON_4, NinjaBaseS1_Cuarta_Trampa_Texto_2
msgbox NinjaBaseS1_Cuarta_Trampa_Texto_3 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 16
fadescreen 0
release
end

NinjaBaseS1_Cuarta_Trampa_Texto_1:
.string "Do you feel tired?\n"
	.string "Soon you'll be begging for us to take\l"
	.string "you to a POKÉMON CENTER.$"

NinjaBaseS1_Cuarta_Trampa_Texto_2:
	.string "Keep, keep ahead, the harder will be\n"
	.string "your downfall.$"

NinjaBaseS1_Cuarta_Trampa_Texto_3:
	.string "You have no way to heal your team here,\n"
	.string "we've made sure of that personally.$"

NinjaBaseS1_Cuarta_Trampa_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

NinjaBaseS1_Cuarta_Trampa_Move_2:
face_right
step_end

NinjaBaseS1_Quinta_Trampa::
compare VAR_UNUSED_0x40F7, 161
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_NOTE_C
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Cuarta_Trampa_Move_1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 17
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Cuarta_Trampa_Move_2
waitmovement 0x0
msgbox NinjaBaseS1_Quinta_Trampa_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_WATTSON_5, NinjaBaseS1_Quinta_Trampa_Texto_2
msgbox NinjaBaseS1_Quinta_Trampa_Texto_3 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 17
fadescreen 0
release
end

NinjaBaseS1_Quinta_Trampa_Texto_1:
	.string "My ninja techniques will make you cry!$"

NinjaBaseS1_Quinta_Trampa_Texto_2:
.string "I need more poison in my team.$"

NinjaBaseS1_Quinta_Trampa_Texto_3:
	.string "We're going to take care of you\n"
	.string "together, we never said we'd play fair.$"
