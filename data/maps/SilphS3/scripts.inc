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
    .string "…\n"
	.string "…\l"
	.string "-Está completamente inmerso en la\l"
	.string "tarea que está realizando.-$"

SilphS3_4::
lock     
faceplayer     
msgbox SilphS3_Text_4, MSGBOX_DEFAULT
release     
end


SilphS3_Text_4:
.string "De grandes atletas pasaron a ser\n"
.string "dioses griegos y, finalmente,\l"
.string "acabaron convertidos en penosos\l"
.string "experimentos fallidos.\p"
.string "¿Hasta qué punto es viable elevar\n"
.string "el rendimiento a toda costa\l"
.string "sacrificando todo lo demás?\l"
.string "Tal vez algo tan\l"
.string "extraordinariamente sobrehumano\l"
.string "deje de ser inspirador\l"
.string "precisamente por eso, por estar\l"
.string "tan a reventar de todo que no\l"
.string "pueda servir de inspiración y\l"
.string "ejemplo para nadie.\l"
.string "Asimismo, ¿con qué ojos veríamos\l"
.string "un POKÉMON con 150 de base en cada\l"
.string "estadística?\p"
.string "Tal vez, lejos de ser admirable,\n"
.string "esté tan fuera de nuestros\l"
.string "parámetros y posibilidades que\l"
.string "perdamos el interés en él al saber\l"
.string "que jamás podremos replicarlo.$"



SilphS3Documento_100::
lock     
showmonpic SPECIES_GENESECT, 10, 3  
playmoncry SPECIES_GENESECT, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_100:
.string "GENESECT: BICHO/ACERO\p"
	.string "PS: 71\n"
	.string "ATAQUE: 120\l"
	.string "DEFENSA: 95\l"
	.string "ATAQUE ESPECIAL: 120\l"
	.string "DEFENSA ESPECIAL: 95\l"
	.string "VELOCIDAD: 99\l"
	.string "TOTAL: 600\p"
	.string "POKÉMON modificado a partir del\n"
	.string "depredador del tipo BICHO más\l"
	.string "letal de TESELIA hace 300 millones\l"
	.string "de años, del cual desconocemos sus\l"
	.string "STATS BASE, pero lo estimamos en\l"
	.string "520-540, con un ATAQUE ESPECIAL\l"
	.string "realmente bajo de entre 40 y 60\l"
	.string "puntos, consistiendo su principal\l"
	.string "mejora entre el GENESECT original\l"
	.string "y el modificado en ese incremento\l"
	.string "de 60-80 en ATAQUE ESPECIAL que lo\l"
	.string "colocaría en 600 de BASE.\l"
	.string "Queda por estudiar un posible\l"
	.string "parentesco con KABUTOPS.$"



SilphS3Documento_101::
lock     
msgbox SilphS3Documento_Text_101, MSGBOX_DEFAULT
release     
end

SilphS3Documento_Text_101:
	.string "Según nuestras últimas\n"
	.string "investigaciones, la técnica de\l"
	.string "resurrección actual no reproduce\l"
	.string "de forma 100% fiable cómo eran en\l"
	.string "estado salvaje los FÓSILES,\l"
	.string "especialmente el de AERODACTYL, el\l"
	.string "cual se estima era incluso más\l"
	.string "rápido y letal.$"



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
	.string "PS: 105\n"
	.string "ATAQUE: 30\l"
	.string "DEFENSA: 105\l"
	.string "ATAQUE ESPECIAL: 160\l"
	.string "DEFENSA ESPECIAL: 105\l"
	.string "VELOCIDAD: 55\l"
	.string "TOTAL: 560\p"
	.string "Solo se conocen decenas de\n"
	.string "ejemplares en todo el mundo, se\l"
	.string "cree que provenientes de un\l"
	.string "DARMANITAN que fue capaz de\l"
	.string "alcanzar el estado de iluminación,\l"
	.string "canalizando con ello todo su vigor\l"
	.string "físico hacia su mente, tal fue la\l"
	.string "sabiduría acumulada en el proceso\l"
	.string "que su ATAQUE FÍSICO quedó\l"
	.string "completamente inutilizado, ganando\l"
	.string "en el proceso un ATAQUE ESPECIAL\l"
	.string "aún mayor que su otrora FÍSICO\l"
	.string "como DARMANITAN NORMAL, unos 160\l"
	.string "de BASE que siquiera MEWTWO pudo\l"
	.string "igualar.$"



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
	.string "PS: 45\n"
	.string "ATAQUE: 140\l"
	.string "DEFENSA: 130\l"
	.string "ATAQUE ESPECIAL: 140\l"
	.string "DEFENSA ESPECIAL: 135\l"
	.string "VELOCIDAD: 30\l"
	.string "TOTAL: 620\p"
	.string "Conocido como -La bestia del mar-,\n"
	.string "y temido incluso por GYARADOS,\l"
	.string "WISHIWASHI por sí solo es incluso\l"
	.string "más débil que un vulgar MAGIKARP,\l"
	.string "pero es capaz mediante la unión de\l"
	.string "muchos de su especie formar una\l"
	.string "nueva forma, llamada banco, que\l"
	.string "actúa como un solo POKÉMON\l"
	.string "individual, rebasando el poder de\l"
	.string "cualquier PSEUDOLEGENDARIO.$"



SilphS3Documento_104::
lock     
showmonpic SPECIES_PORYGON3, 10, 3  
playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_104, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_104:
	.string "PORYGON3: NORMAL/FANTASMA\p"
	.string "PS: 85\n"
	.string "ATAQUE: 75\l"
	.string "DEFENSA: 70\l"
	.string "ATAQUE ESPECIAL: 155\l"
	.string "DEFENSA ESPECIAL: 95\l"
	.string "VELOCIDAD: 135\l"
	.string "TOTAL: 615\p"
	.string "Después de incontables intentos,\n"
	.string "hemos podido optimizar al 99% el\l"
	.string "máximo potencial alcanzable por la\l"
	.string "base del PORYGON original.\l"
	.string "PORYGON3 ha logrado el imposible\l"
	.string "de romper la barrera de 154 de\l"
	.string "BASE en ATAQUE ESPECIAL impuesta\l"
	.string "por MEWTWO por un solo punto,\l"
	.string "superándole además en VELOCIDAD\l"
	.string "para contar en su conjunto con una\l"
	.string "ofensiva sin precedentes,\l"
	.string "semejante poder destructivo era\l"
	.string "imposible de sostener sin\l"
	.string "sacrificar su defensa física, que\l"
	.string "inevitablemente cayó hasta los 70\l"
	.string "de BASE.$"

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
.string "????: ¿Tú otra vez?$"

SilphS3_Miguel_Batalla_Texto_2:
.string "C.MIGUEL: Ya nos avisó el PRESIDENTE\n"
	.string "que dentro de poco un ROCKET podría\l"
	.string "hacer una pequeña visita a este\l"
	.string "lugar privilegiado, no sé porqué me\l"
	.string "sorprende que seas tú el encargado.$"

SilphS3_Miguel_Batalla_Texto_3:
.string "Como puedes observar, ADMINISTRADOR, no\n"
	.string "eres el único que ha logrado escalar y\l"
	.string "ascender; mis amplios conocimientos y \l"
	.string "obsesión por los FÓSILES atrajeron la\l"
	.string "atención de SILPH que, junto con la\l"
	.string "recomendación de BILL, me colocaron\l"
	.string "en el mejor lugar para investigarlos\l"
	.string "a fondo: aquí.$"

SilphS3_Miguel_Batalla_Texto_4:
.string "Ahora que he logrado mi objetivo, poco\n"
	.string "me importa lo que tengas entre manos.\l"
	.string "Solo necesito tiempo para avanzar en\l"
	.string "mis teorías e investigaciones.\l"
	.string "Sin embargo{PAUSE 15}…{PAUSE 15}$"

SilphS3_Miguel_Batalla_Texto_5:
.string "No todos los días se presenta la\n"
	.string "ocasión de combatir contigo, aquel\l"
	.string "que finalmente pudo derrotar a LANCE.\p"
	.string "Al final resulta que no perdí con un\n"
	.string "cualquiera, aunque de cara al público,\l"
	.string "a la masa, lo sigas siendo{PAUSE 15}…{PAUSE 15}$"

SilphS3_Miguel_Batalla_Texto_6:
.string "Pero este no es el caso.\n"
	.string "Sé quién eres, y sé hasta\l"
	.string "dónde has llegado{PAUSE 15}…{PAUSE 15}\l"
	.string "Por eso mismo{PAUSE 15}…{PAUSE 15}\p"
	.string "¡Vas a ayudarme a seguir explorando\n"
	.string "los límites de este mundo!$"

SilphS3_Miguel_Batalla_Texto_7:
.string "Tal y como esperaba, sigue sin\n"
	.string "ser suficiente.$"

SilphS3_Miguel_Batalla_Texto_8:
.string "¡Ja!\n"
	.string "¡Nada ha cambiado después de todo!\l"
	.string "Sigues siendo inaborable.\p"
	.string "De todos modos, mis investigaciones\n"
	.string "están lejos de concluir.$"

SilphS3_Miguel_Batalla_Texto_9:
.string "Ahora que tengo a AERODACTYL y el\n"
	.string "resto de FÓSILES conocidos en\l"
	.string "KANTO y HOENN, es hora de expandir\l"
	.string "lo que hoy sabemos sobre ellos.\p"
	.string "Por eso me ha contratado SILPH.$"

SilphS3_Miguel_Batalla_Texto_10:
.string "Si mis teorías están en lo cierto, el\n"
	.string "verdadero potencial de los FÓSILES\l"
	.string "dista mucho de ser el que vemos\l"
	.string "hoy en día; antaño, en estado\l"
	.string "salvaje, eran mucho más fieros y\l"
	.string "letales.\p"
	.string "En el proceso de resurrección se\n"
	.string "pierden sus instintos primitivos.$"

SilphS3_Miguel_Batalla_Texto_11:
.string "Desde aquí trataré de demostrarlo.\n"
	.string "Mientras no estorbes en mi búsqueda,\l"
	.string "puedes hacer lo que quieras.\l"
	.string "¿Nos vamos entendiendo, no?$"

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
	.string "Los ejemplares de las AVES, todos los\l"
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
.string "¿No me crees?$"

SilphS3_Bill_Batalla_Texto_11:
.string "Tienes esos documentos ahí mismo,\n"
	.string "al extremo de mi escritorio,\l"
	.string "compruébalo tú mismo.$"

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
.string "¿Seguir leyendo?$"

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


SilphS1_Sotano_2::
lock
msgbox SilphS1_Sotano_2_Texto_1 MSGBOX_SIGN
release
end

SilphS1_Sotano_2_Texto_1:
.string "BIBLIOTECA PRIVADA DE SILPH S.A.$"

