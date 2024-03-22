LakeofRage_MapScripts::
	.byte 0

LakeofRage2::
end



LakeofRage4::
end



LakeofRage6::
end



LakeofRage8::
lock     
faceplayer     
msgbox LakeofRage_Text_8, MSGBOX_DEFAULT
release     
end

LakeofRage_Text_8:
.string "Ese GURÚ de KANTO, que vive en\n"
.string "FUCSIA, lo único que hizo fue\l"
.string "capturar 3 GYARADOS aquí, cuando\l"
.string "había a montones, y mudarse a otra\l"
.string "región donde escasean. Ahora vive\l"
.string "de la fama que esos 3 GYARADOS le\l"
.string "dieron.$"



LakeofRage9::
lock     
faceplayer     
msgbox LakeofRage_Text_9, MSGBOX_DEFAULT
release     
end

LakeofRage_Text_9:
.string "WATER/FLYING GYARADOS?\n"
.string "What kind of world are you inhabiting?\l"
.string "GYARADOS can't even fly!$"



LakeofRage10::
end



LakeofRage11::
end



LakeofRage12::
end



LakeofRage13::
end



LakeofRage14::
end



LakeofRage15::
end



LakeofRage_EventScript_Pescador::
	trainerbattle_single TRAINER_JOCELYN, LakeofRage_Text_PescadorIntro, LakeofRage_Text_PescadorDefeated
	msgbox LakeofRage_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



LakeofRage_EventScript_Sabio::
	trainerbattle_single TRAINER_ROBERT_2, LakeofRage_Text_SabioIntro, LakeofRage_Text_SabioDefeated
	msgbox LakeofRage_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



LakeofRage_EventScript_Guay::
	trainerbattle_single TRAINER_CHESTER, LakeofRage_Text_GuayIntro, LakeofRage_Text_GuayDefeated
	msgbox LakeofRage_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



LakeofRageDocumento_100::
msgbox LakeofRageDocumento_Text_100, MSGBOX_SIGN   
end

LakeofRageDocumento_Text_100:
	.string "LAKE OF RAGE, also known\n"
	.string "as IKARY LAKE.$"



LakeofRageDocumento_101::
msgbox LakeofRageDocumento_Text_101, MSGBOX_SIGN   
end

LakeofRageDocumento_Text_101:
	.string "FISHING GURU'S HOUSE$"

LakeofRage_Fredo::
lock
faceplayer
msgbox LakeofRage_Fredo_Texto_1 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 15, LakeofRage_Fredo_Move_1
waitmovement 0x0
msgbox LakeofRage_Fredo_Texto_2 MSGBOX_AUTOCLOSE
msgbox LakeofRage_Fredo_Texto_3 MSGBOX_AUTOCLOSE
msgbox LakeofRage_Fredo_Texto_4 MSGBOX_AUTOCLOSE
applymovement 15, LakeofRage_Fredo_Move_2
waitmovement 0x0
msgbox LakeofRage_Fredo_Texto_5 MSGBOX_AUTOCLOSE
applymovement 15, LakeofRage_Fredo_Move_3
waitmovement 0x0
msgbox LakeofRage_Fredo_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
fadescreen 1
delay 20
removeobject 15
fadescreen 0
release
end

LakeofRage_Fredo_Move_1:
face_player
emote_exclamation_mark
step_end

LakeofRage_Fredo_Move_2:
face_down
step_end

LakeofRage_Fredo_Move_3:
face_player
step_end

LakeofRage_Fredo_Texto_1:
	.string "PRYCE: Good morning, youngster, we have\n"
	.string "seen each other before?$"

LakeofRage_Fredo_Texto_2:
	.string "Yes… The GOLDENROD meeting, so you're\n"
	.string "the ROCKET who won the POKÉMON LEAGUE.$"

LakeofRage_Fredo_Texto_3:
	.string "As you may have noticed, the current\n"
	.string "LEADERS of JOHTO keep ourselves out of\l"
	.string "what happens elsewhere; we simply\l"
	.string "focus on our own lives and let things\l"
	.string "fall into place on their own.$"

LakeofRage_Fredo_Texto_4:
	.string "Which doesn't change the fact that\n"
	.string "what LANCE did in KANTO was horrible. If\l"
	.string "the true story had been known, the\l"
	.string "leaders of JOHTO, especially the DRAGON\l"
	.string "MASTER, would have acted immediately.$"

LakeofRage_Fredo_Texto_5:
	.string "That's why I have faith in you all; I\n"
	.string "know you don't act purely out of\l"
	.string "altruism, but you have certain\l"
	.string "principles, and with everything your\l"
	.string "LEADER proposed at the GOLDENROD\l"
	.string "meeting, something like what happened\l"
	.string "in KANTO would never have occurred.$"

LakeofRage_Fredo_Texto_6:
	.string "I think I've walked enough for now; it's\n"
	.string "time to head back to MAHOGANY. Enjoy\l"
	.string "the walk, {PLAYER}.$"



LakeofRage_Drenaje::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_809, LakeofRage_Drenaje_Despues
msgbox LakeofRage_Drenaje_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM98
msgbox LakeofRage_Drenaje_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_809
release     
end

LakeofRage_Drenaje_Despues::
msgbox LakeofRage_Drenaje_Texto_2, MSGBOX_NPC
release
end

LakeofRage_Drenaje_Texto_1.1:
.string "{PLAYER} obtained TM98 DRAIN\n"
	.string "PUNCH from the black belt!!$"

LakeofRage_Drenaje_Texto_1:
	.string "I wonder what would happen if we could\n"
	.string "drain all the water from the lake and\l"
	.string "see what lies at the very bottom; I\l"
	.string "think it would surprise everyone.$"

LakeofRage_Drenaje_Texto_2:
	.string "FIGHTING-TYPE POKÉMON often have\n"
	.string "poor SPECIAL DEF. If you combine this\l"
	.string "move with the ASSAULT VEST, your\l"
	.string "POKÉMON will be quite the wall while\l"
	.string "hitting hard and recovering health!$"
