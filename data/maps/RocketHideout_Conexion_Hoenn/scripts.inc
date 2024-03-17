RocketHideout_Conexion_Hoenn_MapScripts::
	.byte 0

RocketHideout_Conexion_Hoenn_Maquina_Teletransporte_2::
msgbox RocketHideout_Conexion_Hoenn_Maquina_Teletransporte_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_3F_Maquina_Teletransporte_No
delay 10
playse SE_M_CHARGE
delay 20
playse SE_M_TELEPORT
warpsilent MAP_BASE_ROCKET_HOENN, 29, 34
release
end

RocketHideout_Conexion_Hoenn_Maquina_Teletransporte_YesNo:
	.string "The machine is ready to be used. Do you\n"
	.string "want to teleport to the HOENN BASE?$"



RocketHideout_Hoenn_Maquina_Teletransporte_2::
msgbox RocketHideout_Johto_Maquina_Teletransporte_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_3F_Maquina_Teletransporte_No
delay 10
playse SE_M_CHARGE
delay 20
playse SE_M_TELEPORT
warpsilent MAP_ROCKET_HIDEOUT_CONEXION_HOENN, 7, 3
release
end

RocketHideout_Conexion_Hoenn_Primer_Cientifico::
lock
faceplayer
msgbox RocketHideout_Conexion_Hoenn_Primer_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_Conexion_Hoenn_Primer_Cientifico_Texto_1:
	.string "Permanent circumstances have little\n"
	.string "effect on individual well-being.$"





RocketHideout_Conexion_Hoenn_Segundo_Cientifico::
lock
faceplayer
msgbox RocketHideout_Conexion_Hoenn_Segundo_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_Conexion_Hoenn_Segundo_Cientifico_Texto_1:
	.string "There are secrets in our world that only\n"
	.string "practice can reveal, and that no\l"
	.string "opinion or analysis will ever fully\l"
	.string "grasp.$"



RocketHideout_Conexion_Hoenn_Tercer_Cientifico::
lock
faceplayer
msgbox RocketHideout_Conexion_Hoenn_Tercer_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_Conexion_Hoenn_Tercer_Cientifico_Texto_1:
	.string "Despite our natural inclination to rest,\n"
	.string "inactivity can destroy us.$"
