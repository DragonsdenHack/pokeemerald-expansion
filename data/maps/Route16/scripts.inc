Route16_MapScripts::
	.byte 0

Route16_1::
end


Route16_2::
end


Route16_3::
end


Route16_4::
end


Route16_5::
end


Route16_6::
end


Route16_7::
end


Route16_8::
end


Route16_9::
end


Route16_10::
end


Route16_11::
lock     
faceplayer     
msgbox Route16_Text_11, MSGBOX_DEFAULT
release     
end

Route16_Text_11:
.string "Ese HITMONLEE pegaba durísimo…$"


Route16_12::
lock         
msgbox Route16_Text_12, MSGBOX_SIGN
release     
end

Route16_Text_12:
.string "Ha acabado con nosotros 4 usando\n"
.string "solo a 2 POKÉMON…$"



Route16_13::
lock        
msgbox Route16_Text_13, MSGBOX_SIGN
release     
end

Route16_Text_13:
.string "Ilusos…\n"
.string "Nadie que desafíe a un miembro de\l"
.string "la ÉLITE 4 puede salir bien\l"
.string "parado…$"


Route16_14::
lock         
msgbox Route16_Text_14, MSGBOX_SIGN
release     
end

Route16_Text_14:
.string "Así que este es el poder de la\n"
.string "ÉLITE 4…$"

Route16_15::
lock        
msgbox Route16_Text_15, MSGBOX_SIGN
release     
end

Route16_Text_15:
.string "Solo os queda hablar…o ir a\n"
.string "prisión.$"


Route16_16::
lock         
msgbox Route16_Text_16, MSGBOX_SIGN
release     
end

Route16_Text_16:
.string "Ya los tenemos donde queríamos…$"


Route16_17::
lock         
msgbox Route16_Text_17, MSGBOX_SIGN
release     
end

Route16_Text_17:
.string "Maldición…\n"
	.string "Mi WEEZING no pudo siquiera tocar\l"
	.string "a esa enorme serpiente de acero…$"



Route16_EventScript_Motorista::
	trainerbattle_single TRAINER_JACKI_4, Route16_Text_MotoristaIntro, Route16_Text_MotoristaDefeated
	msgbox Route16_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista2::
	trainerbattle_single TRAINER_AXLE, Route16_Text_Motorista2Intro, Route16_Text_Motorista2Defeated
	msgbox Route16_Motorista2PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista3::
	trainerbattle_single TRAINER_JEFF, Route16_Text_Motorista3Intro, Route16_Text_Motorista3Defeated
	msgbox Route16_Motorista3PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista4::
	trainerbattle_single TRAINER_JACKI_3, Route16_Text_Motorista4Intro, Route16_Text_Motorista4Defeated
	msgbox Route16_Motorista4PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista5::
	trainerbattle_single TRAINER_JACKI_2, Route16_Text_Motorista5Intro, Route16_Text_Motorista5Defeated
	msgbox Route16_Motorista5PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista6::
	trainerbattle_single TRAINER_DALTON_5, Route16_Text_Motorista6Intro, Route16_Text_Motorista6Defeated
	msgbox Route16_Motorista6PostBattle, MSGBOX_AUTOCLOSE
	end



Route16Documento_100::
msgbox Route16Documento_Text_100, MSGBOX_SIGN   
end

Route16Documento_Text_100:
	.string "RUTA 16\n"
	.string "CIUDAD AZULONA - CIUDAD FUCSIA$"



Route16Documento_101::
msgbox Route16Documento_Text_101, MSGBOX_SIGN   
end

Route16Documento_Text_101:
	.string "¡Disfruta de la pendiente!\n"
	.string "CAMINO BICIS$"



Route16_EventScript_Pareja1::
	trainerbattle_single TRAINER_HUEY, Route16_Text_Pareja1Intro, Route16_Text_Pareja1Defeated
	msgbox Route16_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Pareja2::
	trainerbattle_single TRAINER_HUEY, Route16_Text_Pareja2Intro, Route16_Text_Pareja2Defeated
	msgbox Route16_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route16_Combate_Bruno::
playse MUS_RG_ROCKET_HIDEOUT
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_1
waitmovement 0x0
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route16_Combate_Bruno_Texto_2 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route16_Combate_Bruno_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_4
waitmovement 0x0
playse SE_PIN
applymovement 13, Route16_Combate_Bruno_Move_5
applymovement 17, Route16_Combate_Bruno_Move_5
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_7 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_8 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BRUNO_1, Route16_Combate_Bruno_Texto_10
playse MUS_RG_ROCKET_HIDEOUT
msgbox Route16_Combate_Bruno_Texto_11 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_12 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_HO_OH
fadescreen 1
delay 20
removeobject 13
removeobject 15
removeobject 16
fadescreen 0
playse MUS_RG_ROUTE3
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_7
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_14 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_8
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_15 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_8
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_HM04_STRENGTH
waitfanfare
delay 20
msgbox Route16_Combate_Bruno_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
fadescreen 1
delay 20
removeobject 17
removeobject 11
removeobject 12
removeobject 14
fadescreen 0
setvar VAR_UNUSED_0x40F7, 66
release
end

Route16_Combate_Bruno_arriba::
playse MUS_RG_ROCKET_HIDEOUT
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_1.1
waitmovement 0x0
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route16_Combate_Bruno_Texto_2 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route16_Combate_Bruno_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_4.1
waitmovement 0x0
playse SE_PIN
applymovement 13, Route16_Combate_Bruno_Move_5
applymovement 17, Route16_Combate_Bruno_Move_5
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_7 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_8 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BRUNO_1, Route16_Combate_Bruno_Texto_10
playse MUS_RG_ROCKET_HIDEOUT
msgbox Route16_Combate_Bruno_Texto_11 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_12 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_HO_OH
fadescreen 1
delay 20
removeobject 13
removeobject 15
removeobject 16
fadescreen 0
playse MUS_RG_ROUTE3
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_7
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_14 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_8
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_15 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_8
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_HM04_STRENGTH
waitfanfare
delay 20
msgbox Route16_Combate_Bruno_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
fadescreen 1
delay 20
removeobject 17
removeobject 11
removeobject 12
removeobject 14
fadescreen 0
setvar VAR_UNUSED_0x40F7, 66
release
end

Route16_Combate_Bruno_Texto_1:
.string "BRUNO: Fin del juego moteros, ha\n"
	.string "sido muy estúpido por vuestra\l"
	.string "parte creer que vuestros POKÉMON\l"
	.string "VENENO pudieran siquiera tocar a\l"
	.string "mi poderoso acero, más estúpido\l"
	.string "aún creer que vuestros tipo LUCHA\l"
	.string "fueran rival para los míos, ahora\l"
	.string "que estáis más calmados y no os\l"
	.string "quedan POKÉMON os diré lo que\l"
	.string "vamos a hacer…$"

Route16_Combate_Bruno_Texto_2:
.string "Váis a hablar con el resto de\n"
	.string "vuestros colegas, y convencerles\l"
	.string "de que el futuro es el gobierno de\l"
	.string "LANCE, el TEAM ROCKET es historia,\l"
	.string "y pasaréis a deber lealtad a\l"
	.string "LANCE, dándonos por supuesto toda\l"
	.string "la información sobre el TEAM\l"
	.string "ROCKET de la que disponéis, de\l"
	.string "hacerlo se os perdonarán vuestros\l"
	.string "crímenes y podréis seguir en\l"
	.string "libertad paseando por este lugar,\l"
	.string "si os negáis…$"

Route16_Combate_Bruno_Texto_3:
.string "Dad por seguro que destruiré uno\n"
	.string "por uno a todos los motoristas que\l"
	.string "encuentre por KANTO, y convertiré\l"
	.string "este lugar en un solar.$"

Route16_Combate_Bruno_Texto_4:
.string "Todos acabaréis en la cárcel, y me\n"
	.string "encargaré de que la opinión\l"
	.string "pública se cebe con vosotros de\l"
	.string "igual forma que hace con el TEAM\l"
	.string "ROCKET, vosotros decidís.$"

Route16_Combate_Bruno_Texto_5:
.string "¡Nunca recibiremos órdenes de\n"
	.string "alguien de fuera como LANCE!$"

Route16_Combate_Bruno_Texto_6:
.string "BRUNO: Lo tomaré como un no pues,\n"
	.string "habéis escogido el camino del\l"
	.string "sufrimiento, ¡GUARDIAS!\l"
	.string "¡Preparadad los…!$"

Route16_Combate_Bruno_Texto_7:
.string "BRUNO: Vaya vaya, parece que\n"
	.string "tendréis compañía en vuestro viaje\l"
	.string "a prisión, y además un ROCKET de\l"
	.string "ALTO RANGO por lo que veo, seguro\l"
	.string "que podremos sacarte información\l"
	.string "muy valiosa.$"

Route16_Combate_Bruno_Texto_8:
.string "Todos los delincuentes sois\n"
	.string "iguales, creéis que podéis llegar\l"
	.string "a algún lado solo con vuestro\l"
	.string "instinto y vuestras sensaciones,\l"
	.string "tan frágiles y cambiantes.$"

Route16_Combate_Bruno_Texto_9:
.string "BRUNO: Te mostraré el arrollador\n"
	.string "poder de mis POKÉMON entrenados a\l"
	.string "base de sangre, sudor y lágrimas,\l"
	.string "algo que ninguno de vosotros\l"
	.string "siquiera sabéis lo que significa,\l"
	.string "¡no me tomará más de 3 POKÉMON\l"
	.string "para borrar a todo tu equipo del\l"
	.string "mapa!$"

Route16_Combate_Bruno_Texto_10:
.string "¡No puede ser!\n"
	.string "¿¡De dónde viene ese poder!?$"

Route16_Combate_Bruno_Texto_11:
.string "BRUNO: ¡Mmphff!\n"
	.string "¡Debí de haber traído a mi fiel\l"
	.string "MACHAMP después de todo!\l"
	.string "¡Que deshonra perder ante un\l"
	.string "ROCKET, créeme que vas a pagarlo,\l"
	.string "te has salvado únicamente por\l"
	.string "haber sido superior a la\l"
	.string "mediocridad que esperaba\l"
	.string "encontrarme aquí!$"

Route16_Combate_Bruno_Texto_12:
.string "BRUNO: Ni una palabra de esto a\n"
	.string "LANCE, abortamos misión por\l"
	.string "problemas técnicos de última hora.$"

Route16_Combate_Bruno_Texto_13:
.string "BRUNO: En cuanto a ti, ROCKET…\n"
	.string "Nos volveremos a ver…$"

Route16_Combate_Bruno_Texto_14:
.string "¡Aún no puedo creer lo que ven mis\n"
	.string "ojos!\l"
	.string "¡Ha sido el combate más\l"
	.string "impresionante que he visto en mi\l"
	.string "vida, le has dado una lección a\l"
	.string "todo un miembro de la ÉLITE 4!$"

Route16_Combate_Bruno_Texto_15:
.string "Y no solo eso, has salvado este\n"
	.string "lugar de ser también tragado por\l"
	.string "esta maldita dictadura\l"
	.string "encubierta…nuestra lealtad hacia\l"
	.string "el TEAM ROCKET no ha hecho más que\l"
	.string "crecer después de esto.$"

Route16_Combate_Bruno_Texto_16:
.string "Sé que es poco en comparación con\n"
	.string "lo que has hecho, pero nos\l"
	.string "gustaría que tuvieras esto, es una\l"
	.string "de nuestras mejores adquisiciones,\l"
	.string "se lo robamos a ese torpe guardia\l"
	.string "del safari que siquiera sabe\l"
	.string "hablar en condiciones.$"

Route16_Combate_Bruno_Texto_17:
.string "Ahora sí nos retiramos…seguiremos\n"
	.string "peleando por volver a ver a esta\l"
	.string "región en las manos que\l"
	.string "corresponden.$"

Route16_Combate_Bruno_Move_1:
walk_in_place_up
step_end

Route16_Combate_Bruno_Move_1.1:
walk_in_place_down
step_end

Route16_Combate_Bruno_Move_2:
walk_in_place_right
step_end

Route16_Combate_Bruno_Move_3:
walk_in_place_left
step_end

Route16_Combate_Bruno_Move_4:
walk_up
face_left
step_end

Route16_Combate_Bruno_Move_4.1:
walk_down
face_left
step_end

Route16_Combate_Bruno_Move_5:
emote_exclamation_mark
step_end

Route16_Combate_Bruno_Move_6:
face_left
step_end

Route16_Combate_Bruno_Move_7:
face_right
step_end

Route16_Combate_Bruno_Move_8:
walk_in_place_right
walk_in_place_left
step_end
