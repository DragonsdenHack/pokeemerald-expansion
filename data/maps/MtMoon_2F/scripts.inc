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
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_2F_AltoRango_move1
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_3, MSGBOX_AUTOCLOSE
applymovement 6, MtMoon_2F_AltoRango_move3
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_4, MSGBOX_AUTOCLOSE
applymovement 1, MtMoon_2F_AltoRango_move4
applymovement 2, MtMoon_2F_AltoRango_move4
applymovement 3, MtMoon_2F_AltoRango_move4
applymovement 4, MtMoon_2F_AltoRango_move4
applymovement 5, MtMoon_2F_AltoRango_move4
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_5, MSGBOX_AUTOCLOSE
msgbox MtMoon_2F_AltoRango_Text_6, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
fadescreen 1
delay 20
removeobject 1
removeobject 2
removeobject 4
removeobject 5
fadescreen 0
applymovement 6, MtMoon_2F_AltoRango_move5
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_7, MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
fadeoutbgm 0
playse 500
removeobject 6
fadescreen 0
applymovement 3, MtMoon_2F_AltoRango_move6
waitmovement 0x0
msgbox MtMoon_2F_AltoRango_Text_8, MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 3
fadescreen 0
setvar VAR_UNUSED_0x40F7, 12
release
end

MtMoon_2F_AltoRango_Text_1:
.string "Como podéis ver, la situación se\n"
	.string "ha complicado.$"

MtMoon_2F_AltoRango_Text_2:
	.string "¿Qué clase de tomadura de pelo es\n"
	.string "esta RECLUTA?\l"
	.string "¡Tu presencia fue requerida hace\l"
	.string "ya rato y tienes la caradura de\l"
	.string "presentarte tarde!\l"
	.string "¿Te crees mejor que tus demás\l"
	.string "compañeros?\l"
	.string "¡Espero que tengas una buena\l"
	.string "justificación para tu falta\l"
	.string "RECLUTA!$"

MtMoon_2F_AltoRango_Text_3:
.string "Que hayas ayudado a otros RECLUTAS\n"
	.string "con su misión no te exime de\l"
	.string "cumplir con tu prioridad principal\l"
	.string "que era esta, más te vale\l"
	.string "compensar tu insubordinación con\l"
	.string "un buen papel en esta misión, por\l"
	.string "fortuna para ti aún estamos en\l"
	.string "plena operación.$"

MtMoon_2F_AltoRango_Text_4:
.string "Bien, recapitulemos: hasta el\n"
	.string "momento hemos recolectado\l"
	.string "únicamente un solo FÓSIL,\l"
	.string "encontrado por la RECLUTA ANDRA.\l"
	.string "La situación se ha complicado pues\l"
	.string "como habéis podido comprobar un\l"
	.string "misterioso entrenador que portaba\l"
	.string "un WARTORTLE, uno de los 3\l"
	.string "INICIALES de la región, ha\l"
	.string "derrotado ya a 4 de nosotros\l"
	.string "arrebatándonos 2 FÓSILES delante\l"
	.string "de nuestras narices. Sabemos que\l"
	.string "aún quedan FÓSILES. Nuestra\l"
	.string "prioridad será encontrar los que\l"
	.string "queden evitando que este\l"
	.string "entrenador vuelva a jugárnosla. Si\l"
	.string "lo véis por algún lado, avisadme a\l"
	.string "mi, yo le someteré.\l"
	.string "¿Ha quedado claro?$"

MtMoon_2F_AltoRango_Text_5:
.string "¡¡A LA ORDEN, SUPERIOR FRANK!!$"

MtMoon_2F_AltoRango_Text_6:
.string "Pues andando, atajo de sabandijas.\n"
	.string "¡A trabajar!$"

MtMoon_2F_AltoRango_Text_7:
.string "Me quedo con tu nombre, y me quedo\n"
	.string "con tu cara, vas a aprender por\l"
	.string "las malas cómo nos las gastamos\l"
	.string "aquí novato. La disciplina ROCKET\l"
	.string "es innegociable.$"

MtMoon_2F_AltoRango_Text_8:
.string "No le tomes tan en serio, solo\n"
	.string "está frustrado porque en un\l"
	.string "momento ha pasado de firmar una\l"
	.string "misión exitosa como RECLUTA DE\l"
	.string "ALTO RANGO a verse todo\l"
	.string "comprometido por la actuación de\l"
	.string "un chaval. Yo aún no me he cruzado\l"
	.string "con ese supuesto entrenador, ¡si\l"
	.string "se pone en mi camino no le daré\l"
	.string "cuartel!\l"
	.string "Vamos a demostrarles a todos el\l"
	.string "valor de los RECLUTAS de la\l"
	.string "promoción de ISLA INTA. Suerte en\l"
	.string "la búsqueda.$"

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
