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
.string "That HITMONLEE hit so hard…$"


Route16_12::
lock         
msgbox Route16_Text_12, MSGBOX_SIGN
release     
end

Route16_Text_12:
	.string "He defeated all of us just using two\n"
	.string "POKÉMON…$"



Route16_13::
lock        
msgbox Route16_Text_13, MSGBOX_SIGN
release     
end

Route16_Text_13:
	.string "Losers…{PAUSE 15} No one that defies an ELITE 4\n"
	.string "member can come out well…$"


Route16_14::
lock         
msgbox Route16_Text_14, MSGBOX_SIGN
release     
end

Route16_Text_14:
	.string "So this is the ELITE 4 real power…$"

Route16_15::
lock        
msgbox Route16_Text_15, MSGBOX_SIGN
release     
end

Route16_Text_15:
	.string "You can only confess…{PAUSE 25} or go to prison.$"


Route16_16::
lock         
msgbox Route16_Text_16, MSGBOX_SIGN
release     
end

Route16_Text_16:
	.string "We have them where we wanted them…$"


Route16_17::
lock         
msgbox Route16_Text_17, MSGBOX_SIGN
release     
end

Route16_Text_17:
	.string "Damn it…{PAUSE 25} My WEEZING was not even able\n"
	.string "to touch that big steel snake…$"



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
.string "ROUTE 16\n"
    .string "CELADON CITY - FUCHSIA CITY$"



Route16Documento_101::
msgbox Route16Documento_Text_101, MSGBOX_SIGN   
end

Route16Documento_Text_101:
	.string "Enjoy the slope!\n"
    .string "CYCLING ROAD$"



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
	.string "It can't be! Where does that power come\n"
	.string "from!?$"

Route16_Combate_Bruno_Texto_11:
	.string "BRUNO: Mmphff! I should have brought\n"
	.string "my loyal MACHAMP after all! What a shame\l"
	.string "to lose against a ROCKET, trust me that\l"
	.string "you will pay for this, you have been\l"
	.string "saved only by being superior to the\l"
	.string "mediocrity that I expected here!$"

Route16_Combate_Bruno_Texto_12:
	.string "BRUNO: Not even a word of this to\n"
	.string "LANCE, we aborted the mission due to\l"
	.string "technical problems at the last moment.$"

Route16_Combate_Bruno_Texto_13:
	.string "BRUNO: As for you, ROCKET{PAUSE 20}…{PAUSE 20} We'll meet\n"
	.string "again…$"

Route16_Combate_Bruno_Texto_14:
	.string "I can't believe what I just saw! It was\n"
	.string "the most impressive fight that I had\l"
	.string "seen in my entire life, you teached a\l"
	.string "lesson to an ELITE 4 member!$"

Route16_Combate_Bruno_Texto_15:
	.string "And it's not just that, you've saved\n"
	.string "this place from also being swallowed by\l"
	.string "this damn hidden dictature…{PAUSE 25} our loyalty\l"
	.string "to TEAM ROCKET has only grown after\l"
	.string "this.$"

Route16_Combate_Bruno_Texto_16:
	.string "I know that this is not a lot in\n"
	.string "comparison to what you just did, we\l"
	.string "would like that you have this, it is one\l"
	.string "of our best acquisitions, we snatched\l"
	.string "it from that awkward safari guard who\l"
	.string "can't even talk properly.$"

Route16_Combate_Bruno_Texto_17:
	.string "Now we are gonna head out…{PAUSE 25} we will keep\n"
	.string "fighting to see this region in the hands\l"
	.string "that it should be.$"

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
