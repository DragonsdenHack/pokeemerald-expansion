Goldenrod_TrainStation_MapScripts::
	.byte 0

TrainStation1::
lock     
faceplayer     
msgbox Goldenrod_TrainStation_Text_1, MSGBOX_DEFAULT
release     
end

Goldenrod_TrainStation_Text_1:
.string "En AZAFRÁN aún no han comenzado\n"
.string "con las obras. Es normal que estén\l"
.string "más rezagados, con todo el lío que\l"
.string "han tenido en la LIGA POKÉMON{PAUSE 5}…{PAUSE 5}$"



TrainStation2::
lock     
faceplayer     
msgbox Goldenrod_TrainStation_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_TrainStation_Text_2:
.string "Esta puerta conduce al despacho\n"
.string "del PRESIDENTE, solo personal\l"
.string "autorizado puede entrar.$"



TrainStation3::
lock     
faceplayer     
msgbox Goldenrod_TrainStation_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_TrainStation_Text_3:
.string "Ve con cuidado joven. Mientras\n"
.string "allanamos el terreno para\l"
.string "construir las vías puedes pasar a\l"
.string "mirar.$"



TrainStation4::
lock     
faceplayer     
msgbox Goldenrod_TrainStation_Text_4, MSGBOX_DEFAULT
release     
end

Goldenrod_TrainStation_Text_4:
.string "El MAGNETOTRÉN levitará por\n"
.string "magnetismo, alcanzando velocidades\l"
.string "de hasta 500 Km/h. ¡Llegará a\l"
.string "AZAFRÁN en cuestión de minutos!$"



TrainStation5::
lock     
faceplayer     
msgbox Goldenrod_TrainStation_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_TrainStation_Text_5:
.string "¡KANTO y JOHTO estarán más cerca\n"
.string "que nunca!\l"
.string "¿No es genial?$"

Goldenrod_TrainStation_Frontera::
compare VAR_UNUSED_0x40F7, 135
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
lock
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_TrainStation_Frontera_Move_1
waitmovement 0x0
msgbox Goldenrod_TrainStation_Frontera_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 134
goto_if_gt Goldenrod_TrainStation_Frontera_2
applymovement OBJ_EVENT_ID_PLAYER, Goldenrod_TrainStation_Frontera_Move_2
waitmovement 0x0
release
end

Goldenrod_TrainStation_Frontera_2::
delay 20
msgbox Goldenrod_TrainStation_Frontera_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, Goldenrod_TrainStation_Frontera_Move_3
waitmovement 0x0
msgbox Goldenrod_TrainStation_Frontera_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 136
release
end

Goldenrod_TrainStation_Frontera_Texto_1:
.string "Lo siento, joven, a partir de\n"
	.string "aquí solo se le permite la entrada\l"
	.string "a personal autorizado. Espero que\l"
	.string "lo entiendas.$"

Goldenrod_TrainStation_Frontera_Texto_2:
.string "…\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

Goldenrod_TrainStation_Frontera_Texto_3:
.string "Un momento, ese es el PASE RADIO.\n"
	.string "Su PRESIDENTE ha financiado buena\l"
	.string "parte del proyecto que unirá\l"
	.string "TRIGAL con AZULONA.\l"
	.string "¿Dices que solo quieres echar un\l"
	.string "vistazo a lo que hay más allá de\l"
	.string "las vías?\l"
	.string "Al ser un miembro de honor de la\l"
	.string "TORRE RADIO podrías considerarte\l"
	.string "personal autorizado, de modo que\l"
	.string "puedes pasar. Pero ve con cuidado,\l"
	.string "estamos en pleno proceso de\l"
	.string "construcción de las vías.$"


Goldenrod_TrainStation_Frontera_Move_1:
walk_in_place_right
step_end

Goldenrod_TrainStation_Frontera_Move_2:
walk_slow_down
step_end

Goldenrod_TrainStation_Frontera_Move_3:
emote_exclamation_mark
step_end
