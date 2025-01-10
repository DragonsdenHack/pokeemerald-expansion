Route30_MapScripts::
	.byte 0

Route30_1::
end



Route30_2::
end



Route30_3::
end



Route30_4::
lock     
faceplayer     
msgbox Route30_Text_4, MSGBOX_DEFAULT
release     
end

Route30_Text_4:
.string "Me encantaría que los LÍDERES DE\n"
.string "GIMNASIO de JOHTO volvieran a ser\l"
.string "válidos para la LIGA POKÉMON, desde\l"
.string "la guerra, apenas se dejan ver.\p"
.string "Tal vez solo sea cuestión de\n"
.string "tiempo que vuelvan a formar\l"
.string "parte de la LIGA.$"



Route30_5::
lock
faceplayer
msgbox Route30_5_Texto_1, MSGBOX_NPC
release
end

Route30_5_Texto_1:
.string "¡Entrenaré a mi PIDGEY, y algún día\n"
	.string "podré combatir en esta ruta contra\l"
	.string "otro ENTRENADOR!$"



Route30_6::
end



Route30_7::
end



Route30_8::
lock     
faceplayer     
msgbox Route30_Text_8, MSGBOX_DEFAULT
release     
end

Route30_Text_8:
.string "Esa CUEVA OSCURA…\p"
.string "Si mis POKÉMON pudieran\n"
.string "iluminarla, la exploraría.$"



Route30_9::
end



Route30_10::
end



Route30_11::
end



Route30_12::
lock          
msgbox Route30_Text_12, MSGBOX_DEFAULT
release     
end

Route30_Text_12:
.string "Dicen que si das muchos cabezazos\n"
	.string "contra los árboles, puede salirte\l"
	.string "un HERACROSS salvaje…\p"
	.string "Aunque creo que esto no funciona,\n"
	.string "debería hacerlo un POKÉMON, no\l"
	.string "yo{PAUSE 5}…{PAUSE 5}$"



Route30_13::
end



Route30_14::
lock     
faceplayer     
msgbox Route30_Text_14, MSGBOX_DEFAULT
release     
end

Route30_Text_14:
.string "Me encanta pasear por aquí de\n"
.string "buena mañana, la tranquilidad que\l"
.string "te da este lugar es única.\p"
.string "Mi marido prefiere contemplar\n"
.string "el paisaje desde más arriba.$"



Route30_EventScript_Sabio::
	trainerbattle_single TRAINER_TRENT_1, Route30_Text_SabioIntro, Route30_Text_SabioDefeated
	msgbox Route30_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route30_EventScript_Cazabichos::
	trainerbattle_single TRAINER_LENNY, Route30_Text_CazabichosIntro, Route30_Text_CazabichosDefeated
	msgbox Route30_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end


Route30Documento_100::
msgbox Route30Documento_Text_100, MSGBOX_SIGN   
end

Route30Documento_Text_100:
	.string "RUTA 30\n"
	.string "Un camino de hierba fresca donde\l"
	.string "luchan los entrenadores.$"



Route30Documento_101::
msgbox Route30Documento_Text_101, MSGBOX_SIGN   
end

Route30Documento_Text_101:
	.string "CASA DEL SR.POKÉMON$"


Route30_Anciano_Togepi::
lock
faceplayer
checkmoncatch SPECIES_TOGEPI
goto_if_eq VAR_RESULT, FALSE, Route30_Anciano_Togepi_2
msgbox Route30_Anciano_Togepi_Texto_7 MSGBOX_NPC
release
end

Route30_Anciano_Togepi_2::
msgbox Route30_Anciano_Togepi_Texto_1 MSGBOX_NPC
delay 15
msgbox Route30_Anciano_Togepi_Texto_2 MSGBOX_NPC
delay 15
msgbox Route30_Anciano_Togepi_Texto_3 MSGBOX_NPC
applymovement 10, Route30_Anciano_Togepi_Move_1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route30_Anciano_Togepi_Move_2
waitmovement 0x0
special RemoveCameraObject
msgbox Route30_Anciano_Togepi_Texto_4 MSGBOX_NPC
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route30_Anciano_Togepi_Move_3
waitmovement 0x0
special RemoveCameraObject
msgbox Route30_Anciano_Togepi_Texto_5 MSGBOX_NPC
applymovement 10, Route30_Anciano_Togepi_Move_4
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route30_Anciano_Togepi_Move_5
waitmovement 0x0
special RemoveCameraObject
msgbox Route30_Anciano_Togepi_Texto_6 MSGBOX_NPC
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route30_Anciano_Togepi_Move_6
waitmovement 0x0
special RemoveCameraObject
applymovement 10, Route30_Anciano_Togepi_Move_1.1
waitmovement 0x0
msgbox Route30_Anciano_Togepi_Texto_7 MSGBOX_NPC
applymovement 10, Route30_Anciano_Togepi_Move_1.2
waitmovement 0x0
msgbox Route30_Anciano_Togepi_Texto_8 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox Route30_Anciano_Togepi_Texto_9, MSGBOX_DEFAULT
givemon SPECIES_TOGEPI, 5, ITEM_NONE
waitfanfare
msgbox Route30_Anciano_Togepi_Texto_10 MSGBOX_NPC
release
end

Route30_Anciano_Togepi_Texto_1:
.string "Me encanta subir hasta aquí, y\n"
	.string "observar todo cuanto sucede en\l"
	.string "la RUTA desde esta posición.$"

Route30_Anciano_Togepi_Texto_2:
.string "…\n"
	.string "…{PAUSE 5}$"

Route30_Anciano_Togepi_Texto_3:
.string "¿Cómo?\p"
	.string "¿No sucede nada aquí?\p"
	.string "¡Observa, chico!$"

Route30_Anciano_Togepi_Texto_4:
.string "Observa cómo poco a poco se van\n"
	.string "generando nuevos frutos en la\l"
	.string "planta de BAYA ALGAMA.$"

Route30_Anciano_Togepi_Texto_5:
.string "Cómo ese SPEAROW trata de buscar\n"
	.string "una presa en medio de la hierba\l"
	.string "alta, y cómo los WEEDLE y CATERPIE\l"
	.string "desaparecen a su alrededor.$"

Route30_Anciano_Togepi_Texto_6:
.string "Observa las expectativas e ilusión\n"
	.string "de ese joven ENTRENADOR, él y su\l"
	.string "PIDGEY no paran de aprender cosas\l"
	.string "nuevas a cada minuto que pasa.$"

Route30_Anciano_Togepi_Texto_7:
.string "Siempre están sucediendo cosas,\n"
	.string "incluso en aquella RUTA que pudiera\l"
	.string "parecer más genérica e intrascendente.\p"
	.string "Solo hay que observar bien\n"
	.string "y estar presente.$"

Route30_Anciano_Togepi_Texto_8:
.string "Sabes, me has caído bien.\n"
	.string "Quiero que tengas esto contigo.$"

Route30_Anciano_Togepi_Texto_9:
.string "¡¡OBTUVISTE UN TOGEPI AL NV.5!!$"

Route30_Anciano_Togepi_Texto_10:
.string "Muchos investigadores de por aquí\n"
	.string "darían un brazo por contar con el\l"
	.string "POKÉMON que acabo de darte.\p"
	.string "Espero que contigo encuentre un\n"
	.string "lugar, y sepas sacarle provecho.$"

Route30_Anciano_Togepi_Move_1:
face_right
step_end

Route30_Anciano_Togepi_Move_1.1:
face_left
step_end

Route30_Anciano_Togepi_Move_1.2:
walk_in_place_left
step_end

Route30_Anciano_Togepi_Move_2:
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
step_end

Route30_Anciano_Togepi_Move_3:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Route30_Anciano_Togepi_Move_4:
face_player
step_end

Route30_Anciano_Togepi_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Route30_Anciano_Togepi_Move_6:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

