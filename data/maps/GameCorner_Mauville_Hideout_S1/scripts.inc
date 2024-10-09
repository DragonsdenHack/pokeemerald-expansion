GameCorner_Mauville_Hideout_S1_MapScripts::
	.byte 0


GameCorner_Mauville_Hideout_S1_NPC2_Domador::
lock
faceplayer
msgbox GameCorner_Mauville_Hideout_S1_NPC2_Domador_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_Hideout_S1_NPC2_Domador_Texto_1:
	.string "Tenemos mucho trabajo, la demanda de\n"
	.string "premios es cada vez mayor.$"


GameCorner_Mauville_Hideout_S1_NPC3_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_Hideout_S1_NPC3_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_Hideout_S1_NPC3_Cientifico_Texto_1:
	.string "Nuestro sistema de filas y columnas es\n"
	.string "la mayor estafa legal que vas a\l"
	.string "encontrar en toda HOENN chaval.$"

GameCorner_Mauville_Hideout_S1_NPC6_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_Hideout_S1_NPC6_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_Hideout_S1_NPC6_Cientifico_Texto_1:
	.string "Este CASINO estuvo apunto de cerrar\n"
	.string "por su mala gestión. Desde que la actual\l"
	.string "dueña se hizo con él, se ha convertido\l"
	.string "en uno de los negocios más rentables de\l"
	.string "HOENN.$"

Mauville_Hideout_S1_Move_1:
walk_slow_left
step_end

Mauville_Hideout_S1_Move_2:
walk_in_place_left
step_end

Mauville_Hideout_S1_Move_3:
face_down
step_end

Mauville_Hideout_S1_Move_4:
walk_down
walk_down
delay_8
face_right
delay_8
step_end

Mauville_Hideout_S1_Move_5:
walk_left
walk_up
walk_left
delay_8
walk_in_place_left
delay_8
step_end

Mauville_Hideout_S1_Move_6:
emote_exclamation_mark
step_end

Mauville_Hideout_S1_Move_7:
walk_right
step_end

Mauville_Hideout_S1_Move_8:
walk_in_place_right
step_end

Mauville_Hideout_S1_Move_9:
lock_facing_direction
walk_left
unlock_facing_direction
step_end

Mauville_Hideout_S1_Move_10:
walk_up
walk_up
face_right
step_end

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Derecha::
lock
applymovement OBJ_EVENT_ID_PLAYER, Mauville_Hideout_S1_Move_1
waitmovement 0x0
goto GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico::
applymovement 7, Mauville_Hideout_S1_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Mauville_Hideout_S1_Move_2
waitmovement 0x0
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
applymovement 7, Mauville_Hideout_S1_Move_4
waitmovement 0x0
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Mauville_Hideout_S1_Move_5
waitmovement 0x0
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 7, Mauville_Hideout_S1_Move_6
waitmovement 0x0
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_4 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Mauville_Hideout_S1_Move_2
waitmovement 0x0
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_5 MSGBOX_AUTOCLOSE
applymovement 7, Mauville_Hideout_S1_Move_7
waitmovement 0x0
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_6 MSGBOX_AUTOCLOSE
applymovement 7, Mauville_Hideout_S1_Move_8
waitmovement 0x0
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_582, GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_8
playse SE_PIN
applymovement 7, Mauville_Hideout_S1_Move_6
waitmovement 0x0
delay 10
applymovement 7, Mauville_Hideout_S1_Move_9
waitmovement 0x0
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, Mauville_Hideout_S1_Move_10
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 228
release
end

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_1:
	.string "¿Quién está ahí?$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_2:
	.string "Pareces alguien formal, ¿por qué estás\n"
	.string "aquí?$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_3:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 5}$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_4:
	.string "¿Una base encubierta de DEVON? ¿De\n"
	.string "dónde has sacado eso chico? Desde aquí\l"
	.string "solo administramos este humilde CASINO.$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_5:
	.string "{PAUSE 5}… {PAUSE 5}…{PAUSE 5}$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_6:
	.string "Te lo acabo de decir: aquí solo hay\n"
	.string "trabajadores del CASINO.$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_7:
	.string "Parece que necesitas entenderlo por\n"
	.string "las malas.$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_8:
	.string "La JEFA se enfadará.$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_9:
	.string "Tú lo has querido, los POKÉMON de\n"
	.string "nuestra JEFA son más fuertes que los\l"
	.string "de un LÍDER de GIMNASIO. Si sigues en\l"
	.string "este plan vas a acabar mal.$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_10:
	.string "Los POKÉMON de nuestra JEFA son más\n"
	.string "fuertes que los de un LÍDER de\l"
	.string "GIMNASIO. Si sigues en este plan vas a\l"
	.string "acabar mal.$"

GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Despues::
lock
faceplayer
msgbox GameCorner_Mauville_Hideout_S1_NPC7_Evento_Cientifico_Texto_10 MSGBOX_AUTOCLOSE
release
end

GameCorner_Mauville_EventScript_Primer_Domador::
	trainerbattle_single TRAINER_TRAINER_580, GameCorner_Mauville_Text_PrimerDomadorIntro, GameCorner_Mauville_Text_PrimerDomadorDefeat
	msgbox GameCorner_Mauville_Text_PrimerDomadorPostBattle, MSGBOX_AUTOCLOSE
	end

GameCorner_Mauville_EventScript_Segundo_Domador::
	trainerbattle_single TRAINER_TRAINER_581, GameCorner_Mauville_Text_SegundoDomadorIntro, GameCorner_Mauville_Text_SegundoDomadorDefeat
	msgbox GameCorner_Mauville_Text_SegundoDomadorPostBattle, MSGBOX_AUTOCLOSE
	end

GameCorner_Mauville_Hideout_S1_NPC11_Domador::
lock
faceplayer
msgbox GameCorner_Mauville_Hideout_S1_NPC11_Domador_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_Hideout_S1_NPC11_Domador_Texto_1:
	.string "Los dueños de la GUARDERÍA están\n"
	.string "mayores ya. Es por ello que les ayudamos\l"
	.string "a criar varios de sus POKÉMON, por un\l"
	.string "módico precio. Con lo ambiciosa que es\l"
	.string "la dueña del CASINO, no me extrañaría\l"
	.string "que acabara comprándola.$"



GameCorner_Mauville_Hideout_S1_NPC12_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_Hideout_S1_NPC12_Cientifico_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_Hideout_S1_NPC12_Cientifico_Texto_1:
	.string "Dicen que los casinos de KANTO y JOHTO\n"
	.string "están bien, ¡pero no creo que tengan\l"
	.string "una base secreta como la nuestra!$"

GameCorner_Mauville_Hideout_S1_NPC16_Domador::
lock
faceplayer
msgbox GameCorner_Mauville_Hideout_S1_NPC16_Domador_Texto_1 MSGBOX_NPC
release
end

GameCorner_Mauville_Hideout_S1_NPC16_Domador_Texto_1:
	.string "Nuestra JEFA tiene fijación por los\n"
	.string "tipos VENENO y SINIESTRO. Es por eso\l"
	.string "que varios de los premios en el CASINO\l"
	.string "lo son.$"

GameCorner_Mauville_Hideout_S1_NPC17_Cientifico::
lock
faceplayer
msgbox GameCorner_Mauville_Hideout_S1_NPC17_Cientifico_Texto_1 MSGBOX_NPC
delay 10
msgbox GameCorner_Mauville_Hideout_S1_NPC17_Cientifico_Texto_2 MSGBOX_NPC
delay 10
msgbox GameCorner_Mauville_Hideout_S1_NPC17_Cientifico_Texto_3 MSGBOX_NPC
release
end

GameCorner_Mauville_Hideout_S1_NPC17_Cientifico_Texto_1:
	.string "Esos estúpidos investigadores están\n"
	.string "en contra de que un POKÉMON como\l"
	.string "TREECKO se venda en un CASINO.$"

GameCorner_Mauville_Hideout_S1_NPC17_Cientifico_Texto_2:
	.string "Pero lo que no dicen es que solo lo\n"
	.string "quieren para ellos y para los niños\l"
	.string "mimados con privilegios.$"

GameCorner_Mauville_Hideout_S1_NPC17_Cientifico_Texto_3:
	.string "La realidad es que el negocio manda. Si\n"
	.string "puedes pagar lo que vale, ¿por qué no\l"
	.string "habrías de tenerlo?$"




