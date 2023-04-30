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
.string "La máquina está lista para ser\n"
	.string "usada, ¿quieres teletransportarte\l"
	.string "a la BASE de HOENN?$"



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
.string "Las circunstancias permanentes tienen\n"
	.string "poco efecto en el bienestar del\l"
	.string "individuo.$"





RocketHideout_Conexion_Hoenn_Segundo_Cientifico::
lock
faceplayer
msgbox RocketHideout_Conexion_Hoenn_Segundo_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_Conexion_Hoenn_Segundo_Cientifico_Texto_1:
.string "Hay secretos en nuestro mundo que solo\n"
	.string "la práctica puede revelar, y que\l"
	.string "ninguna opinión ni análisis llegará\l"
	.string "jamás a captar por completo.$"



RocketHideout_Conexion_Hoenn_Tercer_Cientifico::
lock
faceplayer
msgbox RocketHideout_Conexion_Hoenn_Tercer_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_Conexion_Hoenn_Tercer_Cientifico_Texto_1:
.string "A pesar de que nuestra tendencia\n"
	.string "natural es hacia el descanso, la\l"
	.string "inactividad puede destruirnos.$"
