FileIsleMeadow_MapScripts::
	.byte 0


FileIsleMeadow1::
end


FileIsleMeadow2::
end


FileIsleMeadow3::
end


FileIsleMeadow4::
end


FileIsleMeadow5::
end


FileIsleMeadow8::
end


FileIsleMeadow9::
end

FileIsleMeadow_EventScript_Grunt::
	trainerbattle_single TRAINER_GRUNT_UNUSED, FileIsleMeadow_Text_GruntIntro, FileIsleMeadow_Text_GruntDefeated
	msgbox FileIsleMeadow_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end



FileIsleMeadow7::
lock     
faceplayer     
msgbox FileIsleMeadow7_Text_7, MSGBOX_DEFAULT
release     
end

FileIsleMeadow7_Text_7:
	.string "'Goldeen need log' and 'Yes, nah,\n"
	.string "Chansey'. The cleverness of our\l"
	.string "passwords lies in their palindromic\l"
	.string "nature.$"



FileIsleMeadow6::
lock
faceplayer
msgbox FileIsleMeadow6_Text_6YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow6_6No
msgbox FileIsleMeadow6_Text_6Yes, MSGBOX_DEFAULT
release
end



FileIsleMeadow6_Text_6YesNo:
	.string "Some say that our WAREHOUSE destroys\n"
	.string "and contaminates the island's\l"
	.string "landscape, but I believe it adds a\l"
	.string "unique touch and certain personality.\l"
	.string "Are you with me?$"



FileIsleMeadow6_6No::
msgbox FileIsleMeadow6_Text_6No, MSGBOX_DEFAULT
release
end


FileIsleMeadow6_Text_6Yes:
	.string "Well said! TEAM ROCKET rules!$"



FileIsleMeadow6_Text_6No:
	.string "Any self-respecting ROCKET knows that\n"
	.string "industrial landscapes are the best in\l"
	.string "the world! You're a disgrace!$"


FileIsleMeadow_Recluta_Balls::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 4
goto_if_lt FileIsleMeadow_Recluta_Balls_Debil
msgbox FileIsleMeadow_Recluta_Balls_Text_1, MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow_Recluta_Balls_No
msgbox FileIsleMeadow_Recluta_Balls_Text_Yes, MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_RECLUTA_BALL_1, FileIsleMeadow_Recluta_Balls_Text_2
msgbox FileIsleMeadow_Recluta_Balls_Text_3, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_POKE_BALL, 5
msgbox FileIsleMeadow_Recluta_Balls_Text_3.1, MSGBOX_DEFAULT
waitfanfare
release
end

FileIsleMeadow_Recluta_Balls_Text_3.1:
.string "¡¡{PLAYER} obtained 5 POKÉ BALL\n"
	.string "from ROCKET GRUNT!!$"

FileIsleMeadow_Recluta_Balls_Ejecutivo::
lock
faceplayer
compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
goto_if_gt FileIsleMeadow_Recluta_Balls_Ejecutivo_2
setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_1 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_3 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_4 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow_Recluta_Balls_Ejecutivo_No
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_257, FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_8
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_10 MSGBOX_DEFAULT
additem ITEM_ULTRA_BALL, 5
waitfanfare
release
end

FileIsleMeadow_Recluta_Balls_Ejecutivo_No::
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_6 MSGBOX_AUTOCLOSE
release
end

FileIsleMeadow_Recluta_Balls_Ejecutivo_2::
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_4 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow_Recluta_Balls_Ejecutivo_No
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_257, FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_8
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_10 MSGBOX_DEFAULT
giveitem ITEM_ULTRA_BALL, 5
waitfanfare
release
end

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_10:
.string "¡¡{PLAYER} obtuvo 5 ULTRA BALL\n"
	.string "de manos de Ejecutivo Rocket!!$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_1:
.string "¡ADMIN.JEFE {PLAYER}!$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_2:
.string "Ha pasado mucho tiempo, pero se ha\n"
	.string "convertido usted en la mayor leyenda\l"
	.string "del TEAM ROCKET. Aquí en ISLA INTA es\l"
	.string "un ídolo.$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_3:
.string "Como puede ver, yo he podido escalar\n"
	.string "también, ahora mismo soy EJECUTIVO\l"
	.string "ROCKET y mano derecha de ATLAS en\l"
	.string "SEVII.$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_4:
.string "Perdone mi indiscrección, señor, pero\n"
	.string "sería todo un honor poder combatir\l"
	.string "contra usted, y así fortalecer aún más\l"
	.string "mis POKÉMON.$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_5:
.string "¿Le gustaría combatir?$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_6:
.string "Entiendo, alguien como usted debe\n"
	.string "tener asuntos de gran importancia\l"
	.string "esperándole.$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_7:
.string "¡No le decepcionaré, SIR!$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_8:
.string "Entonces, este es el poder de la élite\n"
	.string "del TEAM ROCKET.$"

FileIsleMeadow_Recluta_Balls_Ejecutivo_texto_9:
.string "No olvidaré esta lección, señor. Tome en\n"
	.string "agradecimiento por su tiempo, alguien\l"
	.string "de su categoría lo mínimo que debería\l"
	.string "usar son ULTRA BALL.$"

FileIsleMeadow_Recluta_Balls_AltoRango::
lock
faceplayer
compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 0
goto_if_gt FileIsleMeadow_Recluta_Balls_AltoRango_2
setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_1 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_3 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_4 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow_Recluta_Balls_AltoRango_No
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_RECLUTA_BALL_2, FileIsleMeadow_Recluta_Balls_AltoRango_texto_8
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_10 MSGBOX_DEFAULT
additem ITEM_GREAT_BALL, 5
waitfanfare
release
end

FileIsleMeadow_Recluta_Balls_AltoRango_No::
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_6 MSGBOX_AUTOCLOSE
release
end


FileIsleMeadow_Recluta_Balls_AltoRango_2::
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_1 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_3 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_4 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FileIsleMeadow_Recluta_Balls_AltoRango_No
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_RECLUTA_BALL_2, FileIsleMeadow_Recluta_Balls_AltoRango_texto_8
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox FileIsleMeadow_Recluta_Balls_AltoRango_texto_10 MSGBOX_DEFAULT
giveitem ITEM_GREAT_BALL, 5
waitfanfare
release
end

FileIsleMeadow_Recluta_Balls_AltoRango_texto_10:
.string "{PLAYER} obtained 5 GREAT BALL\n"
	.string "from HIGH RANK GRUNT hands!!$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_1:
.string "{PLAYER}!$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_2:
	.string "Since leaving the island, you've become\n"
	.string "a legendary figure! Who would have\l"
	.string "imagined that you would rise to the\l"
	.string "position of ROCKET ADMIN by toppling\l"
	.string "LANCE's government!$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_3:
	.string "I've also climbed up in the\n"
	.string "organization; now I'm a HIGH RANK\l"
	.string "GRUNT!$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_4:
	.string "I apologize for my impertinence, sir,\n"
	.string "but it would be a tremendous honor for\l"
	.string "me to have a battle with you. It would\l"
	.string "also help in furthering the strength of\l"
	.string "my POKÉMON.$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_5:
	.string "Would you battle me?$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_6:
	.string "I understand, someone like you must\n"
	.string "have matters of great importance\l"
	.string "awaiting you.$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_7:
	.string "I will not disappoint you, SIR!$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_8:
	.string "So, that's the power of TEAM ROCKET's\n"
	.string "elite.$"

FileIsleMeadow_Recluta_Balls_AltoRango_texto_9:
	.string "Thank you for the lesson, sir! Please\n"
	.string "accept this; it may not be the most\l"
	.string "suitable BALL for someone of your\l"
	.string "expertise, but it will save you from\l"
	.string "having to waste ULTRA BALLs or MASTER\l"
	.string "BALLs on Pokémon that aren't worthy!$"

FileIsleMeadow_Recluta_Balls_Debil::
msgbox FileIsleMeadow_Recluta_Balls_Debil_Texto_1 MSGBOX_AUTOCLOSE
release
end

FileIsleMeadow_Recluta_Balls_Debil_Texto_1:
	.string "You appear to be another ordinary\n"
	.string "ROCKET among the crowd. If you succeed\l"
	.string "in securing a special mission from\l"
	.string "ARCHER, come back and speak with me.$"

FileIsleMeadow_Recluta_Balls_No::
msgbox FileIsleMeadow_Recluta_Balls_Text_4, MSGBOX_AUTOCLOSE
release
end



FileIsleMeadow_Recluta_Balls_Text_1:
	.string "Hey, comrade! Running low on items? I\n"
	.string "want to become a HIGH-RANK RECRUIT as\l"
	.string "soon as possible. If you help me train,\l"
	.string "I'll give you some POKÉ BALLS so you can\l"
	.string "improve too.$"

FileIsleMeadow_Recluta_Balls_Text_YesNo:
	.string "Then, wanna fight?$"

FileIsleMeadow_Recluta_Balls_Text_Yes:
	.string "That's the expected response. Prepare\n"
	.string "to witness the power of a future\l"
	.string "HIGH-RANK!$"

FileIsleMeadow_Recluta_Balls_Text_2:
	.string "You've got talent...$"

FileIsleMeadow_Recluta_Balls_Text_3:
	.string "You have great potential, comrade. If\n"
	.string "you stay on track, you'll go far in TEAM\l"
	.string "ROCKET. Take this!$"

FileIsleMeadow_Recluta_Balls_Text_4:
	.string "By avoiding battles, you can only aspire\n"
	.string "to be a poor GRUNT, trust me!$"

FileIsleMeadow_Combate_Azul_Der::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, FileIsleMeadow_Combate_Azul_Move_1
waitmovement 0x0
goto FileIsleMeadow_Combate_Azul

FileIsleMeadow_Combate_Azul_Izq::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, FileIsleMeadow_Combate_Azul_Move_1.1
waitmovement 0x0
goto FileIsleMeadow_Combate_Azul

FileIsleMeadow_Combate_Azul::
playse SE_DOOR
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
addobject 8
msgbox FileIsleMeadow_Combate_Azul_Texto_1 MSGBOX_AUTOCLOSE
applymovement 8, FileIsleMeadow_Combate_Azul_Move_2
waitmovement 0x0
msgbox FileIsleMeadow_Combate_Azul_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox FileIsleMeadow_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox FileIsleMeadow_Combate_Azul_Texto_4 MSGBOX_AUTOCLOSE
applymovement 8, FileIsleMeadow_Combate_Azul_Move_3
waitmovement 0x0
msgbox FileIsleMeadow_Combate_Azul_Texto_5 MSGBOX_AUTOCLOSE
applymovement 8, FileIsleMeadow_Combate_Azul_Move_4
waitmovement 0x0
msgbox FileIsleMeadow_Combate_Azul_Texto_6 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox FileIsleMeadow_Combate_Azul_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox FileIsleMeadow_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox FileIsleMeadow_Combate_Azul_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AZUL_4, FileIsleMeadow_Combate_Azul_Texto_10
msgbox FileIsleMeadow_Combate_Azul_Texto_11 MSGBOX_AUTOCLOSE
msgbox FileIsleMeadow_Combate_Azul_Texto_12 MSGBOX_AUTOCLOSE
applymovement 8, FileIsleMeadow_Combate_Azul_Move_6
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 8
setvar VAR_ROUTE107_STATE, 4
release
end

FileIsleMeadow_Combate_Azul_Texto_1:
	.string "BLUE: Ah, {PLAYER}. Returning to your\n"
	.string "roots, huh?$"

FileIsleMeadow_Combate_Azul_Texto_2:
	.string "ARCHER has been telling me about all\n"
	.string "the cool stuff to check out on these\l"
	.string "islands. This place is awesome for\l"
	.string "taking a break from all the POKÉMON\l"
	.string "LEAGUE craziness.$"

FileIsleMeadow_Combate_Azul_Texto_3:
.string "... ...$"

FileIsleMeadow_Combate_Azul_Texto_4:
	.string "Technically, I am the champion of the\n"
	.string "POKÉMON LEAGUE, but we both know that\l"
	.string "what happened there was entirely\l"
	.string "different. It was you who defeated the\l"
	.string "top trainers... including RED.$"

FileIsleMeadow_Combate_Azul_Texto_5:
	.string "That's when I realized I wanted to be\n"
	.string "the champ more to show off to everyone,\l"
	.string "to beat RED, and to prove I was better\l"
	.string "than him, rather than just for myself.$"

FileIsleMeadow_Combate_Azul_Texto_6:
	.string "Now that I'm the champion, I see that\n"
	.string "this title means nothing; I'm only the\l"
	.string "best in the eyes of the public, but the\l"
	.string "truth is different.$"

FileIsleMeadow_Combate_Azul_Texto_7:
	.string "I've decided to take it easy from now\n"
	.string "on, you know, enjoy places like this and\l"
	.string "the great outdoors. GIOVANNI's even\l"
	.string "offered me his VIRIDIAN GYM; I think\l"
	.string "that's where I'll be hanging out.$"

FileIsleMeadow_Combate_Azul_Texto_8:
	.string "On the other hand, you want to go\n"
	.string "further than anyone has ever gone,\l"
	.string "right? Explore other regions, break\l"
	.string "through the limits around you.$"

FileIsleMeadow_Combate_Azul_Texto_9:
	.string "ATLAS suggested a couple of spots to\n"
	.string "catch some good POKÉMON. It might not\l"
	.string "blow you away after fighting LANCE,\l"
	.string "but... Let me have this battle!$"

FileIsleMeadow_Combate_Azul_Texto_10:
	.string "Well, at least I competed.$"

FileIsleMeadow_Combate_Azul_Texto_11:
	.string "As I figured, you've gotten even better\n"
	.string "since then. I'm pretty happy with my\l"
	.string "progress, but I reckon I've reached the\l"
	.string "same level as RED from our last battle.\l"
	.string "With a bit more training, I'll be able to\l"
	.string "take him down. That's what I'll be aiming\l"
	.string "for as I keep on going.$"

FileIsleMeadow_Combate_Azul_Texto_12:
	.string "{PLAYER}! Enjoy your well-deserved\n"
	.string "break! I'm sure GIOVANNI will want you\l"
	.string "in on some big TEAM ROCKET stuff! Maybe\l"
	.string "one day everyone will know about your\l"
	.string "adventures, but honestly, who cares?\l"
	.string "What happened, happened, whether 10 or\l"
	.string "100,000 people know about it.$"

FileIsleMeadow_Combate_Azul_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

FileIsleMeadow_Combate_Azul_Move_1.1:
emote_exclamation_mark
walk_right
walk_in_place_up
step_end

FileIsleMeadow_Combate_Azul_Move_2:
walk_down
step_end

FileIsleMeadow_Combate_Azul_Move_3:
face_right
step_end

FileIsleMeadow_Combate_Azul_Move_4:
walk_in_place_down
step_end

FileIsleMeadow_Combate_Azul_Move_5:
face_up
step_end

FileIsleMeadow_Combate_Azul_Move_6:
walk_left
walk_down
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_down
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

FileIsleMeadow_Curacion::
setrespawn HEAL_LOCATION_FIVE_ISLAND
setflag FLAG_SYS_B_DASH
release
end
