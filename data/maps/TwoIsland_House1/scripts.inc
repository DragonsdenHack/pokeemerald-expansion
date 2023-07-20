TwoIsland_House1_MapScripts::
	.byte 0

TwoIslandHouse1_1::
end

TwoIslandHouse1_Calvo::
lock
faceplayer
msgbox TwoIslandHouse1_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x404E, 2
goto_if_gt TwoIslandHouse1_Calvo_2
release
end

TwoIslandHouse1_Calvo_2::
delay 15
msgbox TwoIslandHouse1_Texto_2 MSGBOX_AUTOCLOSE
delay 15
playse MUS_RG_ENCOUNTER_BOY
msgbox TwoIslandHouse1_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_156, TwoIslandHouse1_Texto_4
applymovement 4, TwoIslandHouse1_Calvo_2_Move_1
waitmovement 0x0
msgbox TwoIslandHouse1_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, TwoIslandHouse1_Calvo_2_Move_2
waitmovement 0x0
playse SE_EXIT
removeobject 4
setflag FLAG_NUEVA_824
release
end

TwoIslandHouse1_Calvo_2_Move_2:
face_up
step_end

TwoIslandHouse1_Calvo_2_Move_1:
lock_facing_direction
walk_up
unlock_facing_direction
step_end

TwoIslandHouse1_Texto_1:
.string "¿Y a tí qué te pasa? ¿No ves que\n"
	.string "estamos en obras? ¡Vuelve cuando\l"
	.string "hayamos abierto oficialmente!$"

TwoIslandHouse1_Texto_2:
.string "… …$"

TwoIslandHouse1_Texto_3:
.string "¿Entrar aquí por la fuerza? ¡Vas a ver\n"
	.string "cómo te echo a patadas de aquí!$"

TwoIslandHouse1_Texto_4:
.string "Espera, ¿qué?$"

TwoIslandHouse1_Texto_5:
.string "¿Quién eres tú? Debo avisar al JEFE, no\n"
	.string "sabes dónde te metes. Si fuera tú,\l"
	.string "cogía el primer SURCAMAR con destino a\l"
	.string "CARMÍN cuanto antes.$"

TwoIslandHouse_Primer_Motero::
lock
faceplayer
msgbox TwoIslandHouse_Primer_Motero_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIslandHouse_Primer_Motero_Texto_1:
.string "¡Jah!\n"
	.string "¡Mira cómo rayo el suelo con mi moto!\l"
	.string "¡Qué más da, si vamos a echarlo abajo\l"
	.string "de todos modos!$"

TwoIslandHouse_Segundo_Motero::
lock
faceplayer
msgbox TwoIslandHouse_Segundo_Motero_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIslandHouse_Segundo_Motero_Texto_1:
.string "Esto va a ser la bomba, por fin\n"
	.string "tendremos un lugar decente en el que\l"
	.string "pasar el rato dentro de estas\l"
	.string "insípidas islas.$"

TwoIslandHouse_Tercer_Motero::
lock
faceplayer
msgbox TwoIslandHouse_Tercer_Motero_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIslandHouse_Tercer_Motero_Texto_1:
.string "¿Qué estás mirando?\n"
	.string "¡Largo de aquí chaval!$"

TwoIslandHouse_Cuarto_Motero::
lock
faceplayer
msgbox TwoIslandHouse_Cuarto_Motero_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIslandHouse_Cuarto_Motero_Texto_1:
.string "A mí déjame en paz, solo me encargo de\n"
	.string "mover la mercancía.$"

TwoIslandHouse1_Domador::
lock
faceplayer
msgbox TwoIslandHouse1_Domador_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIslandHouse1_Domador_Texto_1:
.string "¡No puedo creerlo! ¡Le diste una paliza\n"
	.string "a todos, eres increíble!$"

TwoIslandHouse1_PadrePedrita::
lock
faceplayer
compare VAR_UNUSED_0x404E, 4
goto_if_gt TwoIslandHouse1_PadrePedrita_2
msgbox TwoIslandHouse1_PadrePedrita_Texto_1 MSGBOX_AUTOCLOSE
msgbox TwoIslandHouse1_PadrePedrita_Texto_2 MSGBOX_AUTOCLOSE
msgbox TwoIslandHouse1_PadrePedrita_Texto_3 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox TwoIslandHouse1_PadrePedrita_Texto_4 MSGBOX_DEFAULT
givemon SPECIES_CRANIDOS, 25, ITEM_NONE
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox TwoIslandHouse1_PadrePedrita_Texto_5 MSGBOX_DEFAULT
givemon SPECIES_SKORUPI, 35, ITEM_NONE
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox TwoIslandHouse1_PadrePedrita_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_PIPLUP, 15, ITEM_NONE
waitfanfare
setvar VAR_UNUSED_0x404E, 5
release
end

TwoIslandHouse1_PadrePedrita_2::
msgbox TwoIslandHouse1_PadrePedrita_Texto_7 MSGBOX_AUTOCLOSE
release
end


TwoIslandHouse1_PadrePedrita_Texto_1:
.string "Has salvado nuestro negocio, no solo\n"
	.string "nuestro negocio, también a esta isla de\l"
	.string "perder la paz y tranquilidad que le\l"
	.string "caracteriza.$"

TwoIslandHouse1_PadrePedrita_Texto_2:
.string "Esos hombres querían convertir este\n"
	.string "lugar en un centro turístico para\l"
	.string "llenarse los bolsillos. Se fueron con\l"
	.string "tanta prisa que olvidaron varios de los\l"
	.string "POKÉMON que querían vender como\l"
	.string "premios.$"

TwoIslandHouse1_PadrePedrita_Texto_3:
.string "Creo que contigo estarán mejor, toma.$"

TwoIslandHouse1_PadrePedrita_Texto_4:
.string "¡¡OBTUVISTE UN CRANIDOS AL NV.25!!$"

TwoIslandHouse1_PadrePedrita_Texto_5:
.string "¡¡OBTUVISTE UN SKORUPI AL NV.35!!$"

TwoIslandHouse1_PadrePedrita_Texto_6:
.string "¡¡OBTUVISTE UN PIPLUP AL NV.15!!$"

TwoIslandHouse1_PadrePedrita_Texto_7:
.string "Prometo trabajar como nunca para hacer\n"
	.string "de este lugar lo que siempre debió ser:\l"
	.string "¡el lugar de atracción perfecto para\l"
	.string "niños de 10 años!$"
	
