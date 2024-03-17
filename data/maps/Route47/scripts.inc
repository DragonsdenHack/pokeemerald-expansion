Route47_MapScripts::
	.byte 0

Route47_4::
lock     
faceplayer     
msgbox Route47_Text_4, MSGBOX_DEFAULT
release     
end

Route47_Text_4:
.string "El arte es una conversación unilateral\n"
.string "con lo no observado.$"



Route47_EventScript_Montanero::
	trainerbattle_single TRAINER_FERNANDO_5, Route47_Text_MontaneroIntro, Route47_Text_MontaneroDefeated
	msgbox Route47_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



Route47_EventScript_Montanero2::
	trainerbattle_single TRAINER_SAWYER_2, Route47_Text_Montanero2Intro, Route47_Text_Montanero2Defeated
	msgbox Route47_Text_Montanero2PostBattle, MSGBOX_AUTOCLOSE
	end



Route47_EventScript_Sabio::
	trainerbattle_single TRAINER_SAWYER_3, Route47_Text_SabioIntro, Route47_Text_SabioDefeated
	msgbox Route47_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route47_5::
lock
faceplayer
msgbox Route47_5_Text_5YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route47_5No
msgbox Route47_5_Text_5Yes, MSGBOX_DEFAULT
release
end



Route47_5_Text_5YesNo:
	.string "Tell me, do you think you already have\n"
	.string "seen all that this world offers?$"



Route47_5No::
msgbox Route47_5_Text_5No, MSGBOX_DEFAULT
release
end


Route47_5_Text_5Yes:
	.string "I understand your perspective; you\n"
	.string "believe that nothing can surpass what\l"
	.string "you've experienced. However, there's\l"
	.string "always room for surprise; brute and\l"
	.string "absurd power can be surpassed by\l"
	.string "quality and experience.$"

Route47_5_Text_5No:
	.string "That's it! Keep that beginner's\n"
	.string "enthusiasm alive as you embark on your\l"
	.string "adventure! It's the path to wisdom!$"


Route47_Encuentro_Andra_Arriba::
lock
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_2
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
addobject 9
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_4
applymovement 9, Route47_Encuentro_Andra_Move_3
waitmovement 0x0
goto Route47_Encuentro_Andra


Route47_Encuentro_Andra_Abajo::
lock
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_2
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
addobject 9
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_1
waitmovement 0x0
applymovement 9, Route47_Encuentro_Andra_Move_3
waitmovement 0x0
goto Route47_Encuentro_Andra


Route47_Encuentro_Andra::
msgbox Route47_Encuentro_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Andra_Move_5
waitmovement 0x0
msgbox Route47_Encuentro_Andra_Texto_1.1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_6
applymovement 9, Route47_Encuentro_Andra_Move_6
waitmovement 0x0
msgbox Route47_Encuentro_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 30
msgbox Route47_Encuentro_Andra_Texto_2.1 MSGBOX_AUTOCLOSE
delay 30
msgbox Route47_Encuentro_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_7
applymovement 9, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route47_Encuentro_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Andra_Move_6
waitmovement 0x0
msgbox Route47_Encuentro_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Route47_Encuentro_Andra_Texto_2.1 MSGBOX_AUTOCLOSE
delay 15
msgbox Route47_Encuentro_Andra_Texto_6 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox Route47_Encuentro_Andra_Texto_7 MSGBOX_AUTOCLOSE
applymovement 9, Route47_Encuentro_Andra_Move_2
waitmovement 0x0
msgbox Route47_Encuentro_Andra_Texto_8 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Andra_Move_10
applymovement 9, Route47_Encuentro_Andra_Move_9
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
setflag FLAG_UNUSED_0x275
removeobject 9
setvar VAR_VERDANTURF_TOWN_STATE, 5
release
end

Route47_Encuentro_Andra_Move_10:
delay_4
delay_4
face_up
delay_4
delay_4
face_left
step_end

Route47_Encuentro_Andra_Move_9:
walk_up
walk_left
walk_left
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
walk_down
walk_left
walk_left
step_end

Route47_Encuentro_Andra_Move_8:
face_left
step_end

Route47_Encuentro_Andra_Move_7:
face_right
step_end

Route47_Encuentro_Andra_Move_6:
face_down
step_end

Route47_Encuentro_Andra_Move_5:
walk_left
walk_left
walk_left
walk_left
step_end

Route47_Encuentro_Andra_Move_4:
walk_down
walk_in_place_right
step_end

Route47_Encuentro_Andra_Move_3:
walk_down
walk_down
walk_left
step_end

Route47_Encuentro_Andra_Move_2:
walk_in_place_left
step_end

Route47_Encuentro_Andra_Move_1:
emote_exclamation_mark
face_right
step_end

Route47_Encuentro_Andra_Texto_1:
.string "You're here too, {PLAYER}?$"

Route47_Encuentro_Andra_Texto_1.1:
	.string "JOHTO never ceases to amaze me; this\n"
	.string "region is much more than meets the eye.\l"
	.string "Look.$"

Route47_Encuentro_Andra_Texto_2:
	.string "ANDRA: This place is beautiful; it seems\n"
	.string "GIOVANNI didn't want either of us to\l"
	.string "miss out on appreciating it. We both had\l"
	.string "this mission assigned.$"

Route47_Encuentro_Andra_Texto_2.1:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Route47_Encuentro_Andra_Texto_3:
	.string "Did you also notice? Ever since you\n"
	.string "defeated the ESSENCE POKÉMON, it feels\l"
	.string "like the limits of what a POKÉMON can\l"
	.string "achieve have shifted.$"

Route47_Encuentro_Andra_Texto_4:
	.string "A regular TRAINER wouldn't notice the\n"
	.string "change; even RED, LANCE, or the ELITE\l"
	.string "FOUR we faced in KANTO wouldn't notice\l"
	.string "the difference.$"

Route47_Encuentro_Andra_Texto_5:
	.string "However, those who have approached or\n"
	.string "even reached the limit will have noticed\l"
	.string "that the potential for improvement of\l"
	.string "their POKÉMON is greater. It grants you\l"
	.string "one final push when you believe you've\l"
	.string "reached the peak.$"

Route47_Encuentro_Andra_Texto_6:
	.string "Since we started this journey on\n"
	.string "CHRONO ISLAND, we've always managed to\l"
	.string "surpass ourselves, despite all the\l"
	.string "experiences we've had. Each of our\l"
	.string "encounters has surpassed the previous\l"
	.string "version. How long do you think it will\l"
	.string "continue like this?$"

Route47_Encuentro_Andra_Texto_7:
	.string "Perhaps these routes will give us\n"
	.string "answers; I would say there are very\l"
	.string "interesting things waiting further\l"
	.string "west.$"

Route47_Encuentro_Andra_Texto_8:
	.string "See you {PLAYER}, keep your Pokémon\n"
	.string "in shape!$"


Route47_Encuentro_Maestro_Anciano::
lock
applymovement OBJ_EVENT_ID_PLAYER, Route47_Encuentro_Maestro_Anciano_Move_2
waitmovement 0x0
applymovement 10, Route47_Encuentro_Andra_Move_8
waitmovement 0x0
playse SE_PIN
applymovement 10, CianwoodEusineHouse_Combate_Move_2
waitmovement 0x0
msgbox Route47_Encuentro_Maestro_Anciano_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route47_Encuentro_Maestro_Anciano_Texto_2 MSGBOX_AUTOCLOSE
applymovement 10, Route47_Encuentro_Maestro_Anciano_Move_1
waitmovement 0x0
msgbox Route47_Encuentro_Maestro_Anciano_Texto_3 MSGBOX_AUTOCLOSE
applymovement 10, Route47_Encuentro_Maestro_Anciano_Move_2
waitmovement 0x0
msgbox Route47_Encuentro_Maestro_Anciano_Texto_4 MSGBOX_AUTOCLOSE
applymovement 10, Route47_Encuentro_Andra_Move_6
waitmovement 0x0
msgbox Route47_Encuentro_Maestro_Anciano_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 6
release
end

Route47_Encuentro_Maestro_Anciano_Move_2:
walk_in_place_right
step_end

Route47_Encuentro_Maestro_Anciano_Move_1:
walk_slow_left
step_end

Route47_Encuentro_Maestro_Anciano_Texto_1:
	.string "How lucky I am to see you. {PLAYER}!\n"
	.string "Your deeds have shifted the course of\l"
	.string "history!$"

Route47_Encuentro_Maestro_Anciano_Texto_2:
	.string "After the events at the RUINS OF ALPH,\n"
	.string "what else do you have left to do? Well,\l"
	.string "as the saying goes, in JOHTO there's\l"
	.string "always something to do if you know\l"
	.string "where to go.$"

Route47_Encuentro_Maestro_Anciano_Texto_3:
	.string "I see you're still looking for\n"
	.string "challenges, huh? The truth is, you're in\l"
	.string "the right place. Further west lies one\l"
	.string "of JOHTO's oldest sites. It's been\l"
	.string "decades since I've been here. I thought\l"
	.string "the MASTER of ECRUTEAK CITY had\l"
	.string "traveled here. I hoped to have one last\l"
	.string "conversation with him, but… it seems\l"
	.string "HO-OH decided his time had come.$"

Route47_Encuentro_Maestro_Anciano_Texto_4:
	.string "But there's no reason to lament or\n"
	.string "regret, there's no better successor\l"
	.string "than the one I have in front of me. I'll\l"
	.string "offer you some advice: head further\l"
	.string "west, there… perhaps even someone of\l"
	.string "your level will find what they need to\l"
	.string "enhance even more.$"

Route47_Encuentro_Maestro_Anciano_Texto_5:
	.string "I'll linger on this ROUTE for a bit\n"
	.string "longer. If you can surpass the\l"
	.string "challenge further west, return hereI'd\l"
	.string "like to reward you with something.$"


Route47_Barrera::
compare VAR_VERDANTURF_TOWN_STATE, 6
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_1
waitmovement 0x0
msgbox Route47_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_2
waitmovement 0x0
release
end

Route47_Barrera_Texto_1:
	.string "(I should heed the DRAGON M.'s advice\n"
	.string "and go further west).$"

Route47_Dialogo_Maestro_Anciano::
lock
faceplayer
compare VAR_VERDANTURF_TOWN_STATE, 16
goto_if_gt Route47_Dialogo_Maestro_Anciano_2
msgbox Route47_Encuentro_Maestro_Anciano_Texto_5 MSGBOX_AUTOCLOSE
release
end

Route47_Dialogo_Maestro_Anciano_2::
checkmoncatch SPECIES_REGIDRAGO
goto_if_eq VAR_RESULT, FALSE, Route47_Dialogo_Maestro_Anciano_3 
msgbox Route47_Dialogo_Maestro_Anciano_2_Texto_5 MSGBOX_AUTOCLOSE
release
end


Route47_Dialogo_Maestro_Anciano_3::
msgbox Route47_Dialogo_Maestro_Anciano_2_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route47_Dialogo_Maestro_Anciano_2_Texto_2 MSGBOX_AUTOCLOSE
 playfanfare MUS_OBTAIN_TMHM
msgbox Route47_Dialogo_Maestro_Anciano_2_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_REGIDRAGO, 90, ITEM_NONE
msgbox Route47_Dialogo_Maestro_Anciano_2_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route47_Dialogo_Maestro_Anciano_2_Texto_1:
	.string "I see you've achieved it! You've just\n"
	.string "defeated perhaps the most powerful\l"
	.string "master in JOHTO still alive. Nothing\l"
	.string "surprises me coming from you!$"

Route47_Dialogo_Maestro_Anciano_2_Texto_2:
	.string "Take this POKÉMON, you deserve it.$"

Route47_Dialogo_Maestro_Anciano_2_Texto_3:
.string "YOU OBTAINED A LV.90 REGIDRAGO!!$"

Route47_Dialogo_Maestro_Anciano_2_Texto_4:
	.string "One of my most faithful POKÉMON, maybe\n"
	.string "with you it can continue experiencing\l"
	.string "great adventures. With this old fossil,\l"
	.string "it's already hard for that to happen,\l"
	.string "ho, ho, ho!!$"

Route47_Dialogo_Maestro_Anciano_2_Texto_5:
	.string "Enthusiasm awakens determination, and\n"
	.string "only patience brings it to an end. Will\l"
	.string "you be able to continue the journey\l"
	.string "when your strength falters?$"

Route47_Flag_Nivel::
lock
setflag FLAG_EXPAND_MAX_LEVEL
release
end

