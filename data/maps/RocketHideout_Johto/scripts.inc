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
.string "Es en esta base donde reunimos\n"
.string "todas las materias primas que\l"
.string "JOHTO ofrece, y las transformamos\l"
.string "en todo tipo de POKÉ BALLS,\l"
.string "POCIONES y demás objetos.\l"
.string "¡Así es!\l"
.string "¡De aquí salen todos los productos\l"
.string "que puedes comprar en la BASE de\l"
.string "AZULONA!$"



RocketHideoutJohto3::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_3:
.string "¡Buen día, sir!$"



RocketHideoutJohto4::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_4, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_4:
.string "Esta es la segunda BASE ROCKET más\n"
.string "grande después de la principal en\l"
.string "AZULONA, pero a diferencia de esta\l"
.string "es visible desde el exterior, aun\l"
.string "así, a pesar de tener unas\l"
.string "dimensiones parecidas a la TORRE\l"
.string "POKÉMON de PUEBLO LAVANDA no hay\l"
.string "de qué preocuparse, estamos en\l"
.string "medio de las montañas, en una zona\l"
.string "oculta y alejada de toda\l"
.string "civilización.$"



RocketHideoutJohto5::
end



RocketHideoutJohto6::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_6, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_6:
.string "La irregularidad de la geografía\n"
.string "de JOHTO trabaja para nosotros.\l"
.string "¡Nadie encontrará esta base con\l"
.string "todas las montañas que hay\l"
.string "alrededor!$"



RocketHideoutJohto7::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_7, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_7:
.string "Aún tienen que pasar muchas cosas\n"
.string "antes de que el futuro a medio\l"
.string "plazo de KANTO vaya tomando forma.$"



RocketHideoutJohto8::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_8, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_8:
.string "PS de 125 de BASE…\n"
.string "ATAQUE FÍSICO de 175…\l"
.string "DEFENSA FÍSICA de 155…\l"
.string "Una media de 151,666 de BASE\l"
.string "entre los 3 primeros STATS…\l"
.string "…\l"
.string "…\l"
.string "No, no me estoy inventando a este\l"
.string "POKÉMON, estoy hablando del\l"
.string "RHYPERIOR-& de nuestro LÍDER\l"
.string "GIOVANNI, me cuesta creer que\l"
.string "exista otro POKÉMON de un poder\l"
.string "físico similar.\l"
.string "¡Siquiera el LEGENDARIO GROUDON se\l"
.string "le acerca!$"



RocketHideoutJohto9::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_9, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_9:
.string "Ese BILL se ha vuelto un completo\n"
.string "pesimista, a la vez que arrogante,\l"
.string "cree haber llegado al límite de\l"
.string "lo posible solo por no ser capaz\l"
.string "de seguir mejorando a su PORYGON.\l"
.string "Si viera nuestros últimos\l"
.string "descubrimientos, la expresión de\l"
.string "incredulidad en su rostro al ver\l"
.string "que unos ROCKETS le han pasado por\l"
.string "encima sería legendaria, al tiempo\l"
.string "que sufriría un duro golpe a su\l"
.string "ego como científico.$"



RocketHideoutJohto10::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_10, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_10:
.string "Si conocemos todas las condiciones\n"
.string "posibles de un sistema físico,\l"
.string "podemos, en teoría, proyectar su\l"
.string "conducta hacia el futuro.\l"
.string "Pero esto solo se refiere a los\l"
.string "objetos inanimados.\l"
.string "Con las cuestiones sociales, nos\l"
.string "encontramos con un escollo.\l"
.string "Proyectar el futuro cuando están\l"
.string "implicados los seres humanos es\l"
.string "algo radicalmente diferente si los\l"
.string "consideramos seres vivos dotados\l"
.string "de libre albedrío.$"



RocketHideoutJohto11::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_11, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_11:
.string "El trabajo en las sombras siempre\n"
.string "da grandes resultados.\l"
.string "¡Cuando nos mostremos al mundo no\l"
.string "reconocerán lo que tengan delante!$"



RocketHideoutJohto12::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_12, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_12:
.string "Algunos de los ENTRENADORES más\n"
.string "veteranos de esta región cuentan\l"
.string "con POKÉMON que se salen de\l"
.string "nuestros parámetros de medición.\l"
.string "¿Realmente será cierta esa teoría\l"
.string "del vínculo entre\l"
.string "ENTRENADOR-POKÉMON?$"



RocketHideoutJohto13::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_13, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_13:
.string "Llegar a lugares donde nadie más\n"
.string "ha llegado exige de un despliege\l"
.string "de energía y recursos enorme, es\l"
.string "por ello que el TEAM ROCKET da una\l"
.string "enorme importancia a su equipo\l"
.string "científico, porque sabe del valor\l"
.string "incalculable que un nuevo\l"
.string "descubrimiento puede llegar a\l"
.string "tener.$"



RocketHideoutJohto14::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_14, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_14:
.string "El nivel de consumo de JOHTO es\n"
.string "muy inferior al de KANTO, pero sus\l"
.string "recursos son incomparables.\l"
.string "¡Aquí nos encargamos de darles un\l"
.string "buen uso!$"



RocketHideoutJohto15::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_15, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_15:
.string "Así que un pedido con 1000 MALLA\n"
.string "BALLS, 200 PROTEINAS+ZINC, 400\l"
.string "RESTAURA.TODOS y 3000 GALLETAS\l"
.string "LAVA…$"



RocketHideoutJohto16::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_16, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_16:
.string "Ese LANCE…\n"
.string "Que siga con sus títulos de\l"
.string "cartón.\l"
.string "Mientras, nosotros tomamos las\l"
.string "decisiones verdaderamente\l"
.string "importantes.$"



RocketHideoutJohto17::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_17, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_17:
.string "GIOVANNI le tiene en muy alta\n"
.string "estima ADMIN.JEFE {PLAYER}.\l"
.string "Con gente como ANDRA y usted el\l"
.string "TEAM ROCKET tiene futuro.$"



RocketHideoutJohto18::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_18, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_18:
.string "Hacia finales del siglo XIX, el\n"
.string "físico ALBERT MICHELSON aseguró\l"
.string "que todo cuanto nos quedaba por\l"
.string "descubrir acerca de las leyes de\l"
.string "la naturaleza no era más que\l"
.string "ajustar unas décimas los\l"
.string "conocimientos de ese entonces, me\l"
.string "pregunto cómo reaccionaría ante\l"
.string "todo lo que el siglo XX ha traído,\l"
.string "es más, ¿cómo reaccionarían todos\l"
.string "aquellos que en el presente creen\l"
.string "que ya se ha alcanzado el 99-100%\l"
.string "de nuestro potencial si le\l"
.string "llevaran a un laboratorio de\l"
.string "finales del siglo XXI?$"



RocketHideoutJohto19::
end



RocketHideoutJohto20::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_20, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_20:
.string "La ADMIN.JEFE ANDRA se ocupará de\n"
.string "ponernos en el MAPA también en\l"
.string "HOENN.\l"
.string "¡Todo el MUNDO POKÉMON acabará\l"
.string "siendo nuestro!$"



RocketHideoutJohto21::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_21, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_21:
.string "Nadie sabe en qué momento el\n"
.string "RHYPERIOR de nuestro LÍDER,\l"
.string "GIOVANNI, logró alcanzar ese punto\l"
.string "por el que acabó transformándose\l"
.string "una última vez, pero gracias a\l"
.string "poder estudiarlo pudimos crear a\l"
.string "NIDOKING-X y NIDOQUEEN-Y, aunque\l"
.string "elevando los stats de los\l"
.string "originales en +100 de BASE en\l"
.string "lugar de los +110 del RHYPERIOR de\l"
.string "GIOVANNI…$"



RocketHideoutJohto22::
lock     
faceplayer 
compare VAR_UNUSED_0x40F7, 202
goto_if_gt RocketHideoutJohto22_2    
msgbox RocketHideoutJohto_Text_22, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto22_2::
msgbox RocketHideoutJohto_Text_22_2, MSGBOX_DEFAULT
release
end

RocketHideoutJohto_Text_22_2:
	.string "Oh, señor. Creí que tenía una\n"
	.string "importante reunión en la TORRE RADIO\l"
	.string "TRIGAL. Hemos aprovechado su ausencia\l"
	.string "para hacer unas obras, para cuando\l"
	.string "usted termine habremos acabado.$"

RocketHideoutJohto_Text_22:
.string "Disculpe señor, pero a los pisos\n"
.string "superiores solo puede acceder\l"
.string "personal implicado de forma\l"
.string "directa en los proyectos que ahí\l"
.string "estamos desarrollando.\l"
.string "Tengo entendido que GIOVANNI\l"
.string "pretende introducirle a usted en\l"
.string "ellos, pero a su debido tiempo.\l"
.string "Hasta entonces, ¡buena suerte en\l"
.string "su paso por JOHTO!$"



RocketHideoutJohto23::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_23, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_23:
.string "El conocimiento adicional de las\n"
.string "minucias del transcurso diario\l"
.string "puede resultar inútil, y hasta\l"
.string "tóxico, por ello es de vital\l"
.string "importancia el saber separar el\l"
.string "grano de la paja.$"



RocketHideoutJohto24::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_24, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_24:
.string "La TORRE DE RADIO de CIUDAD TRIGAL\n"
.string "se está convirtiendo rápidamente\l"
.string "en la SILPH de JOHTO en cuanto\l"
.string "poder e influencia se refiere, no\l"
.string "me extrañaría que nuestro LÍDER\l"
.string "organice más pronto que tarde una\l"
.string "reunión de negocios allí también.$"



RocketHideoutJohto25::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_25, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_25:
.string "Quitando CIUDAD TRIGAL y CIUDAD\n"
.string "OLIVO, el resto de la población de\l"
.string "JOHTO vive en zonas rurales o bien\l"
.string "zonas con un gran peso histórico,\l"
.string "como CIUDAD IRIS.$"



RocketHideoutJohto26::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_26, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_26:
.string "A pesar de haber ganado la guerra,\n"
.string "gran parte de la población de\l"
.string "JOHTO ha seguido viviendo con la\l"
.string "sencillez y frugalidad que les\l"
.string "caracterizaba.\l"
.string "Realmente, el único que forzó esa\l"
.string "guerra fue LANCE, y la gente de\l"
.string "aquí lo sabe, tal vez gracias a\l"
.string "eso se acelere el proceso de unión\l"
.string "entre las dos regiones, el primer\l"
.string "paso es abrir las fronteras\l"
.string "asentadas en RUTA 26 y al pie del\l"
.string "MONTE PLATEADO…$"



RocketHideoutJohto27::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_27, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_27:
.string "¡Todo en orden señor!\n"
.string "¡Un placer tenerle por JOHTO!$"



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
checkmoney 108108
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 108108 0
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
	.string "Costará 108108 POKÉS.$"

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
