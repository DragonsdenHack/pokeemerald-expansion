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
	.string "ENTRADA A CALLE VICTORIA - LIGA\n"
	.string "POKÉMON$"

Ruta23_No_Puedes_Pasar::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox Ruta23_No_Puedes_Pasar_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_2
waitmovement 0x0
release
end

Ruta23_No_Puedes_Pasar_Texto_1:
.string "(Debería de ver qué quiere\n"
	.string "GIOVANNI de mi justo antes de\l"
	.string "afrontar esta misión tan\l"
	.string "importante).$"

Route23_Llamada_Giovanni::
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox Route23_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route23_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
delay 10
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 92
release
end

Route23_Llamada_Giovanni_Texto_1:
.string "GIOVANNI: ¿{PLAYER}?\n"
	.string "Así que ya tienes las 8 MEDALLAS\l"
	.string "DE GIMNASIO, ATLAS me ha puesto al\l"
	.string "tanto de vuestro combate en\l"
	.string "nuestra BASE de CIUDAD VERDE, ya\l"
	.string "tienes todo para afrontar la LIGA\l"
	.string "POKÉMON.$"

Route23_Llamada_Giovanni_Texto_2:
.string "Sin embargo, hay algo que\n"
	.string "necesitas ver antes de entrar a\l"
	.string "ese lugar, te estaré esperando en\l"
	.string "la sala especial de entrenamiento,\l"
	.string "aquella que está al lado de mi\l"
	.string "despacho, no tardes.$"


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
msgbox Route23_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_6, Route23_Combate_Andra_Texto_6
msgbox Route23_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
applymovement 8, Route23_Combate_Andra_Move_4
waitmovement 0x0
msgbox Route23_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
applymovement 8, Route23_Combate_Andra_Move_7
waitmovement 0x0
msgbox Route23_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
removeobject 8
setvar VAR_UNUSED_0x40F7, 91
release
end

Route23_Combate_Andra_Texto_1:
.string "ANDRA: Ya has llegado {PLAYER}, no\n"
	.string "ha sido fácil eh, entre nosotros,\l"
	.string "necesité de varios intentos para\l"
	.string "poder derrotar a ATLAS y obtener\l"
	.string "la última MEDALLA, era incluso más\l"
	.string "fuerte de lo que pensaba.$"

Route23_Combate_Andra_Texto_2:
.string "Pero es una suerte tener a alguien\n"
	.string "así al mando, AZUL y ROJO no han\l"
	.string "tenido la oportunidad de luchar\l"
	.string "contra alguien de su nivel antes\l"
	.string "de enfrentar a la ÉLITE 4,\l"
	.string "¿recuerdas cuando en la CENTRAL\l"
	.string "ENERGÍA logró derrotar a LORELEI?$"

Route23_Combate_Andra_Texto_3:
.string "No quiero imaginarme el nivel\n"
	.string "actual de nuestro LÍDER GIOVANNI,\l"
	.string "no solo fue CAMPEÓN varias veces,\l"
	.string "sino que todo lo ocurrido desde\l"
	.string "entonces le ha vuelto aún más\l"
	.string "fuerte, es admirable.$"

Route23_Combate_Andra_Texto_4:
.string "Si esperas gran cosa de la CALLE\n"
	.string "VICTORIA, lamento decepcionarte\l"
	.string "{PLAYER}, pero tienen el nivel\l"
	.string "justo para servir de\l"
	.string "entrenamiento, empiezo a creer que\l"
	.string "muchos de ellos solo están allí\l"
	.string "por haber comprado las MEDALLAS en\l"
	.string "algún tipo de mercado negro.$"

Route23_Combate_Andra_Texto_5:
.string "Sin embargo...\n"
	.string "Aún puedo prepararme algo más\l"
	.string "antes de entrar a desafiar al ALTO\l"
	.string "MANDO, me ha costado, pero mi\l"
	.string "equipo al fin está completo,\l"
	.string "únicamente le falta subir algo más\l"
	.string "de nivel y la ÉLITE 4 no podrá\l"
	.string "derrotarme, ¡muéstrame hasta dónde\l"
	.string "has llegado!$"

Route23_Combate_Andra_Texto_6:
.string "Así que aún no estoy lista.$"

Route23_Combate_Andra_Texto_7:
.string "Vaya, pensé que después de quedar\n"
	.string "en empate técnico con AZUL tendría\l"
	.string "oportunidad contigo, si me\l"
	.string "enfrento a él por el campeonato,\l"
	.string "la próxima mi CROBAT quedará con\l"
	.string "salud suficiente como para\l"
	.string "sobrevivir al PÁJARO OSADO después\l"
	.string "de tumbar a su BLASTOISE, en\l"
	.string "cuanto a ti...\l"
	.string "Espero tenerte cerca si llegamos a\l"
	.string "las salas finales, ya oiste a\l"
	.string "GIOVANNI, LANCE cuenta con un\l"
	.string "poder inmenso, y ese ROJO es una\l"
	.string "incógnita, ha pasado mucho desde\l"
	.string "que nos encontramos con él en el\l"
	.string "MT.MOON, pero sigue siendo el\l"
	.string "único al que yo haya visto\l"
	.string "derrotarte...$"

Route23_Combate_Andra_Texto_8:
.string "En fin {PLAYER}, te deseo suerte,\n"
	.string "es hora de poner a prueba a\l"
	.string "nuestros POKÉMON contra los\l"
	.string "mejores ENTRENADORES, tengo plena\l"
	.string "confianza en que van a estar a la\l"
	.string "altura.$"

Route23_Combate_Andra_Texto_9:
.string "Exprime al máximo tu último\n"
	.string "entrenamiento en la CALLE\l"
	.string "VICTORIA, la próxima vez que nos\l"
	.string "veamos será ya en el campo de\l"
	.string "batalla.$"

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
