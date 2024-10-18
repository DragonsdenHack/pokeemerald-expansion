Goldenrod_RadioTowerP8_MapScripts::
	.byte 0

Goldenrod_RadioTowerP8_NPC2::
lock
msgbox Goldenrod_RadioTowerP8_NPC2_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP8_NPC2_Texto_1:
	.string "La gente solía llevar ropa normal entre\n"
	.string "semana y atuendo formal los domingos.\l"
	.string "Hoy sucede exactamente lo contrario.$"

Goldenrod_RadioTowerP8_NPC3::
lock
msgbox Goldenrod_RadioTowerP8_NPC3_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP8_NPC3_Texto_2 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP8_NPC3_Texto_1:
	.string "Reté a esa chica pelirroja; me\n"
	.string "sorprendió ver que alguien tan joven\l"
	.string "formaba parte de los de arriba.$"

Goldenrod_RadioTowerP8_NPC3_Texto_2:
	.string "Al pelear con ella lo comprendí, se me\n"
	.string "han quitado las ganas de retar a nadie\l"
	.string "más…$"


	
	msgbox AzaleaPkmnCenter_Text_1, MSGBOX_DEFAULT
	release
	end

Goldenrod_RadioTowerP8_NPC4::
    lock
    faceplayer
	checkmoncatch SPECIES_LILLIPUP
goto_if_eq VAR_RESULT, FALSE, Goldenrod_RadioTowerP8_EventScript_TakeLillipup
msgbox Goldenrod_RadioTowerP8_NPC4_Texto_3 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP8_NPC4_Texto_4 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP8_EventScript_TakeLillipup::
msgbox Goldenrod_RadioTowerP8_NPC4_Texto_1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox Goldenrod_RadioTowerP8_NPC4_Texto_2, MSGBOX_DEFAULT
givemon SPECIES_LILLIPUP, 15, ITEM_NORMAL_GEM
waitfanfare
release
end

Goldenrod_RadioTowerP8_NPC4_Texto_1:
	.string "Estamos estudiando la viabilidad de un\n"
	.string "lejano POKÉMON para reforzar la\l"
	.string "seguridad. Puedo darte un pequeño\l"
	.string "ejemplar de muestra. Toma.$"

Goldenrod_RadioTowerP8_NPC4_Texto_2:
.string "¡OBTUVISTE UN LILLIPUP AL NV.15!$"

Goldenrod_RadioTowerP8_NPC4_Texto_3:
	.string "Se ha demostrado que STOUTLAND es un\n"
	.string "fantástico POKÉMON para nuestros\l"
	.string "policías, el problema es que solemos ser\l"
	.string "reticentes a lo nuevo.$"

Goldenrod_RadioTowerP8_NPC4_Texto_4:
	.string "POKÉMON como MANECTRIC o ARCANINE son\n"
	.string "más fáciles de integrar en JOHTO debido\l"
	.string "a la cercanía con esas regiones.$"

Goldenrod_RadioTowerP8_NPC5::
lock
msgbox Goldenrod_RadioTowerP8_NPC5_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP8_NPC5_Texto_2 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP8_NPC5_Texto_3 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP8_NPC5_Texto_1:
	.string "Estás en el Piso 7. Aquí nos encargamos\n"
	.string "de optimizar el rendimiento de las ondas\l"
	.string "de radio.$"

Goldenrod_RadioTowerP8_NPC5_Texto_2:
	.string "Puedes ver en los letreros la función\n"
	.string "destinada a cada piso.$"

Goldenrod_RadioTowerP8_NPC5_Texto_3:
	.string "Gracias a nuestras investigaciones,\n"
	.string "directivos poderosos y trajeados como\l"
	.string "tú podrán tener POKÉMON cada vez más\l"
	.string "fuertes solo con apretar un botón, ¿no\l"
	.string "es genial?$"

Goldenrod_RadioTowerP8_Proton_Move_1:
emote_exclamation_mark
step_end

Goldenrod_RadioTowerP8_Proton_Move_2:
walk_in_place_right
delay_8
face_up
step_end

Goldenrod_RadioTowerP8_Proton_Move_3:
walk_down
step_end

Goldenrod_RadioTowerP8_Proton_Move_4:
walk_up
step_end

Goldenrod_RadioTowerP8_Proton_Move_5:
face_right
step_end

Goldenrod_RadioTowerP8_Proton_Move_6:
face_down
step_end

Goldenrod_RadioTowerP8_Proton_Move_7:
delay_8
face_right
delay_16
delay_8
face_down
delay_16
step_end

Goldenrod_RadioTowerP8_Proton_Move_8:
walk_in_place_down
step_end

Goldenrod_RadioTowerP8_Proton_Arriba::
lock
playse SE_PIN
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP8_Proton_Move_2
waitmovement 0x0
delay 10
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_3
waitmovement 0x0
goto Goldenrod_RadioTowerP8_Proton

Goldenrod_RadioTowerP8_Proton_Abajo::
lock
playse SE_PIN
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP8_Proton_Move_2
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP8_Proton_Move_4
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_3
waitmovement 0x0
goto Goldenrod_RadioTowerP8_Proton

Goldenrod_RadioTowerP8_Proton::
msgbox Goldenrod_RadioTowerP8_Proton_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTowerP8_Proton_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_5
waitmovement 0x0
msgbox Goldenrod_RadioTowerP8_Proton_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_6
waitmovement 0x0
msgbox Goldenrod_RadioTowerP8_Proton_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTowerP8_Proton_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_7
waitmovement 0x0
msgbox Goldenrod_RadioTowerP8_Proton_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_5
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP8_Proton_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_6
waitmovement 0x0
delay 10
playse 603
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_8
waitmovement 0x0
msgbox Goldenrod_RadioTowerP8_Proton_Texto_8 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_TRAINER_716, Goldenrod_RadioTowerP8_Proton_Texto_9
delay 10
msgbox Goldenrod_RadioTowerP8_Proton_Texto_10 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_RadioTowerP8_Proton_Move_9
waitmovement 0x0
delay 20
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_5
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP8_Proton_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTowerP8_Proton_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_6
waitmovement 0x0
msgbox Goldenrod_RadioTowerP8_Proton_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTowerP8_Proton_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox Goldenrod_RadioTowerP8_Proton_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_8
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP8_Proton_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_10
waitmovement 0x0
delay 10
msgbox Goldenrod_RadioTowerP8_Proton_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setvar VAR_UNUSED_0x40FF, 31
release
end

Goldenrod_RadioTowerP8_Proton_Move_10:
lock_facing_direction
walk_up
unlock_facing_direction
step_end

Goldenrod_RadioTowerP8_Proton_Move_9:
walk_in_place_up
step_end

Goldenrod_RadioTowerP8_Proton_Texto_1:
	.string "PROTÓN: Cuánto tiempo, {PLAYER}.$"

Goldenrod_RadioTowerP8_Proton_Texto_2:
	.string "Ya me había acostumbrado a verte por\n"
	.string "BASE PROFUNDA, ahora que estás en\l"
	.string "JOHTO no será así.$"

Goldenrod_RadioTowerP8_Proton_Texto_3:
	.string "Yo también estaré un tiempo por aquí.\n"
	.string "ATLAS me ha pedido que monitorice la\l"
	.string "seguridad de TORRE RADIO, y me gane la\l"
	.string "confianza de su DIRECTOR.$"

Goldenrod_RadioTowerP8_Proton_Texto_4:
	.string "Estamos usando técnicas y protocolos\n"
	.string "de lo más modernos, e importando\l"
	.string "POKÉMON de otras regiones.$"

Goldenrod_RadioTowerP8_Proton_Texto_5:
	.string "Mmm…$"

Goldenrod_RadioTowerP8_Proton_Texto_6:
	.string "¿Sabes una cosa?$"

Goldenrod_RadioTowerP8_Proton_Texto_7:
	.string "GIOVANNI está teniendo una pequeña\n"
	.string "charla más arriba, antes de la gran\l"
	.string "reunión, así que tenemos tiempo.$"

Goldenrod_RadioTowerP8_Proton_Texto_8:
	.string "¡Aún sigo siendo un ROCKET!\n"
	.string "¡Deja que te muestre cómo han\l"
	.string "evolucionado mis POKÉMON!$"

Goldenrod_RadioTowerP8_Proton_Texto_9:
	.string "Así que los tuyos también\n"
	.string "han evolucionado…$"

Goldenrod_RadioTowerP8_Proton_Texto_10:
	.string "Parece que JOHTO te está fortaleciendo\n"
	.string "aún más. Dime, ¿qué opinas de TRIGAL?$"

Goldenrod_RadioTowerP8_Proton_Texto_11:
	.string "Hace una década era otra ciudad.\n"
	.string "En los últimos años se está abriendo al\l"
	.string "mundo, y no solo TRIGAL: toda JOHTO.$"

Goldenrod_RadioTowerP8_Proton_Texto_12:
	.string "Es como si lo moderno y lo antiguo\n"
	.string "compitieran por el espíritu de la\l"
	.string "región.$"

Goldenrod_RadioTowerP8_Proton_Texto_13:
	.string "TORRE RADIO es símbolo de lo moderno, y\n"
	.string "su DIRECTOR se encarga de estar a la\l"
	.string "altura.$"

Goldenrod_RadioTowerP8_Proton_Texto_14:
	.string "Ahora importa POKÉMON de HOENN,\n"
	.string "contrata a CIENTÍFICOS de SINNOH, y,\l"
	.string "por supuesto, a EJECUTIVOS ROCKET de\l"
	.string "KANTO para su seguridad.$"

Goldenrod_RadioTowerP8_Proton_Texto_15:
	.string "Lo mejor de cada región, ¿no? Parece\n"
	.string "que nos ha tocado vivir tiempos\l"
	.string "interesantes.$"

Goldenrod_RadioTowerP8_Proton_Texto_16:
	.string "Pero te dejo. No quiero que ATLAS me\n"
	.string "eche la bronca después.$"

Goldenrod_RadioTowerP8_Proton_Texto_17:
	.string "Ahora eres ADMIN.JEFE, tienes cosas\n"
	.string "más importantes que hacer.$"

Goldenrod_RadioTowerP8_Proton_Texto_18:
	.string "Este lugar me gusta. No me importaría\n"
	.string "quedarme aquí durante un tiempo, las\l"
	.string "vistas son magníficas y esta ciudad\l"
	.string "tiene de todo.$"



Goldenrod_RadioTowerP8_Proton_Despues::
lock
faceplayer
msgbox Goldenrod_RadioTowerP8_Proton_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, Goldenrod_RadioTowerP8_Proton_Move_6
waitmovement 0x0
release
end
