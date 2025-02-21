TwoIsland_Secundario_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, TwoIsland_Secundario_OnResume
	.byte 0
	
TwoIsland_Secundario_OnResume:
	removeobject 8, MAP_TWO_ISLAND
	hideobjectat 8, MAP_TWO_ISLAND
	end