SilphS3_MapScripts::
	.byte 0

SilphS3_EventScript_Policia::
	trainerbattle_single TRAINER_CHARLIE, SilphS3_Text_PoliciaIntro, SilphS3_Text_PoliciaDefeated
	msgbox SilphS3_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



SilphS3_3::
lock         
msgbox SilphS3_Text_3, MSGBOX_SIGN
release     
end

SilphS3_Text_3:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10} He is deep working, completely in\n"
	.string "the zone.$"

SilphS3_4::
lock     
faceplayer     
msgbox SilphS3_Text_4, MSGBOX_DEFAULT
release     
end


SilphS3_Text_4:
	.string "From great athletes they became Greek\n"
	.string "gods and, finally, ended up as pitiful\l"
	.string "failed experiments. To what extent is it\l"
	.string "viable to boost performance at all\l"
	.string "costs, sacrificing everything else?\l"
	.string "Perhaps something so extraordinarily\l"
	.string "superhuman ceases to be inspiring\l"
	.string "precisely because of that, being so\l"
	.string "bursting with everything that it\l"
	.string "cannot serve as inspiration and\l"
	.string "example to anyone. Likewise, how would\l"
	.string "we view a POKÉMON with 150 in every\l"
	.string "stat? Perhaps, far from being\l"
	.string "admirable, it's so beyond our\l"
	.string "parameters and possibilities that we\l"
	.string "lose interest in it knowing that we can\l"
	.string "never replicate it.$"



SilphS3Documento_100::
lock     
showmonpic SPECIES_GENESECT, 10, 3  
playmoncry SPECIES_GENESECT, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_100:
.string "GENESECT:\p"
	.string "HP: 71\n"
	.string "ATTACK: 120\l"
	.string "DEFENSE: 95\l"
	.string "SP. ATK: 120\l"
	.string "SP. DEF: 95\l"
	.string "SPEED: 99\l"
	.string "TOTAL: 600\p"
	.string "POKÉMON derived from the deadliest\n"
	.string "BUG-type predator of UNOVA 300 million\l"
	.string "years ago, of which we are unaware of\l"
	.string "its BASE STATs, but we estimate them to\l"
	.string "be around 520-540, with a significantly\l"
	.string "low SPECIAL ATTACK ranging between 40\l"
	.string "and 60 points. Its main enhancement\l"
	.string "between the original GENESECT and the\l"
	.string "modified version lies in that 60-80\l"
	.string "increase in SPECIAL ATTACK, giving\l"
	.string "GENESECT a total of 600 BASE STATs.\l"
	.string "Further research is needed to explore a\l"
	.string "possible relationship with KABUTOPS.$"





SilphS3Documento_101::
lock     
msgbox SilphS3Documento_Text_101, MSGBOX_DEFAULT
release     
end

SilphS3Documento_Text_101:
	.string "According to our latest research,\n"
	.string "current resurrection techniques do not\l"
	.string "faithfully reproduce the wild state of\l"
	.string "FOSSILS, especially in AERODACTYL case,\l"
	.string "which is estimated to have been even\l"
	.string "faster and deadlier.$"



SilphS3Documento_102::
lock     
showmonpic SPECIES_DARMANITAN_ZEN_MODE, 10, 3  
playmoncry SPECIES_DARMANITAN_ZEN_MODE, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_102:
	.string "DARMANITAN-ZEN:\p"
	.string "HP: 105\n"
	.string "ATTACK: 30\l"
	.string "DEFENSE: 105\l"
	.string "SP. ATK: 160\l"
	.string "SP. DEF: 105\l"
	.string "SPEED: 55\l"
	.string "TOTAL: 560\p"
	.string "Only dozens of specimens are known\n"
	.string "worldwide, believed to originate from a\l"
	.string "DARMANITAN that achieved a state of\l"
	.string "enlightenment, channeling all its\l"
	.string "physical vigor into its mind. Such was\l"
	.string "the wisdom accumulated in the process\l"
	.string "that its PHYSICAL ATTACK became\l"
	.string "completely unusable, gaining in the\l"
	.string "process an even higher special attack\l"
	.string "than its former physical form as a\l"
	.string "normal DARMANITAN, around 160 BASE,\l"
	.string "surpassing even MEWTWO.$"



SilphS3Documento_103::
lock     
showmonpic SPECIES_WISHIWASHI_SCHOOL, 10, 3  
playmoncry SPECIES_WISHIWASHI_SCHOOL, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_103, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_103:
	.string "WISHIWASHI SCHOOL:\p"
	.string "HP: 45\n"
	.string "ATTACK: 140\l"
	.string "DEFENSE: 130\l"
	.string "SP. ATK: 140\l"
	.string "SP. DEF: 135\l"
	.string "SPEED: 30\l"
	.string "TOTAL: 620\p"
	.string "Known as 'The Beast of the Sea' and\n"
	.string "feared even by Gyarados. One Wishiwashi\l"
	.string "by itself is even weaker than a common\l"
	.string "Magikarp, but it is capable of uniting\l"
	.string "many of its kind to form a new form\l"
	.string "-school form-, which acts as a single\l"
	.string "individual POKÉMON, surpassing the\l"
	.string "power of any PSEUDOLEGENDARY.$"



SilphS3Documento_104::
lock     
showmonpic SPECIES_PORYGON3, 10, 3  
playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_104, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_104:
	.string "PORYGON3: NORMAL/GHOST\p"
	.string "HP: 85\n"
	.string "ATTACK: 75\l"
	.string "DEFENSE: 70\l"
	.string "SP. ATK: 155\l"
	.string "SP. DEF: 95\l"
	.string "SPEED: 135\l"
	.string "TOTAL: 615\p"
	.string "After countless attempts, we have been\n"
	.string "able to optimize up to 99% the maximum\l"
	.string "potential achievable by the original\l"
	.string "PORYGON base. PORYGON3 has achieved\l"
	.string "the impossible of breaking through the\l"
	.string "154 BASE SPECIAL ATTACK barrier\l"
	.string "imposed by MEWTWO by just one point,\l"
	.string "surpassing it in SPEED as well to have\l"
	.string "an unprecedented offensive capability.\l"
	.string "Such destructive power was impossible\l"
	.string "to sustain without sacrificing its\l"
	.string "PHYSICAL DEFENSE, which inevitably fell\l"
	.string "to 70 BASE.$"

SilphS3_Miguel_Batalla_Derecha::
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_3
waitmovement 0x0
goto SilphS3_Miguel_Batalla

SilphS3_Miguel_Batalla_Izquierda::
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_3.1
waitmovement 0x0
goto SilphS3_Miguel_Batalla

SilphS3_Miguel_Batalla::
delay 20
applymovement 2, SilphS3_Miguel_Batalla_Move_4
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Miguel_Batalla_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, SilphS3_Miguel_Batalla_Move_5
waitmovement 0x0
delay 10
msgbox SilphS3_Miguel_Batalla_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, SilphS3_Miguel_Batalla_Move_6
waitmovement 0x0
delay 10
msgbox SilphS3_Miguel_Batalla_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, SilphS3_Miguel_Batalla_Move_6
waitmovement 0x0
delay 10
msgbox SilphS3_Miguel_Batalla_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CMIGUEL_3, SilphS3_Miguel_Batalla_Texto_7
msgbox SilphS3_Miguel_Batalla_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Miguel_Batalla_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_5
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, SilphS3_Miguel_Batalla_Move_6
waitmovement 0x0
delay 10
msgbox SilphS3_Miguel_Batalla_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, SilphS3_Miguel_Batalla_Move_7
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 104
release
end

SilphS3_Miguel_Batalla_Texto_1:
	.string "????: You again, {PLAYER}?$"

SilphS3_Miguel_Batalla_Texto_2:
	.string "S.MIGUEL: The PRESIDENT already\n"
	.string "informed us that soon a ROCKET could\l"
	.string "pay us a little visit to this privileged\l"
	.string "place; I don't know why I'm not about\l"
	.string "who's in charge.$"

SilphS3_Miguel_Batalla_Texto_3:
	.string "As you can see, ROCKET ADMIN, you're\n"
	.string "not the only one who has managed to\l"
	.string "climb and ascend; my extensive\l"
	.string "knowledge and obsession with FOSSILS\l"
	.string "attracted the attention of SILPH, who,\l"
	.string "along with BILL's recommendation,\l"
	.string "placed me in the best position to\l"
	.string "investigate them thoroughly: this one.$"

SilphS3_Miguel_Batalla_Texto_4:
	.string "Now that I've achieved my goal, I care\n"
	.string "little about what you may or may not be\l"
	.string "seeking around here; I've assembled the\l"
	.string "team I always wanted to, and it can only\l"
	.string "get better as I advance my research.\l"
	.string "Nonetheless…$"

SilphS3_Miguel_Batalla_Texto_5:
	.string "You don't get the chance to battle with\n"
	.string "someone like you every day, the one who\l"
	.string "finally took down LANCE. Turns out, I\l"
	.string "didn't lose to just anyone, even though\l"
	.string "that's how it might seem to the eyes of\l"
	.string "KANTO…$"

SilphS3_Miguel_Batalla_Texto_6:
	.string "All in all{PAUSE 20}…{PAUSE 20} challenging the real KANTO\n"
	.string "CHAMPION is the perfect way to test\l"
	.string "the primal power of my FOSSILS!$"

SilphS3_Miguel_Batalla_Texto_7:
	.string "Yep, as I thought, still not enough.$"

SilphS3_Miguel_Batalla_Texto_8:
	.string "Hah! It seems things haven't changed\n"
	.string "despite our encounter. I suppose I\l"
	.string "should acknowledge the role you've\l"
	.string "played. Facing someone of your skill\l"
	.string "level has pushed me further than I\l"
	.string "expected. Nonetheless, my research is\l"
	.string "still ongoing.$"

SilphS3_Miguel_Batalla_Texto_9:
	.string "With AERODACTYL and all the known\n"
	.string "FOSSILS from KANTO and HOENN in my\l"
	.string "possession, it's time to delve deeper\l"
	.string "into our understanding of them, and\l"
	.string "that's why SILPH brought me on board.$"

SilphS3_Miguel_Batalla_Texto_10:
	.string "According to my theories, the genuine\n"
	.string "potential of fossils is significantly\l"
	.string "different from what they originally\l"
	.string "possessed in the wild. A considerable\l"
	.string "portion of their essence is lost during\l"
	.string "the resurrection process.$"

SilphS3_Miguel_Batalla_Texto_11:
	.string "So, I'm gonna try to show this from now\n"
	.string "on. As long as you don't mess with my\l"
	.string "search, you can do whatever you want,\l"
	.string "right?$"

SilphS3_Miguel_Batalla_Move_1:
walk_in_place_up
step_end

SilphS3_Miguel_Batalla_Move_2:
emote_exclamation_mark
step_end

SilphS3_Miguel_Batalla_Move_3:
walk_slow_up
walk_slow_left
walk_slow_up
step_end

SilphS3_Miguel_Batalla_Move_3.1:
walk_slow_up
walk_slow_up
step_end

SilphS3_Miguel_Batalla_Move_4:
walk_slow_right
walk_slow_down
walk_in_place_down
step_end

SilphS3_Miguel_Batalla_Move_5:
face_up
step_end

SilphS3_Miguel_Batalla_Move_6:
walk_in_place_down
step_end

SilphS3_Miguel_Batalla_Move_7:
walk_slow_up
walk_slow_left
walk_in_place_left
step_end


SilphS3_Bill_Batalla::
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_1
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_1 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_2
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_3
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, SilphS3_Bill_Batalla_Move_4
waitmovement 0x0
delay 10
msgbox SilphS3_Bill_Batalla_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Bill_Batalla_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Bill_Batalla_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
delay 10
msgbox SilphS3_Bill_Batalla_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, SilphS3_Bill_Batalla_Move_2.1
waitmovement 0x0
delay 10
msgbox SilphS3_Bill_Batalla_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Bill_Batalla_Texto_7 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 3, SilphS3_Bill_Batalla_Move_5
waitmovement 0x0
applymovement 3, SilphS3_Bill_Batalla_Move_4
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_8 MSGBOX_AUTOCLOSE
delay 30
msgbox SilphS3_Bill_Batalla_Texto_8.1 MSGBOX_AUTOCLOSE
delay 30
applymovement 3, SilphS3_Bill_Batalla_Move_4
waitmovement 0x0
delay 10
msgbox SilphS3_Bill_Batalla_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, SilphS3_Bill_Batalla_Move_2.3
waitmovement 0x0
delay 10
msgbox SilphS3_Bill_Batalla_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Bill_Batalla_Texto_9.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, SilphS3_Bill_Batalla_Move_2.4
waitmovement 0x0
delay 10
msgbox SilphS3_Bill_Batalla_Texto_9.3 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Bill_Batalla_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Bill_Batalla_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, SilphS3_Bill_Batalla_Move_6
waitmovement 0x0
delay 10
msgbox SilphS3_Bill_Batalla_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_7
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_12 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_8
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_13 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Bill_Batalla_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Bill_Batalla_Texto_13.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_14 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_2.2
waitmovement 0x0
waitse
delay 10
msgbox SilphS3_Bill_Batalla_Texto_14.1 MSGBOX_AUTOCLOSE
delay 10
playse MUS_RG_ENCOUNTER_GYM_LEADER
delay 10
msgbox SilphS3_Bill_Batalla_Texto_15 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BILL_3, SilphS3_Bill_Batalla_Texto_16
msgbox SilphS3_Bill_Batalla_Texto_17 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Bill_Batalla_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
delay 10
msgbox SilphS3_Bill_Batalla_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_9
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 105
release
end

SilphS3_Bill_Batalla_Move_2.3:
delay_8
face_left
delay_16
delay_8
face_right
delay_8
step_end

SilphS3_Bill_Batalla_Move_2.4:
walk_in_place_right
step_end

SilphS3_Bill_Batalla_Move_2.2:
emote_exclamation_mark
step_end

SilphS3_Bill_Batalla_Move_2.1:
delay_8
face_up
delay_16
delay_8
face_player
delay_8
step_end

SilphS3_Bill_Batalla_Texto_1:
.string "BILL: Entonces vas tras el POKÉMON\n"
	.string "ESENCIA, ¿me equivoco, {PLAYER}?$"

SilphS3_Bill_Batalla_Texto_2:
.string "Cuando me derrotaste en SILPH, me\n"
	.string "diste una buena lección, he de\l"
	.string "admitirlo.$"

SilphS3_Bill_Batalla_Texto_3:
.string "Demostraste que un ROCKET, por muy\n"
	.string "ROCKET que sea, puede llegar a\l"
	.string "contar con un gran equipo.\p"
	.string "Subestimé lo que los POKÉMON corrientes\n"
	.string "podían llegar a dar si se entrenan bien.$"

SilphS3_Bill_Batalla_Texto_3.1:
	.string "Y al final, llevaste esa máxima al\n"
	.string "extremo, en la LIGA POKÉMON.$"

SilphS3_Bill_Batalla_Texto_4:
	.string "Tu actuación liberó a KANTO del yugo\n"
	.string "invisible al que LANCE sometía a sus\l"
	.string "habitantes, pero también acabaste con\l"
	.string "la serie de privilegios que a mí me\l"
	.string "proporcionaban.$"

SilphS3_Bill_Batalla_Texto_5:
	.string "Por suerte, siempre me llevé bien con\n"
	.string "SILPH, de forma que me han colocado a\l"
	.string "la dirección de uno de sus proyectos\l"
	.string "más importantes, algo que al fin y al\l"
	.string "cabo yo mismo iba a intentar por cuenta\l"
	.string "propia: extraer el máximo potencial\l"
	.string "alcanzable de PORYGON.$"

SilphS3_Bill_Batalla_Texto_6:
.string "No quiero decir con esto que doy\n"
	.string "por terminada mi faceta como\l"
	.string "coleccionista, pero KANTO ya\l"
	.string "está{PAUSE 25}…{PAUSE 25}muy vista.$"

SilphS3_Bill_Batalla_Texto_6.1:
	.string "Tengo todo cuanto quiero de esta región.\n"
	.string "Lon ejemplares de las AVES, todos los\l"
	.string "FÓSILES en mis vitrinas, toda la línea\l"
	.string "evolutiva de DRATINI a mi disposición{PAUSE 15}…{PAUSE 15}$"

SilphS3_Bill_Batalla_Texto_6.2:
	.string "Los 149 POKÉMON en mi POKÉDEX{PAUSE 25}…{PAUSE 25}solo\l"
	.string "MEW, desaparecido desde hace casi una\l"
	.string "década, se me resiste.\p"
	.string "Su posición actual es tan incierta que\n"
	.string "ni merece la pena pensar en ello.$"

SilphS3_Bill_Batalla_Texto_7:
.string "BILL: {PAUSE 15}…{PAUSE 15}$"

SilphS3_Bill_Batalla_Texto_8:
.string "¿El misterioso POKÉMON por el que\n"
	.string "estás aquí?$"

SilphS3_Bill_Batalla_Texto_8.1:
	.string "¿En serio, {PLAYER}?$"

SilphS3_Bill_Batalla_Texto_9:
.string "¿De verdad crees que si considerase la\n"
	.string "más mínima posibilidad de que tal\l"
	.string "POKÉMON existiera, no estaría ahí\l"
	.string "fuera tratando de encontrarlo?$"

SilphS3_Bill_Batalla_Texto_9.1:
	.string "He leído los documentos referentes\n"
	.string "a tal invención, y he comprobado\l"
	.string "en mis propias manos que nada de\l"
	.string "lo que ahí dice existe.$"

SilphS3_Bill_Batalla_Texto_9.2:
	.string "Ya he pateado y hablado con todo\n"
	.string "PUEBLO LAVANDA, y no hay ni el\l"
	.string "menor rastro o referencia a eso.$"

SilphS3_Bill_Batalla_Texto_9.3:
	.string "Debe haber sido escrito por fanáticos\n"
	.string "religiosos, más por un acto de fe\l"
	.string "que de conocimiento empírico real.$"

SilphS3_Bill_Batalla_Texto_10:
	.string "Don't you believe me?$"

SilphS3_Bill_Batalla_Texto_11:
	.string "The documents are right there, at the\n"
	.string "end of my desk; you can verify it\l"
	.string "yourself.$"

SilphS3_Bill_Batalla_Texto_12:
.string "¡No tan rápido, {PLAYER}!$"

SilphS3_Bill_Batalla_Texto_13:
	.string "Acabo de decirte que estoy trabajando\n"
	.string "en nuevos prototipos de PORYGON,\l"
	.string "¿y ni siquiera te dignas\l"
	.string "a preguntarme por ello?\p"
	.string "¿Tan mal te caigo después de todo?\n"
	.string "Vamos, sé que hemos tenido nuestras\l"
	.string "diferencias, pero en el fondo sé\l"
	.string "valorar a un buen ENTRENADOR.$"

SilphS3_Bill_Batalla_Texto_13.1:
	.string "Alguien como tú debe estar ansioso\n"
	.string "por saber más acerca de eso.$"

SilphS3_Bill_Batalla_Texto_13.2:
	.string "¡Y no por leer esos aburridos documentos,\n"
	.string "escritos por alguien que inventó POKÉMON\l"
	.string "donde no los había, solo para oír las\l"
	.string "respuestas que temía darse él mismo!$"

SilphS3_Bill_Batalla_Texto_14:
.string "Para tu información, logramos superar\n"
	.string "el poder base de DRAGONITE, gracias\l"
	.string "a una última actualización de PORYGON.$"

SilphS3_Bill_Batalla_Texto_14.1:
	.string "Así es, siguiendo la línea evolutiva\n"
	.string "de PORYGON2 en lugar de la corrupta\l"
	.string "línea de PORYGON-Z.\p"
	.string "La ofensiva alcanzada por tal POKÉMON\n"
	.string "no conoce igual en toda KANTO.\l"
	.string "De eso trata esto, ¿no, {PLAYER}?\l"
	.string "De números puros y duros, no\l"
	.string "estúpidas supersticiones de\l"
	.string "POKÉMON que siquiera existen.$"


SilphS3_Bill_Batalla_Texto_15:
.string "También, según últimas estimaciones, el\n"
	.string "poder global de mi actual equipo ya\l"
	.string "ha superado el nivel del equipo con el\l"
	.string "que LANCE pudo someter a KANTO; el\l"
	.string "mismo que tú enfrentaste tras las\l"
	.string "puertas del HALL DE LA FAMA.\p"
	.string "La cuestión es{PAUSE 25}…{PAUSE 25}\n"
	.string "¿¡Podría este equipo, lo último en\l"
	.string "tecnología, derrocar también al\l"
	.string "máximo exponente del duro\l"
	.string "entrenamiento?!$"

SilphS3_Bill_Batalla_Texto_16:
.string "Impresionante, tengo que admitir\n"
	.string "que estás hecho de otra pasta.$"

SilphS3_Bill_Batalla_Texto_17:
.string "Ni en mis mejores sueños pude imaginar\n"
	.string "que llegaría a ver algo como PORYGON3.\l"
	.string "Es{PAUSE 25}…{PAUSE 25} casi perfecto.\p"
	.string "4 inmunidades, ofensiva descomunal, gran\n"
	.string "VELOCIDAD{PAUSE 15}…{PAUSE 15} de no ser por su\l"
	.string "DEFENSA FÍSICA{PAUSE 15}…{PAUSE 15} sería perfecto.$"

SilphS3_Bill_Batalla_Texto_18:
.string "Por suerte, aún se puede optimizar un\n"
	.string "poco más a PORYGON.\l"
	.string "Eso sí: presiento que ya nos hallamos\l"
	.string "en un punto donde las mejoras serán\l"
	.string "bastante despreciables, solo queda\l"
	.string "luchar por elevar algo más esa curva,\l"
	.string "antes de que la mejora no sea mayor\l"
	.string "a un 0,01%.\p"
	.string "¡La ley de beneficios\n"
	.string "decrecientes es dura!$"

SilphS3_Bill_Batalla_Texto_19:
.string "En fin, vuelvo al trabajo, a falta\n"
	.string "de nuevos POKÉMON que añadir a mi\l"
	.string "colección, este proyecto me ilusiona.\p"
	.string "Si no puedes tener a más POKÉMON raros\n"
	.string "y poderosos, ¿qué mejor que comenzar\l"
	.string "a crearlos tú mismo?$"

SilphS3_Bill_Batalla_Move_1:
walk_in_place_up
step_end

SilphS3_Bill_Batalla_Move_2:
walk_in_place_down
step_end

SilphS3_Bill_Batalla_Move_3:
walk_up
walk_up
face_left
step_end

SilphS3_Bill_Batalla_Move_4:
walk_in_place_right
step_end

SilphS3_Bill_Batalla_Move_5:
emote_exclamation_mark
step_end

SilphS3_Bill_Batalla_Move_6:
walk_in_place_left
delay_16
walk_in_place_right
step_end

SilphS3_Bill_Batalla_Move_7:
walk_slow_left
delay_8
walk_slow_left
delay_8
walk_in_place_left
step_end

SilphS3_Bill_Batalla_Move_8:
face_up
step_end

SilphS3_Bill_Batalla_Move_9:
face_left
step_end

SilphS3_Documento_Pokemon_Esencia::
compare VAR_UNUSED_0x40F7, 105
goto_if_gt SilphS3_Documento_Pokemon_Esencia_2
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_3.2 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 106
release
end

SilphS3_Documento_Pokemon_Esencia_2::
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_3.2 MSGBOX_AUTOCLOSE
release
end

SilphS3_Documento_Pokemon_Esencia_Texto_1:
.string "-LA LEYENDA DEL POKÉMON ESENCIA,\n"
	.string "AQUEL QUE DA SENTIDO A KANTO-\l"
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}\l"
	.string "Que PUEBLO LAVANDA y su TORRE POKÉMON\l"
	.string "se asentaran al sur del TÚNEL ROCA no\l"
	.string "es mera casualidad, fue allí donde sus\l"
	.string "primeros habitantes lograron establecer\l"
	.string "contacto con el -POKÉMON ESENCIA-.$"

SilphS3_Documento_Pokemon_Esencia_Texto_1.1:
	.string "Este, a diferencia del resto de POKÉMON,\n"
	.string "no cuenta con una forma definida, y\l"
	.string "puede presentarse en cualquier lugar\l"
	.string "y de cualquier modo; su presencia es\l"
	.string "tal, que forma parte activa de cada\l"
	.string "uno de los elementos que conforman\l"
	.string "y modelan KANTO.\l"
	.string "En cada buena o mala acción, momento de\l"
	.string "calma o iluminación, el POKÉMON ESENCIA\l"
	.string "se encontrará allí, solo observando\l"
	.string "el devenir de acontecimientos, atento\l"
	.string "a ese momento de incertidumbre, previo\l"
	.string "a la acción{PAUSE 15}…{PAUSE 15} donde todo es posible{PAUSE 15}…{PAUSE 15}$"

SilphS3_Documento_Pokemon_Esencia_Texto_2:
	.string "Keep reading?$"

SilphS3_Documento_Pokemon_Esencia_Texto_3:
.string "Un ser de tal naturaleza: omnipresente\n"
	.string "y, para algunos, omnipotente, no puede\l"
	.string "ser catalogado con los parámetros que\l"
	.string "rigen al resto de POKÉMON; el mero\l"
	.string "hecho de ser categorizado produciría\l"
	.string "automáticamente una reducción de la\l"
	.string "auténtica complejidad de tal ser.\p"
	.string "No obstante, aquellos primeros\n"
	.string "habitantes de PUEBLO LAVANDA\l"
	.string "alcanzaron un grado de espiritualidad,\l"
	.string "por el cual lograron comunicarse con\l"
	.string "-EL POKÉMON ESENCIA-.\p"
	.string "Con ello, se fundó un culto en\n"
	.string "torno al ser en cuestión.$"

SilphS3_Documento_Pokemon_Esencia_Texto_3.1:
	.string "Estos, iluminados por su sabiduría,\n"
	.string "perdieron todo apego por el mundo\l"
	.string "material, y con ello el contacto con\l"
	.string "el resto de la población de KANTO, hasta\l"
	.string "el punto de que, con el paso de las\l"
	.string "generaciones, nadie vive ahora para\l"
	.string "recordar la existencia de tal culto.$"

SilphS3_Documento_Pokemon_Esencia_Texto_3.2:
	.string "Mucho menos para probar la leyenda del\n"
	.string "-POKÉMON ESENCIA-.\l"
	.string "De ser cierta, y dicho culto existir,\l"
	.string "seguiría oculto, en algún rincón de\l"
	.string "PUEBLO LAVANDA{PAUSE 5}…{PAUSE 5}$"

SilphS3_Sotano::
lock
msgbox SilphS3_Sotano_Texto_1 MSGBOX_SIGN
release
end

SilphS3_Sotano_Texto_1:
	.string "SILPH CO.'s Private Files: S3$"

SilphS2_Sotano::
lock
msgbox SilphS2_Sotano_Texto_1 MSGBOX_SIGN
release
end

SilphS2_Sotano_Texto_1:
	.string "SILPH CO.'s Private Files: S2$"


SilphS1_Sotano::
lock
msgbox SilphS1_Sotano_Texto_1 MSGBOX_SIGN
release
end

SilphS1_Sotano_Texto_1:
	.string "SILPH CO.'s Private Files: S1$"


SilphS1_Sotano_2::
lock
msgbox SilphS1_Sotano_2_Texto_1 MSGBOX_SIGN
release
end

SilphS1_Sotano_2_Texto_1:
	.string "SILPH CO.'s Private Files$"

