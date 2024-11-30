Aqua2_MapScripts::
	.byte 0

Aqua2_1::
end	

Aqua2_Combate_Admin::
lock
faceplayer
msgbox Aqua2_Combate_Admin_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Magma1_Combate_Admin_Move_1
waitmovement 0x0
msgbox Aqua2_Combate_Admin_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Aqua1_Combate_Admin_Move_1.1
waitmovement 0x0
delay 10
msgbox Aqua2_Combate_Admin_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Magma1_Combate_Admin_Move_1.2
waitmovement 0x0
waitse
delay 10
msgbox Aqua2_Combate_Admin_Texto_2.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua2_Combate_Admin_Texto_2.3 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua2_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua2_Combate_Admin_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Magma1_Combate_Admin_Move_1.3
waitmovement 0x0
delay 10
msgbox Aqua2_Combate_Admin_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua2_Combate_Admin_Texto_4.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Magma1_Combate_Admin_Move_1.4
waitmovement 0x0
delay 10
msgbox Aqua2_Combate_Admin_Texto_4.3 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua2_Combate_Admin_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua2_Combate_Admin_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Magma1_Combate_Admin_Move_1.2
waitmovement 0x0
waitse
delay 10
msgbox Aqua2_Combate_Admin_Texto_5.2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AQUAADMIN, Aqua2_Combate_Admin_Texto_6
msgbox Aqua2_Combate_Admin_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua2_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 15
playse SE_BANG
waitse
delay 10
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma1_Combate_Admin_Move_2
applymovement 1, Magma1_Combate_Admin_Move_1.2
waitmovement 0x0
waitse
delay 15
msgbox Aqua2_Combate_Admin_Texto_8 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
fadescreen 1
delay 20
removeobject 1
fadescreen 0
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
clearflag FLAG_HOENN_90
clearflag FLAG_HOENN_91
clearflag FLAG_HOENN_92
clearflag FLAG_HOENN_93
clearflag FLAG_HOENN_94
clearflag FLAG_HOENN_95
clearflag FLAG_HOENN_96
clearflag FLAG_HOENN_97
clearflag FLAG_HOENN_98
clearflag FLAG_HOENN_99
setflag FLAG_HOENN_640
setflag FLAG_HOENN_641
setflag FLAG_HOENN_642
setflag FLAG_HOENN_643
setflag FLAG_HOENN_644
setflag FLAG_HOENN_645
setflag FLAG_HOENN_646
setflag FLAG_HOENN_647
setflag FLAG_HOENN_648
setflag FLAG_HOENN_649
release
end

Magma1_Combate_Admin_Move_1.3:
face_left
step_end

Magma1_Combate_Admin_Move_1.4:
face_down
step_end

Aqua1_Combate_Admin_Move_1.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

Aqua2_Combate_Admin_Texto_1:
.string "Vaya{PAUSE 5}…{PAUSE 5} no muchos están a la\n"
	.string "altura de SILVINA; parece que tu\l"
	.string "presencia aquí no es pura casualidad.\l"

Aqua2_Combate_Admin_Texto_1.1:
	.string "Pero llegados a este punto, lo que\n"
	.string "alguien como tú o como yo podamos hacer\l"
	.string "carece de importancia, en comparación\l"
	.string "con lo que está a punto de ocurrir\l"
	.string "tras esta sala.$"

Aqua2_Combate_Admin_Texto_2:
.string "No tienes la menor idea de\n"
	.string "quienes somos, ROCKET.\l"
	.string "A diferencia de esos falsos capitanes,\l"
	.string "como el del SS.ANNE o el CAP.BABOR,\l"
	.string "nosotros hemos navegado por los 7 mares,\l"
	.string "sin obedecer nada más que a nuestra\l"
	.string "voluntad y sensación insaciable de\l"
	.string "exploración.$"
	
Aqua2_Combate_Admin_Texto_2.1:
	.string "Hemos tenido el valor de perdernos para\n"
	.string "hallar destinos inalcanzables, y ello\l"
	.string "nos ha curtido a base de bien.$"

Aqua2_Combate_Admin_Texto_2.2:
	.string "¡Todos nuestros viajes, con un solo\n"
	.string "propósito final{PAUSE 15}…{PAUSE 15} hallar al rey,\l"
	.string "al origen del mar: KYOGRE!$"

Aqua2_Combate_Admin_Texto_2.3:
	.string "Nuestro LÍDER, AQUILES, es la persona\n"
	.string "ideal para despertarlo.\l"
	.string "¡Y sus POKÉMON marinos los únicos\l"
	.string "merecedores de presenciar su renacer!$"

Aqua2_Combate_Admin_Texto_3:
.string "{PAUSE 5}…{PAUSE 5}$"

Aqua2_Combate_Admin_Texto_4:
.string "Me parece que aún no eres\n"
	.string "consciente de lo que hay detrás\l"
	.string "de estas paredes, chico.$"

Aqua2_Combate_Admin_Texto_4.1:
	.string "Con mover una de sus aletas, KYOGRE\n"
	.string "es capaz de crear tsunamis que\l"
	.string "inundarían ciudades enteras.$"

Aqua2_Combate_Admin_Texto_4.2:
	.string "Si decidiera hacer uso de todo su\n"
	.string "poder, podría convertir todo el\l"
	.string "planeta en una gigante esfera azul,\l"
	.string "con solo agua en su superficie.$"

Aqua2_Combate_Admin_Texto_4.3:
	.string "Por fortuna, nosotros conocemos bien a\n"
	.string "KYOGRE, y solo lo usaremos en su justa\l"
	.string "medida, para que todo vuelva a su cauce.$"

Aqua2_Combate_Admin_Texto_5:
.string "Lo que acabo de contarte sigue sin\n"
	.string "convencerte, ¿no?$"

Aqua2_Combate_Admin_Texto_5.1:
	.string "Tú lo has querido.\n"
	.string "El deber es lo primero, y me obligas\l"
	.string "a hacer uso de la fuerza.$"

Aqua2_Combate_Admin_Texto_5.2:
	.string "¡Ahora verás a mi tripulación\n"
	.string "curtida en alta mar!$"

Aqua2_Combate_Admin_Texto_6:
.string "¡Mis fieles POKÉMON!\n"
	.string "¿En serio?$"

Aqua2_Combate_Admin_Texto_7:
.string "Así que seguirás adelante hasta\n"
	.string "las últimas consecuencias{PAUSE 15}…{PAUSE 15}\l"
	.string "Tú lo has querido, y tú escoges el\l"
	.string "curso de tu fatal destino.$"

Aqua2_Combate_Admin_Texto_8:
.string "¡Escucha!\n"
	.string "¡El renacer de KYOGRE ha comenzado!\l"
	.string "¡Debo disponer todo para nuestro\l"
	.string "regreso triunfal a HOENN!$"

