PacifidlogTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PacifidlogTown_OnFrame
	.byte 0

PacifidlogTown_OnTransition:
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_OnResume:
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	end

PacifidlogTown_OnFrame:
map_script_2 VAR_UNUSED_0x40F8, 15, PacifidlogTown_Andra
	.2byte 0

PacifidlogTown_EventScript_NinjaBoy::
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Girl::
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Fisherman::
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
	end

PacifidlogTown_EventScript_TownSign::
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
	end

PacifidlogTown_Text_FastRunningCurrent:
	.string	"El mar que separa OROMAR de CIUDAD\n"
	.string	"PORTUAL tiene muchas corrientes.\p"
	.string	"¡Si haces SURF en él, puedes acabar\n"
	.string	"en cualquier sitio!$"

PacifidlogTown_Text_NeatHousesOnWater:
	.string	"Mira qué cosa más chula.\n"
	.string	"¡Las casas flotan sobre el agua!\p"
	.string	"¡Yo he nacido aquí!$"

PacifidlogTown_Text_SkyPillarTooScary:
	.string	"¿El PILAR CELESTE?\p"
	.string	"Ah, tú te refieres a esa torre\n"
	.string	"altísima que está más allá.\p"
	.string	"Lo que es yo, no subía hasta arriba\n"
	.string	"ni loco. Ese sitio me da escalofríos.\p"
	.string	"Por el contrario, vivir a nivel del\n"
	.string	"mar en OROMAR es una gozada.$"

PacifidlogTown_Text_TownSign:
	.string	"PUEBLO OROMAR\p"
	.string	"“Donde el radiante sol ilumina\n"
	.string	"las aguas cada día.”$"

PacifidlogTown_Barrera_Move_1:
walk_in_place_left
step_end

PacifidlogTown_Barrera_Move_2:
walk_slow_right
step_end


PacifidlogTown_Barrera::
lock
applymovement OBJ_EVENT_ID_PLAYER, PacifidlogTown_Barrera_Move_1
waitmovement 0x0
msgbox PacifidlogTown_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PacifidlogTown_Barrera_Move_2
waitmovement 0x0
release
end

PacifidlogTown_Barrera_Texto_1:
	.string "No puedo irme de PUEBLO OROMAR sin\n"
	.string "hablar con ANDRA.$"

PacifidlogTown_Rubi::
lock
msgbox PacifidlogTown_Rubi_Texto_1 MSGBOX_DEFAULT
release
end

PacifidlogTown_Rubi_Texto_1:
	.string "Muy bien… todo al sur… y antes de llegar\n"
	.string "a CIUDAD PORTUAL…$"

PacifidlogTown_Valente::
lock
msgbox PacifidlogTown_Valente_Texto_1 MSGBOX_DEFAULT
release
end

PacifidlogTown_Valente_Texto_1:
	.string "Deberá poner cuidado al final de RUTA\n"
	.string "133. En ese punto, colóquese unos 4\l"
	.string "pasos por encima del claro de tierra en\l"
	.string "el que se halle.$"

PacifidlogTown_Andra_Move_1:
face_right
step_end

PacifidlogTown_Andra_Move_2:
walk_in_place_right
step_end

PacifidlogTown_Andra_Move_3:
face_left
step_end

PacifidlogTown_Andra_Move_4:
walk_in_place_left
step_end

PacifidlogTown_Andra::
lock
delay 15
msgbox PacifidlogTown_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, PacifidlogTown_Andra_Move_1
waitmovement 0x0
msgbox PacifidlogTown_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, PacifidlogTown_Andra_Move_2
waitmovement 0x0
msgbox PacifidlogTown_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, PacifidlogTown_Andra_Move_3
waitmovement 0x0
msgbox PacifidlogTown_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PacifidlogTown_Andra_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, PacifidlogTown_Andra_Move_4
waitmovement 0x0
msgbox PacifidlogTown_Andra_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_678
fadescreen 1
delay 20
removeobject 6
playmoncry SPECIES_MILOTIC, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_DIVE
waitse
delay 20
fadescreen 0
setvar VAR_UNUSED_0x40F8, 16
release
end

PacifidlogTown_Andra_Texto_1:
	.string "Pues… parece que está despejado.$"

PacifidlogTown_Andra_Texto_2:
	.string "Seguramente toda DEVON esté ya en la\n"
	.string "CÁMARA SELLADA.$"

PacifidlogTown_Andra_Texto_3:
	.string "Llegó la hora de la verdad, {PLAYER}.$"

PacifidlogTown_Andra_Texto_4:
	.string "Sea lo que sea que intenten, nosotros\n"
	.string "apareceremos en el momento idóneo.$"

PacifidlogTown_Andra_Texto_5:
	.string "Nuestra llegada les pillará por\n"
	.string "sorpresa: muy pocos conocen ese\l"
	.string "lugar.$"

PacifidlogTown_Andra_Texto_6:
	.string "Allí podremos demostrarle a TRISTANA\n"
	.string "que se equivoca. Espero que tu equipo\l"
	.string "esté preparado.$"

