CuevaTesoro4_MapScripts::
	.byte 0



CuevaTesoro4_EventScript_Policia::
	trainerbattle_single TRAINER_TRAINER_99, CuevaTesoro4_Text_PoliciaIntro, CuevaTesoro4_Text_PoliciaDefeated
	msgbox CuevaTesoro4_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



CuevaTesoro4_EventScript_Policia2::
	trainerbattle_single TRAINER_TRAINER_100, CuevaTesoro4_Text_Policia2Intro, CuevaTesoro4_Text_Policia2Defeated
	msgbox CuevaTesoro4_Text_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



CuevaTesoro4_EventScript_Cientifico::
	trainerbattle_single TRAINER_TRAINER_101, CuevaTesoro4_Text_CientificoIntro, CuevaTesoro4_Text_CientificoDefeated
	msgbox CuevaTesoro4_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



CuevaTesoro4_EventScript_Cientifico2::
	trainerbattle_single TRAINER_TRAINER_102, CuevaTesoro4_Text_Cientifico2Intro, CuevaTesoro4_Text_Cientifico2Defeated
	msgbox CuevaTesoro4_Text_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



CuevaTesoro4_EventScript_Cientifico3::
	trainerbattle_single TRAINER_TRAINER_103, CuevaTesoro4_Text_Cientifico3Intro, CuevaTesoro4_Text_Cientifico3Defeated
	msgbox CuevaTesoro4_Text_Cientifico3PostBattle, MSGBOX_AUTOCLOSE
	end

CuevaTesoro4_Jefe_Final::
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro4_Jefe_Final_Move_1
waitmovement 0x0
playmoncry SPECIES_NIHILEGO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro4_Jefe_Final_Move_2
waitmovement 0x0
delay 15
playse SE_FAINT
msgbox CuevaTesoro4_Jefe_Final_Texto_1 MSGBOX_AUTOCLOSE
waitse
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro4_Jefe_Final_Move_3
waitmovement 0x0
applymovement 9, CuevaTesoro4_Jefe_Final_Move_4
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_4
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox CuevaTesoro4_Jefe_Final_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 9, CuevaTesoro4_Jefe_Final_Move_5
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 9, CuevaTesoro4_Jefe_Final_Move_4
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox CuevaTesoro4_Jefe_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_6
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_7.1 MSGBOX_AUTOCLOSE
msgbox CuevaTesoro4_Jefe_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_4
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox CuevaTesoro4_Jefe_Final_Texto_10 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_7
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_11 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_4
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_12 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_104, CuevaTesoro4_Jefe_Final_Texto_13
playse SE_BREAKABLE_DOOR
applymovement 9, CuevaTesoro4_Jefe_Final_Move_9
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_5
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_15 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_8
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_16 MSGBOX_AUTOCLOSE
applymovement 9, CuevaTesoro4_Jefe_Final_Move_3
waitmovement 0x0
applymovement 9, CuevaTesoro4_Jefe_Final_Move_1
waitmovement 0x0
delay 15
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox CuevaTesoro4_Jefe_Final_Texto_17 MSGBOX_DEFAULT
waitse
applymovement 9, CuevaTesoro4_Jefe_Final_Move_8
waitmovement 0x0
msgbox CuevaTesoro4_Jefe_Final_Texto_18 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
fadescreen 1
delay 20
removeobject 9
removeobject 4
removeobject 11
removeobject 3
removeobject 6
removeobject 1
fadescreen 0
setvar VAR_ROUTE111_STATE, 5
release
end

CuevaTesoro4_Jefe_Final_Move_1:
walk_in_place_up
step_end

CuevaTesoro4_Jefe_Final_Move_2:
emote_exclamation_mark
step_end

CuevaTesoro4_Jefe_Final_Move_3:
walk_slow_up
step_end

CuevaTesoro4_Jefe_Final_Move_4:
walk_in_place_down
step_end

CuevaTesoro4_Jefe_Final_Move_5:
face_right
step_end

CuevaTesoro4_Jefe_Final_Move_6:
face_up
step_end

CuevaTesoro4_Jefe_Final_Move_7:
walk_down
step_end

CuevaTesoro4_Jefe_Final_Move_8:
face_down
step_end

CuevaTesoro4_Jefe_Final_Move_9:
lock_facing_direction
walk_up
unlock_facing_direction
step_end

CuevaTesoro4_Jefe_Final_Texto_1:
.string "(???? derrotó al POKÉMON MISTERIOSO).$"

CuevaTesoro4_Jefe_Final_Texto_2:
.string "Debes ser un ENTRENADOR muy\n"
	.string "disciplinado y metódico. De otro modo\l"
	.string "no podrías haber llegado hasta aquí,\l"
	.string "dejando atrás a nuestros empleados de\l"
	.string "menor rango.$"

CuevaTesoro4_Jefe_Final_Texto_3:
.string "Ya que has llegado tan lejos, te\n"
	.string "premiaré con una pequeña charla. Dime,\l"
	.string "¿sabes cuál es el secreto que guarda\l"
	.string "este lugar?$"

CuevaTesoro4_Jefe_Final_Texto_4:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

CuevaTesoro4_Jefe_Final_Texto_5:
.string "Lo suponía, has venido hasta aquí solo\n"
	.string "por inercia. A fin de cuentas no eres\l"
	.string "más que otro de esos inertes\l"
	.string "ENTRENADORES que se arrastran por las\l"
	.string "rutas, solo que en mayor grado.$"

CuevaTesoro4_Jefe_Final_Texto_6:
.string "Este lugar fue un antiguo portal.\n"
	.string "POKÉMON de asombrosas propiedades\l"
	.string "habitaron en él hace siglos, tal vez\l"
	.string "más.$"

CuevaTesoro4_Jefe_Final_Texto_7:
.string "La gruta es como un enorme búnker\n"
	.string "submarino, hermético para con el\l"
	.string "exterior. Ello ha permitido preservar\l"
	.string "toda esta biodiversidad, pero{PAUSE 5}…{PAUSE 5}$" 
	
CuevaTesoro4_Jefe_Final_Texto_7.1:	
	.string "También mantener prisioneros a unos\n"
	.string "pocos POKÉMON que llegaron desde esos\l"
	.string "portales.$"

CuevaTesoro4_Jefe_Final_Texto_8:
.string "Precisamente uno de ellos: NIHILEGO, es\n"
	.string "el que más interés nos suscita.$"

CuevaTesoro4_Jefe_Final_Texto_9:
.string "No solo es uno de los que mejor reparte\n"
	.string "sus STATS, sus propiedades de\l"
	.string "regeneración y carencia de voluntad lo\l"
	.string "convierten en un objeto de estudio\l"
	.string "perfecto.$"

CuevaTesoro4_Jefe_Final_Texto_10:
.string "Por muy preparado que estés, o muy\n"
	.string "dotado genéticamente para el combate\l"
	.string "que seáis tú o los tuyos, no puedes\l"
	.string "evitar el progreso de DEVON.$"

CuevaTesoro4_Jefe_Final_Texto_11:
.string "Si una de las variables falla, no hay\n"
	.string "nada que hacer ante alguien excelente,\l"
	.string "eres tan fuerte como tu eslabón más\l"
	.string "débil. Vuestra tecnología está a años\l"
	.string "luz de la nuestra, ¿sabes lo que eso\l"
	.string "significa?$"

CuevaTesoro4_Jefe_Final_Texto_12:
.string "¡Jamás podrás derrotarme en un\n"
	.string "combate POKÉMON!$"

CuevaTesoro4_Jefe_Final_Texto_13:
.string "Es{PAUSE 25}…{PAUSE 25} ¿imposible?$"

CuevaTesoro4_Jefe_Final_Texto_14:
.string "Esto es inaudito, si mi nivel es un 9 en\n"
	.string "todo, no hay forma de que tú con un 0\l"
	.string "en tecnología hayas podido ganar,\l"
	.string "aunque seas un 10 en el resto.$"

CuevaTesoro4_Jefe_Final_Texto_15:
.string "La única respuesta posible es que\n"
	.string "realmente yo no sea un 9, en ese caso\l"
	.string "habría que recalcular el valor de 10{PAUSE 5}…{PAUSE 5}$"

CuevaTesoro4_Jefe_Final_Texto_16:
.string "Qué mala fortuna para ti, carecer de las\n"
	.string "herramientas que te permiten mejorar a\l"
	.string "largo plazo. Cuentas con un gran\l"
	.string "potencial base que jamás verá su\l"
	.string "cúspide.$"

CuevaTesoro4_Jefe_Final_Texto_17:
.string "(???? OBTUVO UNA MUESTRA DE NIHILEGO).$"

CuevaTesoro4_Jefe_Final_Texto_18:
.string "Con esto nos basta y nos sobra,\n"
	.string "quédate con el POKÉMON si te hace\l"
	.string "ilusión. Incluso un milagro de la\l"
	.string "naturaleza como este palidece ante\l"
	.string "nuestros objetivos.$"

CuevaTesoro4_Nihilego_Obtencion::
playmoncry SPECIES_NIHILEGO, CRY_MODE_ENCOUNTER
msgbox CuevaTesoro4_Nihilego_Obtencion_Texto_1 MSGBOX_AUTOCLOSE
msgbox CuevaTesoro4_Nihilego_Obtencion_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro4_Nihilego_Obtencion_No
playfanfare MUS_OBTAIN_TMHM
setflag FLAG_HIDE_ROUTE_116_DROPPED_GLASSES_MAN
removeobject 13
msgbox CuevaTesoro4_Nihilego_Obtencion_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_NIHILEGO, 50, ITEM_POISON_GEM
waitfanfare 
release
end

CuevaTesoro4_Nihilego_Obtencion_No::
release
end

CuevaTesoro4_Nihilego_Obtencion_Texto_1:
.string "Este POKÉMON se ha quedado sin\n"
	.string "energía. Parece querer ser rescatado\l"
	.string "de este lugar.$"

CuevaTesoro4_Nihilego_Obtencion_Texto_2:
.string "¿Quieres llevártelo contigo?$"

CuevaTesoro4_Nihilego_Obtencion_Texto_3:
.string "¡OBTUVISTE UN NIHILEGO AL NV.50!$"


CuevaTesoro4_Combate_Guzzlord::
	lock
	playmoncry SPECIES_GUZZLORD, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_GUZZLORD, 50, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, CuevaTesoro4_Combate_Guzzlord_2
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, CuevaTesoro4_Combate_Guzzlord_2
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, CuevaTesoro4_Combate_Guzzlord_2
	setflag FLAG_DEFEATED_REGICE
	setflag FLAG_HIDE_REGIROCK
	fadescreen 1
	removeobject 12
	delay 20
    fadescreen 0
	release
	end

	CuevaTesoro4_Combate_Guzzlord_2::
	release
	end
