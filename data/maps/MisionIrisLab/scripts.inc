MisionIrisLab_MapScripts::
	.byte 0



MisionIrisLab_EventScript_Ladron::
	trainerbattle_single TRAINER_TRAINER_131, MisionIrisLab_Text_LadronIntro, MisionIrisLab_Text_LadronDefeated
	msgbox MisionIrisLab_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end


MisionIrisLab_Primer_Cientifico::
lock
applymovement OBJ_EVENT_ID_PLAYER, MisionIrisLab_Primer_Cientifico_Move_1
waitmovement 0x0
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_3
applymovement OBJ_EVENT_ID_PLAYER, MisionIrisLab_Primer_Cientifico_Move_2
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_4
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_3
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_3 MSGBOX_AUTOCLOSE
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_5
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox MisionIrisLab_Primer_Cientifico_Texto_5 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_3
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_6 MSGBOX_AUTOCLOSE
msgbox MisionIrisLab_Primer_Cientifico_Texto_7 MSGBOX_AUTOCLOSE
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_6
waitmovement 0x0
trainerbattle_no_intro TRAINER_TRAINER_89, MisionIrisLab_Primer_Cientifico_Texto_8
playse SE_BREAKABLE_DOOR
applymovement 4, CuevaTesoro4_Jefe_Final_Move_9.1
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_9 MSGBOX_AUTOCLOSE
msgbox MisionIrisLab_Primer_Cientifico_Texto_10 MSGBOX_AUTOCLOSE
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_5
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_11 MSGBOX_AUTOCLOSE
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_7
waitmovement 0x0
msgbox MisionIrisLab_Primer_Cientifico_Texto_12 MSGBOX_AUTOCLOSE
applymovement 4, MisionIrisLab_Primer_Cientifico_Move_5
waitmovement 0x0
setvar VAR_ROUTE102_STATE, 2
release
end

MisionIrisLab_Primer_Cientifico_Move_7:
walk_left
walk_left
walk_left
walk_in_place_right
step_end

CuevaTesoro4_Jefe_Final_Move_9.1:
lock_facing_direction
walk_left
unlock_facing_direction
step_end

MisionIrisLab_Primer_Cientifico_Move_6:
walk_right
walk_right
walk_right
walk_right
step_end

MisionIrisLab_Primer_Cientifico_Move_5:
face_up
step_end

MisionIrisLab_Primer_Cientifico_Move_4:
emote_exclamation_mark
step_end

MisionIrisLab_Primer_Cientifico_Move_1:
walk_up
step_end

MisionIrisLab_Primer_Cientifico_Move_2:
walk_in_place_left
step_end

MisionIrisLab_Primer_Cientifico_Move_3:
walk_in_place_right
step_end

MisionIrisLab_Primer_Cientifico_Texto_1:
.string "Who dares to interrupt me in the midst\n"
	.string "of my creative process?$"

MisionIrisLab_Primer_Cientifico_Texto_2:
	.string "Where do you come from? You don't seem\n"
	.string "to be from DEVON CO. You must be one of\l"
	.string "those EXECUTIVEs from GOLDENROD who\l"
	.string "only care about money.$"

MisionIrisLab_Primer_Cientifico_Texto_3:
	.string "Here, we deal with serious matters. Tell\n"
	.string "me, have you heard of the law of\l"
	.string "diminishing returns? Or the\l"
	.string "optimization of BASE STATS?$"

MisionIrisLab_Primer_Cientifico_Texto_4:
	.string "In your region, you have a POKÉMON like\n"
	.string "MEGA BEEDRILL, with only 15 points in\l"
	.string "SPECIAL ATTACK. But you overlook such\l"
	.string "a physical feat of such magnitude and\l"
	.string "efficiency.$"

MisionIrisLab_Primer_Cientifico_Texto_5:
.string "That's why you are doomed to failure.$"

MisionIrisLab_Primer_Cientifico_Texto_6:
	.string "You've heard enough anyway. Someone\n"
	.string "like you wouldn't have understood a\l"
	.string "single word of what I just said.$"

MisionIrisLab_Primer_Cientifico_Texto_7:
	.string "Now, my optimized POKÉMON team will\n"
	.string "take care of erasing your presence\l"
	.string "from my sight.$"

MisionIrisLab_Primer_Cientifico_Texto_8:
	.string "W-What!? Why is your team efficient and\n"
	.string "effective at the same time?!$"

MisionIrisLab_Primer_Cientifico_Texto_9:
	.string "This makes no sense. I've heard that\n"
	.string "JOHTO LEADERS possess exceptional\l"
	.string "power, more due to their extensive\l"
	.string "experience than any efficient training.$"

MisionIrisLab_Primer_Cientifico_Texto_10:
	.string "But you… you're not one of them. Maybe\n"
	.string "you're not just a GOLDENROD EXECUTIVE\l"
	.string "either.$"

MisionIrisLab_Primer_Cientifico_Texto_11:
	.string "Be that as it may, it doesn't matter. Our\n"
	.string "work in this crude region has concluded.$"

MisionIrisLab_Primer_Cientifico_Texto_12:
	.string "Keep those FOSSILS if you wish; we\n"
	.string "already have plenty of copies and\l"
	.string "clones. Consider it a reward for your\l"
	.string "slightly better performance than the\l"
	.string "rest of the mediocre bunch.$"


MisionIrisLab_Segundo_Cientifico_Der::
applymovement OBJ_EVENT_ID_PLAYER, MisionIrisLab_Primer_Cientifico_Move_3
applymovement 3, MisionIrisLab_Segundo_Cientifico_Move_1
waitmovement 0x0
goto MisionIrisLab_Segundo_Cientifico

MisionIrisLab_Segundo_Cientifico_Izq::
applymovement OBJ_EVENT_ID_PLAYER, MisionIrisLab_Segundo_Cientifico_Move_2
applymovement 3, MisionIrisLab_Segundo_Cientifico_Move_1
waitmovement 0x0
goto MisionIrisLab_Segundo_Cientifico

MisionIrisLab_Segundo_Cientifico::
msgbox MisionIrisLab_Segundo_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
delay 30
msgbox MisionIrisLab_Segundo_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, MisionIrisLab_Primer_Cientifico_Move_5
waitmovement 0x0
msgbox MisionIrisLab_Segundo_Cientifico_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MisionIrisLab_Primer_Cientifico_Move_3
waitmovement 0x0
delay 10
msgbox MisionIrisLab_Segundo_Cientifico_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, MisionIrisLab_Segundo_Cientifico_Move_1
waitmovement 0x0
msgbox MisionIrisLab_Segundo_Cientifico_Texto_5 MSGBOX_AUTOCLOSE
msgbox MisionIrisLab_Segundo_Cientifico_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, MisionIrisLab_Segundo_Cientifico_Move_3
waitmovement 0x0
trainerbattle_no_intro TRAINER_TRAINER_88, MisionIrisLab_Segundo_Cientifico_Texto_7
msgbox MisionIrisLab_Segundo_Cientifico_Texto_8 MSGBOX_AUTOCLOSE
applymovement 3, MisionIrisLab_Primer_Cientifico_Move_5
waitmovement 0x0
msgbox MisionIrisLab_Segundo_Cientifico_Texto_9 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
fadescreen 1
delay 20
removeobject 1
removeobject 3
removeobject 4
fadescreen 0
setvar VAR_ROUTE102_STATE, 3
release
end

MisionIrisLab_Segundo_Cientifico_Move_3:
walk_left
walk_left
step_end

MisionIrisLab_Segundo_Cientifico_Move_2:
walk_right
step_end

MisionIrisLab_Segundo_Cientifico_Move_1:
face_left
step_end

MisionIrisLab_Segundo_Cientifico_Texto_1:
	.string "Huh? Who are you? Some special package\n"
	.string "from DEVON? We've already informed the\l"
	.string "PRESIDENT that we'll soon send him all\l"
	.string "the data on the new FOSSILS\l"
	.string "discovered.$"

MisionIrisLab_Segundo_Cientifico_Texto_2:
	.string "Hmm{PAUSE 15}…{PAUSE 15} I see, they've sent you those\n"
	.string "incompetents from the RUINS OF ALPH.$"

MisionIrisLab_Segundo_Cientifico_Texto_3:
	.string "Between us, in whose hands do you think\n"
	.string "these FOSSILS are better off now? In\l"
	.string "the best company in HOENN? Or in\l"
	.string "scientists who wouldn't make the\l"
	.string "slightest progress in that place even\l"
	.string "in ten years?$"

MisionIrisLab_Segundo_Cientifico_Texto_4:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MisionIrisLab_Segundo_Cientifico_Texto_5:
	.string "So, that's irrelevant… The form\n"
	.string "is what matters?$"

MisionIrisLab_Segundo_Cientifico_Texto_6:
	.string "Wouldn't you be as foolish as them?\n"
	.string "Street TRAINERS like you are all\l"
	.string "mediocre. Why would you be any\l"
	.string "different?!$"

MisionIrisLab_Segundo_Cientifico_Texto_7:
	.string "So, above average… maybe excellent.$"

MisionIrisLab_Segundo_Cientifico_Texto_8:
	.string "If you knew the magnitude of our\n"
	.string "resources, you would never dare to\l"
	.string "enter here so brazenly.$"

MisionIrisLab_Segundo_Cientifico_Texto_9:
	.string "A warning is not treachery. For your own\n"
	.string "good, I hope this was a mistake and\l"
	.string "that you quickly experience regression\l"
	.string "to the mean.$"


MisionIrisLab_Cientifico_Primero::
lock
faceplayer
msgbox MisionIrisLab_Primer_Cientifico_Texto_12 MSGBOX_AUTOCLOSE
release
end

MisionIrisLab_Tirtouga::
setflag FLAG_NUEVA_702
removeobject 5
playfanfare MUS_OBTAIN_TMHM
msgbox MisionIrisLab_Tirtouga_Texto_1, MSGBOX_DEFAULT
givemon SPECIES_TIRTOUGA, 30, ITEM_NONE
waitfanfare
release
end

MisionIrisLab_Tirtouga_Texto_1:
.string "{PLAYER} obtained a TIRTOUGA at LV.30!$"
