RocketHideout_1F_MapScripts::
	.byte 0

RocketHideout1F_1::
lock     
faceplayer     
msgbox RocketHideout1F_Text_1, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_1:
.string "¿Y tú?\n"
.string "¿Qué fue lo que te llevó a\l"
.string "enrolarte a nuestras filas?\l"
.string "…\l"
.string "…\l"
.string "Ya veo.$"



RocketHideout1F_2::
lock     
faceplayer     
msgbox RocketHideout1F_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_2:
.string "No debes preocuparte por el\n"
.string "descubrimiento de esta BASE, la\l"
.string "gente ahí fuera está tan ciega que\l"
.string "no sería capaz de ver un ZAPDOS\l"
.string "usando TRUENO enfrente de sus\l"
.string "narices.$"



RocketHideout1F_3::
lock     
faceplayer     
msgbox RocketHideout1F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_3:
.string "El CASINO que tenemos justo encima\n"
.string "es nuestra principal fuente de\l"
.string "ingresos, y lo mejor de todo es\l"
.string "que nos basamos en el pésimo\l"
.string "criterio de la gente para jugar a\l"
.string "un juego en el que de por sí saben\l"
.string "que estadísticamente saldrán\l"
.string "perdiendo.$"



RocketHideout1F_4::
end



RocketHideout1F_5::
lock     
faceplayer     
msgbox RocketHideout1F_Text_5, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_5:
.string "¡HAIL GIOVANNI!\n"
.string "¡Por siempre!$"



RocketHideout1F_6::
lock     
faceplayer     
msgbox RocketHideout1F_Text_6, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_6:
.string "Solamente enseñamos a nuestros\n"
.string "enemigos lo que queremos que vean,\l"
.string "grábate esto a fuego, joven ROCKET,\l"
.string "es la clave para triunfar.$"



RocketHideout1F_7::
lock     
faceplayer     
msgbox RocketHideout1F_Text_7, MSGBOX_DEFAULT
release     
end

RocketHideout1F_Text_7:
.string "Así que ISLA INTA eh.\n"
.string "¿Hay POKÉMON raros por esos\l"
.string "lugares o qué?$"

RocketHideout1F_Barrera::
compare VAR_UNUSED_0x40F7, 38
goto_if_gt RocketHideout1F_Barrera_2
delay 5
playse SE_PIN
applymovement 5, RocketHideout1F_Barrera_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout1F_Barrera_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout1F_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout1F_Barrera_Move_3
waitmovement 0x0
release
end

RocketHideout1F_Barrera_2::
release
end


RocketHideout1F_Barrera_Texto_1:
.string "Tengo entendido que nuestro LÍDER\n"
	.string "quería verte, ¿no querrás empezar\l"
	.string "aquí desobedeciendo una orden\l"
	.string "directa?$"

RocketHideout1F_Barrera_Move_1:
face_up
step_end

RocketHideout1F_Barrera_Move_2:
face_down
step_end

RocketHideout1F_Barrera_Move_3:
walk_slow_right
step_end
