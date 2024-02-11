GoldenrodCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodCity_OnTransition
	.byte 0

GoldenrodCity_OnTransition::
setflag FLAG_VISITED_GOLDENROD_CITY
end

GoldenrodCity1::
lock     
faceplayer     
msgbox GoldenrodCity_Text_1, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_1:
.string "Vamos a poner este GIMNASIO a la\n"
.string "moda de una vez por todas.$"



GoldenrodCity2::
lock     
faceplayer     
msgbox GoldenrodCity_Text_2, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_2:
.string "CLEFAIRY será la imagen del nuevo\n"
.string "GIMNASIO, es tan mono.$"



GoldenrodCity3::
lock     
faceplayer     
msgbox GoldenrodCity_Text_3, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_3:
.string "Esta iniciativa unirá KANTO y\n"
.string "JOHTO como nunca lo había hecho\l"
.string "antes.$"



GoldenrodCity4::
lock     
faceplayer     
msgbox GoldenrodCity_Text_4, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_4:
.string "Me dijeron que aquí aún quedaba\n"
.string "una LÍDER verdaderamente fuerte\l"
.string "que seguía aceptando combates,\l"
.string "pero parece que la ciudad no está\l"
.string "contenta con la imagen que da y\l"
.string "va a retirarse.$"



GoldenrodCity5::
lock     
faceplayer     
msgbox GoldenrodCity_Text_5, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_5:
.string "Dicen que AZAFRÁN y TRIGAL van a\n"
.string "acabar unidas por estas vías de\l"
.string "tren. Después de todas las\l"
.string "tensiones que ha habido me cuesta\l"
.string "creerlo, pero aquí están,\l"
.string "construyéndose.$"



GoldenrodCity6::
lock     
faceplayer     
msgbox GoldenrodCity_Text_6, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_6:
.string "Quiero entrar al CASINO, venden\n"
.string "unos POKÉMON increíbles, pero…\l"
.string "¡No me dejan entrar porque soy\l"
.string "demasiado pequeño!$"



GoldenrodCity7::
lock     
faceplayer     
msgbox GoldenrodCity_Text_7, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_7:
.string "No hay nada como regar tus\n"
.string "plantas en un caluroso día de\l"
.string "verano, pero no te confundas.\l"
.string "¡Si le echas agua a un SUDOWOODO se\l"
.string "enfadará y atacará!$"



GoldenrodCity8::
lock     
faceplayer     
msgbox GoldenrodCity_Text_8, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_8:
.string "La oferta de nuestro CENTRO\n"
.string "COMERCIAL no tiene igual en toda\l"
.string "la región, es lo que tiene\l"
.string "pertenecer a la clase alta.\l"
.string "¡Jojojo!$"



GoldenrodCity9::
end



GoldenrodCity10::
end



GoldenrodCity11::
lock     
faceplayer     
msgbox GoldenrodCity_Text_11, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_11:
.string "Esta ciudad se está comiendo todo\n"
.string "a su alrededor, pronto lo poco\l"
.string "verde que queda en ella se\l"
.string "convertirá también en asfalto.\l"
.string "¡Y yo no podré pescar aquí!$"



GoldenrodCity12::
end



GoldenrodCity13::
lock        
msgbox GoldenrodCity_Text_13, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_13:
.string "Verás, CLEFAIRY, cuando vuelva de\n"
	.string "GRANJA MU-MU podremos ser\l"
	.string "LÍDERES DE GIMNASIO. TRIGAL quiere\l"
	.string "un LÍDER guay y poderoso. Tú eres\l"
	.string "guay, pero necesitamos algo\l"
	.string "poderoso...$"



GoldenrodCity14::
end



GoldenrodCity15::
lock     
faceplayer     
msgbox GoldenrodCity_Text_15, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_15:
.string "La TORRE RADIO ha atraído a mucha\n"
.string "gente últimamente, dicen que es la\l"
.string "SILPH de JOHTO.$"



GoldenrodCity16::
lock     
faceplayer     
msgbox GoldenrodCity_Text_16, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_16:
.string "¡Esta ciudad ha cambiado tanto en\n"
.string "tan poco que ya no sé dónde está\l"
.string "nada!$"




GoldenrodCity17::
lock     
faceplayer     
msgbox GoldenrodCity_Text_17, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_17:
.string "En 3 años, hemos convertido a\n"
.string "CIUDAD TRIGAL en el centro\l"
.string "económico y de telecomunicaciones\l"
.string "de toda JOHTO.\l"
.string "¡Imagínate lo que podemos hacer en\l"
.string "otros 3!$"



GoldenrodCity18::
lock     
faceplayer     
msgbox GoldenrodCity_Text_18, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_18:
.string "Las obras de las vías de tren han\n"
.string "dividido a la ciudad en dos partes\l"
.string "de forma provisional. Para ir a la\l"
.string "otra cara deberás de tomar los\l"
.string "túneles subterráneos.$"


GoldenrodCity19::
lock     
faceplayer     
msgbox GoldenrodCity_Text_19, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_19:
.string "No deberías estar aquí.\n"
.string "¡Puede ser peligroso!$"



GoldenrodCity_EventScript_Obrero::
	trainerbattle_single TRAINER_LILA_AND_ROY_5, GoldenrodCity_Text_ObreroIntro, GoldenrodCity_Text_ObreroDefeated
	msgbox GoldenrodCity_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodCityDocumento_100::
msgbox GoldenrodCityDocumento_Text_100, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_100:
	.string "TORRE DE RADIO DE CIUDAD TRIGAL$"



GoldenrodCityDocumento_101::
msgbox GoldenrodCityDocumento_Text_101, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_101:
	.string "ENTRADA SUBTERRÁNEA NORTE$"



GoldenrodCityDocumento_102::
msgbox GoldenrodCityDocumento_Text_102, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_102:
	.string "ENTRADA SUBTERRÁNEA SUR$"



GoldenrodCityDocumento_103::
msgbox GoldenrodCityDocumento_Text_103, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_103:
	.string "CIUDAD TRIGAL\n"
	.string "La alegre ciudad de rico encanto.$"



GoldenrodCityDocumento_104::
msgbox GoldenrodCityDocumento_Text_104, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_104:
.string "RUTA 35 y PARQUE NACIONAL al norte$"



GoldenrodCityDocumento_105::
msgbox GoldenrodCityDocumento_Text_105, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_105:
.string "CASINO DE CIUDAD TRIGAL\n"
	.string "¡Tu zona de ocio!$"



GoldenrodCityDocumento_106::
msgbox GoldenrodCityDocumento_Text_106, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_106:
	.string "¡El mundo es un camino de bicis!\n"
	.string "TIENDA DE BICIS$"



GoldenrodCityDocumento_107::
msgbox GoldenrodCityDocumento_Text_107, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_107:
	.string "GIMNASIO de CIUDAD TRIGAL\n"
	.string "LÍDER: VALERIA\l"
	.string "¡La chica más fuerte y valiente de\l"
	.string "TRIGAL!$"



GoldenrodCityDocumento_108::
msgbox GoldenrodCityDocumento_Text_108, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_108:
	.string "FLORISTERÍA TRIGAL\n"
	.string "¡No encontrarás nuestras BAYAS en\l"
	.string "ninguna otra parte!$"
