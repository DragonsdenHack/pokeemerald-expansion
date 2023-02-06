CeladonCity_MapScripts::
	.byte 0

CeladonCity1::
end


CeladonCity2::
end


CeladonCity3::
lock     
faceplayer     
msgbox CeladonCity_Text3, MSGBOX_DEFAULT
release     
end

CeladonCity_Text3:
.string "Este es mi fiel compañero,\n"
.string "POLIWRATH.\l"
.string "Evolucionó de POLIWHIRL cuando usé\l"
.string "una PIEDRA AGUA.$"


CeladonCity4::
lock     
faceplayer     
msgbox CeladonCity_Text4, MSGBOX_DEFAULT
release     
end

CeladonCity_Text4:
.string "¡Destruiremos a todo el que ose\n"
.string "interponerse en nuestro camino!$"


CeladonCity5::
lock     
faceplayer     
msgbox CeladonCity_Text5, MSGBOX_DEFAULT
release     
end

CeladonCity_Text5:
.string "Ejem…\n" 
.string "¿No habrás sido tú el gracioso que\l"
.string "nos ha robado un ejemplar de SCOPE\l"
.string "SILPH, verdad?$"


CeladonCity6::
end


CeladonCity7::
lock     
faceplayer     
msgbox CeladonCity_Text7, MSGBOX_DEFAULT
release     
end

CeladonCity_Text7:
.string "¿Qué hay de nuevo camarada?\n"
.string "¿Mucho ajetreo con esas misiones?$"


CeladonCity8::
lock     
faceplayer     
msgbox CeladonCity_Text8, MSGBOX_DEFAULT
release     
end

CeladonCity_Text8:
.string "¡Ayyy! ¡Lo he perdido todo\n"
.string "en las tragaperras!\p"
.string "¡Debería haber cambiado todas\n"
.string "mis fichas por premios!$"


CeladonCity9::
end


CeladonCity10::
lock     
faceplayer     
msgbox CeladonCity_Text10, MSGBOX_DEFAULT
release     
end

CeladonCity_Text10:
.string "¡Aaaagh, ayyyy...!\n"
.string "¡Me he achicharrado la lengua!\p"
.string "La ancianita tan agradable que hay\n"
.string "en la MANSIÓN, me ha dado un TÉ.\p"
.string "¡Pero está hirviendo!\n"
.string "Voy a esperar a ver si se enfría...$"


CeladonCity11::
end


CeladonCity12::
end


CeladonCity13::
lock     
faceplayer     
msgbox CeladonCity_Text13, MSGBOX_DEFAULT
release     
end

CeladonCity_Text13:
.string "Conseguí a mi KOFFING en ISLA\n"
.string "CANELA.\l"
.string "Normalmente es muy bueno, pero\l"
.string "suelta veneno cuando se enfada.$"


CeladonCity14::
lock     
faceplayer     
msgbox CeladonCity_Text14, MSGBOX_DEFAULT
release     
end

CeladonCity_Text14:
.string "Nadie os quiere aquí ROCKETS.\n"
.string "¡Estáis destruyendo con vuestro\l"
.string "estúpido CASINO todos nuestros\l"
.string "intentos por mantener limpia esta\l"
.string "ciudad!$"



CeladonCityDocumento_100::
msgbox CeladonCityDocumento_Text_100, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_100:
.string "GIMNASIO DE CIUDAD AZULONA\n"
	.string "LÍDER: ERIKA\l"
	.string "¡La princesa de la naturaleza!$"



CeladonCityDocumento_101::
msgbox CeladonCityDocumento_Text_101, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_101:
	.string "¡Todo lo que necesitas está en\n"
	.string "el CENTRO COMERCIAL AZULONA!$"



CeladonCityDocumento_102::
msgbox CeladonCityDocumento_Text_102, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_102:
	.string "CIUDAD AZULONA\n"
	.string "El arco iris de los sueños.$"



CeladonCityDocumento_103::
msgbox CeladonCityDocumento_Text_103, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_103:
	.string "MANSIÓN AZULONA$"



CeladonCityDocumento_104::
msgbox CeladonCityDocumento_Text_104, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_104:
	.string "PISTAS ENTRENADOR\p"
	.string "¡PRECISIÓN X aumenta la precisión\n"
	.string "de los ataques!\p"
	.string "¡El DIRECTO aumenta la posibilidad\n"
	.string "de golpes críticos!\p"
	.string "¡Compra tus objetos en el\n"
	.string "CENTRO COMERCIAL de AZULONA!$"



CeladonCityDocumento_105::
msgbox CeladonCityDocumento_Text_105, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_105:
	.string "CASINO ROCKET\n"
	.string "¡El parque de atracciones para\l"
	.string "adultos!$"



CeladonCityDocumento_106::
msgbox CeladonCityDocumento_Text_106, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_106:
	.string "¡Las FICHAS son cambiadas por\n"
	.string "premios!$"



CeladonCityDocumento_107::
msgbox CeladonCityDocumento_Text_107, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_107:
	.string "CONSEJOS DE ENTRENADOR\n"
	.string "El PROTECTOR ESPECIAL protege a\l"
	.string "tus POKÉMON de los movimientos que\l"
	.string "reducen tus estadísticas en\l"
	.string "batalla.\l"
	.string "¡Obtén tus objetos en el CENTRO\l"
	.string "COMERCIAL AZULONA!$"

Barrera_Tiendas::
compare VAR_UNUSED_0x40F7, 30
goto_if_lt Barrera_Tiendas_2
compare VAR_UNUSED_0x40F7, 100
goto_if_gt Barrera_Tiendas_2
applymovement OBJ_EVENT_ID_PLAYER, Barrera_Tiendas_Move_1
waitmovement 0x0
msgbox Barrera_Tiendas_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Barrera_Tiendas_Move_2
waitmovement 0x0
release
end

Barrera_Tiendas_Texto_1:
.string "(Los ROCKET tienen prohibido\n"
	.string "comprar artículos en las tiendas\l"
	.string "públicas de KANTO. Mejor no tentar\l"
	.string "a la suerte).$"

Barrera_Tiendas_2::
release
end

Barrera_Tiendas_Move_1:
walk_in_place_up
step_end

Barrera_Tiendas_Move_2:
walk_slow_down
step_end
