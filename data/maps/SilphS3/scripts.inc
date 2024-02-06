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
	.string "... ... He is deep working, completely in\n"
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
	.string "SPECIAL ATTACK: 120\l"
	.string "SPECIAL DEFENSE: 95\l"
	.string "SPEED: 99\l"
	.string "TOTAL: 600\p"
	.string "POKÉMON derived from the deadliest\n"
	.string "BUG-type predator of UNOVA 300 million\l"
	.string "years ago, of which we are unaware of\l"
	.string "its BASE STATS, but we estimate them to\l"
	.string "be around 520-540, with a significantly\l"
	.string "low SPECIAL ATTACK ranging between 40\l"
	.string "and 60 points. Its main enhancement\l"
	.string "between the original GENESECT and the\l"
	.string "modified version lies in that 60-80\l"
	.string "increase in SPECIAL ATTACK, giving\l"
	.string "GENESECT a total of 600 BASE STATS.\l"
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
	.string "SPECIAL ATTACK: 160\l"
	.string "SPECIAL DEFENSE: 105\l"
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
	.string "WISHIWASHI BANCO:\p"
	.string "HP: 45\n"
	.string "ATTACK: 140\l"
	.string "DEFENSE: 130\l"
	.string "SPECIAL ATTACK: 140\l"
	.string "SPECIAL DEFENSE: 135\l"
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
	.string "SPECIAL ATTACK: 155\l"
	.string "SPECIAL DEFENSE: 95\l"
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
applymovement 2, SilphS3_Miguel_Batalla_Move_5
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, SilphS3_Miguel_Batalla_Move_6
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_6
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CMIGUEL_3, SilphS3_Miguel_Batalla_Texto_7
msgbox SilphS3_Miguel_Batalla_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Miguel_Batalla_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_5
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_6
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_7
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 104
release
end

SilphS3_Miguel_Batalla_Texto_1:
	.string "????: You again, {PLAYER}?$"

SilphS3_Miguel_Batalla_Texto_2:
	.string "C.MIGUEL: The PRESIDENT already\n"
	.string "informed us that soon a ROCKET could\l"
	.string "pay us a little visit to this privileged\l"
	.string "place; I don't know why I'm not about\l"
	.string "who's in charge.$"

SilphS3_Miguel_Batalla_Texto_3:
	.string "As you can see, ROCKET ADMIN., you're\n"
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
	.string "Nonetheless...$"

SilphS3_Miguel_Batalla_Texto_5:
	.string "You don't get the chance to battle with\n"
	.string "someone like you every day, the one who\l"
	.string "finally took down LANCE. Turns out, I\l"
	.string "didn't lose to just anyone, even though\l"
	.string "that's how it might seem to the eyes of\l"
	.string "KANTO...$"

SilphS3_Miguel_Batalla_Texto_6:
	.string "All in all... challenging the real KANTO\n"
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
applymovement 3, SilphS3_Bill_Batalla_Move_4
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_3 MSGBOX_AUTOCLOSE
msgbox SilphS3_Bill_Batalla_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_5 MSGBOX_AUTOCLOSE
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
applymovement 3, SilphS3_Bill_Batalla_Move_4
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Bill_Batalla_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Bill_Batalla_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_6
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_7
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_12 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_8
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_13 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_14 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox SilphS3_Bill_Batalla_Texto_15 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BILL_3, SilphS3_Bill_Batalla_Texto_16
msgbox SilphS3_Bill_Batalla_Texto_17 MSGBOX_AUTOCLOSE
msgbox SilphS3_Bill_Batalla_Texto_18 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_9
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 105
release
end

SilphS3_Bill_Batalla_Texto_1:
	.string "BILL: So, you're after that ESSENCE\n"
	.string "POKÉMON, huh, {PLAYER}?$"

SilphS3_Bill_Batalla_Texto_2:
	.string "When you took me down at Silph to push\n"
	.string "forward your plot against Lance's\l"
	.string "government, you really showed me the\l"
	.string "ropes, I gotta say.$"

SilphS3_Bill_Batalla_Texto_3:
.string "Demostraste que un ROCKET, por muy\n"
	.string "ROCKET que sea, puede llegar a\l"
	.string "contar con un gran equipo,\l"
	.string "subestimé lo que los POKÉMON\l"
	.string "corrientes podían llegar a dar con\l"
	.string "un buen entrenamiento, algo que\l"
	.string "llevaste al extremo al derrotar a\l"
	.string "ROJO y después a LANCE, el\l"
	.string "entrenador al que nadie podía\l"
	.string "toserle en KANTO durante el último\l"
	.string "lustro.$"

SilphS3_Bill_Batalla_Texto_4:
.string "Gracias a tu actuación en la LIGA\n"
	.string "POKÉMON liberaste a KANTO del yugo\l"
	.string "invisible al que LANCE sometía a\l"
	.string "sus habitantes, pero también\l"
	.string "acabaste con la serie de\l"
	.string "privilegios que ese gobierno me\l"
	.string "proporcionaba.$"

SilphS3_Bill_Batalla_Texto_5:
.string "Sin embargo, yo sé cuidar mis\n"
	.string "contactos, y siempre me llevé bien\l"
	.string "con SILPH, de modo que me han\l"
	.string "colocado a la dirección de uno de\l"
	.string "sus proyectos más importantes,\l"
	.string "algo que al fin y al cabo yo mismo\l"
	.string "iba a intentar por cuenta propia:\l"
	.string "extraer el máximo potencial\l"
	.string "alcanzable de PORYGON.$"

SilphS3_Bill_Batalla_Texto_6:
.string "No quiero decir con esto que dé\n"
	.string "por terminada mi faceta como\l"
	.string "coleccionista, pero KANTO ya\l"
	.string "está...muy visto, tengo todo cuanto\l"
	.string "quiero de esta región: pude\l"
	.string "hacerme con ejemplares de las AVES\l"
	.string "LEGENDARIAS, tengo todos los\l"
	.string "FÓSILES y el pseudolegendario\l"
	.string "DRAGONITE a mi disposición, los\l"
	.string "149 POKÉMON en mi POKÉDEX...solo\l"
	.string "MEW, desaparecido hace casi una\l"
	.string "década, se me resiste, siendo su\l"
	.string "posición actual tan incierta que\l"
	.string "ni merece la pena pensar en ello.$"

SilphS3_Bill_Batalla_Texto_7:
.string "BILL: ...$"

SilphS3_Bill_Batalla_Texto_8:
.string "¿El misterioso POKÉMON por el que\n"
	.string "estás aquí?\l"
	.string "¡Ah, si, es cierto!$"

SilphS3_Bill_Batalla_Texto_9:
.string "¿De verdad crees, ROCKET, que si\n"
	.string "considerase la posibilidad de que\l"
	.string "tal POKÉMON existiera, no estaría\l"
	.string "ahí fuera tratando de encontrarlo?\l"
	.string "He leído los documentos referentes\l"
	.string "a tal invención, y he comprobado\l"
	.string "en mis propias manos que nada de\l"
	.string "lo que ahí dice existe, debieron\l"
	.string "de ser escritos por fanáticos\l"
	.string "religiosos más por un acto de fe\l"
	.string "que de conocimiento empírico real.$"

SilphS3_Bill_Batalla_Texto_10:
.string "¿No me crees?$"

SilphS3_Bill_Batalla_Texto_11:
.string "Tienes esos documentos ahí mismo,\n"
	.string "al extremo de mi escritorio,\l"
	.string "compruébalo tú mismo.$"

SilphS3_Bill_Batalla_Texto_12:
.string "BILL: ¡No tan rápido {PLAYER}!$"

SilphS3_Bill_Batalla_Texto_13:
	.string "Acabo de decirte que estoy\n"
	.string "trabajando en nuevos prototipos de\l"
	.string "PORYGON y siquiera te dignas a\l"
	.string "preguntarme por ello.\l"
	.string "¿Tan mal te caigo después de todo?\l"
	.string "Vamos, sé que hemos tenido\l"
	.string "nuestras diferencias, pero en el\l"
	.string "fondo sé valorar a los grandes\l"
	.string "entrenadores, y sé que alguien\l"
	.string "como tú estaría ansioso por saber\l"
	.string "más del potencial de un POKÉMON\l"
	.string "como PORYGON, antes de leer esos\l"
	.string "aburridos documentos escritos por\l"
	.string "alguien que inventó POKÉMON donde\l"
	.string "no los había para oir las\l"
	.string "respuestas que temía darse él\l"
	.string "mismo.$"

SilphS3_Bill_Batalla_Texto_14:
.string "Para tu información, hemos logrado\n"
	.string "superar el poder base de DRAGONITE\l"
	.string "mediante una última actualización,\l"
	.string "siguiendo la línea evolutiva de\l"
	.string "PORYGON2 en lugar de la corrupta\l"
	.string "línea de PORYGON-Z, la capacidad\l"
	.string "ofensiva alcanzada por tal POKÉMON\l"
	.string "no conoce igual en todo KANTO, de\l"
	.string "eso trata esto, ¿no {PLAYER}?\l"
	.string "De números puros y duros, no\l"
	.string "estúpidas supersticiones de\l"
	.string "POKÉMON que siquiera existen.$"


SilphS3_Bill_Batalla_Texto_15:
.string "También, según nuestras últimas\n"
	.string "estimaciones, el poder global de\l"
	.string "mi actual equipo de 6 POKÉMON ya\l"
	.string "ha superado el nivel del equipo\l"
	.string "con el que LANCE pudo someter a\l"
	.string "KANTO, el mismo que tú enfrentaste\l"
	.string "a las puertas del HALL DE LA FAMA.\l"
	.string "La cuestión es...\l"
	.string "¿¡Podría este equipo, lo último en\l"
	.string "tecnología, derrocar también al\l"
	.string "máximo exponente del duro\l"
	.string "entrenamiento?!$"

SilphS3_Bill_Batalla_Texto_16:
.string "Impresionante, tengo que admitir\n"
	.string "que tu equipo está hecho de otra\l"
	.string "pasta.$"

SilphS3_Bill_Batalla_Texto_17:
.string "Ni en mis mejores sueños pude\n"
	.string "imaginar que llegaría a ver tal\l"
	.string "POKÉMON como PORYGON3, es...casi\l"
	.string "perfecto, su combinación de tipos\l"
	.string "con 3 inmunidades, ofensiva\l"
	.string "descomunal y VELOCIDAD, de no ser\l"
	.string "por su DEFENSA FÍSICA..., sería\l"
	.string "perfecto.$"

SilphS3_Bill_Batalla_Texto_18:
.string "Y aún así has podido derrotarme,\n"
	.string "entiendo cómo alguien como LANCE\l"
	.string "pudo caer también derrotado, pero\l"
	.string "no creas que he dicho mi última\l"
	.string "palabra ROCKET, sé valorar a mis\l"
	.string "rivales y aprender de ellos, aún\l"
	.string "queda mucho para alcanzar el\l"
	.string "máximo potencial alcanzable de\l"
	.string "PORYGON, a pesar de que presiento\l"
	.string "que ya nos hallamos en un punto\l"
	.string "donde las mejoras serán ya\l"
	.string "bastante despreciables, lucharemos\l"
	.string "por elevar algo más esa curva\l"
	.string "antes de que inevitablente se\l"
	.string "vuelva imposible mejorar siquiera\l"
	.string "un 0,01%, la ley de beneficios\l"
	.string "decrecientes es dura chico.$"

SilphS3_Bill_Batalla_Texto_19:
.string "En fin, vuelvo al trabajo, a falta\n"
	.string "de nuevos POKÉMON que añadir a mi\l"
	.string "colección, este proyecto me\l"
	.string "ilusiona, si no puedes tener a más\l"
	.string "POKÉMON raros y poderosos, ¿qué\l"
	.string "mejor que comenzar a crearlos tú\l"
	.string "mismo?$"

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
walk_in_place_right
step_end

SilphS3_Bill_Batalla_Move_7:
walk_slow_left
walk_slow_left
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
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 106
release
end

SilphS3_Documento_Pokemon_Esencia_2::
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_1 MSGBOX_AUTOCLOSE
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_3 MSGBOX_AUTOCLOSE
release
end

SilphS3_Documento_Pokemon_Esencia_Texto_1:
.string "-LA LEYENDA DEL POKÉMON ESENCIA,\n"
	.string "AQUEL QUE DA SENTIDO A KANTO:\l"
	.string "... ...\l"
	.string "... ...\l"
	.string "Que PUEBLO LAVANDA y su TORRE\l"
	.string "POKÉMON se asentaran al sur del\l"
	.string "TÚNEL ROCA no es mera casualidad,\l"
	.string "fue allí donde sus primeros\l"
	.string "habitantes lograron establecer\l"
	.string "contacto con aquel que llamaron\l"
	.string "-POKÉMON ESENCIA-, este, a\l"
	.string "diferencia del resto de POKÉMON,\l"
	.string "no contaba con una forma definida,\l"
	.string "podía presentarse en cualquier\l"
	.string "lugar y forma, un POKÉMON de tal\l"
	.string "poder y presencia que forma parte\l"
	.string "de cada uno de los píxeles que\l"
	.string "conforman KANTO, en cada buena o\l"
	.string "mala acción, momento de calma o\l"
	.string "iluminación, el POKÉMON ESENCIA se\l"
	.string "encontrará allí, simplemente\l"
	.string "observando el devenir de\l"
	.string "acontecimientos de la región de\l"
	.string "KANTO, atento a aquel momento de\l"
	.string "incertidumbre previo a la acción...$"

SilphS3_Documento_Pokemon_Esencia_Texto_2:
.string "¿Seguir leyendo?$"

SilphS3_Documento_Pokemon_Esencia_Texto_3:
.string "Un ser de tal naturaleza,\n"
	.string "omnipresente y, para algunos,\l"
	.string "también omnipotente, no podía ser\l"
	.string "catalogado con los parámetros que\l"
	.string "rigen al resto de POKÉMON, el mero\l"
	.string "hecho de ser categorizado\l"
	.string "produciría automáticamente una\l"
	.string "reducción de la auténtica\l"
	.string "complejidad de tal ser, no\l"
	.string "obstante, aquellos primeros\l"
	.string "habitantes de PUEBLO LAVANDA\l"
	.string "alcanzaron tal nivel de\l"
	.string "espiritualidad que lograron entrar\l"
	.string "en contacto con -EL POKÉMON\l"
	.string "ESENCIA-, formando un culto en\l"
	.string "torno a este ser, estos,\l"
	.string "iluminados por la sabiduría del\l"
	.string "POKÉMON ESENCIA, perdieron todo\l"
	.string "apego por el mundo material, y con\l"
	.string "ello el contacto con el resto de\l"
	.string "la población de KANTO, hasta el\l"
	.string "punto de que, con el paso de las\l"
	.string "generaciones, nadie vive ahora\l"
	.string "para recordar la existencia de\l"
	.string "este culto, mucho menos la del\l"
	.string "-POKÉMON ESENCIA-, si la leyenda\l"
	.string "es cierta, dicho culto aún existe,\l"
	.string "oculto en algún rincón de PUEBLO\l"
	.string "LAVANDA...$"

SilphS3_Sotano::
lock
msgbox SilphS3_Sotano_Texto_1 MSGBOX_SIGN
release
end

SilphS3_Sotano_Texto_1:
.string "ARCHIVOS PRIVADOS DE SILPH S.A.\n"
	.string "S3$"

SilphS2_Sotano::
lock
msgbox SilphS2_Sotano_Texto_1 MSGBOX_SIGN
release
end

SilphS2_Sotano_Texto_1:
.string "ARCHIVOS PRIVADOS DE SILPH S.A.\n"
	.string "S2$"


SilphS1_Sotano::
lock
msgbox SilphS1_Sotano_Texto_1 MSGBOX_SIGN
release
end

SilphS1_Sotano_Texto_1:
.string "ARCHIVOS PRIVADOS DE SILPH S.A.\n"
	.string "S1$"

