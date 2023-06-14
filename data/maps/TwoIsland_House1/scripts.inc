TwoIsland_House1_MapScripts::
	.byte 0

TwoIslandHouse1_1::
end

TwoIslandHouse1_Calvo::
lock
faceplayer
msgbox TwoIslandHouse1_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x404E, 1
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
walk_down
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
	
