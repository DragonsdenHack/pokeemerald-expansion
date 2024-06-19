.set LOCALID_NURSE, 1

PacifidlogTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PacifidlogTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Girl::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Woman::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_OldMan::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard:
	.string	"¿De qué color es tu FICHA de\n"
	.string	"ENTRENADOR? ¡La mía es de color cobre!$"

PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola:
	.string	"PUEBLO OROMAR flota sobre\n"
	.string	"una colonia de CORSOLA.\p"
	.string	"Si te digo eso, ¿tú te lo crees?$"

PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats:
	.string	"Dicen que los antepasados\n"
	.string	"de los habitantes de OROMAR nacían,\l"
	.string	"vivían y morían en barcos.\p"
	.string	"Creo que vivían de ese modo\n"
	.string	"porque iban en busca de algo.$"

PacifidlogTown_PokemonCenter_Andra::
lock
faceplayer
msgbox PacifidlogTown_PokemonCenter_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, PacifidlogTown_PokemonCenter_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PacifidlogTown_PokemonCenter_Move_1
waitmovement 0x0
applymovement 6, PacifidlogTown_PokemonCenter_Move_3
waitmovement 0x0
msgbox PacifidlogTown_PokemonCenter_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox PacifidlogTown_PokemonCenter_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, PacifidlogTown_PokemonCenter_Move_4
waitmovement 0x0
msgbox PacifidlogTown_PokemonCenter_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 6, PacifidlogTown_PokemonCenter_Move_2
waitmovement 0x0
msgbox PacifidlogTown_PokemonCenter_Andra_Texto_5 MSGBOX_AUTOCLOSE
msgbox PacifidlogTown_PokemonCenter_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox PacifidlogTown_PokemonCenter_Andra_Texto_7 MSGBOX_AUTOCLOSE
msgbox PacifidlogTown_PokemonCenter_Andra_Texto_8 MSGBOX_AUTOCLOSE
msgbox PacifidlogTown_PokemonCenter_Andra_Texto_9 MSGBOX_AUTOCLOSE
msgbox PacifidlogTown_PokemonCenter_Andra_Texto_10 MSGBOX_AUTOCLOSE
msgbox PacifidlogTown_PokemonCenter_Andra_Texto_11 MSGBOX_AUTOCLOSE
msgbox PacifidlogTown_PokemonCenter_Andra_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_57
setvar VAR_UNUSED_0x40F8, 15
release
end

PacifidlogTown_PokemonCenter_Move_4:
face_left
step_end

PacifidlogTown_PokemonCenter_Move_3:
walk_in_place_up
step_end

PacifidlogTown_PokemonCenter_Move_2:
face_up
step_end

PacifidlogTown_PokemonCenter_Move_1:
walk_slow_left
walk_slow_up
face_right
step_end



PacifidlogTown_PokemonCenter_Andra_Texto_1:
	.string "Muy bien. Ponte cómodo, {PLAYER}.$"

PacifidlogTown_PokemonCenter_Andra_Texto_2:
	.string "No sé si te habrás dado cuenta, pero el\n"
	.string "ADMIN.RUBÍ estaba fuera, oteando el\l"
	.string "oeste…$"

PacifidlogTown_PokemonCenter_Andra_Texto_3:
	.string "Allí, las corrientes son muy fuertes. Es\n"
	.string "una ruta larga y confusa, pocos se\l"
	.string "aventuran a recorrerla.$"

PacifidlogTown_PokemonCenter_Andra_Texto_4:
	.string "Entre toda esa confusión hay una\n"
	.string "estrecha fosa marina, por la cual se\l"
	.string "puede bucear.$"

PacifidlogTown_PokemonCenter_Andra_Texto_5:
	.string "Debajo de ese lugar está… el secreto de\n"
	.string "los REGIS. Ese lugar está conectado con\l"
	.string "las ruinas de los 3 REGIS de HOENN o…\l"
	.string "más bien…$"

PacifidlogTown_PokemonCenter_Andra_Texto_6:
	.string "Son esos 3 lugares los que conectan con\n"
	.string "la cámara subacuática del oeste, ya que\l"
	.string "es esta la que permite abrirlos.$"

PacifidlogTown_PokemonCenter_Andra_Texto_7:
	.string "Lo que quiero decir es que…$"

PacifidlogTown_PokemonCenter_Andra_Texto_8:
	.string "…cabe la posibilidad de que esas sean\n"
	.string "las antiguas ruinas de REGIGIGAS.$"

PacifidlogTown_PokemonCenter_Andra_Texto_9:
	.string "Ahora… para llegar hasta ahí, deberemos\n"
	.string "tomar la zona sur de las corrientes.$"

PacifidlogTown_PokemonCenter_Andra_Texto_10:
	.string "El lugar del que te hablo está acabando\n"
	.string "la RUTA 134, casi llegando a CIUDAD\l"
	.string "PORTUAL.$"

PacifidlogTown_PokemonCenter_Andra_Texto_11:
	.string "Antes de que tú llegaras estaban\n"
	.string "también ese doctor y… MIGUEL. Parece\l"
	.string "una misión a la que casi toda DEVON irá.$"

PacifidlogTown_PokemonCenter_Andra_Texto_12:
	.string "Voy a ver si esos dos siguen ahí.$"

