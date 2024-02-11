GimnasioAnciana_MapScripts::
	.byte 0



GimnasioAnciana_EventScript_Anciano::
	trainerbattle_single TRAINER_TRAINER_22, GimnasioAnciana_Text_AncianoIntro, GimnasioAnciana_Text_AncianoDefeated
	msgbox GimnasioAnciana_Text_AncianoPostBattle, MSGBOX_AUTOCLOSE
	end



GimnasioAnciana_EventScript_Anciana::
	trainerbattle_single TRAINER_TRAINER_23, GimnasioAnciana_Text_AncianaIntro, GimnasioAnciana_Text_AncianaDefeated
	msgbox GimnasioAnciana_Text_AncianaPostBattle, MSGBOX_AUTOCLOSE
	end



GimnasioAnciana_EventScript_Anciano2::
	trainerbattle_single TRAINER_TRAINER_24, GimnasioAnciana_Text_Anciano2Intro, GimnasioAnciana_Text_Anciano2Defeated
	msgbox GimnasioAnciana_Text_Anciano2PostBattle, MSGBOX_AUTOCLOSE
	end



GimnasioAnciana_EventScript_Anciano3::
	trainerbattle_single TRAINER_TRAINER_25, GimnasioAnciana_Text_Anciano3Intro, GimnasioAnciana_Text_Anciano3Defeated
	msgbox GimnasioAnciana_Text_Anciano3PostBattle, MSGBOX_AUTOCLOSE
	end


GimnasioAnciana_Combate_Gimnasio::
lock
faceplayer
compare VAR_ROUTE108_STATE, 5
goto_if_gt GimnasioAnciana_Combate_Gimnasio_2
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_1 MSGBOX_NPC
delay 20
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_2 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_26, GimnasioAnciana_Combate_Gimnasio_Texto_4
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_5 MSGBOX_AUTOCLOSE
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_7 MSGBOX_DEFAULT
givemon SPECIES_ZORUA_HISUI, 50, ITEM_NORMAL_GEM
waitfanfare
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_7.1 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_BADGE
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_7.2 MSGBOX_DEFAULT
waitfanfare
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM81
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_11.3 MSGBOX_NPC
setflag FLAG_UNUSED_0x4F9
setvar VAR_ROUTE108_STATE, 6
release
end

GimnasioAnciana_Combate_Gimnasio_Texto_11.3:
	.string "SWORDS DANCE sharply boosts ATTACK. If\n"
	.string "your POKÉMON's already quick or has\l"
	.string "solid priority moves, it can sweep an\l"
	.string "entire team.$"

GimnasioAnciana_Combate_Gimnasio_Texto_11.2:
	.string "{PLAYER} obtained the TM81 SWORDS\n"
   	.string "DANCE from ZINNIA!!$"

GimnasioAnciana_Combate_Gimnasio_Texto_11.1:
	.string "Ha! You thought that was it? I'll give\n"
	.string "you something more!$"

GimnasioAnciana_Combate_Gimnasio_2::
msgbox GimnasioAnciana_Combate_Gimnasio_Texto_9 MSGBOX_NPC
release
end

GimnasioAnciana_Combate_Gimnasio_Texto_1:
	.string "Ah, I see you've got some guts!$"

GimnasioAnciana_Combate_Gimnasio_Texto_2:
	.string "I used to be skilled with NORMAL and\n"
	.string "BUG-type POKÉMON, many of which were\l"
	.string "raised here.$"

GimnasioAnciana_Combate_Gimnasio_Texto_3:
	.string "I'll be straightforward, I'm excited to\n"
	.string "see you battle. I always say new\l"
	.string "trainers are wimps who give up too\l"
	.string "easily. Show me otherwise!$"

GimnasioAnciana_Combate_Gimnasio_Texto_4:
	.string "So there's a new generation replacing us, finally...$"

GimnasioAnciana_Combate_Gimnasio_Texto_5:
	.string "Ha! That ARCHER! He's been waiting to\n"
	.string "settle the score with you!$"

GimnasioAnciana_Combate_Gimnasio_Texto_6:
	.string "My journey's ending, yours is just\n"
	.string "starting. It's inevitable, the circle of\l"
	.string "life, but that doesn't stop us from\l"
	.string "recognizing each other. Here, take this.\l"
	.string "Take care of this little one.$"

GimnasioAnciana_Combate_Gimnasio_Texto_7:
.string "YOU OBTAINED A LV.50 ZORUA-HISUI!$"

GimnasioAnciana_Combate_Gimnasio_Texto_7.1:
	.string "Uh! I almost forgive it!\n"
	.string "Our old BADGE!.$"

GimnasioAnciana_Combate_Gimnasio_Texto_7.2:
	.string "I must confer on you\n"
	.string "the OBSCUREBADGE.$"

GimnasioAnciana_Combate_Gimnasio_Texto_8:
	.string "It's been almost four decades since\n"
	.string "this POKÉMON has been seen around\l"
	.string "these islands. I've just given you one\l"
	.string "born from an egg of my ZOROARK. I hope\l"
	.string "you take good care of it.$"

GimnasioAnciana_Combate_Gimnasio_Texto_9:
	.string "Each mystery we solve only reveals\n"
	.string "another one waiting to be uncovered.\l"
	.string "The unknown will always exist in our\l"
	.string "world. If we were to know everything, we\l"
	.string "would lose our sense of purpose. It\l"
	.string "would signify the end of our journey.$"

GimnasioAnciana_Anciano::
lock
faceplayer
compare VAR_ROUTE108_STATE, 5
goto_if_gt GimnasioAnciana_Anciano_2
msgbox GimnasioAnciana_Anciano_Texto_1 MSGBOX_NPC
msgbox GimnasioAnciana_Anciano_Texto_2 MSGBOX_NPC
release
end

GimnasioAnciana_Anciano_2::
msgbox GimnasioAnciana_Anciano_Texto_3 MSGBOX_NPC
release
end

GimnasioAnciana_Anciano_Texto_3:
	.string "Oh my goodness! It is clear that you are\n"
	.string "no ordinary TRAINER; no one had been\l"
	.string "able to match the physical power of our\l"
	.string "LEADER's URSALUNA. It appears her\l"
	.string "URSARING evolved during a journey to\l"
	.string "an ancient place in JOHTO.$"

GimnasioAnciana_Anciano_Texto_2:
	.string "Our LEADER was and still is a specialist\n"
	.string "in NORMAL TYPE. If you engage her in\l"
	.string "close combat without using FIGHTING\l"
	.string "TYPE moves, you'll have a tough time. All\l"
	.string "of her POKÉMON are very solid and hard\l"
	.string "to beat. Good luck!$"


GimnasioAnciana_Anciano_Texto_1:
	.string "I never thought I'd say this again,\n"
	.string "but… welcome to the SEVEN ISLAND\l"
	.string "GYM!$"

GimnasioAnciana_Documento_100::
lock  
showmonpic SPECIES_URSALUNA, 10, 3  
playmoncry SPECIES_URSARING, CRY_MODE_ENCOUNTER 
msgbox GimnasioAnciana_Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

GimnasioAnciana_Documento_Text_100:
.string "URSALUNA:\p"
	.string "HP: 130\n"
	.string "ATTACK: 140\l"
	.string "DEFENSE: 105\l"
	.string "SPECIAL ATTACK: 45\l"
	.string "SPECIAL DEFENSE: 80\l"
	.string "SPEED: 50\l"
	.string "TOTAL: 550\p"
	.string "EARTH/NORMAL$"

GimnasioAnciana_Documento_101::
lock  
msgbox GimnasioAnciana_Documento_Text_101, MSGBOX_DEFAULT
delay 10
msgbox GimnasioAnciana_Documento_Text_102, MSGBOX_DEFAULT
delay 10
msgbox GimnasioAnciana_Documento_Text_102, MSGBOX_DEFAULT
delay 10
msgbox GimnasioAnciana_Documento_Text_103, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq GimnasioAnciana_Documento_101_No
msgbox GimnasioAnciana_Documento_Text_101_2, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq GimnasioAnciana_Documento_101_No
msgbox GimnasioAnciana_Documento_Text_101_3, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq GimnasioAnciana_Documento_101_No
msgbox GimnasioAnciana_Documento_Text_101_4, MSGBOX_DEFAULT
compare VAR_RESULT, 0
goto_if_eq GimnasioAnciana_Documento_101_No
msgbox GimnasioAnciana_Documento_Text_101_5, MSGBOX_DEFAULT
release     
end

GimnasioAnciana_Documento_Text_103:
.string "Es un artículo de periódico antiguo,\n"
	.string "tendrá al menos 10 años.$"

GimnasioAnciana_Documento_Text_102:
.string "… … … … … … … …$"

GimnasioAnciana_Documento_101_No::
release
end

GimnasioAnciana_Documento_Text_101:
.string "Sobre la conexión entre JOHTO y\n"
	.string "ARCHI7…$"

GimnasioAnciana_Documento_Text_101_2:
.string "ISLAS SETE son conocidas por su rica\n"
	.string "fauna y flora, pero esta no es única en\l"
	.string "el mundo. Sus especies, a pesar de la\l"
	.string "distancia y el clima, coinciden con las\l"
	.string "de la región de JOHTO.$"

GimnasioAnciana_Documento_Text_101_3:
.string "Algunos expertos sostienen que esta\n"
	.string "extraña coincidencia se debe al vínculo\l"
	.string "entre RUINAS ALFA y RUINAS SETE.\l"
	.string "Dichos lugares debieron de asentar las\l"
	.string "bases de fauna y flora hoy conocidas,\l"
	.string "partiendo de una misma civilización que\l"
	.string "colonizó ambas regiones.$"

GimnasioAnciana_Documento_Text_101_4:
.string "De esto hace milenios, y se sabe también\n"
	.string "que ciertos POKÉMON podían\l"
	.string "antiguamente evolucionar a formas más\l"
	.string "desarrolladas, algo que los cambios\l"
	.string "ambientales y culturales de las últimas\l"
	.string "décadas han hecho imposible para las\l"
	.string "nuevas generaciones.$"

GimnasioAnciana_Documento_Text_101_5:
.string "Prueba de esto son la LÍDER de ISLA\n"
	.string "SÉTIMA y el LÍDER de ISLA TERA, ambos\l"
	.string "con POKÉMON -antiguos- que reúnen\l"
	.string "estas características. Según sus\l"
	.string "propias palabras, hoy en día la\l"
	.string "obtención de dichos POKÉMON en las\l"
	.string "islas es imposible, sin embargo, creen\l"
	.string "que en ciertos lugares de JOHTO aún se\l"
	.string "conserva esa parte de especies\l"
	.string "antiguas que ambas regiones, SEVII y\l"
	.string "JOHTO, compartían en el pasado.$"

GimnasioAnciana_Npc_Lore::
lock
faceplayer
msgbox GimnasioAnciana_Npc_Lore_Texto_1 MSGBOX_NPC
release
end

GimnasioAnciana_Npc_Lore_Texto_1:
.string "Cuando no era más que una chica,\n"
	.string "nuestra LÍDER hizo un largo viaje a\l"
	.string "JOHTO. Al parecer exploró sus lugares\l"
	.string "más recónditos, y por ello algunos de\l"
	.string "sus POKÉMON crecieron de una forma\l"
	.string "especial.$"



