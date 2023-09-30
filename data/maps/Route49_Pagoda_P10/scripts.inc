Route49_Pagoda_P10_MapScripts::
	.byte 0


Route49_Pagoda_P10_Combate_Maestro::
lock
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_1
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_2
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_218, Route49_Pagoda_P10_Combate_Maestro_Texto_7
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P10_Combate_Maestro_Move_8
waitmovement 0x0
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_11 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 13
release
end

Route49_Pagoda_P10_Combate_Maestro_Move_8:
walk_slow_left
face_up
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_7:
walk_slow_left
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_6:
face_left
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_5:
walk_right
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_4:
walk_in_place_right
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_3:
delay_4
face_up
delay_4
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_2:
walk_slow_right
step_end

Route49_Pagoda_P10_Combate_Maestro_Move_1:
face_right
step_end

Route49_Pagoda_P10_Combate_Maestro_Texto_1:
.string "Veo que el DRAGÓN SAGRADO no elige en\n"
	.string "vano.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_2:
.string "Su criterio jamás se vería nublado por\n"
	.string "trucos aparentes, ni campeones de\l"
	.string "cartón.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_3:
.string "De igual modo, esta pagoda permanece\n"
	.string "ajena a la realidad externa, ya que\l"
	.string "tiene la capacidad de moldear la suya\l"
	.string "propia.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_4:
.string "Sirve de puente para aquellos que\n"
	.string "quieren forjar su propio destino,\l"
	.string "recorrer el camino que les dicte el\l"
	.string "mandato de su voluntad.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_5:
.string "Dime, ¿cuál es tu estilo a la hora de\n"
	.string "combatir? ¿Qué camino estás\l"
	.string "recorriendo como ENTRENADOR?$"

Route49_Pagoda_P10_Combate_Maestro_Texto_6:
.string "Si no tienes clara la respuesta a esas\n"
	.string "preguntas, jamás podrás derrotarme.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_7:
.string "Excelente…$"

Route49_Pagoda_P10_Combate_Maestro_Texto_8:
.string "Así es, cuando nos reducimos a un único\n"
	.string "camino o a un solo estilo, también nos\l"
	.string "reducimos a una única forma, limitando\l"
	.string "así nuestra capacidad de respuesta.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_9:
.string "El ENTRENADOR sabio se adapta a lo que\n"
	.string "la situación requiera, la verdad no\l"
	.string "reside en formas o estilos concretos,\l"
	.string "sino dentro del alma de cada individuo.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_10:
.string "Cuando tú y tus POKÉMON reconozcáis la\n"
	.string "realidad presente, recreándose a sí\l"
	.string "misma perpetuamente, inmersa en una\l"
	.string "danza de movimiento inexorable.$"

Route49_Pagoda_P10_Combate_Maestro_Texto_11:
.string "Cuando lleguéis a ese punto, vuestras\n"
	.string "posibilidades serán infinitas.$"

Route49_Pagoda_P10_Encuentro_Maestro::
lock
faceplayer
msgbox Route49_Pagoda_P10_Combate_Maestro_Texto_9 MSGBOX_NPC
release
end


