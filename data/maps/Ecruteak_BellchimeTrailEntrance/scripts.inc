Ecruteak_BellchimeTrailEntrance_MapScripts::
	.byte 0

BellchimeTrailEntrance2::
lock     
faceplayer     
msgbox Ecruteak_Bellchimetrailentrance_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_Bellchimetrailentrance_Text_2:
.string "CIUDAD IRIS no puede permitirse\n"
.string "una nueva tragedia que ponga en\l"
.string "peligro el último reducto\l"
.string "histórico de JOHTO: TORRE CAMPANA.\l"
.string "Es por eso que somos muy\l"
.string "cuidadosos con quién entra y sale\l"
.string "de ese lugar sagrado, su\l"
.string "conservación es nuestra prioridad.$"



BellchimeTrailEntrance3::
lock     
faceplayer     
msgbox Ecruteak_Bellchimetrailentrance_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_Bellchimetrailentrance_Text_3:
.string "Cuando aparecieron los POKÉMON\n"
.string "LEGENDARIOS… infundieron el\l"
.string "terror en aquellos que vieron su\l"
.string "ascenso. Y… algunos incluso\l"
.string "atacaron en vano. Los POKÉMON\l"
.string "LEGENDARIOS, conocedores de su\l"
.string "propio poder, huyeron y\l"
.string "abandonaron a la gente asustada.$"



BellchimeTrailEntrance4::
lock     
faceplayer     
msgbox Ecruteak_Bellchimetrailentrance_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_Bellchimetrailentrance_Text_4:
.string "SENDA DINDÓN aguarda tras estas\n"
.string "escaleras y, a lo lejos, TORRE\l"
.string "CAMPANA.$"



BellchimeTrailEntrance6::
end



BellchimeTrailEntrance9::
lock     
faceplayer     
msgbox Ecruteak_Bellchimetrailentrance_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_Bellchimetrailentrance_Text_6:
.string "SENDA DINDÓN aguarda tras estas\n"
.string "escaleras y, a lo lejos, TORRE\l"
.string "CAMPANA.$"

Ecruteak_BellchimeTrailEntrance_Mirto::
lockall
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
waitmovement 0x0
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_3
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_1 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_4
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_2 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_5
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_3 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_6
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_4 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_3
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_5 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_6 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_7 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_5
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_8 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_7
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_8
waitmovement 0x0
delay 15
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_5
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_9 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_11 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_3
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_12 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
addobject 5
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
applymovement 5, Ecruteak_BellchimeTrailEntrance_Mirto_Move_7
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_9
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, Ecruteak_BellchimeTrailEntrance_Mirto_Move_10
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_14 MSGBOX_AUTOCLOSE
applymovement 5, Ecruteak_BellchimeTrailEntrance_Mirto_Move_11
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_15 MSGBOX_AUTOCLOSE
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_12
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_11
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_11
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_16 MSGBOX_AUTOCLOSE
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_9
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_17 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_18 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_1
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_19 MSGBOX_AUTOCLOSE
applymovement 5, Ecruteak_BellchimeTrailEntrance_Mirto_Move_1
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_20 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
waitmovement 0x0
delay 20
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_21 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_22 MSGBOX_AUTOCLOSE
applymovement 5, Ecruteak_BellchimeTrailEntrance_Mirto_Move_13
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_14
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_23 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
applymovement 5, Ecruteak_BellchimeTrailEntrance_Mirto_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_12
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_24 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_16
waitmovement 0x0
removeobject 8
playse SE_EXIT
delay 60
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_25 MSGBOX_AUTOCLOSE
delay 20
clearflag FLAG_HIDE_GRANITE_CAVE_STEVEN
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN 
addobject 7
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_6
applymovement 7, Ecruteak_BellchimeTrailEntrance_Mirto_Move_17
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_26 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_27 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_28 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_29 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN 
applymovement 7, Ecruteak_BellchimeTrailEntrance_Mirto_Move_18
waitmovement 0x0
removeobject 7
playse SE_EXIT
delay 20
setvar VAR_UNUSED_0x40F7, 140
clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
release
end

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_1:
.string "MIRTO: Ah, ya estás aquí,\n"
	.string "{PLAYER}.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_2:
.string "Gracias de nuevo. Sé que fui algo\n"
	.string "brusco cuando nos conocimos en\l"
	.string "PUEBLO AZALEA. Ambos sentimos esa\l"
	.string "energía característica de grandes\l"
	.string "ENTRENADORES, pero preferí darle\l"
	.string "la espalda. Lo cierto es que mi\l"
	.string "viaje por JOHTO está siendo una\l"
	.string "contrareloj, y ya que has accedido\l"
	.string "a ayudarme te explicaré por qué.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_3:
.string "Mi fiel amigo, VOLCARONA, se\n"
	.string "transformó una última vez. Después\l"
	.string "de toda una vida unidos, adquirió\l"
	.string "un poder que yo jamás había visto,\l"
	.string "mayor incluso que el de los\l"
	.string "LEGENDARIOS que conozco.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_4:
.string "Pero al parecer ese gran poder le\n"
	.string "está comiendo por dentro. Es todo\l"
	.string "un espectáculo verlo en su\l"
	.string "esplendor, sí, pero intercala\l"
	.string "períodos de absoluto vigor con\l"
	.string "otros en los que apenas puede\l"
	.string "moverse, como si fuera el precio a\l"
	.string "pagar por toda la energía empleada\l"
	.string "anteriormente.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_5:
.string "JOHTO es una de las pocas regiones\n"
	.string "que pueden tener una solución para\l"
	.string "mi POKÉMON. Sus conocimientos en\l"
	.string "medicina y fisiología de los\l"
	.string "POKÉMON son milenarios.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_6:
.string "El GRAN MAESTRO de TORRE CAMPANA\n"
	.string "es una de esas personas que podría\l"
	.string "ayudarme. El vio al LEGENDARIO\l"
	.string "HO-OH, y maneja a la perfección\l"
	.string "las propiedades curativas de su\l"
	.string "CENIZA SAGRADA, pero para hablar\l"
	.string "con él tengo que subir a la cima\l"
	.string "de TORRE CAMPANA...$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_7:
.string "Dices ser el CAMPEÓN de KANTO.\n"
	.string "Conozco poco de la historia\l"
	.string "reciente de la región, pero te\l"
	.string "creo.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_8:
.string "¡No se hable más!\n"
	.string "¡Veamos si podemos lograr pasar!$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_9:
.string "El acceso a TORRE CAMPANA y SENDA\n"
	.string "DINDÓN está reservado a\l"
	.string "ciertas personas.\l"
	.string "Les ruego que den media vuelta,\l"
	.string "caballeros.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_10:
.string "MIRTO: El CAMPEÓN de KANTO-JOHTO\n"
	.string "es una de esas personas, ¿cierto?\l"
	.string "Tiene ante usted al verdadero\l"
	.string "CAMPEÓN de KANTO: {PLAYER}.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_11:
.string "¿{PLAYER}?\n"
	.string "Lo siento, pero si no tienen forma\l"
	.string "de probar lo que dice, no podrán\l"
	.string "pasar, la situación actual de la\l"
	.string "LIGA POKÉMON es caótica. Tengo\l"
	.string "entendido que un tal ROJO ganó el\l"
	.string "campeonato, pero está siendo\l"
	.string "suplido por AZUL. Mientras tanto,\l"
	.string "la ALTO MANDO AGATHA acaba de\l"
	.string "dimit...$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_12:
.string "????: ¡{PLAYER}!\n"
	.string "¡Qué alegría volver a verte!$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_13:
.string "A...ALTO MANDO AGATHA, un honor\n"
	.string "volver a verla.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_14:
.string "AGATHA: Quién iba a decir que\n"
	.string "acabarías visitando JOHTO, a este\l"
	.string "paso vas a terminar explorando\l"
	.string "cada rincón del mundo POKÉMON. Tan\l"
	.string "activo y dispuesto, bendita\l"
	.string "juventud.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_15:
.string "AGATHA: Dicen la verdad, sé que\n"
	.string "TORRE CAMPANA y vosotros sus\l"
	.string "PENSADORES sois discretos. Por\l"
	.string "ello, has de saber que tienes\l"
	.string "delante al verdadero CAMPEÓN de\l"
	.string "KANTO.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_16:
.string "Ruego que me disculpe, es todo un\n"
	.string "honor que alguien como usted\l"
	.string "visite nuestro templo.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_17:
.string "MIRTO: Entonces...\n"
	.string "¿Podemos entrar todos?$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_18:
.string "Estamos ante un caso excepcional.\n"
	.string "AGATHA aquí es considerada como\l"
	.string "una más, pero en esta situación, la\l"
	.string "última palabra la tiene\l"
	.string "nuestro GRAN MAESTRO.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_19:
.string "MIRTO: Pero...\n"
	.string "Mi POKÉMON está enfermo, su GRAN\l"
	.string "MAESTRO podría ayudarle a sanar.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_20:
.string "AGATHA: Su compañero es un\n"
	.string "POKÉMON muy especial, CÉSAR me lo\l"
	.string "dijo. Has de saber, PENSADOR, que\l"
	.string "su POKÉMON no solo ha\l"
	.string "experimentado el FUERTE VÍNCULO,\l"
	.string "sino que es el caso más extremo\l"
	.string "conocido.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_21:
.string "Oh...\n"
	.string "Entiendo...\l"
	.string "Entiendo...\l"
	.string "Algo así sin duda merece ser visto\l"
	.string "de inmediato, nuestro GRAN MAESTRO\l"
	.string "estará encantado de ver a su\l"
	.string "POKÉMON.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_22:
.string "MIRTO: Muchas gracias.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_23:
.string "AGATHA: No te preocupes {PLAYER},\n"
	.string "hablaré con el GRAN MAESTRO y lo\l"
	.string "entenderá perfectamente. Podrás\l"
	.string "entrar a TORRE CAMPANA cuando este\l"
	.string "asunto quede arreglado.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_24:
.string "MIRTO: Sin tu intervención no\n"
	.string "habría podido pasar {PLAYER}.\l"
	.string "Seguro que nuestros caminos\l"
	.string "volverán a cruzarse.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_25:
.string "¡ALERTA!\n"
	.string "¡ALERTA!$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_26:
.string "¡Un lunático está causando\n"
	.string "estragos en TORRE QUEMADA!$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_27:
.string "Enviad a varios de nuestros\n"
	.string "PENSADORES.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_28:
.string "Ya lo hemos hecho, pero sus\n"
	.string "POKÉMON son indestructibles,\l"
	.string "ninguno de nosotros puede tocarle.\l"
	.string "Si sigue así va a dañar seriamente\l"
	.string "lo que queda de nuestro\l"
	.string "patrimonio.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_29:
.string "...\n"
	.string "...\l"
	.string "En ese caso, debemos avisar al\l"
	.string "GRAN MAESTRO. Sube a TORRE CAMPANA\l"
	.string "y cuéntale lo ocurrido.\l"
	.string "¡Rápido!$"

Ecruteak_BellchimeTrailEntrance_Mirto_Move_1:
walk_in_place_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_2:
emote_exclamation_mark
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_3:
face_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_4:
walk_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_5:
walk_in_place_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_6:
face_right
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_7:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_8:
walk_up
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_9:
walk_right
face_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_10:
face_left
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_11:
face_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_12:
walk_left
walk_in_place_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_13:
walk_right
walk_up
walk_up
face_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_14:
walk_up
walk_up
walk_up
face_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_15:
walk_left
walk_up
walk_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_16:
walk_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_17:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_18:
walk_fast_right
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_left
step_end


Torre_Campana_Frontera_Izquierda::
compare VAR_UNUSED_0x40F7, 156
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
lock
applymovement 4, Torre_Campana_Frontera_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Torre_Campana_Frontera_Move_2
waitmovement 0x0
msgbox Torre_Campana_Frontera_Texto_1 MSGBOX_AUTOCLOSE
applymovement 4, Torre_Campana_Frontera_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Torre_Campana_Frontera_Move_4
waitmovement 0x0
release
end

Torre_Campana_Frontera_Texto_1:
.string "Nadie puede pasar de aquí sin el\n"
	.string "consentimiento de nuestro GRAN\l"
	.string "MAESTRO, deberás esperar.$"

Torre_Campana_Frontera_Move_1:
face_left
step_end

Torre_Campana_Frontera_Move_2:
face_right
step_end

Torre_Campana_Frontera_Move_3:
face_down
step_end

Torre_Campana_Frontera_Move_4:
walk_slow_down
step_end

Torre_Campana_Frontera_Derecha::
compare VAR_UNUSED_0x40F7, 156
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
lock
applymovement 4, Torre_Campana_Frontera_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Torre_Campana_Frontera_Move_1
waitmovement 0x0
msgbox Torre_Campana_Frontera_Texto_1 MSGBOX_AUTOCLOSE
applymovement 4, Torre_Campana_Frontera_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Torre_Campana_Frontera_Move_4
waitmovement 0x0
release
end
