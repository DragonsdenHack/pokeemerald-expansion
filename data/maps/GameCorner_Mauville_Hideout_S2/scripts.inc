GameCorner_Mauville_Hideout_S2_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, GameCorner_Mauville_Hideout_S2_OnFrame
	.byte 0

GameCorner_Mauville_Hideout_S2_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 239, Route106_Ariana
	.2byte 0


GameCorner_Mauville_NPC2_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_NPC2_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC2_Cientifico_Texto_1:
	.string "Los profesionales se atienen a un\n"
	.string "horario, los aficionados dejan que la\l"
	.string "vida se entrometa en su camino.$"



GameCorner_Mauville_NPC3_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_NPC3_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC3_Cientifico_Texto_1:
	.string "Nuestra superior no quiere saber nada\n"
	.string "de las regiones de KANTO y JOHTO, a\l"
	.string "pesar de que le pusimos sobre la mesa\l"
	.string "suculentas propuestas para expandir el\l"
	.string "negocio a esos lugares.$"

GameCorner_Mauville_NPC6_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_NPC6_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC6_Cientifico_Texto_1:
	.string "Lo especulativo se aprovecha de lo\n"
	.string "productivo de los demás, necesita de\l"
	.string "ello. No es productivo en sí. En eso\l"
	.string "basan su negocio lugares como este.$"


GameCorner_Mauville_NPC8_Electricista::
lock
faceplayer
msgbox GameCorner_Mauville_NPC8_Electricista_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC8_Electricista_Texto_1:
	.string "¿Eres nuevo? No debes decir una\n"
	.string "palabra de este lugar a nadie, lo sabes,\l"
	.string "¿no?$"

GameCorner_Mauville_NPC10_Electricista::
lock
faceplayer
msgbox GameCorner_Mauville_NPC10_Electricista_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC10_Electricista_Texto_1:
	.string "DEVON realizó una importante donación\n"
	.string "al CASINO hace poco. Nuestras\l"
	.string "relaciones con la empresa del momento\l"
	.string "son buenas.$"


GameCorner_Mauville_NPC11_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_NPC11_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC11_Cientifico_Texto_1:
	.string "Cuanto mayor es la suerte, tanto menos\n"
	.string "hay que aprender.$"


GameCorner_Mauville_NPC12_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_NPC12_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_NPC12_Cientifico_Texto_1:
	.string "La dueña del CASINO es muy exigente,\n"
	.string "cada vez nos exige un algoritmo más\l"
	.string "pulido para maximizar ganancias.$"

GameCorner_Mauville_NPC5_Electricista::
lock
compare VAR_UNUSED_0x40F7, 228
goto_if_gt GameCorner_Mauville_NPC5_Electricista_Despues
delay 10
msgbox GameCorner_Mauville_NPC5_Electricista_Texto_1 MSGBOX_DEFAULT
delay 10
msgbox GameCorner_Mauville_NPC5_Electricista_Texto_2 MSGBOX_DEFAULT
delay 10
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox GameCorner_Mauville_NPC5_Electricista_Texto_3 MSGBOX_DEFAULT
waitse
setvar VAR_UNUSED_0x40F7, 229
release
end

GameCorner_Mauville_NPC5_Electricista_Despues:
msgbox GameCorner_Mauville_NPC5_Electricista_Texto_4 MSGBOX_DEFAULT
release
end


GameCorner_Mauville_NPC5_Electricista_Texto_1:
	.string "… …$"

GameCorner_Mauville_NPC5_Electricista_Texto_2:
	.string "(Está echando la siesta, parece que se\n"
	.string "le ha caído algo)$"

GameCorner_Mauville_NPC5_Electricista_Texto_3:
	.string "¡OBTUVISTE LLAVE S2!$"

GameCorner_Mauville_NPC5_Electricista_Texto_4:
	.string "(Sigue echando la siesta.)$"

GameCorner_Mauville_Ariana_Move_1:
walk_in_place_right
step_end

GameCorner_Mauville_Ariana_Move_2:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_right
step_end

GameCorner_Mauville_Ariana_Move_3:
walk_slow_right
walk_slow_right
step_end

GameCorner_Mauville_Ariana_Move_4:
walk_left
delay_16
walk_in_place_left
step_end

GameCorner_Mauville_Ariana_Move_5:
lock_facing_direction
walk_slow_right
unlock_facing_direction
step_end

GameCorner_Mauville_Ariana_Move_6:
walk_fast_left
step_end

GameCorner_Mauville_Ariana_Move_7:
emote_exclamation_mark
step_end

GameCorner_Mauville_Ariana_Move_8:
delay_8
lock_facing_direction
walk_slow_right
unlock_facing_direction
walk_slow_up
delay_8
step_end

GameCorner_Mauville_Ariana_Move_9:
face_left
step_end

GameCorner_Mauville_Ariana_Move_10:
walk_slow_left
step_end

GameCorner_Mauville_Ariana_Move_11:
delay_8
walk_slow_down
delay_16
face_left
delay_16
walk_in_place_down
step_end

GameCorner_Mauville_Ariana_Move_12:
face_right
step_end

GameCorner_Mauville_Ariana_Move_13:
walk_slow_right
step_end

GameCorner_Mauville_Ariana_Move_14:
walk_slow_up
delay_16
face_right
delay_16
walk_in_place_right
delay_8
step_end

GameCorner_Mauville_Ariana_Move_15:
walk_slow_right
delay_8
face_left
delay_8
step_end

GameCorner_Mauville_Encuentro_Ariana::
lock
applymovement OBJ_EVENT_ID_PLAYER, GameCorner_Mauville_Ariana_Move_1
waitmovement 0x0
fadeoutbgm 0
playse 0
delay 20
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, GameCorner_Mauville_Ariana_Move_2
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, GameCorner_Mauville_Ariana_Move_4
applymovement OBJ_EVENT_ID_PLAYER, GameCorner_Mauville_Ariana_Move_3
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_593, GameCorner_Mauville_Encuentro_Ariana_Texto_4
applymovement 1, GameCorner_Mauville_Ariana_Move_5
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_5 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, GameCorner_Mauville_Ariana_Move_6
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, GameCorner_Mauville_Ariana_Move_1
waitmovement 0x0
delay 10
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, GameCorner_Mauville_Ariana_Move_1
waitmovement 0x0
delay 10
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 1, GameCorner_Mauville_Ariana_Move_7
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, GameCorner_Mauville_Ariana_Move_8
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, GameCorner_Mauville_Ariana_Move_9
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, GameCorner_Mauville_Ariana_Move_10
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, GameCorner_Mauville_Ariana_Move_11
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, GameCorner_Mauville_Ariana_Move_11
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, GameCorner_Mauville_Ariana_Move_12
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, GameCorner_Mauville_Ariana_Move_13
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, GameCorner_Mauville_Ariana_Move_14
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, GameCorner_Mauville_Ariana_Move_1
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_18 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, GameCorner_Mauville_Ariana_Move_7
waitmovement 0x0
applymovement 1, GameCorner_Mauville_Ariana_Move_9
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, GameCorner_Mauville_Ariana_Move_10
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_21 MSGBOX_AUTOCLOSE
delay 10
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_22 MSGBOX_AUTOCLOSE
applymovement 1, GameCorner_Mauville_Ariana_Move_15
waitmovement 0x0
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_23 MSGBOX_AUTOCLOSE
delay 10
setvar VAR_UNUSED_0x40F7, 230
setflag FLAG_HOENN_6
release
end

GameCorner_Mauville_Ariana_Despues::
lock
faceplayer
msgbox GameCorner_Mauville_Encuentro_Ariana_Texto_23 MSGBOX_NPC
release
end

GameCorner_Mauville_Encuentro_Ariana_Texto_1:
	.string "????: No acostumbro a recibir visitas\n"
	.string "en este lugar, joven.$"

GameCorner_Mauville_Encuentro_Ariana_Texto_2:
	.string "No es que me importe que hayas\n"
	.string "descubierto esta pequeña base, aquí no\l"
	.string "escondemos nada; solo sirve de apoyo al\l"
	.string "CASINO y a la GUARDERÍA de al lado.$"

GameCorner_Mauville_Encuentro_Ariana_Texto_3:
	.string "Admiro el valor y la curiosidad que te\n"
	.string "han llevado hasta aquí, pero tu osadía\l"
	.string "merece ser castigada… sin importar el\l"
	.string "motivo.$"

GameCorner_Mauville_Encuentro_Ariana_Texto_4:
	.string "Espera, esos POKÉMON{PAUSE 15}…{PAUSE 5}$"

GameCorner_Mauville_Encuentro_Ariana_Texto_5:
	.string "Ese estilo a la hora de combatir, lo\n"
	.string "reconocería aunque pasaran 50 años.$"

GameCorner_Mauville_Encuentro_Ariana_Texto_6:
	.string "Eres del TEAM ROCKET, ¿verdad? ¿Sigue\n"
	.string "GIOVANNI siendo el LÍDER?$"

GameCorner_Mauville_Encuentro_Ariana_Texto_7:
	.string "Escúchame atentamente, no has visto\n"
	.string "nada de este lugar. No quiero volver a\l"
	.string "verte en este CASINO, ¿me oyes?$"

GameCorner_Mauville_Encuentro_Ariana_Texto_8:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

GameCorner_Mauville_Encuentro_Ariana_Texto_9:
	.string "¿La LIGA POKÉMON? ¿Controláis KANTO y\n"
	.string "JOHTO en la sombra?$"

GameCorner_Mauville_Encuentro_Ariana_Texto_10:
	.string "Entonces lo logró, pero… nada de eso\n"
	.string "importa ya, ¿{PLAYER}?$"

GameCorner_Mauville_Encuentro_Ariana_Texto_11:
	.string "Debes ser ADMINISTRADOR, ¿me\n"
	.string "equivoco?. Viendo cómo combates, tu\l"
	.string "JEFE ha debido de aprovechar esa baza\l"
	.string "como solo él sabría hacer.$"

GameCorner_Mauville_Encuentro_Ariana_Texto_12:
	.string "Puede que ahora tú seas su mano\n"
	.string "derecha, {PLAYER}. Pero dime, ¿crees\l"
	.string "conocer a GIOVANNI mejor que yo?$"

GameCorner_Mauville_Encuentro_Ariana_Texto_13:
	.string "Tal vez no sea el hombre que crees que\n"
	.string "es, ¿te lo has planteado alguna vez?$"

GameCorner_Mauville_Encuentro_Ariana_Texto_14:
	.string "Para llegar hasta dónde ha llegado,\n"
	.string "tuvo que hacer incontables sacrificios\l"
	.string "y dejar a muchas personas de lado.$"

GameCorner_Mauville_Encuentro_Ariana_Texto_15:
	.string "Te habrá contado muchos secretos,\n"
	.string "seguro, pero solo los necesarios para\l"
	.string "mantener su statu quo dentro de la\l"
	.string "organización. De lo contrario, sabrías\l"
	.string "quién soy.$"

GameCorner_Mauville_Encuentro_Ariana_Texto_16:
	.string "La brillantez compensa casi todo, pero\n"
	.string "a veces deja atrás justo lo más valioso.$"

GameCorner_Mauville_Encuentro_Ariana_Texto_17:
	.string "En este lugar pude rehacer mi vida, nada\n"
	.string "me vincula ya a KANTO… solo algunos de\l"
	.string "mis antiguos POKÉMON que compartieron\l"
	.string "mis miserias. Así que{PAUSE 15}…{PAUSE 15} te ruego que\l"
	.string "desaparezcas.$"

GameCorner_Mauville_Encuentro_Ariana_Texto_18:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

GameCorner_Mauville_Encuentro_Ariana_Texto_19:
	.string "¿DEVON?$"

GameCorner_Mauville_Encuentro_Ariana_Texto_20:
	.string "No sé qué te habrán contado, pero he\n"
	.string "conocido en persona a su PRESIDENTE.$"

GameCorner_Mauville_Encuentro_Ariana_Texto_21:
	.string "Es un estudioso de los FÓSILES y\n"
	.string "POKÉMON ANTIGUOS de HOENN, sus\l"
	.string "principales inquietudes son documentar\l"
	.string "la historia de esta región.$"

GameCorner_Mauville_Encuentro_Ariana_Texto_22:
	.string "No todos son como el TEAM ROCKET,\n"
	.string "{PLAYER}. Que busquéis el poder a\l"
	.string "toda costa no quiere decir que el resto\l"
	.string "lo haga.$"

GameCorner_Mauville_Encuentro_Ariana_Texto_23:
	.string "Me temo que no puedo ayudarte. Ahora,\n"
	.string "si me disculpas, tengo mucho que hacer.$"

GameCorner_Mauville_EventScript_Primer_Policia::
	trainerbattle_single TRAINER_TRAINER_583, GameCorner_Mauville_Text_PrimerPoliciaIntro, GameCorner_Mauville_Text_PrimerPoliciaDefeat
	msgbox GameCorner_Mauville_Text_PrimerPoliciaPostBattle, MSGBOX_AUTOCLOSE
	end

GameCorner_Mauville_EventScript_Segundo_Policia::
	trainerbattle_single TRAINER_TRAINER_584, GameCorner_Mauville_Text_SegundoPoliciaIntro, GameCorner_Mauville_Text_SegundoPoliciaDefeat
	msgbox GameCorner_Mauville_Text_SegundoPoliciaPostBattle, MSGBOX_AUTOCLOSE
	end

GameCorner_Mauville_EventScript_Primer_Electricista::
	trainerbattle_single TRAINER_TRAINER_585, GameCorner_Mauville_Text_PrimerElectricistaIntro, GameCorner_Mauville_Text_PrimerElectricistaDefeat
	msgbox GameCorner_Mauville_Text_PrimerElectricistaPostBattle, MSGBOX_AUTOCLOSE
	end

GameCorner_Mauville_Llave_S2::
lock
compare VAR_UNUSED_0x40F7, 228
goto_if_gt GameCorner_Mauville_Llave_S2_Despues
msgbox GameCorner_Mauville_Llave_S2_Texto_1 MSGBOX_AUTOCLOSE
release
end

GameCorner_Mauville_Llave_S2_Despues::
msgbox GameCorner_Mauville_Llave_S2_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
playse SE_SWITCH
delay 30
playse SE_TRUCK_DOOR
delay 30
special DrawWholeMapView
setmetatile 6, 12, 0x2A9, FALSE
setmetatile 6, 13, 0x2A9, FALSE
setmetatile 7, 12, 0x2A8, FALSE
setmetatile 7, 13, 0x2A8, FALSE
special DrawWholeMapView
delay 15
release
end

GameCorner_Mauville_Llave_S2_Texto_1:
	.string "Parece que estas verjas pueden abrirse\n"
	.string "usando algún tipo de llave.$"

GameCorner_Mauville_Llave_S2_Texto_2:
	.string "¿Quieres usar la LLAVE S2?$"
