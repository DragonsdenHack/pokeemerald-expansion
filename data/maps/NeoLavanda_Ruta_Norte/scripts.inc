NeoLavanda_Ruta_Norte_MapScripts::
	.byte 0


NeoLavanda_Ruta_Norte_EventScript_Jugador::
	trainerbattle_single TRAINER_TRAINER_171, NeoLavanda_Ruta_Norte_Text_JugadorIntro, NeoLavanda_Ruta_Norte_Text_JugadorDefeated
	msgbox NeoLavanda_Ruta_Norte_Text_JugadorPostBattle, MSGBOX_AUTOCLOSE
	end

NeoLavanda_Ruta_Norte_EventScript_Montanero::
	trainerbattle_single TRAINER_TRAINER_173, NeoLavanda_Ruta_Norte_Text_MontaneroIntro, NeoLavanda_Ruta_Norte_Text_MontaneroDefeated
	msgbox NeoLavanda_Ruta_Norte_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end


NeoLavanda_Ruta_Norte_Fuji::
lock
faceplayer
msgbox NeoLavanda_Ruta_Norte_Fuji_Texto_1 MSGBOX_AUTOCLOSE
applymovement 3, Norte_Fuji_Move_1
waitmovement 0x0
msgbox NeoLavanda_Ruta_Norte_Fuji_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, Norte_Fuji_Move_2
waitmovement 0x0
msgbox NeoLavanda_Ruta_Norte_Fuji_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoLavanda_Ruta_Norte_Fuji_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, Norte_Fuji_Move_1
waitmovement 0x0
msgbox NeoLavanda_Ruta_Norte_Fuji_Texto_5 MSGBOX_AUTOCLOSE
applymovement 3, Norte_Fuji_Move_2
waitmovement 0x0
msgbox NeoLavanda_Ruta_Norte_Fuji_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, Norte_Fuji_Move_3
waitmovement 0x0
playse SE_EXIT
setflag FLAG_UNKNOWN_0x363
clearflag FLAG_HIDE_ROUTE_101_BIRCH
setvar VAR_ROUTE120_STATE, 4
removeobject 3
release
end

Norte_Fuji_Move_3:
walk_up
step_end

Norte_Fuji_Move_2:
delay_16
face_player
step_end

Norte_Fuji_Move_1:
delay_16
face_up
delay_16
step_end

NeoLavanda_Ruta_Norte_Fuji_Texto_1:
	.string "El TÚNEL ROCA se ha vuelto ahora un\n"
	.string "lugar más hostil, {PLAYER}.$"

NeoLavanda_Ruta_Norte_Fuji_Texto_2:
	.string "Desde que se llenó de los CUBONE y\n"
	.string "MAROWAK de TORRE POKÉMON, son pocos\l"
	.string "los aventureros que se atreven a pasar\l"
	.string "por aquí.$"

NeoLavanda_Ruta_Norte_Fuji_Texto_3:
	.string "Los POKÉMON se han adueñado del lugar.\n"
	.string "Era de esperar… que el derrumbe de\l"
	.string "TORRE POKÉMON no tuviera ningún\l"
	.string "impacto en el equilibrio de KANTO.$"

NeoLavanda_Ruta_Norte_Fuji_Texto_4:
	.string "Por suerte para mí, mantengo un\n"
	.string "estrecho vínculo con mi MAROWAK.$"

NeoLavanda_Ruta_Norte_Fuji_Texto_5:
	.string "Creo que él podrá guiarme hasta el\n"
	.string "fondo de esto, por tu parte…$"

NeoLavanda_Ruta_Norte_Fuji_Texto_6:
	.string "Eres el mejor ENTRENADOR que conozco,\n"
	.string "tus POKÉMON serán más que suficiente\l"
	.string "para abrirte paso, ¿verdad?$"
