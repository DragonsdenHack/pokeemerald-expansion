RocketHideout_10F_MapScripts::
	.byte 0


RocketHideout_10F_Maquina_Teletransporte_2::
msgbox RocketHideout_10F_Maquina_Teletransporte_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_3F_Maquina_Teletransporte_No
delay 10
playse SE_M_CHARGE
delay 20
playse SE_M_TELEPORT
warpsilent MAP_ROCKET_HIDEOUT_JOHTO, 5, 28
release
end

RocketHideout_10F_Maquina_Teletransporte_YesNo:
.string "The machine is ready to be used, do you\n"
.string "want to teleport to JOHTO HQ?$"



RocketHideout_Johto_Maquina_Teletransporte_2::
msgbox RocketHideout_Johto_Maquina_Teletransporte_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_3F_Maquina_Teletransporte_No
delay 10
playse SE_M_CHARGE
delay 20
playse SE_M_TELEPORT
warpsilent MAP_ROCKET_HIDEOUT_10F, 3, 3
release
end

RocketHideout_Johto_Maquina_Teletransporte_YesNo:
.string "The machine is ready to be used, do you\n"
.string "want to teleport to KANTO HQ?$"



RocketHideout_10F_Primer_Cientifico::
lock
faceplayer
msgbox RocketHideout_10F_Primer_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_10F_Primer_Cientifico_Texto_1:
	.string "It was a horrific task to connect the\n"
	.string "JOHTO BASE with the KANTO one by\l"
	.string "teleportation, but we've made it.$"


RocketHideout_10F_Segundo_Cientifico::
lock
faceplayer
msgbox RocketHideout_10F_Segundo_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_10F_Segundo_Cientifico_Texto_1:
	.string "So, are you ready for a new great\n"
	.string "adventure?$"
