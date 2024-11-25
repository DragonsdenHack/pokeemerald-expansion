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
msgbox Route16_Text_11, MSGBOX_DEFAULT
release     
end

Route16_Text_11:
.string "Ese HITMONLEE pegaba durísimo{PAUSE 5}…{PAUSE 5}$"


Route16_12::
lock         
msgbox Route16_Text_12, MSGBOX_SIGN
release     
end

Route16_Text_12:
.string "Ha acabado con nosotros 4 usando\n"
.string "solo a 2 POKÉMON{PAUSE 5}…{PAUSE 5}$"



Route16_13::
lock        
msgbox Route16_Text_13, MSGBOX_SIGN
release     
end

Route16_Text_13:
.string "Ilusos…\n"
.string "Nadie que desafíe a un miembro de\l"
.string "la ÉLITE 4 puede salir bien\l"
.string "parado{PAUSE 5}…{PAUSE 5}$"


Route16_14::
lock         
msgbox Route16_Text_14, MSGBOX_SIGN
release     
end

Route16_Text_14:
.string "Así que este es el poder de la\n"
.string "ÉLITE 4{PAUSE 5}…{PAUSE 5}$"

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
.string "Ya los tenemos donde queríamos{PAUSE 5}…{PAUSE 5}$"


Route16_17::
lock         
msgbox Route16_Text_17, MSGBOX_SIGN
release     
end

Route16_Text_17:
.string "Maldición…\n"
	.string "Mi WEEZING no pudo siquiera tocar\l"
	.string "a esa enorme serpiente de acero{PAUSE 5}…{PAUSE 5}$"



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
delay 10
msgbox Route16_Combate_Bruno_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, Route16_Combate_Bruno_Move_2.1
waitmovement 0x0
delay 10
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
delay 10
msgbox Route16_Combate_Bruno_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
waitse
playse MUS_RG_ENCOUNTER_GYM_LEADER
delay 10
msgbox Route16_Combate_Bruno_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
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
removeobject 14
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
removeobject 15
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
delay 10
msgbox Route16_Combate_Bruno_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, Route16_Combate_Bruno_Move_2.1
waitmovement 0x0
delay 10
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
delay 10
msgbox Route16_Combate_Bruno_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
waitse
playse MUS_RG_ENCOUNTER_GYM_LEADER
delay 10
msgbox Route16_Combate_Bruno_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
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
removeobject 14
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
removeobject 15
fadescreen 0
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
setflag FLAG_HOENN_90
setflag FLAG_HOENN_91
setflag FLAG_HOENN_92
setflag FLAG_HOENN_93
setflag FLAG_HOENN_94
setflag FLAG_HOENN_95
setflag FLAG_HOENN_96
setflag FLAG_HOENN_97
setflag FLAG_HOENN_98
setflag FLAG_HOENN_99
clearflag FLAG_HOENN_640
clearflag FLAG_HOENN_641
clearflag FLAG_HOENN_642
clearflag FLAG_HOENN_643
clearflag FLAG_HOENN_644
clearflag FLAG_HOENN_645
clearflag FLAG_HOENN_646
clearflag FLAG_HOENN_647
clearflag FLAG_HOENN_648
clearflag FLAG_HOENN_649
setvar VAR_UNUSED_0x40F7, 66
release
end

Route16_Combate_Bruno_Move_2.1:
delay_8
face_left
delay_16
delay_8
face_right
delay_8
step_end

Route16_Combate_Bruno_Texto_1:
.string "BRUNO: Fin del juego, moteros.\n"
	.string "Ha sido muy estúpido por vuestra\l"
	.string "parte creer que vuestros POKÉMON\l"
	.string "VENENO pudieran siquiera tocar a\l"
	.string "mi poderoso acero, más estúpido\l"
	.string "aún creer que vuestros TIPO LUCHA\l"
	.string "fueran rival para los míos.$"
	
Route16_Combate_Bruno_Texto_1.1:
	.string "Ahora que estáis más calmados y no os\n"
	.string "quedan POKÉMON, os diré lo que vamos\l"
	.string "a hacer{PAUSE 15}…{PAUSE 15}$"

Route16_Combate_Bruno_Texto_2:
.string "Váis a hablar con el resto de vuestros\n"
	.string "colegas, y convencerles de que el futuro\l"
	.string "es el gobierno de LANCE: el TEAM ROCKET\l"
	.string "está acabado, ¿entendido?$"

Route16_Combate_Bruno_Texto_2.1:
	.string "A partir de ahora, deberéis lealtad a\n"
	.string "LANCE, y nos daréis toda la información\l"
	.string "referente al TEAM ROCKET de la que\l"
	.string "disponéis.$"

Route16_Combate_Bruno_Texto_2.2:
	.string "Hacédlo y se os perdonarán vuestros\n"
	.string "crímenes, podréis seguir en paseando\l"
	.string "libremente por aquí.$"

Route16_Combate_Bruno_Texto_2.3:
	.string "Si os negáis{PAUSE 15}…{PAUSE 15}$"

Route16_Combate_Bruno_Texto_3:
.string "Dad por seguro que destruiré, uno\n"
	.string "por uno, a todos los motoristas que\l"
	.string "encuentre por KANTO, y convertiré\l"
	.string "este lugar en un solar.$"

Route16_Combate_Bruno_Texto_4:
.string "Todos acabaréis en la cárcel, y me\n"
	.string "encargaré de que la opinión pública\l"
	.string "se cebe con vosotros, de igual forma\l"
	.string "que ya lo hace con el TEAM ROCKET.$"

Route16_Combate_Bruno_Texto_5:
.string "CALVO: ¡Nunca recibiremos órdenes\n"
	.string "de alguien de fuera como LANCE!$"

Route16_Combate_Bruno_Texto_6:
.string "BRUNO: Lo tomaré como un no, pues.\n"
	.string "Habéis escogido el camino del\l"
	.string "sufrimiento, ¡GUARDIAS!\l"
	.string "¡Preparadad los…!$"

Route16_Combate_Bruno_Texto_7:
.string "Vaya, vaya{PAUSE 25}…{PAUSE 25} parece que tendréis\n"
	.string "compañía en vuestro viaje a prisión.\l"
	.string "Además, un ROCKET de ALTO RANGO, por\l"
	.string "lo que veo, seguro que podremos sacarte\l"
	.string "información muy valiosa.$"

Route16_Combate_Bruno_Texto_8:
.string "Todos los delincuentes sois iguales,\n"
	.string "creéis que podéis llegar a algún lado\l"
	.string "solo con vuestro instinto y vuestras\l"
	.string "sensaciones, tan frágiles y cambiantes.$"


Route16_Combate_Bruno_Texto_9:
.string "Te mostraré el arrollador poder de mis\n"
	.string "POKÉMON entrenados a base de sangre, sudor\l"
	.string "y lágrimas, algo que ninguno de vosotros\l"
	.string "siquiera sabe lo que significa.$"

Route16_Combate_Bruno_Texto_9.1:
	.string "¡No me tomará más de 3 POKÉMON para\n"
	.string "borrar a todo tu equipo del mapa!$"

Route16_Combate_Bruno_Texto_10:
.string "¡No puede ser!\n"
	.string "¿¡De dónde viene ese poder!?$"

Route16_Combate_Bruno_Texto_11:
.string "BRUNO: ¡Mmphff!\n"
	.string "¡Debí de haber traído a mi fiel\l"
	.string "MACHAMP después de todo!\l"
	.string "¡Que deshonra perder ante un ROCKET!\l"
	.string "Esto lo pagarás, te has salvado\l"
	.string "únicamente por haber sido superior a\l"
	.string "la mediocridad que esperaba encontrar\l"
	.string "aquí!$"

Route16_Combate_Bruno_Texto_12:
.string "Ni una palabra de esto a LANCE,\n"
	.string "abortamos misión por problemas\l"
	.string "técnicos de última hora.$"

Route16_Combate_Bruno_Texto_13:
.string "En cuanto a ti, ROCKET…\n"
	.string "Nos volveremos a ver{PAUSE 5}…{PAUSE 5}$"

Route16_Combate_Bruno_Texto_14:
.string "¡Aún no puedo creerlo!\n"
	.string "¡Ha sido el combate más\l"
	.string "impresionante que he visto en mi\l"
	.string "vida, le has dado una lección a\l"
	.string "todo un miembro de la ÉLITE 4!$"

Route16_Combate_Bruno_Texto_15:
.string "Y no solo eso, has salvado el CAMINO\n"
	.string "BICIS de ser también tragado por\l"
	.string "esta maldita dictadura encubierta…\l"
	.string "Nuestra lealtad hacia el TEAM ROCKET\l"
	.string "no ha hecho más que crecer.$"

Route16_Combate_Bruno_Texto_16:
.string "Sé que es poco en comparación con\n"
	.string "lo que has hecho, pero nos\l"
	.string "gustaría que tuvieras esto, es una\l"
	.string "de nuestras mejores adquisiciones,\l"
	.string "se lo robamos a ese torpe guardia\l"
	.string "del safari que siquiera sabe\l"
	.string "hablar en condiciones.$"

Route16_Combate_Bruno_Texto_17:
.string "Ahora sí, nos retiramos… seguiremos\n"
	.string "peleando por volver a ver a esta\l"
	.string "región en las manos que corresponden.$"

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
