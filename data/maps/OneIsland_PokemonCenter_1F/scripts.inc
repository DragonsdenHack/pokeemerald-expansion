OneIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_PokemonCenter_1F_OnTransition
	.byte 0

OneIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_ONE_ISLAND
	end

OneIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

OneIslandPokemonCenter_1::
end



OneIslandPokemonCenter_2::
lock     
faceplayer     
msgbox OneIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_2:
.string "En esta isla hay un volcán enorme.\p"
.string "Hace poco entró en erupción.\n"
.string "Ahora sería buen momento\l"
.string "para hacer escalada.$"



OneIslandPokemonCenter_3::
lock     
faceplayer     
msgbox OneIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_3:
.string "Ojalá pudiera intercambiar POKéMON\n"
.string "con mi chico, que vive muy lejos\l"
.string "de aquí…$"



OneIslandPokemonCenter_4::
lock     
faceplayer     
msgbox OneIsland_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_4:
.string "¡Eh, tú no eres de aquí!\n"
.string "¿De dónde vienes?\p"
.string "¿ISLA INTA?…\n"
.string "¡Eso está aquí al lado!$"



OneIslandPokemonCenter_5::
lock     
faceplayer     
msgbox OneIsland_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_5:
.string "La gente como tú no pinta nada\n"
.string "aquí, BILL me habló de vosotros\l"
.string "ROCKET, y del lastre que sois\l"
.string "para la región, más te vale no\l"
.string "permanecer en esta isla mucho\l"
.string "tiempo si no quieres problemas.$"



OneIslandPokemonCenter_6::
lock     
faceplayer     
msgbox OneIsland_PokemonCenter_Text_6, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_6:
.string "Mi maestro CELIO pagó muchos\n"
.string "millones de POKÉS en el mercado\l"
.string "negro para poder tener tanto el\l"
.string "RUBÍ como el ZAFIRO que necesitaba\l"
.string "para su gran proyecto.\l"
.string "Instalamos nuestra máquina aquí\l"
.string "precisamente por la supuesta\l"
.string "existencia de estos minerales en\l"
.string "ISLAS SETE, sin embargo, jamás\l"
.string "pudimos encontrarlos, y no nos\l"
.string "quedó más remedio que pedirle un\l"
.string "préstamo a BILL…$"



OneIslandPokemonCenter_7::
lock         
msgbox OneIsland_PokemonCenter_Text_7, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_7:
.string "¿Será cierta la leyenda…?$"



OneIslandPokemonCenter_8::
lock         
msgbox OneIsland_PokemonCenter_Text_8, MSGBOX_DEFAULT
release     
end

OneIsland_PokemonCenter_Text_8:
.string "No puedo esperar a ver qué esconde ese\n"
	.string "recóndito lugar…$"



OneIslandPokemonCenter_9::
lock         
applymovement 9, OneIslandPokemonCenter_9_Move_1
waitmovement 0x0
msgbox OneIsland_PokemonCenter_Text_9, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL
fadescreen 1
delay 20
removeobject 7
removeobject 8
removeobject 9
fadescreen 0
setvar VAR_ROUTE111_STATE, 4
release     
end

OneIslandPokemonCenter_9_Move_1:
walk_in_place_right
step_end

OneIsland_PokemonCenter_Text_9:
	.string "????: Todo está preparado. El resto de\n"
	.string "científicos y seguridad de DEVON nos\l"
	.string "acompañarán también. Recordad, no solo\l"
	.string "vamos en busca del gran tesoro. Las\l"
	.string "leyendas hablan de una variedad de\l"
	.string "POKÉMON sin igual en esa gruta\l"
	.string "submarina. Una suerte para nosotros\l"
	.string "que haya permanecido tan bien\l"
	.string "escondida entre las rocas del sur de\l"
	.string "PLAYA TESORO…$"


CuevaTesoro_Activador_Entrada::
compare VAR_ROUTE111_STATE, 3
goto_if_gt CuevaTesoro_Activador_Entrada_Pasa
release
end

CuevaTesoro_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox CuevaTesoro_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_CUEVA_TESORO1, 39, 20
release
end

CuevaTesoro_Activador_Entrada_Texto_1:
.string "... ...$"

CuevaTesoro_Activador_Entrada_Pasa_Text_YesNo:
.string "Hay una pequeña endidura entre las\n"
	.string "rocas, parece que se alarga varios\l"
	.string "metros. ¿Quieres cruzarla?$"

CuevaTesoro_Activador_Entrada_Pasa_Move_1:
emote_exclamation_mark
step_end

CuevaTesoro_Activador_Entrada_Pasa_No::
release
end
