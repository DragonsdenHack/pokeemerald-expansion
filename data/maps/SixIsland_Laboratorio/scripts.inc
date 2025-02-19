SixIsland_Laboratorio_MapScripts::
	.byte 0

SixIsland_Laboratorio_Acromo::
lock
faceplayer
goto_if_set FLAG_HOENN_149, SixIsland_Laboratorio_Acromo_Final
goto_if_set FLAG_HOENN_148, SixIsland_Laboratorio_Acromo_Meteorito
delay 10
playse SE_PIN
applymovement 1, SixIsland_Laboratorio_Acromo_Move_1
waitmovement 0x0
waitse
msgbox SixIsland_Laboratorio_Acromo_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_2 MSGBOX_AUTOCLOSE
msgbox SixIsland_Laboratorio_Acromo_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SixIsland_Laboratorio_Acromo_Move_2
waitmovement 0x0
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_4 MSGBOX_AUTOCLOSE
msgbox SixIsland_Laboratorio_Acromo_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox SixIsland_Laboratorio_Acromo_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_7 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HOENN_148
checkitem ITEM_METEORITE
goto_if_eq VAR_RESULT, FALSE, SixIsland_Laboratorio_Acromo_No
delay 10
goto SixIsland_Laboratorio_Acromo_Meteorito_Si
release
end

SixIsland_Laboratorio_Acromo_Meteorito::
msgbox SixIsland_Laboratorio_Acromo_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_11 MSGBOX_AUTOCLOSE
delay 10
checkitem ITEM_METEORITE
goto_if_eq VAR_RESULT, FALSE, SixIsland_Laboratorio_Acromo_No
goto SixIsland_Laboratorio_Acromo_Meteorito_Si

SixIsland_Laboratorio_Acromo_Meteorito_Si::
delay 10
playse SE_PIN
applymovement 1, SixIsland_Laboratorio_Acromo_Move_1
waitmovement 0x0
waitse
msgbox SixIsland_Laboratorio_Acromo_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox SixIsland_Laboratorio_Acromo_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox SixIsland_Laboratorio_Acromo_Texto_14 MSGBOX_AUTOCLOSE
msgbox SixIsland_Laboratorio_Acromo_Texto_15 MSGBOX_AUTOCLOSE
delay 15
playfanfare MUS_OBTAIN_BADGE
msgbox SixIsland_Laboratorio_Acromo_Texto_16 MSGBOX_DEFAULT
waitfanfare
removeitem ITEM_METEORITE
delay 10
playse SE_PIN
applymovement 1, SixIsland_Laboratorio_Acromo_Move_1
waitmovement 0x0
waitse
msgbox SixIsland_Laboratorio_Acromo_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SixIsland_Laboratorio_Acromo_Move_3
waitmovement 0x0
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SixIsland_Laboratorio_Acromo_Move_4
waitmovement 0x0
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_19 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox SixIsland_Laboratorio_Acromo_Texto_20 MSGBOX_DEFAULT
givemon SPECIES_DURALUDON, 50, ITEM_STEEL_GEM
waitfanfare
msgbox SixIsland_Laboratorio_Acromo_Texto_21 MSGBOX_AUTOCLOSE
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_22 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_149
release
end

SixIsland_Laboratorio_Acromo_Move_3:
face_up
step_end

SixIsland_Laboratorio_Acromo_Move_4:
face_player
step_end

SixIsland_Laboratorio_Acromo_No::
msgbox SixIsland_Laboratorio_Acromo_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox SixIsland_Laboratorio_Acromo_Texto_9 MSGBOX_AUTOCLOSE
release
end


SixIsland_Laboratorio_Acromo_Final::
msgbox SixIsland_Laboratorio_Acromo_Texto_23 MSGBOX_AUTOCLOSE
release
end

SixIsland_Laboratorio_Acromo_Move_2:
delay_8
face_up
delay_16
delay_8
face_player
step_end

SixIsland_Laboratorio_Acromo_Move_1:
emote_exclamation_mark
step_end

SixIsland_Laboratorio_Acromo_Texto_1:
	.string "????: Vaya, extraordinario.$"

SixIsland_Laboratorio_Acromo_Texto_2:
	.string "Me complace saber que no soy el único\n"
	.string "que se aventura más allá de la ley.$"

SixIsland_Laboratorio_Acromo_Texto_3:
	.string "Este lugar, al igual que otros del\n"
	.string "archipiélago, es un misterio.$"

SixIsland_Laboratorio_Acromo_Texto_4:
	.string "Yo provengo de una región lejana, y he\n"
	.string "podido comprobar que muchas de sus\l"
	.string "especies se hallan aquí también.$"

SixIsland_Laboratorio_Acromo_Texto_5:
	.string "El investigar esta curiosa conexión es\n"
	.string "lo que me ha llevado a quedarme en este\l"
	.string "claro oculto.$"

SixIsland_Laboratorio_Acromo_Texto_6:
	.string "Parece que también eres un alma\n"
	.string "inquieta, ¿verdad? Tal vez tú hayas\l"
	.string "encontrado algo que pueda ayudarme en\l"
	.string "mi investigación.$"

SixIsland_Laboratorio_Acromo_Texto_7:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

SixIsland_Laboratorio_Acromo_Texto_8:
	.string "Mmm{PAUSE 20}…{PAUSE 20} No.$"

SixIsland_Laboratorio_Acromo_Texto_9:
	.string "Si crees encontrar algo que pueda\n"
	.string "arrojar luz a mi investigación, ven a\l"
	.string "verme. Te recompensaré con un POKÉMON\l"
	.string "muy especial.$"

SixIsland_Laboratorio_Acromo_Texto_10:
	.string "¿Has descubierto algo?$"

SixIsland_Laboratorio_Acromo_Texto_11:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

SixIsland_Laboratorio_Acromo_Texto_12:
	.string "Mmm{PAUSE 10}…{PAUSE 10} Ese METEORITO{PAUSE 10}…{PAUSE 10} Dime, ¿de dónde\n"
	.string "sale?$"

SixIsland_Laboratorio_Acromo_Texto_13:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

SixIsland_Laboratorio_Acromo_Texto_14:
	.string "Así que CUEVA CAMBIANTE.\p"
	.string "Muy interesante.$"

SixIsland_Laboratorio_Acromo_Texto_15:
	.string "Creo que es justo lo que andaba\n"
	.string "buscando. Con ello, estaré más cerca\l"
	.string "de encontrar la razón de toda esta\l"
	.string "biodiversidad.$"

SixIsland_Laboratorio_Acromo_Texto_16:
	.string "¡¡{PLAYER} entregó el METEORITO a\n"
	.string "científico misterioso!!$"

SixIsland_Laboratorio_Acromo_Texto_17:
	.string "¡Oh! Sorprendente. Me lo entregas sin\n"
	.string "vacilar; eso quiere decir que, como\l"
	.string "ENTRENADOR, debes sentirte completo.$"

SixIsland_Laboratorio_Acromo_Texto_18:
	.string "Al final de todo, mi meta es la de\n"
	.string "desarrollar al máximo el potencial de\l"
	.string "los POKÉMON, y tú me has acercado más a\l"
	.string "ella.$"

SixIsland_Laboratorio_Acromo_Texto_19:
	.string "Te ruego que aceptes este POKÉMON,\n"
	.string "como muestra de mi agradecimiento.$"

SixIsland_Laboratorio_Acromo_Texto_20:
	.string "¡¡OBTUVISTE UN DURALUDON AL NV.50!!$"

SixIsland_Laboratorio_Acromo_Texto_21:
	.string "Este POKÉMON es digno de estudio,\n"
	.string "créeme. No se lleva muy bien con\l"
	.string "TYRANITAR, y según mis avances, puede\l"
	.string "alcanzar un potencial aún mayor.$"

SixIsland_Laboratorio_Acromo_Texto_22:
	.string "¿Cómo lograrlo? Es todo un misterio,\n"
	.string "al menos por ahora.$"

SixIsland_Laboratorio_Acromo_Texto_23:
	.string "Si realmente existe un cénit\n"
	.string "inalcanzable mediante la interacción\l"
	.string "con los POKÉMON, resulta razonable\l"
	.string "pensar que se puede alcanzar mediante\l"
	.string "métodos científicos y no\l"
	.string "sentimentales. ¿No estás de acuerdo?$"

