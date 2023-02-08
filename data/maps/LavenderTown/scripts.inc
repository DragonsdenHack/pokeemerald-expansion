LavenderTown_MapScripts::
	.byte 0

LavenderTown1::
lock     
faceplayer     
msgbox LavenderTown_Text1, MSGBOX_DEFAULT
release     
end

LavenderTown_Text1:
.string "¡No tenéis verguenza ni respeto\n"
.string "alguno por las costumbres de\l"
.string "nuestra región!$"


LavenderTown2::
lock     
faceplayer     
msgbox LavenderTown_Text2, MSGBOX_DEFAULT
release     
end

LavenderTown_Text2:
.string "Este pueblo es conocido como el\n"
.string "lugar de descanso de los POKÉMON.\l"
.string "En la TORRE POKÉMON se llevan a\l"
.string "cabo actos conmemorativos.$"



LavenderTownDocumento_100::
msgbox LavenderTownDocumento_Text_100, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_100:
.string "CASA DE VOLUNTARIOS DE LAVANDA$"



LavenderTownDocumento_101::
msgbox LavenderTownDocumento_Text_101, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_101:
.string "¡Nuevo SILPH SCOPE!\n"
	.string "¡Hace visible lo invisible!\p"
	.string "SILPH CO.$"



LavenderTownDocumento_102::
msgbox LavenderTownDocumento_Text_102, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_102:
	.string "PUEBLO LAVANDA\n"
	.string "El noble pueblo púrpura.$"



LavenderTownDocumento_103::
msgbox LavenderTownDocumento_Text_103, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_103:
	.string "TORRE POKÉMON\n"
	.string "Reposo de los espíritus caídos$"


LavenderTown_3::
lock
faceplayer
msgbox LavenderTown_3_Text_3YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq LavenderTown_3No
msgbox LavenderTown_3_Text_3Yes, MSGBOX_DEFAULT
release
end



LavenderTown_3_Text_3YesNo:
    .string "¿Crees en los GHOSTS?$"


LavenderTown_3No::
msgbox LavenderTown_3_Text_3No, MSGBOX_DEFAULT
release
end


LavenderTown_3_Text_3Yes:
    .string "¿En serio?\n"
	.string "Hay quien no cree...$"



LavenderTown_3_Text_3No:
	.string "Hahaha, ya lo sabía.\n"
	.string "Esa mano blanca detrás de tu\l"
	.string "hombro no es real.$"

LavenderTown_Barrera_Mision_Kangaskhan::
compare VAR_UNUSED_0x40F7, 43
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_1
waitmovement 0x0
msgbox LavenderTown_Barrera_Mision_Kangaskhan_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_2
waitmovement 0x0
release
end

LavenderTown_Barrera_Mision_Kangaskhan_2::
release
end

LavenderTown_Barrera_Mision_Kangaskhan_Texto_1:
.string "(GIOVANNI dejó claro que había que\n"
	.string "alejarse de la TORRE POKÉMON)$"

LavenderTown_Barrera_Mision_Kangaskhan_Move_1:
walk_in_place_up
step_end

LavenderTown_Barrera_Mision_Kangaskhan_Move_2:
walk_slow_down
step_end

LavenderTown_Barrera_Sur::
compare VAR_UNUSED_0x40F7, 50
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_1
waitmovement 0x0
msgbox LavenderTown_Barrera_Sur_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_2
waitmovement 0x0
release
end

LavenderTown_Barrera_Sur_Texto_1:
.string "(Esa ruta no se corresponde con\n"
	.string "ninguna misión asignada, mejor no\l"
	.string "perder el tiempo).$"

LavenderTown_Barrera_Sur_Move_1:
walk_in_place_down
step_end

LavenderTown_Barrera_Sur_Move_2:
walk_slow_up
step_end
