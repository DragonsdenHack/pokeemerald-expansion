Route49_Pagoda_P12_MapScripts::
	.byte 0

Route49_Pagoda_P12_Combate_Maestro::
lock
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
delay 5
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_1
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_2
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_220, Route49_Pagoda_P12_Combate_Maestro_Texto_8
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_2
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P12_Combate_Maestro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P12_Combate_Maestro_Texto_11 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 15
release
end

Route49_Pagoda_P12_Combate_Maestro_Move_6:
walk_slow_right
delay_4
face_up
delay_4
step_end


Route49_Pagoda_P12_Combate_Maestro_Move_5:
delay_4
face_up
delay_4
step_end

Route49_Pagoda_P12_Combate_Maestro_Move_4:
walk_left
step_end

Route49_Pagoda_P12_Combate_Maestro_Move_3:
walk_in_place_left
step_end

Route49_Pagoda_P12_Combate_Maestro_Move_2:
face_right
step_end

Route49_Pagoda_P12_Combate_Maestro_Move_1:
face_left
step_end

Route49_Pagoda_P12_Combate_Maestro_Texto_1:
.string "Debes ser {PLAYER}. Ya he vivido este\n"
	.string "momento antes, en mis sueños.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_2:
.string "Yo también fui CAMPEÓN una vez, pero\n"
	.string "abandoné al poco. Cuando logré al fin\l"
	.string "escalar esa gran montaña, me di cuenta\l"
	.string "de que fue el camino lo que disfruté,\l"
	.string "una vez arriba, estaba vacío.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_3:
.string "Tu caso es diferente, siquiera\n"
	.string "obtuviste ese efímero reconocimiento\l"
	.string "por parte de las masas, ¿verdad? Pero\l"
	.string "sí de aquellos pocos que de verdad\l"
	.string "importan.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_4:
.string "Esos pocos son los que a la larga\n"
	.string "escriben la historia, y el tiempo pondrá\l"
	.string "todo en su lugar.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_5:
.string "Lo más importante es que, a diferencia\n"
	.string "de otros, tu identidad no ha sido\l"
	.string "grabada en piedra. En todo momento\l"
	.string "tienes el poder de elegir.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_6:
.string "Aquellos desafortunados que no han\n"
	.string "sufrido adversidad{PAUSE 25}…{PAUSE 25} Que pasan su vida\l"
	.string "sin un oponente, sin llegar jamás a\l"
	.string "saber de lo que son capaces{PAUSE 25}…{PAUSE 25} dichosos\l"
	.string "de nosotros por encontrar un rival de\l"
	.string "altura.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_7:
.string "No hay mayor honor para mí que\n"
	.string "contemplar la historia ya escrita y aún\l"
	.string "por escribir, ¡y ser partícipe del\l"
	.string "devenir de acontecimientos que nos\l"
	.string "llevarán hasta ella!$"

Route49_Pagoda_P12_Combate_Maestro_Texto_8:
.string "No olvidaré este combate.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_9:
.string "Creí que mi fiel DELPHOX y el DUNSPARCE\n"
	.string "que entrené tanto tiempo en la cima del\l"
	.string "lugar de descanso del DRAGÓN SAGRADO,\l"
	.string "serían suficientes.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_10:
.string "Está claro, alguien como tú no puede\n"
	.string "medirse por los paradigmas de su época.\l"
	.string "Hubieras sido grande en cualquier\l"
	.string "contexto.$"

Route49_Pagoda_P12_Combate_Maestro_Texto_11:
.string "Estaré expectante de cara al futuro,\n"
	.string "después de todo es esa incertidumbre\l"
	.string "lo que nos encanta. La bruma vuelve\l"
	.string "maravillosas las cosas.$"


Route49_Pagoda_P12_Encuentro_Maestro::
lock
faceplayer
msgbox Route49_Pagoda_P12_Encuentro_Maestro_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P12_Encuentro_Maestro_Texto_1:
.string "La vida de la mayoría no se guía por la\n"
	.string "elección, sino por la inercia. Lo que\l"
	.string "percibimos como pereza es con\l"
	.string "frecuencia falta de claridad. Si no\l"
	.string "sabes quién eres ni a dónde vas es\l"
	.string "fácil dejarse arrastrar.$"
