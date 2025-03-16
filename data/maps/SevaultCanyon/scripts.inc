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
.string "Training by oneself is certainly\n"
    .string "not a bad thing.\p"
    .string "But it's also not bad to aim for\n"
    .string "the top with a partner.\p"
    .string "Even BRUNO…\n"
    .string "He trained with a fellow by the\l"
    .string "name of BRAWLY before.$"


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
.string "SEVAULT CANYON\n"
    .string "TANOBY RUINS AHEAD$"



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
delay 10
applymovement 20, SevaultCanyon_Combate_Andra_Move_5
waitmovement 0x0
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 20, SevaultCanyon_Combate_Andra_Move_5.1
waitmovement 0x0
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 20, SevaultCanyon_Combate_Andra_Move_5.2
waitmovement 0x0
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 20, SevaultCanyon_Combate_Andra_Move_1
waitmovement 0x0
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
msgbox SevaultCanyon_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 20, SevaultCanyon_Combate_Andra_Move_5
waitmovement 0x0
msgbox SevaultCanyon_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_5.3
waitmovement 0x0
waitse
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 20, SevaultCanyon_Combate_Andra_Move_5.1
waitmovement 0x0
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 20, SevaultCanyon_Combate_Andra_Move_5.2
waitmovement 0x0
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_10.2 MSGBOX_AUTOCLOSE
delay 25
msgbox SevaultCanyon_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
delay 15
playse 559
applymovement 20, SevaultCanyon_Combate_Andra_Move_1
waitmovement 0x0
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
trainerbattle_no_intro TRAINER_ANDRA_7, SevaultCanyon_Combate_Andra_Texto_14
msgbox SevaultCanyon_Combate_Andra_Texto_15 MSGBOX_AUTOCLOSE
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_15.1 MSGBOX_AUTOCLOSE
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_15.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 20, SevaultCanyon_Combate_Andra_Move_7
waitmovement 0x0
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_16 MSGBOX_AUTOCLOSE
delay 10
msgbox SevaultCanyon_Combate_Andra_Texto_17 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SevaultCanyon_Combate_Andra_Move_8.1
applymovement 20, SevaultCanyon_Combate_Andra_Move_8
waitmovement 0x0
setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
removeobject 20
setvar VAR_ROUTE106_STATE, 4
release
end

SevaultCanyon_Combate_Andra_Move_8.1:
delay_16
face_right
delay_16
delay_8
face_up
delay_16
delay_16
delay_16
delay_16
delay_16
delay_16
delay_16
face_right
delay_16
delay_16
delay_16
delay_16
delay_16
delay_16
face_down
step_end

SevaultCanyon_Combate_Andra_Move_5.3:
emote_exclamation_mark
step_end

SevaultCanyon_Combate_Andra_Move_5.1:
delay_8
face_up
delay_16
delay_8
face_right
delay_8
step_end

SevaultCanyon_Combate_Andra_Move_5.2:
delay_8
face_player
delay_8
step_end

SevaultCanyon_Combate_Andra_Texto_1:
.string "ANDRA: ¿También por aquí, {PLAYER}?\n"
	.string "¡Este lugar es un paraíso! ¿Eh?$"

SevaultCanyon_Combate_Andra_Texto_2:
.string "GIOVANNI también me ha destinado a\n"
	.string "este lugar, pero a diferencia tuya, yo\l"
	.string "me he ofrecido a explorar las ruinas\l"
	.string "que hay más al sur.\p"
	.string "Me ha confiado la pequeña piedra del\n"
	.string "frasco que robamos por, si sirve de algo.$"

SevaultCanyon_Combate_Andra_Texto_3:
.string "{PAUSE 5}…{PAUSE 5}$"

SevaultCanyon_Combate_Andra_Texto_4:
.string "Todavía me cuesta creer que derrotaras\n"
	.string "a LANCE. Después de que entraras al HALL\l"
	.string "de LA FAMA para enfrentar a ROJO, fui\l"
	.string "derrotando, uno por uno, a todos los\l"
	.string "policías que salieron al paso.$"

SevaultCanyon_Combate_Andra_Texto_4.1:
	.string "Una vez derrotado el último, sentía\n"
	.string "que era invencible.\l"
	.string "Habíamos alcanzado otro nivel, y aún me\l"
	.string "quedaban fuerzas, pensé incluso en\l"
	.string "entrar a ayudarte con ROJO, pero{PAUSE 5}…{PAUSE 5}$"

SevaultCanyon_Combate_Andra_Texto_5:
.string "Justo en ese momento apareció LANCE.\p"
	.string "Un LANCE distinto al que enfrenté horas\n"
	.string "antes; sin mediar palabra sacó a un\l"
	.string "DRAGONITE que nunca antes había visto;\l"
	.string "de un solo ENFADO fue tumbando, de un\l"
	.string "solo golpe a todos mis POKÉMON, sin que\l"
	.string "pudieran hacer nada{PAUSE 5}…{PAUSE 5}$"

SevaultCanyon_Combate_Andra_Texto_5.1:
	.string "Solo mi CROBAT pudo llegar a tocarlo,\n"
	.string "antes de igualmente caer{PAUSE 5}…{PAUSE 5}$"

SevaultCanyon_Combate_Andra_Texto_6:
.string "Después de presenciar ese poder, creí\n"
	.string "que todo estaba perdido, aún si llegaras\l"
	.string "a derrotar a ROJO, LANCE estaba a otro\l"
	.string "nivel. Debiste sacar todo lo que tenías\l"
	.string "y más para sobrevivir a tal poder.$"

SevaultCanyon_Combate_Andra_Texto_7:
.string "Más tarde, entró GIOVANNI, junto con\n"
	.string "ATLAS y PETREL, me fui con estos dos\l"
	.string "últimos rápidamente a curar mis POKÉMON.\l"
	.string "El resto es ya historia.$"

SevaultCanyon_Combate_Andra_Texto_8:
.string "El poder mostrado por LANCE ahí me ha\n"
	.string "hecho reflexionar sobre los límites\l"
	.string "últimos a los que podemos llegar.$"

SevaultCanyon_Combate_Andra_Texto_8.1:
	.string "Sobre la fuerza bruta que algunos\n"
	.string "POKÉMON pueden alcanzar, pero también\l"
	.string "sobre cómo un ROCKET de ISLA INTA pudo\l"
	.string "lidiar con ello, demostrando que es\l"
	.string "posible domar al mayor de los poderes,\l"
	.string "a cualquier LEGENDARIO tocado por la\l"
	.string "varita, si se dispone de la suficiente\l"
	.string "habilidad, entrenamiento y, en especial,\l"
	.string "un estrecho vínculo con los tuyos.$"

SevaultCanyon_Combate_Andra_Texto_9:
.string "Es por ello, por tu actuación en el\n"
	.string "HALL DE LA FAMA, que decidí no usar\l"
	.string "POKÉMON LEGENDARIOS en mi equipo.$"

SevaultCanyon_Combate_Andra_Texto_10:
.string "Así es: rechazé a ARTICUNO, ZAPDOS y\n"
	.string "MOLTRES cuando GIOVANNI me los ofreció.$"

SevaultCanyon_Combate_Andra_Texto_10.1:
	.string "No los necesito para alcanzar mi mejor\n"
	.string "versión posible, porque ahora sé que un\l"
	.string "POKÉMON fuerte puede provenir de\l"
	.string "cualquier lugar, lo único que diferencia\l"
	.string "a un LEGENDARIO de un mortal, es que\l"
	.string "este último necesitará pasar por cierto\l"
	.string "proceso para alcanzar su máximo.$"

SevaultCanyon_Combate_Andra_Texto_10.2:
	.string "Debes de estar dispuesto a ayudarle, a\n"
	.string "educarle y creer en él, pero en última\l"
	.string "instancia, creo firmemente que, en\l"
	.string "ambos casos, puede llegar a tocarse el\l"
	.string "mismo cielo.$"

SevaultCanyon_Combate_Andra_Texto_11:
	.string "Maybe this works for people too, don't\n"
	.string "ya think?$"

SevaultCanyon_Combate_Andra_Texto_12:
.string "En cualquier caso, ¡no he venido hasta\n"
	.string "aquí para filosofar sobre el uso\l"
	.string "o no uso de LEGENDARIOS!\p"
	.string "¡Voy a descubrir qué diablos es\n"
	.string "esta piedra, y por el camino\l"
	.string "seguiré mejorando mi equipo!$"

SevaultCanyon_Combate_Andra_Texto_13:
.string "Dudo mucho que exista un ENTRENADOR\n"
	.string "como tú por estas islas.\l"
	.string "Eso significa{PAUSE 15}…{PAUSE 15} que la mayor prueba\l"
	.string "a la que me puedo enfrentar aquí,\l"
	.string "en este momento, eres tú.\p"
	.string "¡Muéstrame cómo bailan los POKÉMON\n"
	.string "del verdadero CAMPEÓN de KANTO!$"

SevaultCanyon_Combate_Andra_Texto_14:
.string "Mmm…\n"
	.string "Tan cerca y tan lejos, lucharé por\l"
	.string "ese 1% que me falta.$"

SevaultCanyon_Combate_Andra_Texto_15:
.string "No has perdido la forma, ¿eh?\n"
	.string "Me alegra saber que sigues progresando,\l"
	.string "cuanto más mejores, más lo haré yo.$"

SevaultCanyon_Combate_Andra_Texto_15.1:
	.string "Dos rivales que se empujan hasta el\n"
	.string "extremo, alcanzan cotas mayores de las\l"
	.string "que jamás podrían alcanzar por separado.$"

SevaultCanyon_Combate_Andra_Texto_15.2:
	.string "Para el próximo combate, no te quepa\n"
	.string "duda: te obligaré a aún más lejos.$"

SevaultCanyon_Combate_Andra_Texto_16:
.string "Las ruinas del sur deben estar ya\n"
	.string "cerca.\p"
	.string "No me extraña que las levantaran\n"
	.string "aquí, el ambiente a pura naturaleza\l"
	.string "que se respira es espectacular.$"

SevaultCanyon_Combate_Andra_Texto_17:
.string "Si me buscas, probablemente esté en\n"
	.string "las cámaras de esas 7 pequeñas islas\l"
	.string "que hay más al sur, ¡mantente alerta!$"

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
delay_8
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
delay_16
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
