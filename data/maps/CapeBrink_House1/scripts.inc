CapeBrink_House1_MapScripts::
	.byte 0

CapeBrinkHouse1_1::
end

CapeBrinkHouse1_Entrenador_Especial::
lock
faceplayer
compare VAR_CURRENT_SECRET_BASE, 0
goto_if_gt CapeBrinkHouse1_Entrenador_Especial_2
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CapeBrinkHouse1_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LUPA, CapeBrinkHouse1_Entrenador_Especial_Texto_5
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_WIDE_LENS
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setvar VAR_CURRENT_SECRET_BASE, 1
release
end

CapeBrinkHouse1_Entrenador_Especial_2_No::
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

CapeBrinkHouse1_Entrenador_Especial_2::
msgbox CapeBrinkHouse1_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
release
end

CapeBrinkHouse1_Entrenador_Especial_Texto_1:
.string "Oh, vaya. Parece que eres de esos\n"
	.string "entrenadores a los que no les han\l"
	.string "regalado nada, hay mucho crío que se\l"
	.string "cree especial solo porque ha recibido\l"
	.string "algún POKÉMON raro o poderoso sin\l"
	.string "haber hecho nada para merecerlo, no\l"
	.string "parece ser tu caso, me gustaría\l"
	.string "comprobarlo.$"

CapeBrinkHouse1_Entrenador_Especial_Texto_2:
.string "¿Aceptas el reto?$"

CapeBrinkHouse1_Entrenador_Especial_Texto_3:
.string "Vaya, puede que me equivocara contigo.$"

CapeBrinkHouse1_Entrenador_Especial_Texto_4:
.string "Vas a ver lo mucho que puede uno\n"
	.string "aprender en la soledad de esta isla\l"
	.string "jovencito.$"

CapeBrinkHouse1_Entrenador_Especial_Texto_5:
.string "Así que aún queda un largo camino{PAUSE 5}…{PAUSE 5}$"

CapeBrinkHouse1_Entrenador_Especial_Texto_6:
.string "Se ve que eres muy cuidadoso con tu\n"
	.string "equipo. Me has devuelto las ganas por\l"
	.string "combatir frente a otros, esto es para\l"
	.string "ti.$"

CapeBrinkHouse1_Entrenador_Especial_Texto_1.1:
.string "¡Obtuviste LUPA de manos de\n"
	.string "EXORCISTA!$"

CapeBrinkHouse1_Entrenador_Especial_Texto_7:
	.string "La LUPA incrementará en un 10% la\n"
	.string "precisión de todos tus movimientos\l"
	.string "ofensivos, eso quiere que los\l"
	.string "Movimientos de 90 de potencia tendrán\l"
	.string "ahora 99, mientras que otros como\l"
	.string "TRUENO de 70, pasarán a tener 77 de\l"
	.string "precisión, es muy útil según el caso.$"
