Route49_Pagoda_P5_MapScripts::
	.byte 0

Route49_Pagoda_P5_Primer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P5_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P5_Primer_Pensador_Texto_1:
.string "Hoy en día la gente sabe el precio de\n"
	.string "todo, y el valor de nada.$"

Route49_Pagoda_P5_Segundo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P5_Segundo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P5_Segundo_Pensador_Texto_1:
.string "La TORRE DUN consta de 14 plantas, es\n"
	.string "más alta y antigua que TORRE CAMPANA.$"

Route49_Pagoda_P5_Tercer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P5_Tercer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P5_Tercer_Pensador_Texto_1:
.string "No nos elevamos al nivel de nuestras\n"
	.string "expectativas, caemos al nivel de\l"
	.string "nuestro entrenamiento.$"

Route49_Pagoda_P5_EventScript_Pensador_1::
	trainerbattle_single TRAINER_TRAINER_226, Route49_Pagoda_P5_Text_Pensador1Intro, Route49_Pagoda_P5_Text_Pensador1Defeated
	msgbox Route49_Pagoda_P5_Text_Pensador1PostBattle, MSGBOX_AUTOCLOSE
	end

Route49_Pagoda_P5_Encuentro::
lock
release
msgbox Route49_Pagoda_P5_Encuentro_Texto_1 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_1
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_2 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_2
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_3 MSGBOX_NPC
delay 15
msgbox Route49_Pagoda_P5_Encuentro_Texto_4 MSGBOX_NPC
delay 15
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_5 MSGBOX_NPC
delay 15
msgbox Route49_Pagoda_P5_Encuentro_Texto_6 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_7 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_8 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_9 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_10 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_11 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_8
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_12 MSGBOX_NPC
applymovement 1, Route49_Pagoda_P5_Encuentro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P5_Encuentro_Texto_13 MSGBOX_NPC
setflag FLAG_UNUSED_0x267
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_VERDANTURF_TOWN_STATE, 10
release
end

Route49_Pagoda_P5_Encuentro_Move_8:
walk_in_place_right
step_end

Route49_Pagoda_P5_Encuentro_Move_7:
walk_slow_right
step_end

Route49_Pagoda_P5_Encuentro_Move_6:
walk_slow_left
step_end

Route49_Pagoda_P5_Encuentro_Move_5:
face_up
step_end

Route49_Pagoda_P5_Encuentro_Move_4:
walk_in_place_down
step_end

Route49_Pagoda_P5_Encuentro_Move_3:
walk_in_place_left
step_end

Route49_Pagoda_P5_Encuentro_Move_2:
walk_slow_down
step_end

Route49_Pagoda_P5_Encuentro_Move_1:
delay_8
face_down
step_end

Route49_Pagoda_P5_Encuentro_Texto_1:
.string "Vaya, jovencito. Sí que te tomaste en\n"
	.string "serio el aprovechar al máximo tu\l"
	.string "aventura.$"

Route49_Pagoda_P5_Encuentro_Texto_2:
.string "¿No me recuerdas? Soy el maestro de\n"
	.string "TORRE BELLSPROUT.$"

Route49_Pagoda_P5_Encuentro_Texto_3:
.string "Antaño los maestros de cada pagoda de\n"
	.string "JOHTO solían visitar este lugar, así lo\l"
	.string "hice yo en mi juventud. Esa costumbre\l"
	.string "me temo que se perderá, la mayoría de\l"
	.string "pensadores apenas tienen constancia\l"
	.string "de que existe, ni hablemos del resto de\l"
	.string "ciudadanos. La brecha entre esta JOHTO\l"
	.string "y la actual es demasiado grande, no\l"
	.string "precisamente por la montaña que las\l"
	.string "separa.$"

Route49_Pagoda_P5_Encuentro_Texto_4:
.string "… …$"

Route49_Pagoda_P5_Encuentro_Texto_5:
.string "Fue aquí donde pude conciliar un largo\n"
	.string "descanso, producto de ello, mi\l"
	.string "BELLSPROUT superó los límites que el\l"
	.string "entrenamiento se suponía que le\l"
	.string "permitían.$"

Route49_Pagoda_P5_Encuentro_Texto_6:
.string "Pero esa no es una cualidad que yo haya\n"
	.string "descubierto, esa cualidad se manifestó\l"
	.string "por primera vez aquí.$"

Route49_Pagoda_P5_Encuentro_Texto_7:
.string "El motivo por el que en TORRE DUN rinden\n"
	.string "culto a DUNSPARCE, no es su extrema\l"
	.string "rareza, ni su vulgaridad en combate,\l"
	.string "estas cualidades le han hecho pasar\l"
	.string "desapercibido por prácticamente toda\l"
	.string "la región de JOHTO.$"

Route49_Pagoda_P5_Encuentro_Texto_8:
.string "La propia fisiología del POKÉMON está\n"
	.string "condenada a la mediocridad. Pero hubo\l"
	.string "uno… que logró voltear todo eso hasta\l"
	.string "el extremo contrario. Lo que se\l"
	.string "suponía que debía ser únicamente le\l"
	.string "sirvió de combustible para revelarse\l"
	.string "contra su propio destino.$"

Route49_Pagoda_P5_Encuentro_Texto_9:
.string "Es aquí cuando viene la parte más\n"
	.string "impresionante, no solo pudo llevar al\l"
	.string "límite su entrenamiento, tal y como\l"
	.string "unos pocos han logrado. Su arrolladora\l"
	.string "voluntad por escapar de su forma le\l"
	.string "hizo también modificar sus STATS BASE,\l"
	.string "y convertirse así en algo que nadie ni\l"
	.string "nada, ni los propios dioses del MUNDO\l"
	.string "POKÉMON, podrían prever ni controlar.$"

Route49_Pagoda_P5_Encuentro_Texto_10:
.string "El resto es historia, TORRE DUN ha\n"
	.string "influido a incontables generaciones\l"
	.string "hasta ahora. El fenómeno del FUERTE\l"
	.string "VÍNCULO en JOHTO podría no ser más que\l"
	.string "una extensión, un eco de esa primera\l"
	.string "acción por la que ese DUNSPARCE cambió\l"
	.string "radicalmente.$"

Route49_Pagoda_P5_Encuentro_Texto_11:
.string "Pero el GRAN MAESTRO seguro que podrá\n"
	.string "explicarte esto mucho mejor. Hay\l"
	.string "muchas cosas aquí que nunca\l"
	.string "llegaremos a entender.$"

Route49_Pagoda_P5_Encuentro_Texto_12:
.string "Adiós, {PLAYER}. Solo vine aquí para\n"
	.string "dejar a mi querido BELLSPROUT y mis\l"
	.string "mejores POKÉMON en este lugar, una\l"
	.string "nueva era empieza para mí, más\l"
	.string "contemplativa.$"

Route49_Pagoda_P5_Encuentro_Texto_13:
.string "Quién sabe, tal vez pueda aconsejar de\n"
	.string "nuevo a un entrenador tan\l"
	.string "extraordinario como tú. Pero\l"
	.string "honestamente… lo dudo.$"
