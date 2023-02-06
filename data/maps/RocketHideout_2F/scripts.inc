RocketHideout_2F_MapScripts::
	.byte 0

RocketHideout2F_1::
lock     
faceplayer     
msgbox RocketHideout2F_Text_1, MSGBOX_DEFAULT
release     
end

RocketHideout2F_Text_1:
.string "Si sirves a la justicia,\n"
.string "¡traicionas al TEAM ROCKET!$"



RocketHideout2F_2::
lock     
faceplayer     
msgbox RocketHideout2F_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideout2F_Text_2:
.string "La regla número 1 del negocio de\n"
.string "nuestro CASINO es: nunca consumas\l"
.string "lo que vendes, nuestros\l"
.string "científicos diseñaron las\l"
.string "tragaperras para que todas las\l"
.string "probabilidades estuvieran a favor\l"
.string "de nuestras ganancias.\l"
.string "¡La casa siempre gana no lo\l"
.string "olvides!$"



RocketHideout2F_3::
end



RocketHideout2F_4::
end



RocketHideout2F_5::
end

RocketHideout2F_Barrera::
compare VAR_UNUSED_0x40F7, 38
goto_if_gt RocketHideout2F_Barrera_2
delay 15
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout2F_Barrera_Move_1
waitmovement 0x0
delay 10
msgbox RocketHideout2F_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout2F_Barrera_Move_1
waitmovement 0x0
release
end

RocketHideout2F_Barrera_2::
release
end


RocketHideout2F_Barrera_Texto_1:
.string "(GIOVANNI en persona quiere verme,\n"
	.string "no puedo largarme sin siquiera\l"
	.string "saber qué hacer aquí)$"

RocketHideout2F_Barrera_Move_1:
walk_in_place_right
step_end

RocketHideout2F_Barrera_Move_2:
walk_down
walk_in_place_down
step_end
