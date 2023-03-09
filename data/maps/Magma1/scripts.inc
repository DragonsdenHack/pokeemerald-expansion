Magma1_MapScripts::
	.byte 0

Magma1_1::
end

Magma1_Combate_Admin::
lock
faceplayer
msgbox Magma1_Combate_Admin_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Magma1_Combate_Admin_Move_1
waitmovement 0x0
msgbox Magma1_Combate_Admin_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_4 MSGBOX_AUTOCLOSE
msgbox Magma1_Combate_Admin_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MAGMAADMIN, Magma1_Combate_Admin_Texto_6
msgbox Magma1_Combate_Admin_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma1_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_BANG
waitse
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma1_Combate_Admin_Move_2
waitmovement 0x0
delay 15
msgbox Magma1_Combate_Admin_Texto_8 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
fadescreen 1
delay 20
removeobject 1
fadescreen 0
release
end

Magma1_Combate_Admin_Move_1:
walk_in_place_up
face_player
step_end

Magma1_Combate_Admin_Move_2:
emote_exclamation_mark
step_end

Magma1_Combate_Admin_Texto_1:
.string "Así que has conseguido derrotar a\n"
	.string "nuestro ALTO RANGO...\l"
	.string "¿ADMINISTRADOR del TEAM\l"
	.string "ROCKET dices?\l"
	.string "Entonces no os habéis disuelto tal\l"
	.string "y como dicen, sea como sea,\l"
	.string "alguien como tú no pinta nada\l"
	.string "aquí.$"

Magma1_Combate_Admin_Texto_2:
.string "Nuestro LÍDER MAGNO pasó años\n"
	.string "creando el mejor equipo de POKÉMON\l"
	.string "FUEGO y TIERRA posible, únicamente\l"
	.string "como preparación para\l"
	.string "autoconsiderarse merecedor de\l"
	.string "hacer acto de presencia ante\l"
	.string "GROUDON, el mejor POKÉMON del tipo\l"
	.string "TIERRA que ha habido jamás, cosa\l"
	.string "que también le llevó años el\l"
	.string "encontrar esta ubicación.$"

Magma1_Combate_Admin_Texto_3:
.string "...$"

Magma1_Combate_Admin_Texto_4:
.string "Creo que todavía no me has\n"
	.string "entendido ROCKET, en tu región no\l"
	.string "existen POKÉMON de la talla de\l"
	.string "GROUDON, esas AVES LEGENDARIAS no\l"
	.string "tienen ni por asomo su jerarquía y\l"
	.string "fuerza bruta, es una fuerza de la\l"
	.string "naturaleza en estado puro que\l"
	.string "cuando despierte cambiará todo\l"
	.string "para siempre.$"

Magma1_Combate_Admin_Texto_5:
.string "Veo que te niegas a entrar en\n"
	.string "razón, si así lo quieres, tendrás\l"
	.string "que derrotarme antes, y para\l"
	.string "entonces el despertar de GROUDON\l"
	.string "será inevitable.\l"
	.string "¡Préparate para conocer el poder\l"
	.string "de los POKÉMON terrestres\l"
	.string "ADMINISTRADOR ROCKET!$"

Magma1_Combate_Admin_Texto_6:
.string "¡Pensaba que en el TEAM ROCKET\n"
	.string "érais todos débiles!$"

Magma1_Combate_Admin_Texto_7:
.string "Muy bien, si así lo quieres,\n"
	.string "nuestro LÍDER acabará contigo.$"

Magma1_Combate_Admin_Texto_8:
.string "¿Oyes eso?\n"
	.string "¡GROUDON está al caer!\l"
	.string "No tiene sentido seguir aquí, debo\l"
	.string "volver a nuestra nave y preparar\l"
	.string "todo para nuestro regreso a HOENN,\l"
	.string "si aún te queda algo de cordura,\l"
	.string "tú deberías de hacer lo mismo\l"
	.string "antes de que GROUDON decida\l"
	.string "desatar toda su furia contenida\l"
	.string "por miles de años en el primer\l"
	.string "pobre diablo que se encuentre\l"
	.string "alrededor, tal vez cuando te des\l"
	.string "cuenta del error que supone jugar\l"
	.string "con POKÉMON ANCESTRALES y\l"
	.string "MITOLÓGICOS que formaron parte de\l"
	.string "la misma creación sea demasiado\l"
	.string "tarde.$"
