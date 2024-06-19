PacifidlogTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
	.byte 0

PacifidlogTown_OnTransition:
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_OnResume:
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	end

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

