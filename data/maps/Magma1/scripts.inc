Magma1_MapScripts::
	.byte 0

Magma1_1::
end

Magma1_Combate_Admin::
lock
faceplayer
msgbox Magma1_Combate_Admin_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Magma1_Combate_Admin_Move_1
waitmovement 0x0
delay 10
msgbox Magma1_Combate_Admin_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_4 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Magma1_Combate_Admin_Move_1.1
waitmovement 0x0
waitse
delay 10
msgbox Magma1_Combate_Admin_Texto_4.1 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MAGMAADMIN, Magma1_Combate_Admin_Texto_6
msgbox Magma1_Combate_Admin_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 20
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
msgbox Magma1_Combate_Admin_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox Magma1_Combate_Admin_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
fadescreen 1
delay 20
removeobject 1
fadescreen 0
release
end

Magma1_Combate_Admin_Move_1.2:
delay_8
face_up
delay_16
delay_8
face_down
delay_16
step_end

Magma1_Combate_Admin_Move_1.1:
walk_in_place_down
step_end

Magma1_Combate_Admin_Move_1:
walk_in_place_up
delay_16
face_player
step_end

Magma1_Combate_Admin_Move_2:
emote_exclamation_mark
step_end

Magma1_Combate_Admin_Texto_1:
.string "Así que has conseguido derrotar a\n"
	.string "nuestra ALTO RANGO…\p"
	.string "¿ADMINISTRADOR del TEAM ROCKET?\p"
	.string "Entonces no os habéis disuelto tal y\n"
	.string "como dicen. Pero no importa, alguien\l"
	.string "como tú no pinta nada aquí.$"

Magma1_Combate_Admin_Texto_2:
.string "Nuestro LÍDER MAGNO pasó años\n"
	.string "creando el mejor equipo del TIPO\l"
	.string "FUEGO y TIERRA posible, solo como\l"
	.string "preparación, para autoconsiderarse\l"
	.string "digno de hacer acto de presencia\l"
	.string "ante GROUDON.$"

Magma1_Combate_Admin_Texto_3:
.string "{PAUSE 5}…{PAUSE 5}$"

Magma1_Combate_Admin_Texto_4:
.string "Creo que aún no me has entendido, ROCKET.\n"
	.string "En tu región no existen POKÉMON de\l"
	.string "la talla de GROUDON, esas AVES no\l"
	.string "tienen ni su jerarquía, ni su fuerza\l"
	.string "bruta ni su poder global.$"

Magma1_Combate_Admin_Texto_4.1:
	.string "¡Una fuerza de la naturaleza en estado\n"
	.string "puro, que cuando despierte cambiará\l"
	.string "todo para siempre!$"

Magma1_Combate_Admin_Texto_5:
.string "Veo que te niegas a entrar en razón.\p"
	.string "En ese caso{PAUSE 15}…{PAUSE 15}\p"
	.string "¡Préparate para conocer el poder\n"
	.string "de los POKÉMON terrestres\p"
	.string "ADMINISTRADOR ROCKET!$"

Magma1_Combate_Admin_Texto_6:
.string "¡Pensaba que en el TEAM ROCKET\n"
	.string "érais todos débiles!$"

Magma1_Combate_Admin_Texto_7:
.string "Tú lo has buscado.\n"
	.string "Será MAGNO quién acabe contigo.$"

Magma1_Combate_Admin_Texto_8:
.string "¿Oyes eso?\p"
	.string "¡GROUDON está al caer!\p"
	.string "No tiene sentido seguir aquí.\p"
	.string "¡Debo volver a nuestra nave y preparar\n"
	.string "todo para nuestro regreso a HOENN!$"

Magma1_Combate_Admin_Texto_8.1:
	.string "Si aún te queda algo de cordura,\n"
	.string "deberías hacer lo mismo, antes de que\l"
	.string "la ira de GROUDON te explote en la cara.$"
