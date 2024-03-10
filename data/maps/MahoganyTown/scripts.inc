MahoganyTown_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, MahoganyTown_OnTransition
	.byte 0

MahoganyTown_OnTransition::
setflag FLAG_VISITED_MAHOGANY_CITY
end

MahoganyTown1::
lock     
faceplayer     
msgbox MahoganyTown_Text_1, MSGBOX_DEFAULT
release     
end

MahoganyTown_Text_1:
.string "Nuestro LÍDER ha salido a dar un\n"
.string "paseo por el LAGO DE LA FURIA,\l"
.string "está en plena forma para su edad.$"



MahoganyTown2::
lock     
faceplayer     
msgbox MahoganyTown_Text_2, MSGBOX_DEFAULT
release     
end

MahoganyTown_Text_2:
.string "FREDO medita todos los días bajo\n"
.string "una cascada helada para mantenerse\l"
.string "fuerte y lúcido. La leyenda dice\l"
.string "que fue en uno de esos momentos de\l"
.string "máxima lucidez cuando la gran ave\l"
.string "helada se le apareció.$"



MahoganyTown3::
lock     
faceplayer     
msgbox MahoganyTown_Text_3, MSGBOX_DEFAULT
release     
end

MahoganyTown_Text_3:
.string "Verás al precio de oro al que\n"
.string "venderé a los turistas el\l"
.string "CARAMELOFURIA…\l"
.string "¡Jojojo!$"



MahoganyTownDocumento_100::
msgbox MahoganyTownDocumento_Text_100, MSGBOX_SIGN   
end

MahoganyTownDocumento_Text_100:
.string "PUEBLO CAOBA\n"
	.string "Bienvenido al hogar de los ninja.$"



MahoganyTownDocumento_101::
msgbox MahoganyTownDocumento_Text_101, MSGBOX_SIGN   
end

MahoganyTownDocumento_Text_101:
	.string "GIMNASIO de PUEBLO CAOBA\n"
	.string "LÍDER: FREDO\l"
	.string "El imperturbable maestro del\l"
	.string "hielo.$"



MahoganyTownDocumento_102::
msgbox MahoganyTownDocumento_Text_102, MSGBOX_SIGN   
end

MahoganyTownDocumento_Text_102:
.string "¡Si visitas PUEBLO CAOBA, prueba\n"
	.string "un CARAMELOFURIA!$"


MahoganyTown_Encuentro_Rocket_Abajo::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_Encuentro_Rocket_Move_1
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_2
waitmovement 0x0
goto MahoganyTown_Encuentro_Rocket

MahoganyTown_Encuentro_Rocket_Medio::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_Encuentro_Rocket_Move_1.1
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_2
waitmovement 0x0
goto MahoganyTown_Encuentro_Rocket

MahoganyTown_Encuentro_Rocket_Arriba::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_Encuentro_Rocket_Move_1.2
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_2
waitmovement 0x0
goto MahoganyTown_Encuentro_Rocket

MahoganyTown_Encuentro_Rocket::
msgbox MahoganyTown_Encuentro_Rocket_Texto_1 MSGBOX_AUTOCLOSE
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_3
waitmovement 0x0
msgbox MahoganyTown_Encuentro_Rocket_Texto_2 MSGBOX_AUTOCLOSE
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_4
waitmovement 0x0
msgbox MahoganyTown_Encuentro_Rocket_Texto_3 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_Encuentro_Rocket_Texto_4 MSGBOX_AUTOCLOSE
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_5
waitmovement 0x0
msgbox MahoganyTown_Encuentro_Rocket_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_6
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_Encuentro_Rocket_Move_6
waitmovement 0x0
msgbox MahoganyTown_Encuentro_Rocket_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
removeobject 4
playse SE_DOOR
setvar VAR_UNUSED_0x40F7, 161
release
end

MahoganyTown_Encuentro_Rocket_Texto_1:
.string "RECLUTA: ¡ADMIN.JEFE {PLAYER}!\n"
	.string "¡Qué oportuno!$"

MahoganyTown_Encuentro_Rocket_Texto_2:
.string "Ejem…\n"
	.string "Verá.\l"
	.string "Tal como GIOVANNI nos indicó,\l"
	.string "FREDO nos ha cedido la antigua\l"
	.string "BASE NINJA de CAOBA para nuestras\l"
	.string "investigaciones. Instalamos ya\l"
	.string "parte del material y adaptamos la\l"
	.string "base al estilo ROCKET.$"

MahoganyTown_Encuentro_Rocket_Texto_3:
.string "Pero, en la ausencia de FREDO, la\n"
	.string "base ha sido ocupada por ladrones,\l"
	.string "ninjas, y personajes de la peor\l"
	.string "calaña.$"

MahoganyTown_Encuentro_Rocket_Texto_4:
.string "Intentamos entrar por la fuerza,\n"
	.string "pero saben aprovechar bien la\l"
	.string "estructura de la base para\l"
	.string "tomarnos siempre por sorpresa y no\l"
	.string "dejarnos avanzar.$"

MahoganyTown_Encuentro_Rocket_Texto_5:
.string "Usted seguro que sabe poner orden\n"
	.string "en esta situación, acompáñeme, le\l"
	.string "mostraré dónde está la BASE NINJA.$"

MahoganyTown_Encuentro_Rocket_Texto_6:
.string "Es aqui. Tenemos rodeado el\n"
	.string "exterior, pero somos incapaces de\l"
	.string "adentrarnos en lo profundo de la\l"
	.string "base.$"

MahoganyTown_Encuentro_Rocket_Move_1:
walk_in_place_right
step_end

MahoganyTown_Encuentro_Rocket_Move_1.1:
walk_down
walk_in_place_right
step_end

MahoganyTown_Encuentro_Rocket_Move_1.2:
walk_down
walk_down
walk_in_place_right
step_end

MahoganyTown_Encuentro_Rocket_Move_2:
emote_exclamation_mark
face_left
step_end

MahoganyTown_Encuentro_Rocket_Move_3:
walk_down
walk_left
walk_left
walk_left
step_end

MahoganyTown_Encuentro_Rocket_Move_4:
walk_in_place_left
step_end

MahoganyTown_Encuentro_Rocket_Move_5:
walk_left
step_end

MahoganyTown_Encuentro_Rocket_Move_6:
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

Caoba_Barrera_Norte::
compare VAR_UNUSED_0x40F7, 163
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, Caoba_Barrera_Move_1
waitmovement 0x0
msgbox Caoba_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Caoba_Barrera_Move_2
waitmovement 0x0
release
end

Caoba_Barrera_Texto_1:
.string "(Debería ayudar antes al TEAM\n"
	.string "ROCKET a limpiar la BASE CAOBA)$"

Caoba_Barrera_Move_1:
walk_in_place_down
step_end

Caoba_Barrera_Move_2:
walk_slow_down
step_end
