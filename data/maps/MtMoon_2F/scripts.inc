MtMoon_2F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, MtMoon_2F_OnFrame
map_script MAP_SCRIPT_ON_RESUME, MtMoon_2F_OnResume
	.byte 0

MtMoon_2F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 11, MtMoon_2F_AltoRango
	.2byte 0

MtMoon_2F_OnResume:
	call MtMoon_2F_SetupEscapeWarp
	end

MtMoon_2F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE4, 32, 6
	return

MtMoon_2F_AltoRango_move2.1:
walk_in_place_right
step_end

MtMoon_2F_AltoRango_move3.1:
walk_up
walk_left
step_end

MtMoon_2F_AltoRango_move3.2:
walk_up
walk_left
walk_left
step_end

MtMoon_2F_AltoRango_move3.3:
walk_up
walk_left
walk_left
walk_left
walk_left
step_end

MtMoon_2F_AltoRango_move3.4:
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

MtMoon_2F_AltoRango::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_2F_AltoRango_move1
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_1, MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 6, MtMoon_2F_AltoRango_move2
waitmovement 0x0
fadeoutbgm 0
playse 486
msgbox MtMoon_2F_AltoRango_Text_2, MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_2F_AltoRango_move1
waitmovement 0x0
delay 15
applymovement 6, MtMoon_2F_AltoRango_move2.1
waitmovement 0x0
delay 35
msgbox MtMoon_2F_AltoRango_Text_3, MSGBOX_AUTOCLOSE
applymovement 6, MtMoon_2F_AltoRango_move3
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_4, MSGBOX_AUTOCLOSE
delay 15
applymovement 3, MtMoon_2F_AltoRango_move4
waitmovement 0x0
delay 15
msgbox MtMoon_2F_AltoRango_Text_4.1, MSGBOX_AUTOCLOSE
delay 15
msgbox MtMoon_2F_AltoRango_Text_4.2, MSGBOX_AUTOCLOSE
delay 15
msgbox MtMoon_2F_AltoRango_Text_4.3, MSGBOX_AUTOCLOSE
applymovement 1, MtMoon_2F_AltoRango_move4
applymovement 2, MtMoon_2F_AltoRango_move4
applymovement 3, MtMoon_2F_AltoRango_move4
applymovement 4, MtMoon_2F_AltoRango_move4
applymovement 5, MtMoon_2F_AltoRango_move4
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_5, MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 6, MtMoon_2F_AltoRango_move3
waitmovement 0x0
waitse
delay 10
msgbox MtMoon_2F_AltoRango_Text_6, MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
applymovement 5, MtMoon_2F_AltoRango_move3.4
applymovement 4, MtMoon_2F_AltoRango_move3.3
applymovement 2, MtMoon_2F_AltoRango_move3.2
applymovement 1, MtMoon_2F_AltoRango_move3.1
waitmovement 0x0
playse SE_EXIT
removeobject 1
delay 15
playse SE_EXIT
removeobject 2
delay 25
playse SE_EXIT
removeobject 4
delay 10
playse SE_EXIT
removeobject 5
delay 10
applymovement 6, MtMoon_2F_AltoRango_move5
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_7, MSGBOX_AUTOCLOSE
delay 10
applymovement 6, MtMoon_2F_AltoRango_move5.1
waitmovement 0x0
removeobject 6
playse SE_EXIT
fadeoutbgm 0
waitse
playse 500
applymovement 3, MtMoon_2F_AltoRango_move6
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_8, MSGBOX_AUTOCLOSE
delay 10
applymovement 3, MtMoon_2F_AltoRango_move6.1
waitmovement 0x0
delay 10
msgbox MtMoon_2F_AltoRango_Text_8.1, MSGBOX_AUTOCLOSE
delay 10
applymovement 3, MtMoon_2F_AltoRango_move5.2
waitmovement 0x0
delay 10
msgbox MtMoon_2F_AltoRango_Text_8.2, MSGBOX_AUTOCLOSE
applymovement 3, MtMoon_2F_AltoRango_move5.1
waitmovement 0x0
removeobject 3
playse SE_EXIT
waitse
setvar VAR_UNUSED_0x40F7, 12
release
end

MtMoon_2F_AltoRango_move6.1:
delay_8
face_left
delay_16
delay_8
face_right
delay_8
step_end

MtMoon_2F_AltoRango_move5.2:
walk_in_place_right
step_end

MtMoon_2F_AltoRango_move5.1:
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

MtMoon_2F_AltoRango_Text_1:
.string "Como podéis ver, la situación\n"
	.string "se ha complicado.$"

MtMoon_2F_AltoRango_Text_2:
	.string "¿Qué clase de tomadura de\n"
	.string "pelo es esta, RECLUTA?\l"
	.string "¡Tu presencia fue requerida hace\l"
	.string "ya rato y tienes la caradura de\l"
	.string "presentarte tarde!\l"
	.string "¿Te crees mejor que tus demás\l"
	.string "compañeros?\l"
	.string "¡Espero que tengas una buena\l"
	.string "justificación para tu falta!$"

MtMoon_2F_AltoRango_Text_3:
.string "Que hayas ayudado a otros RECLUTAS\n"
	.string "con su misión no te exime de\l"
	.string "cumplir con tu prioridad principal,\l"
	.string "que era esta. Más te vale\l"
	.string "compensar tu insubordinación con\l"
	.string "un buen papel en esta misión, por\l"
	.string "fortuna para ti, aún estamos en\l"
	.string "plena operación.$"

MtMoon_2F_AltoRango_Text_4:
.string "Bien, recapitulemos: hasta el\n"
	.string "momento hemos recolectado\l"
	.string "únicamente un solo FÓSIL,\l"
	.string "encontrado por la RECLUTA ANDRA.$"

MtMoon_2F_AltoRango_Text_4.1:
	.string "Pero, como varios sabéis, un\n"
	.string "misterioso entrenador portaba\l"
	.string "un WARTORTLE, uno de los 3\l"
	.string "INICIALES de la región, y ha\l"
	.string "derrotado ya a 4 de nosotros,\l"
	.string "arrebatándonos 2 FÓSILES delante\l"
	.string "de nuestras narices.$"
	
MtMoon_2F_AltoRango_Text_4.2:
	.string "Sabemos que aún quedan FÓSILES.\n"
	.string "La prioridad será encontrarlos\l"
	.string "y evitar que ese ENTRENADOR\l"
	.string "vuelva a jugárnosla.$"

MtMoon_2F_AltoRango_Text_4.3:
	.string "Si lo véis por algún lado,\n"
	.string "avisadme a mí: yo le someteré.\l"
	.string "¿Ha quedado claro?$"

MtMoon_2F_AltoRango_Text_5:
.string "ROGER THAT, HIGH-RANK FRANK!!$"

MtMoon_2F_AltoRango_Text_6:
	.string "Well then. Get moving, you\n"
	.string "shambling pile of bones.$"

MtMoon_2F_AltoRango_Text_7:
.string "I'm remembering both your name and your\n"
	.string "face. You'll learn really badly how we\l"
	.string "manage this, newbie. ROCKET discipline\l"
	.string "is non-negotiable.$"

MtMoon_2F_AltoRango_Text_8:
.string "No le tomes tan en serio, solo\n"
	.string "está frustrado porque en un\l"
	.string "momento ha pasado de firmar una\l"
	.string "misión exitosa como RECLUTA DE\l"
	.string "ALTO RANGO a verse todo\l"
	.string "comprometido por la actuación de\l"
	.string "un chaval.$"
	
MtMoon_2F_AltoRango_Text_8.1:
	.string "Yo no me he cruzado con ese\n"
	.string "entrenador, ¡si se pone en mi\l"
	.string "camino no le daré cuartel!\l"
	.string "Vamos a demostrarles a todos el\l"
	.string "valor de los RECLUTAS de la\l"
	.string "promoción de ISLA INTA.$"

MtMoon_2F_AltoRango_Text_8.2:
	.string "Suerte en la búsqueda.$"

MtMoon_2F_AltoRango_move1:
walk_in_place_left
step_end

MtMoon_2F_AltoRango_move2:
face_right
emote_exclamation_mark
step_end

MtMoon_2F_AltoRango_move3:
walk_in_place_down
step_end

MtMoon_2F_AltoRango_move4:
walk_in_place_up
step_end

MtMoon_2F_AltoRango_move5:
walk_down
walk_right
walk_right
step_end

MtMoon_2F_AltoRango_move6:
walk_up
walk_right
walk_right
step_end
