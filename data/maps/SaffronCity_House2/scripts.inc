SaffronCity_House2_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_House2_WarpDinamica
	.byte 0

SaffronCity_House2_WarpDinamica:
goto_if_ge VAR_UNUSED_0x40F7, 203, SaffronCity_House2_NeoSaffron
setdynamicwarp MAP_SAFFRON_CITY, 22, 15
end	

SaffronCity_House2_NeoSaffron::
setdynamicwarp MAP_NEO_SAFFRON_CITY, 26, 14
end
	




SaffronCityHouse2_1::
lock     
faceplayer     
msgbox SafariZone_House2_Text_1, MSGBOX_DEFAULT
release     
end

SafariZone_House2_Text_1:
.string "Gracias por escribir.\n"
.string "¡Espero verte pronto!\p"
.string "¡Oye!\n"
.string "¡No mires mi carta!$"



SaffronCityHouse2_2::
end



SaffronCityHouse2_3::
lock     
faceplayer     
msgbox SafariZone_House2_Text_3, MSGBOX_DEFAULT
release     
end

SafariZone_House2_Text_3:
.string "¡La COPIONA es muy mona!\n"
.string "¡Voy a darle un POKé MUÑECO!$"



SaffronCityHouse2_4::
end



SaffronCityHouse2Documento_100::
msgbox SaffronCityHouse2Documento_Text_100, MSGBOX_SIGN   
end

SaffronCityHouse2Documento_Text_100:
.string "Te di un Más PP como regalo.\n"
	.string "Úsalo para incrementar los PP de\l"
	.string "un movimiento, te aconsejo usarlo\l"
	.string "con movimientos potentes que\l"
	.string "tienen pocos PP.$"
