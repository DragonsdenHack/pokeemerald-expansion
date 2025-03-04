Route23_MapScripts::
	.byte 0

Route23_1::
end

Route23_2::
end

Route23_3::
end

Route23_4::
end


Route23_5::
end

Route23_6::
end

Route23_7::
end



Route23_EventScript_Policia::
	trainerbattle_single TRAINER_ELLIOT_5, Route23_Text_PoliciaIntro, Route23_Text_PoliciaDefeated
	msgbox Route23_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia2::
	trainerbattle_single TRAINER_RONALD, Route23_Text_Policia2Intro, Route23_Text_Policia2Defeated
	msgbox Route23_Text_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia3::
	trainerbattle_single TRAINER_MARIA_1, Route23_Text_Policia3Intro, Route23_Text_Policia3Defeated
	msgbox Route23_Text_Policia3PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia4::
	trainerbattle_single TRAINER_MARIA_2, Route23_Text_Policia4Intro, Route23_Text_Policia4Defeated
	msgbox Route23_Text_Policia4PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia5::
	trainerbattle_single TRAINER_MARIA_3, Route23_Text_Policia5Intro, Route23_Text_Policia5Defeated
	msgbox Route23_Text_Policia5PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia6::
	trainerbattle_single TRAINER_MARIA_4, Route23_Text_Policia6Intro, Route23_Text_Policia6Defeated
	msgbox Route23_Text_Policia6PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia7::
	trainerbattle_single TRAINER_MARIA_5, Route23_Text_Policia7Intro, Route23_Text_Policia7Defeated
	msgbox Route23_Text_Policia7PostBattle, MSGBOX_AUTOCLOSE
	end



Route23Documento_100::
msgbox Route23Documento_Text_100, MSGBOX_SIGN   
end

Route23Documento_Text_100:
.string "VICTORY ROAD GATE -\n"
    .string "POKÉMON LEAGUE$"

Ruta23_No_Puedes_Pasar::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox Ruta23_No_Puedes_Pasar_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_2
waitmovement 0x0
release
end

Ruta23_No_Puedes_Pasar_Texto_1:
	.string "-I should see what GIOVANNI wants\n"
	.string "from me before facing such important\l"
	.string "challenge.-$"

Route23_Llamada_Giovanni::
playse SE_POKENAV_CALL
applymovement OBJ_EVENT_ID_PLAYER, Route23_Llamada_Giovanni_Move_1
waitmovement 0x0
waitse
delay 10
playse SE_POKENAV_HANG_UP
waitse
delay 10
msgbox Route23_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route23_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
playse SE_PC_OFF
waitse
delay 10
setvar VAR_UNUSED_0x40F7, 92
release
end

Route23_Llamada_Giovanni_Texto_1:
	.string "GIOVANNI: {PLAYER}? So you have\n"
	.string "already the 8 GYM BADGES, ARCHER has\l"
	.string "informed me about your fight on the\l"
	.string "at VIRIDIAN CITY BASE. You're ready to\l"
	.string "challenge the POKÉMON LEAGUE.$"

Route23_Llamada_Giovanni_Texto_2:
	.string "However, there is something else that\n"
	.string "you should see before entering that\l"
	.string "place. I will be waiting for you at the\l"
	.string "special training room, that one which\l"
	.string "is beside my private office, so don't be\l"
	.string "late.$"


Route23_Llamada_Giovanni_Move_1:
emote_exclamation_mark
walk_in_place_down
step_end

Route23_Combate_Andra_Centro::
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_1
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 8
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_2
applymovement 8, Route23_Combate_Andra_Move_2
waitmovement 0x0 
waitse
delay 15
applymovement 8, Route23_Combate_Andra_Move_5
waitmovement 0x0 
goto Route23_Combate_Andra

Route23_Combate_Andra_Izq::
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_1
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 8
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_2
applymovement 8, Route23_Combate_Andra_Move_2
waitmovement 0x0 
delay 15
waitse
applymovement 8, Route23_Combate_Andra_Move_5.2
waitmovement 0x0 
goto Route23_Combate_Andra

Route23_Combate_Andra_Der::
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_1
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 8
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_2
applymovement 8, Route23_Combate_Andra_Move_2
waitmovement 0x0 
delay 15
applymovement 8, Route23_Combate_Andra_Move_5.1
waitmovement 0x0 
goto Route23_Combate_Andra

Route23_Combate_Andra::
msgbox Route23_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 8, Route23_Combate_Andra_Move_3
waitmovement 0x0 
msgbox Route23_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route23_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 8, Route23_Combate_Andra_Move_4
waitmovement 0x0 
msgbox Route23_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox Route23_Combate_Andra_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4
waitmovement 0x0
playse 559
msgbox Route23_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox Route23_Combate_Andra_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_ANDRA_6, Route23_Combate_Andra_Texto_6
msgbox Route23_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4.1
waitmovement 0x0
delay 10
msgbox Route23_Combate_Andra_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4.2
waitmovement 0x0
delay 10
msgbox Route23_Combate_Andra_Texto_7.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4.3
waitmovement 0x0
delay 10
msgbox Route23_Combate_Andra_Texto_7.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4
waitmovement 0x0
delay 10
msgbox Route23_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_7
waitmovement 0x0
delay 20
msgbox Route23_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_7.1
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
removeobject 8
waitse
delay 10
setvar VAR_UNUSED_0x40F7, 91
release
end

Route23_Combate_Andra_Move_7.1:
walk_up
step_end

Route23_Combate_Andra_Move_4.3:
delay_8
face_up
delay_16
delay_8
face_down
delay_8
step_end

Route23_Combate_Andra_Move_4.1:
face_left
step_end

Route23_Combate_Andra_Move_4.2:
face_down
step_end

Route23_Combate_Andra_Texto_1:
.string "Así que tú también has llegado.\n"
	.string "No ha sido fácil, ¿eh?\l"
	.string "Entre nosotros, necesité de varios\l"
	.string "intentos para poder derrotar a ATLAS y\l"
	.string "obtener la última MEDALLA, era incluso\l"
	.string "más fuerte de lo que pensaba.$"

Route23_Combate_Andra_Texto_2:
.string "Pero es una suerte tener a alguien así\n"
	.string "al mando; AZUL y ROJO no han tenido la\l"
	.string "oportunidad de luchar contra alguien\l"
	.string "de ese nivel, antes de enfrentar a\l"
	.string "la ÉLITE 4.\l"
	.string "¿Recuerdas cuando en la CENTRAL\l"
	.string "ENERGÍA logró derrotar a LORELEI?$"

Route23_Combate_Andra_Texto_3:
.string "No quiero imaginarme el nivel\n"
	.string "actual de nuestro GIOVANNI.\l"
	.string "No solo fue CAMPEÓN varias veces,\l"
	.string "sino que todo lo ocurrido desde\l"
	.string "entonces le ha vuelto aún más\l"
	.string "fuerte, es admirable.$"

Route23_Combate_Andra_Texto_4:
    .string "No esperas gran cosa de CALLE VICTORIA.\n"
	.string "Tienen el nivel justo para servir de\l"
	.string "entrenamiento, empiezo a creer que\l"
	.string "muchos de ellos solo están allí por\l"
	.string "haber comprado las MEDALLAS en el\l"
	.string "mercado negro.$"

Route23_Combate_Andra_Texto_4.1:
	.string "Tiene gracia, ¿no? Los que van a\n"
	.string "entrar ahí de forma legal, somos\l"
	.string "precisamente nosotros.$"

Route23_Combate_Andra_Texto_5:
.string "Sin embargo{PAUSE 25}…{PAUSE 25}\n"
	.string "Aún puedo prepararme algo más.\l"
	.string "Ha costado, pero mi equipo al fin está\l"
	.string "completo, un poco más de nivel, ¡y\l"
	.string "la ÉLITE 4 no podrá derrotarme!$"

Route23_Combate_Andra_Texto_5.1:
	.string "Dime, {PLAYER}.\l"
	.string "¿¡Tú podrías derrotarlos ya!?$"

Route23_Combate_Andra_Texto_6:
.string "So I'm not ready yet.$"

Route23_Combate_Andra_Texto_7:
.string "Vaya{PAUSE 25}…{PAUSE 25}\n"
	.string "Pensé que después de quedar en empate\l"
	.string "técnico con AZUL, tendría oportunidad\l"
	.string "contigo.$"
	
Route23_Combate_Andra_Texto_7.1:
    .string "Si me enfrento a él por el campeonato,\n"
	.string "la próxima mi CROBAT quedará con salud\l"
	.string "suficiente como para sobrevivir al PÁJARO\l"
	.string "OSADO, después de tumbar a su BLASTOISE.$"

Route23_Combate_Andra_Texto_7.2:
	.string "En cuanto a ti{PAUSE 25}…{PAUSE 25}\n"
	.string "Espero tenerte cerca si llegamos a\l"
	.string "las salas finales, ya oiste a GIOVANNI.$"

Route23_Combate_Andra_Texto_7.3:
	.string "LANCE cuenta con un poder inmenso, y\n"
	.string "ROJO es una incógnita: ha pasado mucho\l"
	.string "desde que nos encontramos con él en el\l"
	.string "MT.MOON, pero sigue siendo el único al\l"
	.string "que yo haya visto derrotarte{PAUSE 5}…{PAUSE 5}$"

Route23_Combate_Andra_Texto_8:
.string "En fin, {PLAYER}, te deseo suerte.\n"
	.string "Llegó la hora de poner a prueba a\l"
	.string "nuestros POKÉMON contra los mejores,\l"
	.string "tengo plena confianza en que van a\l"
	.string "estar a la altura.$"

Route23_Combate_Andra_Texto_9:
.string "Aprovecha tu último entrenamiento en la\n"
	.string "CALLE VICTORIA, la próxima vez que nos\l"
	.string "veamos, será ya en el campo de batalla.$"

Route23_Combate_Andra_Move_1:
walk_in_place_up
step_end

Route23_Combate_Andra_Move_2:
emote_exclamation_mark
step_end

Route23_Combate_Andra_Move_3:
walk_in_place_left
step_end

Route23_Combate_Andra_Move_4:
walk_in_place_down
step_end

Route23_Combate_Andra_Move_5:
walk_down
step_end

Route23_Combate_Andra_Move_5.1:
walk_left
walk_down
step_end

Route23_Combate_Andra_Move_5.2:
walk_right
walk_down
step_end

Route23_Combate_Andra_Move_6:
face_up
step_end

Route23_Combate_Andra_Move_7:
walk_up
step_end
