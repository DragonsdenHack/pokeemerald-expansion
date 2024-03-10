TwoIsland_Torre_P1_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, TwoIsland_Torre_P1_OnResume
	.byte 0

TwoIsland_Torre_P1_OnResume:
	call TwoIsland_Torre_P1_SetupEscapeWarp
	end

TwoIsland_Torre_P1_SetupEscapeWarp::
	setescapewarp MAP_TWO_ISLAND_SECUNDARIO, 7, 7
	return

TwoIsland_Torre_P1_Primer_Motero::
lock
faceplayer
msgbox TwoIsland_Torre_P1_Primer_Motero_Texto_1 MSGBOX_NPC
release
end

TwoIsland_Torre_P1_Primer_Motero_Texto_1:
.string "Vamos a convertir esta isla en el centro\n"
	.string "de Sevii. ¿De qué se quejan tanto?$"

TwoIsland_Torre_P1_Segundo_Motero::
lock
faceplayer
msgbox TwoIsland_Torre_P1_Segundo_Motero_Texto_1 MSGBOX_DEFAULT
release
end

TwoIsland_Torre_P1_Segundo_Motero_Texto_1:
.string "Estas cosas no son lo mío…$"

TwoIsland_Torre_P1_Trabajador::
lock
faceplayer
msgbox TwoIsland_Torre_P1_Trabajador_Texto_1 MSGBOX_DEFAULT
release
end

TwoIsland_Torre_P1_Trabajador_Texto_1:
.string "¿Quién eres tú?\n"
	.string "Mientras me dejes trabajar en paz no\l"
	.string "te haré nada, ya se encargarán otros\l"
	.string "de ti.$"

TwoIsland_Torre_P1_Cientifico::
lock
faceplayer
msgbox TwoIsland_Torre_P1_Cientifico_Texto_1 MSGBOX_DEFAULT
release
end

TwoIsland_Torre_P1_Cientifico_Texto_1:
.string "Es una suerte que en estas islas solo\n"
	.string "existan POKÉMON de KANTO y JOHTO.\l"
	.string "Vamos a ganar una fortuna trayendo\l"
	.string "POKÉMON de una región lejana.$"
