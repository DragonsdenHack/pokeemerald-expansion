SevaultCanyon_MapScripts::
	.byte 0

SevaultCanyon1::
end


SevaultCanyon2::
end


SevaultCanyon3::
end


SevaultCanyon4::
end


SevaultCanyon5::
end


SevaultCanyon6::
end


SevaultCanyon7::
end


SevaultCanyon8::
end


SevaultCanyon9::
end


SevaultCanyon10::
end


SevaultCanyon11::
end


SevaultCanyon12::
end


SevaultCanyon13::
end


SevaultCanyon14::
end


SevaultCanyon15::
end


SevaultCanyon16::
lock     
faceplayer     
msgbox Text_16, MSGBOX_DEFAULT
release     
end

Text_16:
.string "Entrenarse uno mismo no está mal.\p"
.string "Pero tampoco está mal buscar\n"
.string "una buena pareja de combate.\p"
.string "Fíjate en BRUNO...\n"
.string "Él se entrenó con un tal MARCIAL.$"


SevaultCanyon17::
end


SevaultCanyon18::
end


SevaultCanyon19::
end


SevaultCanyon20::
end



SevaultCanyon_EventScript_Domador::
	trainerbattle_single TRAINER_PAXTON, SevaultCanyon_Text_DomadorIntro, SevaultCanyon_Text_DomadorDefeated
	msgbox SevaultCanyon_Text_DomadorPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Guay::
	trainerbattle_single TRAINER_MAY_RUSTBORO_MUDKIP, SevaultCanyon_Text_GuayIntro, SevaultCanyon_Text_GuayDefeated
	msgbox SevaultCanyon_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Guay2::
	trainerbattle_single TRAINER_MAXIE_MAGMA_HIDEOUT, SevaultCanyon_Text_Guay2Intro, SevaultCanyon_Text_Guay2Defeated
	msgbox SevaultCanyon_Text_Guay2PostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Chico::
	trainerbattle_single TRAINER_BRUNO_1_MT_CHIMNEY, SevaultCanyon_Text_ChicoIntro, SevaultCanyon_Text_ChicoDefeated
	msgbox SevaultCanyon_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Chica::
	trainerbattle_single TRAINER_BRENDAN_RUSTBORO_TORCHIC, SevaultCanyon_Text_ChicaIntro, SevaultCanyon_Text_ChicaDefeated
	msgbox SevaultCanyon_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Luchadora::
	trainerbattle_single TRAINER_BRENDAN_RUSTBORO_TREECKO, SevaultCanyon_Text_LuchadoraIntro, SevaultCanyon_Text_LuchadoraDefeated
	msgbox SevaultCanyon_Text_LuchadoraPostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyonDocumento_100::
msgbox SevaultCanyonDocumento_Text_100, MSGBOX_SIGN   
end

SevaultCanyonDocumento_Text_100:
	.string "CAÑÓN SETE\n"
	.string "RUINAS SETE al sur$"



SevaultCanyon_EventScript_Pareja1::
	trainerbattle_single TRAINER_MAXIE_MT_CHIMNEY, SevaultCanyon_Text_Pareja1Intro, SevaultCanyon_Text_Pareja1Defeated
	msgbox SevaultCanyon_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



SevaultCanyon_EventScript_Pareja2::
	trainerbattle_single TRAINER_MAXIE_MT_CHIMNEY, SevaultCanyon_Text_Pareja2Intro, SevaultCanyon_Text_Pareja2Defeated
	msgbox SevaultCanyon_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

SevaultCanyon_Combate_Andra_Izq::
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_2
waitmovement 0x0
clearflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
addobject 20
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_3
applymovement 20, SevaultCanyon_Combate_Andra_Move_4
waitmovement 0x0
goto SevaultCanyon_Combate_Andra

SevaultCanyon_Combate_Andra_Der::
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_2
waitmovement 0x0
clearflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
addobject 20
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_3.1
applymovement 20, SevaultCanyon_Combate_Andra_Move_4
waitmovement 0x0
goto SevaultCanyon_Combate_Andra

SevaultCanyon_Combate_Andra::
msgbox SevaultCanyon_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_1
waitmovement 0x0
msgbox SevaultCanyon_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox SevaultCanyon_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox SevaultCanyon_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_5
waitmovement 0x0
msgbox SevaultCanyon_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
msgbox SevaultCanyon_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_1
waitmovement 0x0
msgbox SevaultCanyon_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
msgbox SevaultCanyon_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_5
waitmovement 0x0
msgbox SevaultCanyon_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
msgbox SevaultCanyon_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_1
waitmovement 0x0
msgbox SevaultCanyon_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
msgbox SevaultCanyon_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
msgbox SevaultCanyon_Combate_Andra_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_7, SevaultCanyon_Combate_Andra_Texto_14
msgbox SevaultCanyon_Combate_Andra_Texto_15 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_7
waitmovement 0x0
msgbox SevaultCanyon_Combate_Andra_Texto_16 MSGBOX_AUTOCLOSE
msgbox SevaultCanyon_Combate_Andra_Texto_17 MSGBOX_AUTOCLOSE
applymovement 20, SevaultCanyon_Combate_Andra_Move_8
waitmovement 0x0
setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
removeobject 20
setvar VAR_ROUTE106_STATE, 4
release
end

SevaultCanyon_Combate_Andra_Texto_1:
.string "ANDRA: ¿También por aquí {PLAYER}?\n"
	.string "¡Este lugar es un paraíso! ¿Eh?$"

SevaultCanyon_Combate_Andra_Texto_2:
.string "GIOVANNI también me ha destinado a\n"
	.string "este lugar, aunque a diferencia\l"
	.string "tuya yo me he ofrecido a explorar\l"
	.string "esas misteriosas ruinas que\l"
	.string "hay al sur, me ha confiado la\l"
	.string "pequeña piedra contenida en el\l"
	.string "frasco que robamos por si sirve de\l"
	.string "algo.$"

SevaultCanyon_Combate_Andra_Texto_3:
.string "...$"

SevaultCanyon_Combate_Andra_Texto_4:
.string "Todavía me cuesta creer que\n"
	.string "derrotaras a LANCE, después de que\l"
	.string "entraras al HALL DE LA FAMA para\l"
	.string "enfrentar a ROJO fui derrotando\l"
	.string "uno por uno a todos los policías\l"
	.string "que salieron al paso para\l"
	.string "detenernos, una vez derrotado el\l"
	.string "último sentía que era invencible,\l"
	.string "de verdad, mi equipo jamás había\l"
	.string "alcanzado tal nivel y aún me\l"
	.string "quedaban fuerzas, pensé incluso en\l"
	.string "entrar a ayudarte con ROJO, pero...$"

SevaultCanyon_Combate_Andra_Texto_5:
.string "Justo en ese momento apareció\n"
	.string "LANCE, un LANCE distinto al que\l"
	.string "enfrenté horas antes, sin mediar\l"
	.string "palabra sacó a un DRAGONITE que\l"
	.string "nunca antes había visto, y de un\l"
	.string "solo ENFADO fue tumbando uno por\l"
	.string "uno de un solo golpe a todos mis\l"
	.string "POKÉMON sin que pudieran hacer\l"
	.string "nada, solo mi CROBAT pudo llegar a\l"
	.string "tocarle antes de caer igualmente\l"
	.string "de un solo ENFADO...$"

SevaultCanyon_Combate_Andra_Texto_6:
.string "Después de presenciar ese poder\n"
	.string "creí que todo estaba perdido, aún\l"
	.string "si llegaras a derrotar a ROJO,\l"
	.string "LANCE estaba a otro nivel, debiste\l"
	.string "de sacar todo lo que tenías dentro\l"
	.string "y más para sobrevivir a tal poder.$"

SevaultCanyon_Combate_Andra_Texto_7:
.string "Más tarde entró GIOVANNI junto\n"
	.string "con ATLAS y PETREL, me fui con\l"
	.string "estos dos últimos rápidamente a\l"
	.string "curar a mis POKÉMON, el resto es\l"
	.string "ya historia.$"

SevaultCanyon_Combate_Andra_Texto_8:
.string "El poder mostrado por LANCE ahí me\n"
	.string "ha hecho reflexionar sobre los\l"
	.string "límites últimos a los que puede\l"
	.string "llegar un entrenador, sobre la\l"
	.string "fuerza bruta que algunos POKÉMON\l"
	.string "pueden alcanzar, pero también\l"
	.string "sobre como un ROCKET de ISLA INTA\l"
	.string "pudo lidiar con ello demostrando\l"
	.string "que es posible domar al mayor de\l"
	.string "los poderes, a cualquier\l"
	.string "legendario tocado por la varita\l"
	.string "mágica, si se dispone de la\l"
	.string "suficiente habilidad y sus POKÉMON\l"
	.string "están lo suficientemente bien\l"
	.string "entrenados y preparados.$"

SevaultCanyon_Combate_Andra_Texto_9:
.string "Es por ello, por tu actuación en\n"
	.string "el HALL DE LA FAMA, que decidí no\l"
	.string "usar POKÉMON LEGENDARIOS en mi\l"
	.string "equipo.$"

SevaultCanyon_Combate_Andra_Texto_10:
.string "Así es, rechazé a ARTICUNO, ZAPDOS\n"
	.string "y MOLTRES cuando GIOVANNI me los\l"
	.string "ofreció, no los necesito para\l"
	.string "alcanzar mi mejor versión posible,\l"
	.string "ahora sé que un POKÉMON fuerte\l"
	.string "puede provenir de cualquier lugar,\l"
	.string "lo único que diferencia a un\l"
	.string "POKÉMON LEGENDARIO de uno que no\l"
	.string "lo es, es que este último\l"
	.string "necesitará pasar por cierto\l"
	.string "proceso para alcanzar su\l"
	.string "potencial, debes de estar\l"
	.string "dispuesto a ayudarle, a educarle y\l"
	.string "creer en él, pero en última\l"
	.string "instancia creo firmemente que el\l"
	.string "pico máximo de rendimiento en\l"
	.string "ambos casos, el del LEGENDARIO y\l"
	.string "el del POKÉMON común, es similar,\l"
	.string "con el añadido de que aprendiste\l"
	.string "mucho más en el proceso de criar a\l"
	.string "los tuyos y adquiriste mayor\l"
	.string "sabiduría que en el caso de contar\l"
	.string "con un LEGENDARIO al que se le da\l"
	.string "todo hecho.$"

SevaultCanyon_Combate_Andra_Texto_11:
.string "Tal vez esto también sea aplicable\n"
	.string "a las personas, ¿no crees?$"

SevaultCanyon_Combate_Andra_Texto_12:
.string "En cualquier caso, ¡no he venido\n"
	.string "hasta aquí para filosofear sobre\l"
	.string "el uso o no uso de LEGENDARIOS!\l"
	.string "¡Mi objetivo primordial aquí es\l"
	.string "descubrir a qué diablos pertenece\l"
	.string "esta piedra al tiempo que mejorar\l"
	.string "todo lo que pueda en el camino!$"

SevaultCanyon_Combate_Andra_Texto_13:
.string "Dudo mucho que exista un\n"
	.string "entrenador como tú en estas islas,\l"
	.string "eso significa que la mayor prueba\l"
	.string "a la que me puedo enfrentar aquí\l"
	.string "en este momento eres tú.\l"
	.string "¡Muéstrame cómo bailan los POKÉMON\l"
	.string "del verdadero CAMPEÓN de KANTO!$"

SevaultCanyon_Combate_Andra_Texto_14:
.string "Mmm...\n"
	.string "Tan cerca y tan lejos, lucharé por\l"
	.string "ese 1% que me falta.$"

SevaultCanyon_Combate_Andra_Texto_15:
.string "No has perdido la forma eh, me\n"
	.string "alegra saber que sigas\l"
	.string "progresando, cuanto más mejores,\l"
	.string "más lo haré yo, dos rivalidades\l"
	.string "que se empujan hasta el extremo\l"
	.string "alcanzan cotas mayores de las que\l"
	.string "jamás podrían alcanzar por\l"
	.string "separado, para nuestro próximo\l"
	.string "combate no te quepa duda de que\l"
	.string "estaré preparada.$"

SevaultCanyon_Combate_Andra_Texto_16:
.string "No debe de quedar mucho para\n"
	.string "llegar a las ruinas del sur, no me\l"
	.string "extraña que las levantaran aquí,\l"
	.string "el ambiente a pura naturaleza que\l"
	.string "se respira es espectacular.$"

SevaultCanyon_Combate_Andra_Texto_17:
.string "Si me buscas probablemente esté en\n"
	.string "las cámaras de esas 7 pequeñas\l"
	.string "islas que hay al sur, ¡mantente\l"
	.string "alerta!$"

SevaultCanyon_Combate_Andra_Move_1:
walk_in_place_up
step_end

SevaultCanyon_Combate_Andra_Move_2:
emote_exclamation_mark
step_end

SevaultCanyon_Combate_Andra_Move_3:
walk_in_place_down
step_end

SevaultCanyon_Combate_Andra_Move_3.1:
walk_left
walk_in_place_down
step_end

SevaultCanyon_Combate_Andra_Move_4:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
face_up
step_end

SevaultCanyon_Combate_Andra_Move_5:
face_left
step_end

SevaultCanyon_Combate_Andra_Move_6:
face_down
step_end

SevaultCanyon_Combate_Andra_Move_7:
walk_in_place_right
walk_in_place_up
step_end

SevaultCanyon_Combate_Andra_Move_8:
walk_right
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end
