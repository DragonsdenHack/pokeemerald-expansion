CinnabarMansionS2_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarMansionS2_OnFrame
	.byte 0

CinnabarMansionS2_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 78, CinnabarMansion_S2_Escena_7
	.2byte 0

CinnabarMansionS2_EventScript_Cientifico::
	trainerbattle_single TRAINER_MARY, CinnabarMansionS2_Text_CientificoIntro, CinnabarMansionS2_Text_CientificoDefeated
	msgbox CinnabarMansionS2_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarMansionS2_EventScript_Cientifico2::
	trainerbattle_single TRAINER_JONAS, CinnabarMansionS2_Text_Cientifico2Intro, CinnabarMansionS2_Text_Cientifico2Defeated
	msgbox CinnabarMansionS2_Text_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarMansionS2_EventScript_Cientifico3::
	trainerbattle_single TRAINER_KAYLEY, CinnabarMansionS2_Text_Cientifico3Intro, CinnabarMansionS2_Text_Cientifico3Defeated
	msgbox CinnabarMansionS2_Text_Cientifico3PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarMansionS2Documento_100::
lock     
showmonpic SPECIES_TAUROS_X, 10, 3  
playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_100:
	.string "TAUROS-X: ROCK/NORMAL\p"
	.string "HP: 75\n"
	.string "ATTACK: 155\l"
	.string "DEFENSE: 150\l"
	.string "SP. ATK: 30\l"
	.string "SP. DEF: 90\l"
	.string "SPEED: 90\l"
	.string "TOTAL: 590\p"
	.string "We succeeded in enhancing the wild\n"
	.string "charging capacity of TAUROS. We\l"
	.string "discovered that its SPEED and NORMAL\l"
	.string "TYPE were major constraints for\l"
	.string "developing its full strength and\l"
	.string "endurance. Once we were able to reduce\l"
	.string "its SPEED while incorporating the genes\l"
	.string "of RHYDON responsible for its ROCK\l"
	.string "TYPE, its physical ability surged to\l"
	.string "unprecedented levels; anything it\l"
	.string "strikes is obliterated.$"



CinnabarMansionS2Documento_101::
lock     
showmonpic SPECIES_MAGMORTAR_Y, 10, 3  
playmoncry SPECIES_MAGMORTAR, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_101:
	.string "MAGMORTAR-Y: FIRE\p"
	.string "HP: 75\n"
	.string "ATTACK: 95\l"
	.string "DEFENSE: 97\l"
	.string "SP. ATK: 165\l"
	.string "SP. DEF: 105\l"
	.string "SPEED: 103\l"
	.string "TOTAL: 640\p"
	.string "BLAINE's belief about MAGMAR line being\n"
	.string "the FIRE-TYPE POKÉMON with the\l"
	.string "greatest special potential in all of\l"
	.string "KANTO, surpassing even MOLTRES, has\l"
	.string "been thoroughly demonstrated; the\l"
	.string "flames of MAGMORTAR-Y will outshine\l"
	.string "the LEGENDARY ones. Any target in the\l"
	.string "sights of its massive cannons will be\l"
	.string "struck with no fail %.$"



CinnabarMansionS2Documento_102::
lock     
showmonpic SPECIES_DEOXYS_DEFENSE, 10, 3  
playmoncry SPECIES_DEOXYS_DEFENSE, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_102:
	.string "DEOXYS -DEFENSE-:\p"
	.string "HP: 100\n"
	.string "ATTACK: 20\l"
	.string "DEFENSE: 180\l"
	.string "SP. ATK: 70\l"
	.string "SP. DEF: 180\l"
	.string "SPEED: 50\l"
	.string "TOTAL: 600\p"
	.string "We consider its genetic combination,\n"
	.string "resulting from a mutation, as a miracle\l"
	.string "of nature, a miracle that has endowed it\l"
	.string "in its DEFENSE form with the greatest\l"
	.string "bulk known to date, a bulk that even\l"
	.string "exceeds LUGIA's one.$"



CinnabarMansionS2Documento_103::
lock     
showmonpic SPECIES_DEOXYS_ATTACK, 10, 3  
playmoncry SPECIES_DEOXYS_ATTACK, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_103, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_103:
	.string "DEOXYS -ATTACK-:\p"
	.string "HP: 100\n"
	.string "ATTACK: 20\l"
	.string "DEFENSE: 75\l"
	.string "SP. ATK: 180\l"
	.string "SP. DEF: 75\l"
	.string "SPEED: 150\l"
	.string "TOTAL: 600\p"
	.string "We regard its genetic combination\n"
	.string "resulting from a mutation as a miracle\l"
	.string "of nature, a miracle that has endowed it\l"
	.string "in its ATTACK form with the greatest\l"
	.string "SPECIAL ATTACK we know of to date,\l"
	.string "psychic powers that exceed even\l"
	.string "MEWTWO's ones.$"



CinnabarMansionS2Documento_104::
lock     
showmonpic SPECIES_AERODACTYL_PRIMAL, 10, 3  
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_104, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_104:
	.string "AERODACTYL -PRIMAL-:\p"
	.string "HP: 80\n"
	.string "ATTACK: 145\l"
	.string "DEFENSE: 105\l"
	.string "SP. ATK: 60\l"
	.string "SP. DEF: 85\l"
	.string "SPEED: 140\l"
	.string "TOTAL: 615\p"
	.string "TYPE: ROCK/DRAGON\n"
	.string "ABILITY: LEVITATE\l"
	.string "La verdadera forma en estado\l"
	.string "salvaje de AERODACTYL hace 300\l"
	.string "millones de años, el depredador\l"
	.string "más temible en su momento, con una\l"
	.string "VELOCIDAD inigualable de la que\l"
	.string "ninguna presa podía escapar.$"



CinnabarMansionS2Documento_105::
lock     
showmonpic SPECIES_MEWTWO, 10, 3  
playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_105, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_105:
	.string "NUMBER 1: MEWTWO\p"
	.string "HP: 106\n"
	.string "ATTACK: 110\l"
	.string "DEFENSE: 90\l"
	.string "SP. ATK: 154\l"
	.string "SP. DEF: 90\l"
	.string "SPEED: 130\l"
	.string "TOTAL: 680\p"
	.string "A POKÉMON designed to rule regions with\n"
	.string "an iron fist, its offensive-defensive\l"
	.string "ratio is unmatched, although its\l"
	.string "PSYCHIC powers are inferior to DEOXYS.\l"
	.string "It still hold untapped potential that\l"
	.string "could push its BASE special attack\l"
	.string "close to 200.$"



CinnabarMansionS2Documento_106::
lock     
msgbox CinnabarMansionS2Documento_Text_106, MSGBOX_DEFAULT
release     
end

CinnabarMansionS2Documento_Text_106:
	.string "HO-OH, LUGIA, RAYQUAZA…{PAUSE 25} All of them are\n"
	.string "formidable POKÉMON, but unfeasible for\l"
	.string "experimentation and implementing\l"
	.string "modifications that could increase their\l"
	.string "already vast power. On the other hand,\l"
	.string "MEW is a different story, it possesses\l"
	.string "the best genetic base, both in terms of\l"
	.string "malleability and possible combinations.\l"
	.string "This leads us to believe that with\l"
	.string "MEWTWO we only achieved a favorable\l"
	.string "genetic combination compared to MEW,\l"
	.string "but it wasn't the most favorable\l"
	.string "possible, nor the most optimal.$"



CinnabarMansionS2Documento_107::
lock     
showmonpic SPECIES_METAGROSS, 10, 3  
playmoncry SPECIES_METAGROSS, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_107, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes2, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes3, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes4, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes5, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_107:
.string "METAGROSS AND DEVON'S\n"
	.string "MASQUERADE AT HOENN:\l"
	.string "…\l"
	.string "…\l"
	.string "Most people know that the\l"
	.string "characteristic PSEUDO.LEGENDARY of\l"
	.string "HOENN is SALAMENCE, a dragon that\l"
	.string "reflects the power inside a place as\l"
	.string "the METEOR FALLS, with a power similar\l"
	.string "to DRAGONITE's. However, we can find\l"
	.string "another POKÉMON in HOENN with\l"
	.string "attributes of a PSEUDO-LEGENDARY, and\l"
	.string "it is none other than METAGROSS.$"

CinnabarMansionS2Documento_Text_107YesNo:
.string "Keep reading?$"

CinnabarMansionS2Documento_107No::
hidemonpic
release
end

CinnabarMansionS2Documento_Text_107Yes:
	.string "HOENN is the only region where this\n"
	.string "happens, 2 pseudo-legendaries sharing\l"
	.string "territory. Some say this coincidence\l"
	.string "occurs because of the enormous variety\l"
	.string "of fauna and flora present in HOENN.\l"
	.string "However, the biology of the\l"
	.string "evolutionary line of METAGROSS has\l"
	.string "almost nothing to do with this fauna\l"
	.string "and flora, and our latest research\l"
	.string "suggests that the reason for the\l"
	.string "existence of 2 pseudo-legendaries in\l"
	.string "the same region are different.$"



CinnabarMansionS2Documento_Text_107Yes2:
	.string "DEVON CO. is the SILPH CO. of HOENN,\n"
	.string "however, it has never publicly released\l"
	.string "achievements of greater significance\l"
	.string "than POKÉ BALLS like the NET BALL, DIVE\l"
	.string "BALL, REPEAT BALL or TIMER BALL, in\l"
	.string "addition to the POKÉNAV, even though\l"
	.string "we know it has resources and capability\l"
	.string "to, like SILPH, create an artificial\l"
	.string "POKÉMON, like PORYGON.$"



CinnabarMansionS2Documento_Text_107Yes3:
	.string "This is the point where the son of\n"
	.string "DEVON's PRESIDENT, STEVEN, comes into\l"
	.string "play: he aims to be recognized as the\l"
	.string "top TRAINER in HOENN while also being\l"
	.string "an expert in FOSSILS. However, having\l"
	.string "ARMALDO and CRADILY isn't sufficient\l"
	.string "to win the CHAMPIONSHIP. Thus, DEVON\l"
	.string "creates a custom POKÉMON to ensure\l"
	.string "STEVEN has the necessary prowess to\l"
	.string "claim the CHAMPION title.$"




CinnabarMansionS2Documento_Text_107Yes4:
	.string "There ain't a single BELDUM anywhere in\n"
	.string "HOENN except for STEVEN's ones, and\l"
	.string "he's got plenty of them. But he never\l"
	.string "spilled where they came from or how\l"
	.string "they evolved. It starts with a BELDUM\l"
	.string "that only knows one move (TAKE DOWN,\l"
	.string "which would've probably gotten it wiped\l"
	.string "out in the wild for not having enough\l"
	.string "ways to defend itself), and ends up with\l"
	.string "a METAGROSS that's all cold, robotic,\l"
	.string "and calculating, with a type combo\l"
	.string "that's way too convenient, like it was\l"
	.string "custom-made or something.$"




CinnabarMansionS2Documento_Text_107Yes5:
	.string "If all of this were confirmed, we would\n"
	.string "be facing the true first POKÉMON\l"
	.string "altered by humans, with such a high\l"
	.string "level of success that it managed to\l"
	.string "replicate the power of a\l"
	.string "PSEUDO-LEGENDARY, pretending to be\l"
	.string "one and being universally regarded as\l"
	.string "such.$"

CinnabarMansionS2_Blaine::
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Blaine_Move_1
waitmovement 0x0
delay 15
msgbox CinnabarMansionS2_Blaine_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Blaine_Move_2
applymovement 4, CinnabarMansionS2_Blaine_Move_3
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_3 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_5
waitmovement 0x0
delay 20
msgbox CinnabarMansionS2_Blaine_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, CinnabarMansionS2_Blaine_Move_3
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, CinnabarMansionS2_Blaine_Move_6
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_7 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
waitse
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BLAINE_2, CinnabarMansionS2_Blaine_Texto_9
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_10 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
waitse
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_10.2 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS2_Blaine_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS2_Blaine_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, CinnabarMansionS2_Blaine_Move_8
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, CinnabarMansionS2_Blaine_Move_3
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, CinnabarMansionS2_Blaine_Move_5
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 115
release
end

CinnabarMansionS2_Blaine_Texto_1:
	.string "BLAINE: So you came.$"

CinnabarMansionS2_Blaine_Texto_2:
.string "Nadie hubiera pensado que un ROCKET\n"
	.string "daría tantos problemas, eres un caso\l"
	.string "único, la excepción que confirma la\l"
	.string "regla. Pero incluso esa excepción\l"
	.string "responde a unos patrones que buenamente\l"
	.string "nos hemos encargado de cubrir aquí{PAUSE 5}…{PAUSE 5}$"

CinnabarMansionS2_Blaine_Texto_3:
.string "Observa este lugar, su única razón\n"
	.string "de ser es explorar los límites que\l"
	.string "las leyes de este mundo nos imponen.\p"
	.string "Al igual que el TEAM ROCKET,\n"
	.string "nuestro fin último es similar.$"

CinnabarMansionS2_Blaine_Texto_4:
.string "MAGMAR, CHARIZARD, ARCANINE…\n"
	.string "Solo son números, lo que les\l"
	.string "diferencia es un mayor o menor\l"
	.string "grado en cada uno de los 6\l"
	.string "parámetros que componen la\l"
	.string "genética inherente a cada especie.$"

CinnabarMansionS2_Blaine_Texto_4.1:
	.string "Lo único que tienen de especial\n"
	.string "los LEGENDARIOS es un total mayor\l"
	.string "en la suma de esos 6 parámetros,\l"
	.string "no han hecho nada para ganarse ese\l"
	.string "mayor total, solo ser -LEGENDARIOS-\l"
	.string "por gracia del -creador-.$"

CinnabarMansionS2_Blaine_Texto_4.2:
	.string "Un MAGIKARP, por mucho que quiera,\n"
	.string "jamás se acercará al peor DRAGONITE\l"
	.string "que pueda existir, independientemente\l"
	.string "de lo que cada uno haga.$"

CinnabarMansionS2_Blaine_Texto_5:
.string "De este modo, quien sea capaz de\n"
	.string "controlar y manipular estos 6\l"
	.string "parámetros, al tiempo que las\l"
	.string "combinaciones de tipos,\l"
	.string "habilidades y movimientos, tiene\l"
	.string "el poder de controlar este mundo.\p"
	.string "Algunos, como LANCE, se rinden a\n"
	.string "los POKÉMON divinos, buscan que la\l"
	.string "naturaleza les dé todo hecho; sin\l"
	.string "embargo, nosotros vamos más allá.$"

CinnabarMansionS2_Blaine_Texto_6:
.string "Un LEGENDARIO únicamente es tal\n"
	.string "por haber sido el ganador de la\l"
	.string "lotería de la naturaleza, el más\l"
	.string "agraciado, como he dicho, por\l"
	.string "mera gracia del creador, pero\l"
	.string "no aquí, no en este lugar{PAUSE 5}…{PAUSE 5}$"

CinnabarMansionS2_Blaine_Texto_7:
.string "Si conocemos las reglas del juego,\n"
	.string "podemos usarlas a nuestro favor,\l"
	.string "para que esa lotería nos toque no\l"
	.string "solo una vez, sino varias en el\l"
	.string "mismo POKÉMON. Se acabaron los\l"
	.string "tiempos de imperfecciones,\l"
	.string "arbitrariedades y azar dictados\l"
	.string "por la naturaleza.$"

CinnabarMansionS2_Blaine_Texto_8:
	.string "We are the ones who establish the rules\n"
	.string "of the game now!$"

CinnabarMansionS2_Blaine_Texto_9:
	.string "Impossible! Where the heck is that\n"
	.string "power coming from!?$"

CinnabarMansionS2_Blaine_Texto_10:
.string "No tiene sentido, es ridículo{PAUSE 15}…{PAUSE 15}\p"
	.string "¡Mi MAGMORTAR optimizado al máximo es\n"
	.string "mejor que cada uno de tus POKÉMON!$"

CinnabarMansionS2_Blaine_Texto_10.1:
	.string "¡De un LLAMARADA pulveriza a todo\n"
	.string "lo que golpee neutral, de un RAYO\l"
	.string "pone de rodillas a MOLTRES!$"

CinnabarMansionS2_Blaine_Texto_10.2:
	.string "¿Qué es lo que te mantiene en pie?$"

CinnabarMansionS2_Blaine_Texto_11:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

CinnabarMansionS2_Blaine_Texto_12:
.string "Aun así, no te será suficiente.\n"
	.string "OAK ha alcanzado otro nivel; con uno\l"
	.string "solo de sus POKÉMON podría tumbar a\l"
	.string "todo mi equipo, no puedes ganar.$"

CinnabarMansionS2_Blaine_Texto_12.1:
	.string "Sus POKÉMON te tumbarán de un golpe,\n"
	.string "antes de que puedas siquiera ejecutar\l"
	.string "un solo movimiento.$"

CinnabarMansionS2_Blaine_Texto_13:
	.string "We've spent years here, quietly working\n"
	.string "behind the scenes to reach this point,\l"
	.string "and now we've succeeded; OAK has a\l"
	.string "flawless team.$"


CinnabarMansionS2_Blaine_Texto_14:
.string "Lo único que has conseguido al\n"
	.string "llegar hasta aquí, es tener el\l"
	.string "privilegio de saber qué se siente\l"
	.string "al enfrentar a semejante poder.$"

CinnabarMansionS2_Blaine_Texto_14.1:	
	.string "Vas a perseguir algo inalcanzable,\n"
	.string "y verás como inevitablemente todas\l"
	.string "las posibilidades te conducen a ser\l"
	.string "masacrado por el mejor equipo jamás\l"
	.string "comandado por un ENTRENADOR.$"

CinnabarMansionS2_Blaine_Texto_15:
.string "Buena suerte, {PLAYER}.\n"
	.string "Aunque{PAUSE 15}…{PAUSE 15} en este caso, no\l"
	.string "tiene sentido hablar de ella; todos los\l"
	.string "caminos conducirán al mismo resultado.$"

CinnabarMansionS2_Blaine_Move_1:
walk_in_place_down
step_end

CinnabarMansionS2_Blaine_Move_2:
walk_down
walk_down
walk_down
walk_left
step_end

CinnabarMansionS2_Blaine_Move_3:
face_right
step_end

CinnabarMansionS2_Blaine_Move_4:
walk_in_place_right
step_end

CinnabarMansionS2_Blaine_Move_5:
face_up
step_end

CinnabarMansionS2_Blaine_Move_6:
walk_right
step_end

CinnabarMansionS2_Blaine_Move_7:
face_left
step_end

CinnabarMansionS2_Blaine_Move_8:
walk_left
face_up
step_end

CinnabarMansionS2_Oak::
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Oak_Move_1
waitmovement 0x0
delay 20
msgbox CinnabarMansionS2_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Oak_Move_2
waitmovement 0x0
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_3
waitmovement 0x0
delay 15
playse 564
msgbox CinnabarMansionS2_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_4
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_4.1
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_5
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_5.1
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_5.2
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_6.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_6
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_4.1
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_7.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_5.2
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_7.3 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_7
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_4.1
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_9.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_4.2
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_9.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_3
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_6
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_8
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_6
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_13 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_OAK_1, CinnabarMansionS2_Oak_Texto_14
delay 10
msgbox CinnabarMansionS2_Oak_Texto_15 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 5, CinnabarMansionS2_Oak_Move_4.2
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_15.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS2_Oak_Move_5.2
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS2_Oak_Move_9
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_1
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_18 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_19 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_20 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_21 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_10
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_11
delay 15
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Oak_Move_12
waitmovement 0x0
delay 20
msgbox CinnabarMansionS2_Oak_Texto_23 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_13
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_25 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_14
waitmovement 0x0
setflag FLAG_HIDE_FANCLUB_OLD_LADY
setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
delay 28
setvar VAR_UNUSED_0x40F7, 116
setvar VAR_TEMP_1, 1
call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
release
end

CinnabarMansionS2_Oak_Move_4.2:
walk_in_place_down
step_end

CinnabarMansionS2_Oak_Move_5.1:
face_up
step_end

CinnabarMansionS2_Oak_Move_5.2:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

CinnabarMansionS2_Oak_Move_4.1:
delay_8
face_up
delay_16
delay_8
face_left
delay_8
step_end

CinnabarMansionS2_Oak_Texto_1:
.string "OAK: Como esperaba, no has faltado\n"
	.string "a tu palabra; pondremos fin a todo\l"
	.string "esto de una vez por todas.\l"
	.string "Aquí mismo, ¿qué mejor lugar?$"

CinnabarMansionS2_Oak_Texto_2:
.string "Creí haber alcanzado la perfección\n"
	.string "con ROJO, un ENTRENADOR imbatible,\l"
	.string "y lo sigo diciendo: el único fallo\l"
	.string "fue no exponerle al estímulo adecuado.\p"
	.string "Si LANCE hubiera sido inteligente,\n"
	.string "hubiera sabido ver su potencial, y al\l"
	.string "poco que le dejara sobrecompensarse,\l"
	.string "luchando frente a entrenadores de tu\l"
	.string "altura, el efecto bola de nieve de su\l"
	.string "inteligencia le hubiera hecho, junto\l"
	.string "con los POKÉMON adecuados, imbatible.$"

CinnabarMansionS2_Oak_Texto_3:
.string "Solo unas mejores herramientas te\n"
	.string "dieron la victoria ante ROJO, pero\l"
	.string "ahora es imposible.\p"
	.string "Desde este remoto lugar, nos hemos\n"
	.string "encargado de reunir un equipo que\l"
	.string "marcará un antes y un después; lo\l"
	.string "mejor de ambos mundos.$"

CinnabarMansionS2_Oak_Texto_4:
.string "Por un lado: la singular combinación\n"
	.string "genética de DEOXYS, inviable de replicar\l"
	.string "con nuestra tecnología actual, el\l"
	.string "representante de lo que implica\l"
	.string "ser un LEGENDARIO.\l"
	.string "Algo que LANCE y otros muchos adoran.$"

CinnabarMansionS2_Oak_Texto_5:
.string "A pesar de que{PAUSE 15}…{PAUSE 15} estos propios\n"
	.string "legendarios siquiera sepan de\l"
	.string "donde vienen sus poderes.$"
	
CinnabarMansionS2_Oak_Texto_5.1:
	.string "Es un insulto para aquellos que de\n"
	.string "verdad sabemos observar y detectar\l"
	.string "cómo funcionan los mecanismos que\l"
	.string "permiten a un POKÉMON ser mejor o\l"
	.string "peor que otro; y a la vez, sentir\l"
	.string "esa impotencia por la enorme\l"
	.string "dificultad que implica el poder\l"
	.string "activarlos para uso propio.$"

CinnabarMansionS2_Oak_Texto_6:
.string "Por otro lado, tenemos al futuro:\n"
	.string "POKÉMON creados a la carta, que\l"
	.string "dejarán en evidencia las\l"
	.string "imperfecciones del resto.$"
	
CinnabarMansionS2_Oak_Texto_6.1:
	.string "Demostrarán que incluso los propios\n"
	.string "LEGENDARIOS no dejan de ser POKÉMON,\l"
	.string "con menos imperfecciones que los\l"
	.string "demás, pero POKÉMON al fin y al cabo.$"

CinnabarMansionS2_Oak_Texto_6.2:
	.string "Solo les diferencia una base mayor\n"
	.string "sobre la que poder construir.\p"
	.string "La genética puede ahorrar años de\n"
	.string "trabajo, y a veces toda una vida.$"

CinnabarMansionS2_Oak_Texto_7:
.string "De todos ellos, quien ha demostrado\n"
	.string "tener mejor base genética ha sido,\l"
	.string "por supuesto, MEW. El ancestro de\l"
	.string "todos los POKÉMON, gracias al cual\l"
	.string "pudimos crear un POKÉMON como MEWTWO.$"

CinnabarMansionS2_Oak_Texto_7.1:
	.string "Ello es prueba del poder que te hablo,\n"
	.string "un poder capaz de sacar las costuras\l"
	.string "de incluso un -LEGENDARIO MAYOR-.$"

CinnabarMansionS2_Oak_Texto_7.2:
	.string "Con aún menos imperfecciones que un\n"
	.string "LEGENDARIO COMÚN, pero aún con margen\l"
	.string "de mejora y, por tanto, imperfectos.$"

CinnabarMansionS2_Oak_Texto_7.3:
	.string "De nuevo, que MEWTWO haya igualado el\n"
	.string "poder de LUGIA o HO-OH, es una prueba\l"
	.string "irrefutable de esto, y también de lo\l"
	.string "que está por venir.$"

CinnabarMansionS2_Oak_Texto_8:
.string "Esos estúpidos entrenadores que hablan\n"
	.string "de -vínculo con tus POKÉMON-, querer\l"
	.string "a tu equipo y demás chorradas, no se\l"
	.string "dan cuenta de que lo que hagan es\l"
	.string "irrelevante; sus POKÉMON no van a\l"
	.string "mejorar su potencial intrínseco en\l"
	.string "base a eso.$"

CinnabarMansionS2_Oak_Texto_8.1:
	.string "Están ya limitados de nacimiento, por\n"
	.string "una ley tan injusta como arbitraria,\l"
	.string "que decide a dedo quien es mejor\l"
	.string "que otro; el entrenar o querer a\l"
	.string "tus POKÉMON te llevará tan lejos\l"
	.string "como quiera esta ley{PAUSE 5}…{PAUSE 5}$"

CinnabarMansionS2_Oak_Texto_9:
    .string "Sin embargo, desde aquí acabaremos\n"
	.string "con eso, quien sea que esté jugando\l"
	.string "a los dados allí arriba, dejará de\l"
	.string "hacerlo.\p"
	.string "Pondremos fin a la lotería genética,\n"
	.string "todos los POKÉMON serán iguales,\l"
	.string "iguales a la alza y perfectos.$"

CinnabarMansionS2_Oak_Texto_9.1:
	.string "La habilidad prevalecerá solo cuando\n"
	.string "sea tan superior a la habilidad del otro\l"
	.string "que no se ponga a prueba la voluntad.$"

CinnabarMansionS2_Oak_Texto_9.2:
	.string "Así, el mejor de entre ellos lo será\n"
	.string "porque de verdad mediante su voluntad,\l"
	.string "o la de su ENTRENADOR, ha sido capaz de\l"
	.string "ir más allá que el resto, no porque\l"
	.string "posee un don divino que el resto no.$"

CinnabarMansionS2_Oak_Texto_9.3:
	.string "¿De verdad crees que esto es tan\n"
	.string "malo {PLAYER}?\l"
	.string "¡Acabaremos con la mayor\l"
	.string "injusticia de este mundo!$"

CinnabarMansionS2_Oak_Texto_10:
.string "Después de lo que he dicho,\n"
	.string "comprenderás que sé apreciar lo\l"
	.string "que alguien como tú hizo en la\l"
	.string "LIGA POKÉMON, es muestra de lo\l"
	.string "lejos que alguien puede llegar si\l"
	.string "lleva al extremo lo que está en su\l"
	.string "mano controlar.$"

CinnabarMansionS2_Oak_Texto_10.1:
	.string "Pero sigues estando limitado por tus\n"
	.string "POKÉMON. Quieras o no, tu CROBAT jamás\l"
	.string "podrá superar los 374 puntos en\l"
	.string "SALUD, o los 394 en VELOCIDAD,\l"
	.string "cifra notable he de añadir.\p"
	.string "Te pongas como te pongas y por\n"
	.string "mucho que quieras a tu CROBAT, no\l"
	.string "pasará de ahí, y por ello te he\l"
	.string "hecho venir hasta aquí, {PLAYER}.$"

CinnabarMansionS2_Oak_Texto_11:
	.string "I want you to be the first to see the\n"
	.string "new breed of POKÉMON, ones that can\l"
	.string "push that limiting factor to\l"
	.string "unimaginable levels.$"

CinnabarMansionS2_Oak_Texto_12:
	.string "I'm gonna love seeing the look of\n"
	.string "despair on your face, watching as those\l"
	.string "ideals and principles become worthless\l"
	.string "against something you'll never even\l"
	.string "come close to.$"

CinnabarMansionS2_Oak_Texto_13:
	.string "Proceed, ROCKET! Face the best team\n"
	.string "KANTO, and the world, have ever seen!$"

CinnabarMansionS2_Oak_Texto_14:
	.string "What just happened here?$"

CinnabarMansionS2_Oak_Texto_15:
.string "No{PAUSE 25}…{PAUSE 25} no tiene sentido{PAUSE 15}…{PAUSE 15} mi equipo es\n"
	.string "imbatible{PAUSE 15}…{PAUSE 15} nadie, ni LANCE{PAUSE 15}…{PAUSE 15} ni GIOVANNI{PAUSE 15}…{PAUSE 15}$"

CinnabarMansionS2_Oak_Texto_15.1:
	.string "¡Ni dios podría derrotarme!$"

CinnabarMansionS2_Oak_Texto_16:
.string "{PAUSE 15}… {PAUSE 15}…{PAUSE 15}$"

CinnabarMansionS2_Oak_Texto_17:
	.string "Is there another force? Another law\n"
	.string "that I missed?$"

CinnabarMansionS2_Oak_Texto_18:
	.string "I just saw how, due to the imperfection\n"
	.string "of your POKÉMON, something perfect\l"
	.string "came out as the final product, maybe\l"
	.string "not absolutely and eternally, but\l"
	.string "certainly for this battle, this specific\l"
	.string "moment.$"

CinnabarMansionS2_Oak_Texto_19:
	.string "I thought this battle would shatter\n"
	.string "your beliefs and prove that RED and\l"
	.string "LANCE weren't enough in the POKÉMON\l"
	.string "LEAGUE, but it's been the complete\l"
	.string "opposite.$"

CinnabarMansionS2_Oak_Texto_20:
	.string "Does this mean that training alone can\n"
	.string "elevate a POKÉMON to incalculable\l"
	.string "levels?$"


CinnabarMansionS2_Oak_Texto_21:
	.string "So I've been a fool talking about limits.\n"
	.string "There must be some at some point, of\l"
	.string "course, but after what I've seen here,\l"
	.string "they're much further than one can\l"
	.string "imagine, maybe even beyond what one\l"
	.string "can calculate…$"

CinnabarMansionS2_Oak_Texto_22:
	.string "I have had enough already. {PAUSE 20}RED {PAUSE 20}…{PAUSE 20} The\n"
	.string "creation of MEWTWO…{PAUSE 20} Keeping this\l"
	.string "laboratory alive in the shadows…{PAUSE 20} All to\l"
	.string "barely scratch the surface of how a\l"
	.string "POKÉMON truly works.$"

CinnabarMansionS2_Oak_Texto_23:
	.string "Do whatever you want with this lab,\n"
	.string "ROCKET. Maybe you'll find something we\l"
	.string "missed.$"

CinnabarMansionS2_Oak_Texto_24:
	.string "I'm aware about the entire TEAM ROCKET\n"
	.string "waiting for me outside. Don't worry, I\l"
	.string "don't intend to do anything else.\l"
	.string "MEWTWO will be given to GIOVANNI. Who\l"
	.string "better than my old rival to carry on\l"
	.string "with this project?$"

CinnabarMansionS2_Oak_Texto_25:
	.string "I'm going back to PALLET TOWN; I need\n"
	.string "some time to think.$"

CinnabarMansionS2_Oak_Move_1:
walk_in_place_left
step_end

CinnabarMansionS2_Oak_Move_2:
walk_left
walk_left
walk_left
walk_left
face_up
step_end

CinnabarMansionS2_Oak_Move_3:
face_down
step_end

CinnabarMansionS2_Oak_Move_4:
walk_left
step_end

CinnabarMansionS2_Oak_Move_5:
delay_8
walk_right
delay_16
face_down
delay_8
step_end

CinnabarMansionS2_Oak_Move_6:
walk_in_place_down
step_end

CinnabarMansionS2_Oak_Move_7:
face_up
step_end

CinnabarMansionS2_Oak_Move_8:
walk_down
step_end

CinnabarMansionS2_Oak_Move_9:
walk_fast_up
walk_fast_left
step_end

CinnabarMansionS2_Oak_Move_10:
walk_right
face_up
step_end

CinnabarMansionS2_Oak_Move_11:
walk_slow_right
walk_slow_down
walk_slow_right
walk_in_place_right
step_end

CinnabarMansionS2_Oak_Move_12:
face_right
step_end

CinnabarMansionS2_Oak_Move_13:
walk_slow_down
walk_slow_right
walk_in_place_right
step_end

CinnabarMansionS2_Oak_Move_14:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

CinnabarMansion_S2_Escena_7::
clearflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
addobject 6
addobject 7
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CinnabarMansion_S2_Escena_7_Move_1
waitmovement 0x0
special RemoveCameraObject
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
msgbox CinnabarMansion_S2_Escena_7_Texto_1 MSGBOX_AUTOCLOSE
msgbox CinnabarMansion_S2_Escena_7_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_2
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, CinnabarMansion_S2_Escena_7_Move_3
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_4
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, CinnabarMansion_S2_Escena_7_Move_3
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_6 MSGBOX_AUTOCLOSE
msgbox CinnabarMansion_S2_Escena_7_Texto_7 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_5
waitmovement 0x0
delay 20
msgbox CinnabarMansion_S2_Escena_7_Texto_8 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, CinnabarMansion_S2_Escena_7_Move_6
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_9 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_2
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_10 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_7
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_11 MSGBOX_AUTOCLOSE
applymovement 6, CinnabarMansion_S2_Escena_7_Move_3
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_12 MSGBOX_AUTOCLOSE
delay 20
msgbox CinnabarMansion_S2_Escena_7_Texto_13 MSGBOX_AUTOCLOSE
delay 50
warpsilent MAP_ROCKET_HIDEOUT_5F, 0, 13
release
end

CinnabarMansion_S2_Escena_7_Move_2:
face_down
step_end

CinnabarMansion_S2_Escena_7_Move_3:
walk_in_place_left
step_end

CinnabarMansion_S2_Escena_7_Move_4:
face_right
step_end

CinnabarMansion_S2_Escena_7_Move_5:
face_up
step_end

CinnabarMansion_S2_Escena_7_Move_6:
walk_slow_up
step_end

CinnabarMansion_S2_Escena_7_Move_7:
walk_slow_down
walk_in_place_right
step_end

CinnabarMansion_S2_Escena_7_Move_1:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
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

CinnabarMansion_S2_Escena_7_Texto_1:
	.string "OAK: You know what, often, I prefer to\n"
    	.string "let people act under their free will, but\l"
    	.string "I will ask you this, do you think you\l"
    	.string "made the right choice by denouncing\l"
    	.string "FUJI so easily?$"

CinnabarMansion_S2_Escena_7_Texto_2:
	.string "BLAINE: I thought he could tell crucial\n"
    	.string "information to GIOVANNI.$"

CinnabarMansion_S2_Escena_7_Texto_3:
	.string "FUJI said the truth, he doesn't know\n"
    	.string "anything. After the war, his role as a\l"
    	.string "researcher died.$"

CinnabarMansion_S2_Escena_7_Texto_4:
	.string "BLAINE: So…{PAUSE 25} just us knowing its\n"
    	.string "location?$"

CinnabarMansion_S2_Escena_7_Texto_5:
	.string "OAK: Yes, just us, and it must be kept\n"
    	.string "like this.$"

CinnabarMansion_S2_Escena_7_Texto_6:
	.string "BLAINE: I don't understand, why don't\n"
    	.string "we do something and take back KANTO?\l"
    	.string "Maybe GIOVANNI will even forgive you if\l"
    	.string "you manage to overthrow LANCE…{PAUSE 25} in your\l"
    	.string "own way.$"

CinnabarMansion_S2_Escena_7_Texto_7:
    .string "OAK: Our position is stable, BLAINE.\n"
    .string "Right now, we can focus on reducing the\l"
    .string "level of uncertainty even further in\l"
    .string "case of action. Here, we can\l"
    .string "concentrate on gaining even more\l"
    .string "power.$"

CinnabarMansion_S2_Escena_7_Texto_8:
.string "Also…$"

CinnabarMansion_S2_Escena_7_Texto_9:
    .string "Now it won't be necessary to use\n"
    .string "MEWTWO, we can win even without it…\l"
    .string "especially without it.$"

CinnabarMansion_S2_Escena_7_Texto_10:
	.string "We'll quietly and cleverly take control\n"
    	.string "of KANTO, avoiding obligations without\l"
    	.string "causing another stupid war.$"

CinnabarMansion_S2_Escena_7_Texto_11:
    .string "Everything is ready, after years in the\n"
    .string "shadows, with no greater expectation\l"
    .string "than to see another day just to\l"
    .string "prevent the chances from dropping to\l"
    .string "absolute zero…{PAUSE 25} finally, we can rise\l"
    .string "from our ashes, restoring the former\l"
    .string "magnificence of this region, and\l"
    .string "surpassing it!$"

CinnabarMansion_S2_Escena_7_Texto_12:
	.string "BLAINE: Do you really trust that much\n"
    	.string "in that TRAINER?$"

CinnabarMansion_S2_Escena_7_Texto_13:
    .string "OAK: I don't trust in him, BLAINE, I am\n"
    .string "sure. The numbers never lie.$"


CinnabarMansionS2_Blaine_Derrotado::
lock
faceplayer
msgbox CinnabarMansionS2_Blaine_Derrotado_Texto_1, MSGBOX_NPC
release     
end

CinnabarMansionS2_Blaine_Derrotado_Texto_1:
	.string "Good luck, {PLAYER}, though it doesn't\n"
	.string "really make sense to talk about it, all\l"
	.string "options lead to the same result.$"

