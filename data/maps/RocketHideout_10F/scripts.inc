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
.string "La máquina está lista para ser\n"
	.string "usada, ¿quieres teletransportarte\l"
	.string "a la BASE de JOHTO?$"



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
.string "La máquina está lista para ser\n"
	.string "usada, ¿quieres teletransportarte\l"
	.string "a la BASE de KANTO?$"
	