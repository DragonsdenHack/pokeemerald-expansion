CeruleanCity_MapScripts::
	.byte 0

CeruleanCity1::
lock     
faceplayer     
msgbox CeruleanCity_Text1, MSGBOX_DEFAULT
release     
end

CeruleanCity_Text1:
.string "Esta es la CUEVA CELESTE.\n"
.string "Un POKÉMON terriblemente fuerte\l"
.string "reside aquí.\l"
.string "La entrada está prohibida para\l"
.string "toda la población de KANTO, sólo\l"
.string "la ÉLITE 4 tiene el permiso para\l"
.string "entrar aquí.\l"
.string "¡Imagínate el permiso que tienes\l"
.string "tú, ROCKET!\l"
.string "¡Más te vale guardar las\l"
.string "distancias!$"


CeruleanCity2::
end


CeruleanCity3::
end


CeruleanCity4::
lock     
faceplayer     
msgbox CeruleanCity_Text4, MSGBOX_DEFAULT
release     
end

CeruleanCity_Text4:
.string "¡Eres increíble, {PLAYER}!\n"
.string "¿Viste su cara cuando tumbaste\l"
.string "facilmente a sus supuestos POKÉMON\l"
.string "de élite con EXCAVAR?\l"
.string "Espero que nuestra recompensa haya\l"
.string "sido de tu agrado, yo me quedaré\l"
.string "un rato más por aquí. ¡Tranquilo,\l"
.string "nadie va a quitarme ya esta MT\l"
.string "EXCAVAR!$"


CeruleanCity5::
lock     
faceplayer     
msgbox CeruleanCity_Text5, MSGBOX_DEFAULT
release     
end

CeruleanCity_Text5:
.string "¿Eres un ROCKET?\n"
.string "Robar, defraudar, extorsionar y\l"
.string "mentir, ¡qué vida tan dura la\l"
.string "vuestra!$"


CeruleanCity6::
end


CeruleanCity7::
end


CeruleanCity8::
lock     
faceplayer     
msgbox CeruleanCity_Text8, MSGBOX_DEFAULT
release     
end

CeruleanCity_Text8:
.string "¿Quieres todos los POKÉMON y todo\n"
.string "el dinero del mundo para ti?\l"
.string "Interesante.$"


CeruleanCity9::
lock     
faceplayer     
msgbox CeruleanCity_Text9, MSGBOX_DEFAULT
release     
end

CeruleanCity_Text9:
.string "Quiero una bici roja nueva.\n"
.string "La mantendré en casa para que no\l"
.string "se ensucie.$"



CeruleanCityDocumento_100::
msgbox CeruleanCityDocumento_Text_100, MSGBOX_SIGN   
end

CeruleanCityDocumento_Text_100:
.string "¡Una bici nueva y brillante!$"



CeruleanCityDocumento_101::
msgbox CeruleanCityDocumento_Text_101, MSGBOX_SIGN   
end

CeruleanCityDocumento_Text_101:
.string "¡Cruza bosques y cuevas en un\n"
	.string "suspiro!\l"
	.string "TIENDA DE BICIS$"



CeruleanCityDocumento_102::
msgbox CeruleanCityDocumento_Text_102, MSGBOX_SIGN   
end

CeruleanCityDocumento_Text_102:
	.string "CONSEJOS DE ENTRENADOR\n"
	.string "Los POKÉMON pueden llevar objetos\l"
	.string "equipados.\l"
	.string "Algunos objetos pueden incluso\l"
	.string "usarse durante el combate.$"



CeruleanCityDocumento_103::
msgbox CeruleanCityDocumento_Text_103, MSGBOX_SIGN   
end

CeruleanCityDocumento_Text_103:
	.string "CIUDAD CELESTE\n"
	.string "Una Misteriosa Aurea Azul la\l"
	.string "rodea.$"



CeruleanCityDocumento_104::
msgbox CeruleanCityDocumento_Text_104, MSGBOX_SIGN   
end

CeruleanCityDocumento_Text_104:
	.string "LÍDER DE GIMNASIO DE CIUDAD\n"
	.string "CELESTE: MISTY\l"
	.string "¡La sirena distorsionada!$"

CeruleanCityIzq::     
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCityIzqMove1
waitmovement 0x0
msgbox CeruleanCity_Text_Izq, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCityIzqMove2
waitmovement 0x0
release     
end

CeruleanCity_Text_Izq:     
    .string "(ANDRA me está esperando en la\n"
	.string "GUARDERÍA de RUTA 5 para ver qué\l"
	.string "quiere PETREL, no puedo largarme\l"
	.string "ahora).$"


CeruleanCityIzqMove1:
walk_in_place_slow_left
step_end

CeruleanCityIzqMove2:
walk_left
step_end


CeruleanCity_Rocket_Excavar::
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_Rocket_Excavar_move1
applymovement 4, CeruleanCity_Rocket_Excavar_move2
waitmovement 0
playse SE_PIN
applymovement 4, CeruleanCity_Rocket_Excavar_move3
msgbox CeruleanCity_Rocket_Excavar_Text_1, MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
warp MAP_CERULEAN_CITY_HOUSE2, 5, 5
release
end



CeruleanCity_Rocket_Excavar_Text_1:
.string "¡Hey, ROCKET!\n"
	.string "¿Te gustaría formar parte de un buen\l"
	.string "negocio?\l"
	.string "Nos han encargado a mí y a otro\l"
	.string "colega una misión en CIUDAD\l"
	.string "CELESTE y pensamos que nos vendría\l"
	.string "bien algo de ayuda, ¿qué dices?\l"
	.string "...\l"
	.string "...\l"
	.string "¡Perfecto!\l"
	.string "¡Allá vamos!$"

CeruleanCity_Rocket_Excavar_move1:
walk_in_place_up
step_end

CeruleanCity_Rocket_Excavar_move2:
walk_slow_right
walk_slow_left
face_down
step_end

CeruleanCity_Rocket_Excavar_move3:
emote_exclamation_mark
walk_down
step_end
