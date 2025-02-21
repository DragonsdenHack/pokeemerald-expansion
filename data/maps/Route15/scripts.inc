Route15_MapScripts::
	.byte 0

Route15_1::
end

Route15_2::
end

Route15_3::
end

Route15_4::
end


Route15_5::
end

Route15_6::
end

Route15_7::
end

Route15_8::
end

Route15_9::
end

Route15_10::
end

Route15_11::
end

Route15_12::
end

Route15_13::
end



Route15_EventScript_Motorista::
	trainerbattle_single TRAINER_DALTON_3, Route15_Text_MotoristaIntro, Route15_Text_MotoristaDefeated
	msgbox Route15_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Motorista2::
	trainerbattle_single TRAINER_DALTON_4, Route15_Text_Motorista2Intro, Route15_Text_Motorista2Defeated
	msgbox Route15_Motorista2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Bella::
	trainerbattle_single TRAINER_TED, Route15_Text_BellaIntro, Route15_Text_BellaDefeated
	msgbox Route15_BellaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Bella2::
	trainerbattle_single TRAINER_PAUL, Route15_Text_Bella2Intro, Route15_Text_Bella2Defeated
	msgbox Route15_Bella2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica::
	trainerbattle_single TRAINER_DIANA_5, Route15_Text_ChicaIntro, Route15_Text_ChicaDefeated
	msgbox Route15_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Ornitologo::
	trainerbattle_single TRAINER_TIMOTHY_1, Route15_Text_OrnitologoIntro, Route15_Text_OrnitologoDefeated
	msgbox Route15_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Ornitologo2::
	trainerbattle_single TRAINER_ISABEL_5, Route15_Text_Ornitologo2Intro, Route15_Text_Ornitologo2Defeated
	msgbox Route15_Ornitologo2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica2::
	trainerbattle_single TRAINER_DIANA_4, Route15_Text_Chica2Intro, Route15_Text_Chica2Defeated
	msgbox Route15_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica3::
	trainerbattle_single TRAINER_AMY_AND_LIV_2, Route15_Text_Chica3Intro, Route15_Text_Chica3Defeated
	msgbox Route15_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica4::
	trainerbattle_single TRAINER_AMY_AND_LIV_1, Route15_Text_Chica4Intro, Route15_Text_Chica4Defeated
	msgbox Route15_Chica4PostBattle, MSGBOX_AUTOCLOSE
	end



Route15Documento_100::
msgbox Route15Documento_Text_100, MSGBOX_SIGN   
end

Route15Documento_Text_100:
.string "ROUTE 15\n"
    .string "West to FUCHSIA CITY$"



Route15_EventScript_Pareja1::
	trainerbattle_single TRAINER_AMY_AND_LIV_6, Route15_Text_Pareja1Intro, Route15_Text_Pareja1Defeated
	msgbox Route15_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Pareja2::
	trainerbattle_single TRAINER_AMY_AND_LIV_6, Route15_Text_Pareja2Intro, Route15_Text_Pareja2Defeated
	msgbox Route15_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route15_Koga_Bruno_medio::
applymovement OBJ_EVENT_ID_PLAYER, Route15_Koga_Bruno_Move_1
waitmovement 0x0
goto Route15_Koga_Bruno

Route15_Koga_Bruno_arriba::
applymovement OBJ_EVENT_ID_PLAYER, Route15_Koga_Bruno_Move_1.1
waitmovement 0x0
goto Route15_Koga_Bruno

Route15_Koga_Bruno_abajo::
applymovement OBJ_EVENT_ID_PLAYER, Route15_Koga_Bruno_Move_1.2
waitmovement 0x0
goto Route15_Koga_Bruno



Route15_Koga_Bruno::
msgbox Route15_Koga_Bruno_Texto_1 MSGBOX_AUTOCLOSE
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route15_Koga_Bruno_Move_20
waitmovement 0x0
special RemoveCameraObject
msgbox Route15_Koga_Bruno_Texto_1.01 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 15, Route15_Koga_Bruno_Move_4
waitmovement 0x0
waitse
delay 10
msgbox Route15_Koga_Bruno_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_1.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, Route15_Koga_Bruno_Move_4.1
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, Route15_Koga_Bruno_Move_1
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, Route15_Koga_Bruno_Move_4.2
waitmovement 0x0
delay 10
msgbox Route15_Koga_Bruno_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, Route15_Koga_Bruno_Move_4.3
waitmovement 0x0
waitse
applymovement 14, Route15_Koga_Bruno_Move_3
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 15, Route15_Koga_Bruno_Move_4
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_6 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, Route15_Koga_Bruno_Move_5
waitmovement 0x0
waitse
delay 10
msgbox Route15_Koga_Bruno_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_9 MSGBOX_DEFAULT
delay 20
msgbox Route15_Koga_Bruno_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, Route15_Koga_Bruno_Move_6.1
waitmovement 0x0
delay 10
msgbox Route15_Koga_Bruno_Texto_11 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 14, Route15_Koga_Bruno_Move_6.1
applymovement 15, Route15_Koga_Bruno_Move_6
applymovement OBJ_EVENT_ID_CAMERA, Route15_Koga_Bruno_Move_20.1
waitmovement 0x0
special RemoveCameraObject
removeobject 15
delay 10
msgbox Route15_Koga_Bruno_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, Route15_Koga_Bruno_Move_6.2
waitmovement 0x0
delay 10
msgbox Route15_Koga_Bruno_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, Route15_Koga_Bruno_Move_7
waitmovement 0x0
delay 20
msgbox Route15_Koga_Bruno_Texto_13 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, Route15_Koga_Bruno_Move_8
waitmovement 0x0
playfanfare MUS_OBTAIN_TMHM
giveitem ITEM_BLACK_GLASSES
waitfanfare
delay 20
msgbox Route15_Koga_Bruno_Texto_14 MSGBOX_AUTOCLOSE
delay 20
msgbox Route15_Koga_Bruno_Texto_9 MSGBOX_DEFAULT
delay 20
applymovement 14, Route15_Koga_Bruno_Move_4
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_15 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_15.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_15.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, Route15_Koga_Bruno_Move_9
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_16 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_16.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, Route15_Koga_Bruno_Move_5
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_17 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_17.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_18 MSGBOX_AUTOCLOSE
applymovement 14, Route15_Koga_Bruno_Move_4
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_19 MSGBOX_AUTOCLOSE
applymovement 14, Route15_Koga_Bruno_Move_10
waitmovement 0x0
removeobject 14
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
setvar VAR_UNUSED_0x40F7, 65
release
end

Route15_Koga_Bruno_Move_20:
walk_left
walk_left
walk_left
step_end

Route15_Koga_Bruno_Move_20.1:
walk_right
walk_right
walk_right
step_end

Route15_Koga_Bruno_Move_6.2:
delay_8
face_up
delay_16
delay_8
face_right
delay_8
step_end

Route15_Koga_Bruno_Move_6.1:
delay_16
delay_8
face_left
step_end

Route15_Koga_Bruno_Move_4.3:
emote_exclamation_mark
step_end

Route15_Koga_Bruno_Move_4.2:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

Route15_Koga_Bruno_Move_4.1:
delay_8
face_left
delay_16
delay_8
face_up
delay_8
step_end

Route15_Koga_Bruno_Texto_1:
.string "????: Eres una vergüenza para los\n"
	.string "LÍDERES DE GIMNASIO, KOGA.$"

Route15_Koga_Bruno_Texto_1.01:
	.string "Y debes estarme agradecido de no informar\n"
	.string "a LANCE; no solo te niegas a prestar tu\l"
	.string "ayuda para erradicar a los motoristas\l"
	.string "más radicales del CAMINO BICIS.$"

Route15_Koga_Bruno_Texto_1.1:
	.string "¡Sino que reconoces que\n"
	.string "entiendes su causa!$"

Route15_Koga_Bruno_Texto_1.2:
	.string "¿No habrás tenido tú también contacto\n"
	.string "con la banda criminal ROCKET?\l"
	.string "Sabes que eso implicaría tu destitución\l"
	.string "inmediata como LÍDER de FUCSIA, ¿no?$"

Route15_Koga_Bruno_Texto_2:
.string "KOGA: Me insultas, BRUNO.\n"
	.string "Sabes tan bien como yo que mi máxima\l"
	.string "preocupación ha sido siempre el bien\l"
	.string "de esta región.$"

Route15_Koga_Bruno_Texto_2.1:
	.string "Entiendo que tu posición como miembro de\n"
	.string "la ÉLITE 4 tenga ciertas exigencias,\l"
	.string "pero no es mi competencia el obligar a\l"
	.string "a un puñado de motoristas a dejar de\l"
	.string "ser afines al TEAM ROCKET.$"

Route15_Koga_Bruno_Texto_3:
.string "BRUNO: Me parece que no me has\n"
	.string "entendido, KOGA.\l"
	.string "No se trata de si quieren o no ser\l"
	.string "afines: cualquiera que muestre un leve\l"
	.string "indicio de colaboración con esos\l"
	.string "delincuentes, debe responder ante\l"
	.string "la ley.$"

Route15_Koga_Bruno_Texto_3.1:
	.string "Y casualmente aquí, en FUCSIA, es donde\n"
	.string "está el principal foco de insurrectos.\l"
	.string "Al no hacer nada al respecto, serás\l"
	.string "tratado igualmente como culpable, KOGA.$"

Route15_Koga_Bruno_Texto_4:
.string "KOGA: No me hagas esto, BRUNO{PAUSE 15}…{PAUSE 15}\n"
	.string "Sabes que después de la retirada de\l"
	.string "AGATHA, tú ascenderás un escalón en\l"
	.string "la ÉLITE 4, y la vacante libre será mía.$"

Route15_Koga_Bruno_Texto_5:
.string "BRUNO: Eso es lo que me preocupa.\n"
	.string "Alguien que muestra tal incapacidad\l"
	.string "para mantener el orden y la disciplina\l"
	.string "en FUCSIA, no debería formar parte de la\l"
	.string "ÉLITE de KANTO.$"

Route15_Koga_Bruno_Texto_6:
.string "KOGA: No es delito dejar al pueblo\n"
	.string "expresar sus ideas, BRUNO.$"

Route15_Koga_Bruno_Texto_7:
.string "BRUNO: Por el momento{PAUSE 15}…{PAUSE 15}\n"
	.string "Por suerte para ti, vas a poder\l"
	.string "lavarte las manos con todo este\l"
	.string "asunto: un ALTO MANDO como yo no\l"
	.string "viaja a un lugar como este a no\l"
	.string "ser que tenga un motivo de peso{PAUSE 5}…{PAUSE 5}$"

Route15_Koga_Bruno_Texto_7.1:
.string "KOGA: ¿Q-{PAUSE 25}qué{PAUSE 25}…{PAUSE 25} harás?$"

Route15_Koga_Bruno_Texto_8:
.string "BRUNO: Tengo órdenes directas de LANCE,\n"
	.string "para entrar ahí y hacer limpieza.$"

Route15_Koga_Bruno_Texto_8.1:
	.string "Todos los que vayan en contra de nuestro\n"
	.string "gobierno, serán detenidos y llevados a\l"
	.string "prisión inmediatamente.$"

Route15_Koga_Bruno_Texto_9:
.string "KOGA: {PAUSE 15}…{PAUSE 15}$"

Route15_Koga_Bruno_Texto_10:
.string "BRUNO: No te preocupes por el\n"
	.string "CAMINO BICIS, seguirá contando con\l"
	.string "MOTORISTAS{PAUSE 15}…{PAUSE 15}leales a nosotros.\l"
	.string "Y tú no tendrás que dar\l"
	.string "explicaciones a nadie.$"

Route15_Koga_Bruno_Texto_11:
.string "No tengo nada más que decirte, KOGA.\n"
	.string "Ya que no quieres colaborar, al menos\l"
	.string "mantente al margen y no estorbes.\l"
	.string "Que tengas un buen día.$"

Route15_Koga_Bruno_Texto_12:
.string "KOGA: Ese BRUNO{PAUSE 15}…{PAUSE 15}cómo se le han\n"
	.string "subido los humos desde que forma\l"
	.string "parte de la ÉLITE 4, no es ni la\l"
	.string "sombra de aquel que llevaba el\l"
	.string "DOJO en AZAFRÁN{PAUSE 5}…{PAUSE 5}$"

Route15_Koga_Bruno_Texto_13:
.string "{PLAYER}, ¿me equivoco?\n"
	.string "Fuiste tú quien capturó al KANGASKHAN\l"
	.string "y salvó el negocio de la ZONA SAFARI,\l"
	.string "¿verdad?$"

Route15_Koga_Bruno_Texto_13.1:
	.string "GIOVANNI me dijo que confiara en ti,\n"
	.string "y tuvo razón, aquí tienes un pequeño\l"
	.string "obsequio por mi parte.$"

Route15_Koga_Bruno_Texto_14:
.string "Con estas gafas equipadas en\n"
	.string "cualquier POKÉMON, la potencia de\l"
	.string "sus movimientos SINIESTRO se verá\l"
	.string "incrementada en un 20%.\l"
	.string "HOUNDOOM o MURKROW pegarán muy duro\l"
	.string "con PULSO O TAJO UMBRÍO.$"

Route15_Koga_Bruno_Texto_15:
.string "No mentía a BRUNO, cuando decía que\n"
	.string "mi única preocupación ha sido siempre el\l"
	.string "bien de esta región, el problema es que\l"
	.string "mi idea de bien dista mucho de la suya.$"

Route15_Koga_Bruno_Texto_15.1:
	.string "Una dictadura impuesta por la fuerza,\n"
	.string "y además venida de alguien de fuera\l"
	.string "como LANCE nunca contará con mi apoyo.$"

Route15_Koga_Bruno_Texto_15.2:
	.string "La gente parece haberlo olvidado, aunque,\n"
	.string "más bien, diría que {PAUSE 15}…{PAUSE 15} prefieren fingir\l"
	.string "haberlo olvidado, algunos incluso puede\l"
	.string "que realmente quieran hacerlo.$"

Route15_Koga_Bruno_Texto_15.3:
	.string "Pero no yo.\n"
	.string "Yo recuerdo cómo era KANTO, y haré todo\l"
	.string "lo posible como LÍDER para recuperarla.$"

Route15_Koga_Bruno_Texto_16:
.string "BRUNO va directo al CAMINO BICIS,\n"
	.string "tratará de convencer a la mayor parte de\l"
	.string "MOTORISTAS para que cambien de bando.$"

Route15_Koga_Bruno_Texto_16.1:
	.string "Si no lo logra, usará la fuerza para\n"
	.string "llevar a todos a prisión.\l"
	.string "En ese caso, están perdidos.$"

Route15_Koga_Bruno_Texto_17:
.string "Yo no puedo oponerme, {PLAYER}.\n"
	.string "Soy mucho más útil para la causa si\l"
	.string "mantengo mi influencia como LÍDER.$"

Route15_Koga_Bruno_Texto_17.1:
	.string "Pero tú{PAUSE 15}…{PAUSE 15} GIOVANNI dijo que eras\n"
	.string "uno de los ROCKET con mayor proyección\l"
	.string "y futuro. BRUNO forma parte de la ÉLITE,\l"
	.string "pero dudo que vaya con sus mejores\l"
	.string "POKÉMON; si alguien puede detenerlo,\l"
	.string "eres tú.$"

Route15_Koga_Bruno_Texto_18:
.string "Estaré en mi GIMNASIO.\n"
	.string "Lamentablemente, no puedo dejarte entrar\l"
	.string "por ley, al menos por el momento, pero\l"
	.string "estaré atento a todo cuanto ocurra en\l"
	.string "el CAMINO BICIS, no te queda duda.$"

Route15_Koga_Bruno_Texto_19:
.string "KOGA: I trust you, {PLAYER}.$"

Route15_Koga_Bruno_Move_1:
walk_in_place_left
step_end

Route15_Koga_Bruno_Move_1.1:
walk_down
walk_in_place_left
step_end

Route15_Koga_Bruno_Move_1.2:
walk_up
walk_in_place_left
step_end

Route15_Koga_Bruno_Move_2:
face_left
step_end

Route15_Koga_Bruno_Move_3:
walk_in_place_up
step_end

Route15_Koga_Bruno_Move_4:
walk_in_place_down
step_end

Route15_Koga_Bruno_Move_5:
emote_exclamation_mark
step_end

Route15_Koga_Bruno_Move_6:
walk_left
walk_left
walk_left
step_end

Route15_Koga_Bruno_Move_7:
emote_exclamation_mark
face_right
step_end

Route15_Koga_Bruno_Move_8:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Route15_Koga_Bruno_Move_9:
face_right
step_end

Route15_Koga_Bruno_Move_10:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end
