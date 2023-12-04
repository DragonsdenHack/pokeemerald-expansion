TwoIsland_Torre_P2_MapScripts::
	.byte 0

TwoIsland_Torre_P2_Cientifico::
lock
faceplayer
msgbox TwoIsland_Torre_P2_Cientifico_Texto_1 MSGBOX_DEFAULT
release
end

TwoIsland_Torre_P2_Cientifico_Texto_1:
	.string "Isn't it incredible? You would never\n"
	.string "have thought that a place like this\l"
	.string "would exist on an island like this,\l"
	.string "right?$"

TwoIsland_Torre_P2_Cientifico_2::
lock
faceplayer
msgbox TwoIsland_Torre_P2_Cientifico_2_Texto_1 MSGBOX_DEFAULT
release
end

TwoIsland_Torre_P2_Cientifico_2_Texto_1:
.string "Cuando todo el negocio esté montado,\n"
	.string "seremos la principal atracción de las\l"
	.string "islas. Todos vendrán aquí a gastar su\l"
	.string "dinero.$"



TwoIsland_Torre_P2_Trabajador::
lock
faceplayer
msgbox TwoIsland_Torre_P2_Trabajador_Texto_1 MSGBOX_DEFAULT
release
end

TwoIsland_Torre_P2_Trabajador_Texto_1:
.string "Estamos trayendo POKÉMON muy raros de\n"
	.string "otras regiones, todos quedarán\l"
	.string "impresionados y querrán tenerlos a\l"
	.string "cualquier precio.$"

TwoIsland_Torre_P2_EventScript_Biker::
	trainerbattle_single TRAINER_TRAINER_159, TwoIsland_Torre_P2_Text_BikerIntro, TwoIsland_Torre_P2_Text_BikerDefeated
	msgbox TwoIsland_Torre_P2_Text_BikerPostBattle, MSGBOX_AUTOCLOSE
	end

TwoIsland_Torre_P2_EventScript_Calvo::
	trainerbattle_single TRAINER_TRAINER_160, TwoIsland_Torre_P2_Text_CalvoIntro, TwoIsland_Torre_P2_Text_CalvoDefeated
	msgbox TwoIsland_Torre_P2_Text_CalvoPostBattle, MSGBOX_AUTOCLOSE
	end


