RocketHideout_Johto_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, RocketHideout_Johto_OnTransition
map_script MAP_SCRIPT_ON_RESUME, RocketHideout_Johto_OnResume
	.byte 0
	
RocketHideout_Johto_OnTransition::
setflag FLAG_VISITED_ROCKET_HIDEOUT_JOHTO
end

RocketHideout_Johto_OnResume:
	call RocketHideout_Johto_SetupEscapeWarp
	end

RocketHideout_Johto_SetupEscapeWarp::
	setescapewarp MAP_SOUTH_ROUTE45, 6, 114
	return

RocketHideoutJohto1::
end



RocketHideoutJohto2::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_2:
	.string "Is in this base where we gather all the\n"
	.string "resources that JOHTO offers, and we\l"
	.string "transform them into all kinds of POKÉ\l"
	.string "BALLS, POTIONS and other items. That's\l"
	.string "right! From here is where all the\l"
	.string "products that you buy in the CELADON\l"
	.string "BASE come from!$"



RocketHideoutJohto3::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_3:
.string "Have a nice day, sir!$"



RocketHideoutJohto4::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_4, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_4:
	.string "This is the second largest ROCKET BASE\n"
	.string "after the main one in CELADON, but\l"
	.string "unlike that one, this one is visible from\l"
	.string "the outside. Nonetheless, despite\l"
	.string "having dimensions similar to the\l"
	.string "POKÉMON TOWER of LAVENDER TOWN,\l"
	.string "there's no need to worry. We are in the\l"
	.string "middle of the mountains, in a hidden\l"
	.string "area far from all civilization.$"



RocketHideoutJohto5::
end



RocketHideoutJohto6::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_6, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_6:
	.string "The irregularity of the JOHTO's\n"
	.string "geography is in our favor. No one ever\l"
	.string "will find this base with all the\l"
	.string "mountains around!$"



RocketHideoutJohto7::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_7, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_7:
	.string "Many things still have to happen before\n"
	.string "the medium-term future of KANTO takes\l"
	.string "shape.$"



RocketHideoutJohto8::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_8, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_8:
	.string "HP of 125 BASE… PHYSICAL ATTACK of\n"
	.string "175… PHYSICAL DEFENSE of 155… An\l"
	.string "average of 151.6666 BASE among the\l"
	.string "first 3 STATS… … … No, I'm not making up\l"
	.string "this POKÉMON, I'm talking about the\l"
	.string "RHYPERIOR-Z of our LEADER GIOVANNI.\l"
	.string "It's hard for me to believe that there's\l"
	.string "another POKÉMON with a similar physical\l"
	.string "power. Not even the LEGENDARY GROUDON\l"
	.string "comes close!$"



RocketHideoutJohto9::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_9, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_9:
	.string "That BILL has become a complete\n"
	.string "pessimist, as well as arrogant,\l"
	.string "believing he has reached the limit just\l"
	.string "because he can't keep further improving\l"
	.string "his PORYGON. If he saw our last\l"
	.string "discoveries, the expression of\l"
	.string "disbelief on his face as he sees that\l"
	.string "some ROCKETS have surpassed him would\l"
	.string "be legendary, while he would suffer a\l"
	.string "hard blow to his ego as a scientist.$"



RocketHideoutJohto10::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_10, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_10:
	.string "If we know all the possible conditions\n"
	.string "of a physic system, we can, in theory,\l"
	.string "its behavior into the future. But this\l"
	.string "only applies with inanimate objects.\l"
	.string "With social questions, we find a\l"
	.string "problem. Projecting the future when\l"
	.string "human beings are involved is radically\l"
	.string "different if we consider they are living\l"
	.string "beings endowed with free will.$"



RocketHideoutJohto11::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_11, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_11:
	.string "The work in the shadows always gives\n"
	.string "big results. when we show ourselves to\l"
	.string "the world they won't recognize what\l"
	.string "they are seeing!$"



RocketHideoutJohto12::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_12, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_12:
	.string "Some of the most veteran TRAINERS in\n"
	.string "this region have POKÉMON that exceed\l"
	.string "our measurement parameters. Is the\l"
	.string "theory of the bond between TRAINER\l"
	.string "and POKÉMON really true?$"



RocketHideoutJohto13::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_13, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_13:
	.string "Accessing places where no one else has\n"
	.string "reached demands a huge deployment of\l"
	.string "energy and resources, which is why TEAM\l"
	.string "ROCKET gives an enormous importance to\l"
	.string "its scientific team, knowing the\l"
	.string "invaluable potential that a new\l"
	.string "discovery can have.$"



RocketHideoutJohto14::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_14, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_14:
	.string "The consumption level in JOHTO is much\n"
	.string "lower than that of KANTO, but its\l"
	.string "resources are incomparable.We make\l"
	.string "sure to make good use of them here!$"



RocketHideoutJohto15::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_15, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_15:
	.string "So an order with 1000 NET BALLS, 200\n"
	.string "PROTEINS + ZINC, 400 FULL RESTORE and\l"
	.string "3000 LAVA COOKIES…$"



RocketHideoutJohto16::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_16, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_16:
	.string "That LANCE… Allow him to retain his\n"
	.string "titles made of cardboard. Meanwhile, we\l"
	.string "are the ones who are taking the truly\l"
	.string "important decisions.$"



RocketHideoutJohto17::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_17, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_17:
	.string "GIOVANNI holds you, ADMIN.BOSS\n"
	.string "{PLAYER} in a very high regard. With\l"
	.string "people like ANDRA and you, TEAM ROCKET\l"
	.string "has a brilliant future.$"



RocketHideoutJohto18::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_18, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_18:
	.string "At the end of the 19th century,\n"
	.string "physicist ALBERT MICHELSON stated\l"
	.string "that all that remained to be discovered\l"
	.string "about the laws of nature was merely\l"
	.string "adjusting a few tenths of the\l"
	.string "knowledge of that time. I wonder how he\l"
	.string "would react to everything the 20th\l"
	.string "century has brought. Furthermore, how\l"
	.string "would all those who currently believe\l"
	.string "that we have already reached 99-100%\l"
	.string "of our potential react if they were\l"
	.string "taken to a laboratory from the late\l"
	.string "21st century?$"



RocketHideoutJohto19::
end



RocketHideoutJohto20::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_20, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_20:
	.string "The ADMIN.BOSS ANDRA will ensure that\n"
	.string "we are also recognized in HOENN.\l"
	.string "Eventually, the entire POKÉMON WORLD\l"
	.string "will be under our control!$"



RocketHideoutJohto21::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_21, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_21:
	.string "No one knows the precise moment when\n"
	.string "our LEADER's RHYPERIOR reached that\l"
	.string "point which made it evolve once again,\l"
	.string "however, thanks to being able to study\l"
	.string "it, we were able to create NIDOKING-X\l"
	.string "and NIDOQUEEN-Y, although raising\l"
	.string "their stats by +100 BASE instead of the\l"
	.string "+110 of GIOVANNI's RHYPERIOR…$"



RocketHideoutJohto22::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_22, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_22:
	.string "Excuse me sir, the access to the upper\n"
	.string "floors is restricted to personnel\l"
	.string "directly involved in the ongoing\l"
	.string "projects, I've heard that GIOVANNI\l"
	.string "intends to introduce you to them, but\l"
	.string "in due time. Until then, good luck during\l"
	.string "your time in JOHTO!$"



RocketHideoutJohto23::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_23, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_23:
	.string "Understanding the finer details of\n"
	.string "daily routine can be pointless and even\l"
	.string "harmful, so it's vital to know how to\l"
	.string "separate the wheat from the chaff.$"



RocketHideoutJohto24::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_24, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_24:
	.string "The GOLDENROD CITY RADIO TOWER is\n"
	.string "quickly becoming JOHTO's version of\l"
	.string "SILPH in terms of power and influence.\l"
	.string "It wouldn't surprise me if our LEADER\l"
	.string "arranges a business meeting there soon\l"
	.string "as well.$"



RocketHideoutJohto25::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_25, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_25:
	.string "Excluding GOLDENROD CITY and OLIVINE\n"
	.string "CITY, the rest of JOHTO's population\l"
	.string "lives in rural areas or areas with\l"
	.string "significant historical significance,\l"
	.string "such as ECRUTEAK CITY.$"



RocketHideoutJohto26::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_26, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_26:
	.string "Despite winning the war, much of\n"
	.string "JOHTO's population has continued to\l"
	.string "live with the simplicity and frugality\l"
	.string "that characterizes them. To be honest,\l"
	.string "the only one who forced that war was\l"
	.string "LANCE, and the people here know it,\l"
	.string "perhaps due to that, the process of\l"
	.string "unification between the two regions\l"
	.string "will be faster, the first step is to open\l"
	.string "the borders settled in ROUTE 26 and at\l"
	.string "the base of MT. SILVER...$"



RocketHideoutJohto27::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_27, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_27:
	.string "Everything's under control, sir! It's a\n"
	.string "pleasure to have you on JOHTO!$"



RocketHideoutJohto28::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_28, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_28:
.string "Las imponentes CATARATAS TOHJO son\n"
.string "las que históricamente han\l"
.string "separado geográficamente KANTO de\l"
.string "JOHTO, aunque ya se está\l"
.string "trabajando en medios de transporte\l"
.string "que las unan por otras rutas.$"



RocketHideoutJohto29::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_29, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_29:
.string "Me encantaría tener un PERSIAN,\n"
.string "pero en JOHTO si no eres un\l"
.string "pijo de CIUDAD TRIGAL, necesitas\l"
.string "mucha suerte para encontrar un\l"
.string "MEOWTH salvaje.\l"
.string "Aunque un GRANBULL tampoco está\l"
.string "mal.$"



RocketHideoutJohto30::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_30, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_30:
.string "¡JOHTO es suya señor!\n"
.string "¡Demuéstreles a todos el poder del\l"
.string "TEAM ROCKET!$"



RocketHideoutJohto31::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_31, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_31:
.string "1000 REVIVIRES y 700\n"
.string "HIPERPOCIONES…\l"
.string "En serio…\l"
.string "¿Qué les pasa a los RECLUTAS de\l"
.string "KANTO?\l"
.string "¿Es que todos llevan RATTATAS y\l"
.string "ZUBATS?$"



RocketHideoutJohto32::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_32, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_32:
.string "¡Estar fuera de la ley me hace\n"
.string "sentir tan vivo!\l"
.string "¡Al diablo los límites desde aquí\l"
.string "construiremos lo que nos venga en\l"
.string "gana!$"



RocketHideoutJohto33::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_33, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_33:
.string "¡Trabajo propio!\n"
.string "¡Trabajo propio por y para el TEAM\l"
.string "ROCKET!\l"
.string "¡Así da gusto trabajar!$"



RocketHideoutJohto34::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_34, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_34:
.string "Hemos logrado que POKÉMON NO\n"
.string "LEGENDARIOS, como NIDOKING y\l"
.string "NIDOQUEEN, superen olgadamente el\l"
.string "techo de los 600 STATS BASE, cifra\l"
.string "que se tenía por imposible de\l"
.string "superar para cualquier POKÉMON\l"
.string "mortal.\l"
.string "Lo cierto es que con NIDOKING-X\l"
.string "hicimos un trabajo extraordinario,\l"
.string "gracias a su HABILIDAD ADAPTABLE,\l"
.string "ATAQUE de 142 de BASE y VELOCIDAD\l"
.string "de 125, es una verdadera máquina\l"
.string "de despedazar enemigos.$"



RocketHideoutJohtoDocumento_100::
lock        
msgbox RocketHideoutJohtoDocumento_Text_100, MSGBOX_DEFAULT
release     
end

RocketHideoutJohtoDocumento_Text_100:
.string ".......\n"
	.string ".......\l"
	.string "Técnicas de laboratorio para\l"
	.string "maximizar el potencial de\l"
	.string "cualquier POKÉMON.\l"
	.string ".......\l"
	.string ".......\l"
	.string "¡Tiene más de 500 páginas!$"



RocketHideoutJohto_EventScript_ReceiveRalts::
    lock
    faceplayer
	checkmoncatch SPECIES_RALTS
	goto_if_eq VAR_RESULT, FALSE, RocketHideoutJohto_EventScript_TakeRalts 
	msgbox RocketHideoutJohto_Text_19, MSGBOX_DEFAULT
	release
	end



RocketHideoutJohto_EventScript_TakeRalts::
    msgbox RocketHideoutJohto_Text_TakeRalts MSGBOX_DEFAULT
	msgbox RocketHideoutJohto_Text_TakeRalts2 MSGBOX_DEFAULT
	msgbox RocketHideoutJohto_Text_TakeRalts3 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox RocketHideoutJohto_Text_MensajeRalts, MSGBOX_DEFAULT
	givemon SPECIES_RALTS, 10, ITEM_PSYCHIC_GEM
	waitfanfare  
	release
	end 



RocketHideoutJohto_Text_TakeRalts:
.string "Hay muchos POKÉMON PSÍQUICOS más\n"
	.string "allá de ALAKAZAM o HYPNO, incluso\l"
	.string "de los ESPEON o XATU en JOHTO.$"



RocketHideoutJohto_Text_TakeRalts2:
	.string "El problema es que KANTO y JOHTO\n"
	.string "han sido siempre muy cerradas a\l"
	.string "otras regiones.$"



RocketHideoutJohto_Text_TakeRalts3:
	.string "Sin embargo, un colega mío que\n"
	.string "trabaja en DEVON me regaló una\l"
	.string "pareja de POKÉMON PSÍQUICOS de\l"
	.string "HOENN.\l"
	.string "Dijo que era el ALAKAZAM de esa\l"
	.string "región, me gustaría que un ROCKET\l"
	.string "como tú se quedara con uno.$"




RocketHideoutJohto_Text_MensajeRalts:
.string "¡OBTUVISTE UN RALTS AL NV.10!$"


RocketHideoutJohto_Text_19:
.string "He oído que RALTS cuenta con 2\n"
	.string "evoluciones finales, una ofensiva\l"
	.string "FÍSICA, y otra ofensiva ESPECIAL.$"

BaseRocketJohto_Tienda_Pokemon::
lock
faceplayer
msgbox Text_CompraPokemon MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_VENTA_BASE_JOHTO, 0
switch VAR_RESULT
case 0, EventScript_Fletching
case 1, EventScript_Mudbray
case 2, EventScript_Pincurchin
case 3, EventScript_Pawniard
case 4, EventScript_Turtwig
case 5, EventScript_Popplio
case 6, EventScript_Spiritomb
case 7, EventScript_Axew
release
end

EventScript_Axew::
lock
showmoneybox 0, 0
msgbox EventScript_Axew_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 140000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 140000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_AXEW, 34, ITEM_NONE
release
end

EventScript_Spiritomb::
lock
showmoneybox 0, 0
msgbox EventScript_Spiritomb_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 115000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 115000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_SPIRITOMB, 62, ITEM_NONE
release
end

EventScript_Popplio::
lock
showmoneybox 0, 0
msgbox EventScript_Poplio_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 76000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 76000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_POPPLIO, 16, ITEM_NONE
release
end


EventScript_Turtwig::
showmoneybox 0, 0
msgbox EventScript_Turtwig_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 75000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 75000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_TURTWIG, 17, ITEM_NONE
release
end

EventScript_Pawniard::
showmoneybox 0, 0
msgbox EventScript_Pawniard_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 65000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 65000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_PAWNIARD, 50, ITEM_NONE
release
end

EventScript_Pincurchin::
showmoneybox 0, 0
msgbox EventScript_Pincurchin_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 52000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 52000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_PINCURCHIN, 45, ITEM_NONE
release
end

EventScript_Mudbray::
showmoneybox 0, 0
msgbox EventScript_Mudbray_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 32000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 32000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_MUDBRAY, 28, ITEM_NONE
release
end

EventScript_Fletching::
showmoneybox 0, 0
msgbox EventScript_Fletching_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 18000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 18000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_FLETCHLING, 16, ITEM_NONE
release
end

EventScript_Axew_Texto_1:
.string "¿Seguro que quiere a AXEW?\n"
	.string "Costará 140000 POKÉS.$"

EventScript_Spiritomb_Texto_1:
.string "¿Seguro que quiere a SPIRITOMB?\n"
	.string "Costará 115000 POKÉS.$"

EventScript_Turtwig_Texto_1:
.string "¿Seguro que quiere a TURTWIG?\n"
	.string "Costará 75000 POKÉS.$"

EventScript_Pawniard_Texto_1:
.string "¿Seguro que quiere a PAWNIARD?\n"
	.string "Costará 65000 POKÉS.$"

EventScript_Pincurchin_Texto_1:
.string "¿Seguro que quiere a PINCURCHIN?\n"
	.string "Costará 52000 POKÉS.$"

EventScript_Mudbray_Texto_1:
.string "¿Seguro que quiere a MUDBRAY?\n"
	.string "Costará 32000 POKÉS.$"

EventScript_Fletching_Texto_1:
.string "¿Seguro que quiere a FLETCHLING?\n"
	.string "Costará 18000 POKÉS.$"
