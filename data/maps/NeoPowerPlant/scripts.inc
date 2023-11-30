NeoPowerPlant_MapScripts::
	.byte 0

NeoPowerPlant_1::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_1, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_1:
.string "Una vez vi el MEGA AMPHAROS del dueño\n"
.string "del FARO OLIVO en acción. El único\l"
.string "POKÉMON que he visto superar sus\l"
.string "descargas eléctricas ha sido este\l"
.string "ZAPDOS-P.$"



NeoPowerPlant_2::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_2, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_2:
.string "La TORRE RADIO también se alimenta de\n"
.string "este generador, este lugar es ahora\l"
.string "uno de los ejes directores de KANTO.$"



NeoPowerPlant_3::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_3, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_3:
.string "El DIRECTOR de la CENTRAL te estará\n"
.string "eternamente agradecido. ¡No saques a\l"
.string "ese ZAPDOS cuando estés aquí! ¡Eh!$"




NeoPowerPlant_5::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_5, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_5:
.string "El nuevo generador que hemos instalado\n"
.string "es muy potente, no me extraña que ese\l"
.string "ZAPDOS se haya sentido atraído por él.$"



NeoPowerPlant_8::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_8, MSGBOX_NPC
release     
end

NeoPowerPlant_Text_8:
.string "Ese POKÉMON… parecía hecho para\n"
.string "generar descargas eléctricas, no me\l"
.string "gustaría recibir un RAYO suyo…$"



NeoPowerPlant_9::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_9, MSGBOX_NPC
release     
end

NeoPowerPlant_Text_9:
.string "Ayudé en la construcción de las VÍAS DE\n"
.string "TREN, ahora me aseguro de que al\l"
.string "MAGNETOTRÉN no le falte energía.$"


NeoPowerPlant_Obtencion_Xurkitree::
lock
faceplayer
checkmoncatch SPECIES_XURKITREE
goto_if_eq VAR_RESULT, FALSE, NeoPowerPlant_Obtencion_Xurkitree_2
msgbox NeoPowerPlant_Obtencion_Xurkitree_Texto_3 MSGBOX_AUTOCLOSE
release
end

NeoPowerPlant_Obtencion_Xurkitree_2::
msgbox NeoPowerPlant_Obtencion_Xurkitree_Texto_1 MSGBOX_AUTOCLOSE
 playfanfare MUS_OBTAIN_TMHM
msgbox NeoPowerPlant_Obtencion_Xurkitree_Texto_2 MSGBOX_DEFAULT
	givemon SPECIES_XURKITREE, 70, ITEM_ELECTRIC_GEM
	waitfanfare  
release
end


NeoPowerPlant_Obtencion_Xurkitree_Texto_1:
.string "{PLAYER}, no tengo palabras para\n"
	.string "expresar mi agradecimiento. A alguien\l"
	.string "como tú es difícil de sorprender con\l"
	.string "regalos, pero había un POKÉMON muy\l"
	.string "extraño adherido al generador. Nadie lo\l"
	.string "conocía, mira.$"

NeoPowerPlant_Obtencion_Xurkitree_Texto_2:
.string "¡OBTUVISTE UN XURKITREE AL NV.70!$"

NeoPowerPlant_Obtencion_Xurkitree_Texto_3:
.string "Nuestros mecánicos lo encontraron\n"
	.string "justo después de que derrotaras a\l"
	.string "ZAPDOS. Estaba totalmente debilitado,\l"
	.string "creemos que fue la energía de este\l"
	.string "POKÉMON, y no del generador, la que\l"
	.string "atrajo a ZAPDOS. Parece que ZAPDOS-P\l"
	.string "absorbió toda su electricidad, y por\l"
	.string "eso lo encontramos así.$"


NeoPowerPlant_Presidente::
applymovement OBJ_EVENT_ID_PLAYER, NeoPowerPlant_Presidente_Move_5
waitmovement 0x0
msgbox NeoPowerPlant_Presidente_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoPowerPlant_Presidente_Texto_3 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement 10, NeoPowerPlant_Presidente_Move_1
applymovement OBJ_EVENT_ID_PLAYER, NeoPowerPlant_Presidente_Move_1
waitmovement 0x0
delay 15
applymovement 10, NeoPowerPlant_Presidente_Move_2
applymovement OBJ_EVENT_ID_PLAYER, NeoPowerPlant_Presidente_Move_3
waitmovement 0x0
msgbox NeoPowerPlant_Presidente_Texto_2 MSGBOX_AUTOCLOSE
applymovement 10, NeoPowerPlant_Presidente_Move_6
waitmovement 0x0
msgbox NeoPowerPlant_Presidente_Texto_4 MSGBOX_AUTOCLOSE
applymovement 10, NeoPowerPlant_Presidente_Move_4
waitmovement 0x0
msgbox NeoPowerPlant_Presidente_Texto_5 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
setvar VAR_UNUSED_0x40F7, 204
release
end

NeoPowerPlant_Presidente_Move_6:
face_right
step_end

NeoPowerPlant_Presidente_Move_5:
walk_in_place_up
step_end

NeoPowerPlant_Presidente_Move_4:
walk_in_place_down
step_end

NeoPowerPlant_Presidente_Move_3:
face_up
step_end

NeoPowerPlant_Presidente_Move_2:
face_down
step_end

NeoPowerPlant_Presidente_Move_1:
emote_exclamation_mark
face_right
step_end

NeoPowerPlant_Presidente_Texto_1:
.string "{PLAYER}, ¿no? Soy el nuevo DIRECTOR\n"
	.string "de la CENTRAL ENERGÍA.$"

NeoPowerPlant_Presidente_Texto_2:
.string "Hemos tenido que evacuar toda la zona,\n"
	.string "su poder está totalmente\l"
	.string "descontrolado.$"

NeoPowerPlant_Presidente_Texto_3:
.string "Restauramos este lugar usando lo\n"
	.string "último en tecnología, gracias a ello\l"
	.string "hemos podido acelerar la unión entre\l"
	.string "KANTO y JOHTO. Pero parece que también\l"
	.string "ha atraído a...$"

NeoPowerPlant_Presidente_Texto_4:
.string "Si continúa así, producirá una\n"
	.string "sobrecarga en toda la central,\l"
	.string "afectando a KANTO y por extensión,\l"
	.string "JOHTO.$"

NeoPowerPlant_Presidente_Texto_5:
.string "No queda otra opción, debes derrotarlo\n"
	.string "y capturarlo. Confiamos en ti.$"


NeoPowerPlant_Combate_Zapdos::
lock
faceplayer
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
msgbox NeoPowerPlant_Combate_Zapdos_Texto_1 MSGBOX_DEFAULT
waitmoncry
trainerbattle_no_intro TRAINER_TRAINER_231, NeoPowerPlant_Combate_Zapdos_Texto_2
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_CHARGE
delay 60
playse SE_THUNDER2
delay 40
setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
setflag FLAG_HIDE_BATTLE_TOWER_OPPONENT
removeobject 7
msgbox NeoPowerPlant_Combate_Zapdos_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NeoPowerPlant_Combate_Zapdos_Move_1
waitmovement 0x0
msgbox NeoPowerPlant_Combate_Zapdos_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox NeoPowerPlant_Combate_Zapdos_Texto_5 MSGBOX_DEFAULT
giveegg SPECIES_ZAPDOS_PRIMAL
waitfanfare
delay 20
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox NeoPowerPlant_Combate_Zapdos_Texto_6 MSGBOX_AUTOCLOSE
msgbox NeoPowerPlant_Combate_Zapdos_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoPowerPlant_Combate_Zapdos_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoPowerPlant_Combate_Zapdos_Texto_9 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
removeobject 10
clearflag FLAG_RECEIVED_SHOAL_SHELL_3
fadescreen 1
delay 20
addobject 1
addobject 2
addobject 3
addobject 4
addobject 5
addobject 6
addobject 8
addobject 9
fadescreen 0
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
setvar VAR_UNUSED_0x40F7, 204
release
end

NeoPowerPlant_Combate_Zapdos_Move_1:
emote_exclamation_mark
step_end

NeoPowerPlant_Combate_Zapdos_Texto_1:
.string "¡Zap!$"

NeoPowerPlant_Combate_Zapdos_Texto_2:
.string "Zap...$"

NeoPowerPlant_Combate_Zapdos_Texto_3:
.string "(¡El ZAPDOS-P se consumió por\n"
	.string "completo!)$"

NeoPowerPlant_Combate_Zapdos_Texto_4:
	.string "(Hay un HUEVO POKÉMON entre las\n"
	.string "cenizas)$"

NeoPowerPlant_Combate_Zapdos_Texto_5:
.string "¡¡OBTUVISTE UN HUEVO MISTERIOSO!!$"

NeoPowerPlant_Combate_Zapdos_Texto_6:
.string "GIOVANNI: ¿{PLAYER}? Perfecto, ese\n"
	.string "ZAPDOS no nos causará más problemas.$"

NeoPowerPlant_Combate_Zapdos_Texto_7:
.string "Todo está listo para celebrar la II\n"
	.string "REUNIÓN DE TRIGAL, acude a TORRE\l"
	.string "RADIO a la mayor brevedad posibles.$"

NeoPowerPlant_Combate_Zapdos_Texto_8:
.string "... ...$"

NeoPowerPlant_Combate_Zapdos_Texto_9:
.string "Espero que estés preparado.$"

NeoPowerPlant_RayoCarga::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_814, NeoPowerPlant_RayoCarga_Despues
msgbox NeoPowerPlant_RayoCarga_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM97
msgbox NeoPowerPlant_RayoCarga_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_814
release     
end

NeoPowerPlant_RayoCarga_Despues::
msgbox NeoPowerPlant_RayoCarga_Texto_2, MSGBOX_NPC
release
end

NeoPowerPlant_RayoCarga_Texto_1:
.string "Aunque se ha renovado, esta CENTRAL\n"
	.string "es bastante antigua, debemos evitar\l"
	.string "cualquier sobrecarga del sistema.\l"
	.string "Toma esto.$"

NeoPowerPlant_RayoCarga_Texto_1.1:
.string "¡¡{PLAYER} obtuvo la MT70 RAYO\n"
	.string "CARGA de manos de mecánico!!$"

NeoPowerPlant_RayoCarga_Texto_2:
.string "Los POKÉMON TIPO ELÉCTRICO suelen ser\n"
	.string "rápidos y peligrosos, pero no suelen\l"
	.string "tener ninguna forma de elevar su\l"
	.string "ATAQUE ESPECIAL.\l"
	.string "Con RAYO CARGA podrán hacerlo al\l"
	.string "tiempo que siguen causando daño.$"






