.set LOCALID_TWIN, 2

VerdanturfTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
	.byte 0

VerdanturfTown_OnTransition:
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	end

VerdanturfTown_EventScript_Twin::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_TwinTunnelOpen::
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_Man::
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Camper::
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_BoyTunnelOpen::
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_TownSign::
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_WandasHouseSign::
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_BattleTentSign::
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_RusturfTunnelSign::
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
	end

VerdanturfTown_Text_ManTryingToDigTunnel:
	.string	"Me lo ha dicho mi papá.\p"
	.string	"Dice que este túnel está lleno\n"
	.string	"de POKéMON asustadizos.\p"
	.string	"Si escuchan algún ruido fuerte, se\n"
	.string	"asustan y montan alborotos.\p"
	.string	"Por eso detuvieron el proyecto de\n"
	.string	"construcción del túnel.\p"
	.string	"¡Pero hay un hombre empeñado en\n"
	.string	"terminar el túnel él solito!$"

VerdanturfTown_Text_ManDugTunnelForLove:
	.string	"Un hombre excavó un túnel para\n"
	.string	"la mujer que amaba…\p"
	.string	"Es decir, para poder ir a verla más\n"
	.string	"fácilmente. ¡Eso es amor, señores!$"

VerdanturfTown_Text_AirCleanHere:
	.string	"Por cómo sopla el viento, aquí nunca\n"
	.string	"llega la ceniza volcánica.\p"
	.string	"Al contrario, el aire de aquí es puro\n"
	.string	"y agradable. Es muy bueno para las\l"
	.string	"personas de salud delicada.$"

VerdanturfTown_Text_MakeBattleTentDebut:
	.string	"Mis POKéMON y yo estamos de racha.\p"
	.string	"Así que he decidido probar suerte en\n"
	.string	"la TIENDA de BATALLA que hay aquí.$"

VerdanturfTown_Text_GuyTryingToBustThroughCave:
	.string	"¿Has visto la cueva que hay cerca de\n"
	.string	"la TIENDA POKéMON?\p"
	.string	"Dentro hay un tipo que intenta romper\n"
	.string	"rocas para poder llegar al otro lado.\p"
	.string	"Sería estupendo tener el túnel…\n"
	.string	"Visitar CIUDAD FÉRRICA sería\l"
	.string	"más sencillo.$"

VerdanturfTown_Text_EasyToGetToRustboroNow:
	.string	"La cueva que hay cerca de la TIENDA\n"
	.string	"POKéMON es ahora un túnel que\l"
	.string	"conecta dos ciudades.\p"
	.string	"Es lo mejor. Ahora no cuesta nada ir\n"
	.string	"a comprar productos DEVON a\l"
	.string	"CIUDAD FÉRRICA.$"

VerdanturfTown_Text_TownSign:
	.string	"PUEBLO VERDEGAL\p"
	.string	"“Las ventosas tierras altas que\n"
	.string	"siempre huelen a hierba fresca.”$"

VerdanturfTown_Text_WandasHouse:
	.string	"CASA de CLARA$"

VerdanturfTown_Text_BattleTentSign:
	.string	"TIENDA de BATALLA de PUEBLO VERDEGAL\n"
	.string	"“¡Disfruta de los mejores combates!”$"

VerdanturfTown_Text_RusturfTunnelSign:
	.string	"TÚNEL FERVERGAL\n"
	.string	"“Conecta CIUDAD FÉRRICA y VERDEGAL.\p"
	.string	"El proyecto de construcción del\n"
	.string	"túnel ha sido cancelado.”$"

VerdanturfTown_Policia_Bloqueo::
lock
faceplayer
msgbox VerdanturfTown_Policia_Bloqueo_Texto_1 MSGBOX_NPC
release
end

VerdanturfTown_Policia_Bloqueo_Texto_1:
	.string "Se está terminado la construcción del\n"
	.string "TÚNEL FERDEGAL. Una vez esté, podrás\l"
	.string "llegar a CIUDAD FÉRRICA rápidamente\l"
	.string "desde aquí, ¿no es genial?$"


VerdanturfTown_Escena_Tristana::
lock
applymovement OBJ_EVENT_ID_PLAYER, VerdanturfTown_Move_1
waitmovement 0x0
msgbox VerdanturfTown_Escena_Tristana_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, VerdanturfTown_Move_2
waitmovement 0x0
msgbox VerdanturfTown_Escena_Tristana_Texto_2 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_3 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_4 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_5 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_6 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_7 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_8 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_9 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_10 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_11 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_12 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_13 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_14 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_15 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_16 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_17 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_18 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_19 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_20 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_21 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_22 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_23 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_24 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_25 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_26 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_27 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_28 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_29 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_30 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_31 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_32 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_33 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_34 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_35 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_36 MSGBOX_AUTOCLOSE
msgbox VerdanturfTown_Escena_Tristana_Texto_37 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 225
release
end

VerdanturfTown_Move_2:
walk_in_place_up
step_end

VerdanturfTown_Move_1:
walk_in_place_left
step_end

VerdanturfTown_Escena_Tristana_Texto_1:
	.string "Vamos a mandarte de vuelta a PETALIA,\n"
	.string "BLASCO.$"

VerdanturfTown_Escena_Tristana_Texto_2:
	.string "La brisa de PUEBLO VERDEGAL es idónea\n"
	.string "para tu salud, pero es hora de que\l"
	.string "vuelvas con tus padres, en CIUDAD\l"
	.string "PETALIA.$"

VerdanturfTown_Escena_Tristana_Texto_3:
	.string "BLASCO: Vale{PAUSE 5}…{PAUSE 5}$"

VerdanturfTown_Escena_Tristana_Texto_4:
	.string "Has estado algo raro estos días, ¿hay\n"
	.string "algo que te preocupa?$"

VerdanturfTown_Escena_Tristana_Texto_5:
	.string "BLASCO: Bueno{PAUSE 15}…{PAUSE 15} Están restaurando el\n"
	.string "GIMNASIO de CIUDAD PETALIA, pensaba\l"
	.string "que podría ir a ver al nuevo LÍDER para…{PAUSE 5}$"

VerdanturfTown_Escena_Tristana_Texto_6:
	.string "¿Hacerte ENTRENADOR? ¿Sabes lo\n"
	.string "arriesgado que es eso?$"

VerdanturfTown_Escena_Tristana_Texto_7:
	.string "BLASCO: Pero{PAUSE 15}…{PAUSE 15} ¡su hijo tiene mi edad y\n"
	.string "va a empezar su aventura!$"

VerdanturfTown_Escena_Tristana_Texto_8:
	.string "Él lo lleva en la sangre, el mundo del\n"
	.string "combate POKÉMON no es alegría y color,\l"
	.string "BLASCO.$"

VerdanturfTown_Escena_Tristana_Texto_9:
	.string "Es un mundo injusto donde el talento y\n"
	.string "las experiencias vitales juegan un\l"
	.string "papel fundamental. Los que llegan\l"
	.string "arriba han nacido para ello.$"

VerdanturfTown_Escena_Tristana_Texto_10:
	.string "TRISTANA: No tiene que ser el mejor\n"
	.string "ENTRENADOR para hacer de su aventura\l"
	.string "algo grande.$"

VerdanturfTown_Escena_Tristana_Texto_11:
	.string "Oye chica, ¿quién eres tú? No te metas\n"
	.string "en la educación de nuestro sobrin{PAUSE 5}…{PAUSE 5}$"

VerdanturfTown_Escena_Tristana_Texto_12:
	.string "TRISTANA: Tenéis razón.$"

VerdanturfTown_Escena_Tristana_Texto_13:
	.string "El combate POKÉMON es injusto por\n"
	.string "naturaleza. Tanto los POKÉMON como los\l"
	.string "entrenadores tienen unas cualidades\l"
	.string "innatas.$"

VerdanturfTown_Escena_Tristana_Texto_14:
	.string "Muchas veces el que gana solo lo hace\n"
	.string "porque ha sido su genética la que ha\l"
	.string "marcado la diferencia.$"

VerdanturfTown_Escena_Tristana_Texto_15:
	.string "Encontrarás a muchos cuervos\n"
	.string "disfrazados de águilas, que achacarán\l"
	.string "únicamente a su trabajo y propios\l"
	.string "méritos, un resultado para el cual es\l"
	.string "necesario partir con sus\l"
	.string "extraordinarias condiciones de base.$"

VerdanturfTown_Escena_Tristana_Texto_16:
	.string "BLASCO: Oh{PAUSE 5}…{PAUSE 5}$"

VerdanturfTown_Escena_Tristana_Texto_17:
	.string "Sin esas condiciones, todos sus logros\n"
	.string "desaparecerían automáticamente, sin\l"
	.string "importar lo que hagan.$"

VerdanturfTown_Escena_Tristana_Texto_18:
	.string "Miles de niños incautos, inconscientes\n"
	.string "en cuanto al conocimiento de sus\l"
	.string "propios límites, se generarán unas\l"
	.string "expectativas que antes o después\l"
	.string "quedarán destrozadas por la cruda\l"
	.string "realidad de la naturaleza.$"

VerdanturfTown_Escena_Tristana_Texto_19:
	.string "BLASCO: Entonces{PAUSE 5}…{PAUSE 5}$"

VerdanturfTown_Escena_Tristana_Texto_20:
	.string "TRISTANA: Pero{PAUSE 5}…{PAUSE 5}$"

VerdanturfTown_Escena_Tristana_Texto_21:
	.string "…el combate POKÉMON puede ser lo más\n"
	.string "injusto, y lo más justo a la vez{PAUSE 15}…{PAUSE 15} si solo\l"
	.string "te comparas contigo mismo y te centras\l"
	.string "en tu propio progreso.$"

VerdanturfTown_Escena_Tristana_Texto_22:
	.string "Créeme chico, aunque no llegues a ser\n"
	.string "tan bueno como ese otro chaval, jamás\l"
	.string "creerías la versión en la que puedes\l"
	.string "llegar a convertirte, ni todo lo que\l"
	.string "llegarás a ver por el camino.$"

VerdanturfTown_Escena_Tristana_Texto_23:
	.string "La otra opción es quedarte llorando en\n"
	.string "tu casa de PETALIA. Revolcarte en tu\l"
	.string "propia autocompasión para marchitarte\l"
	.string "sin haber conocido tu plenitud, ¿harás\l"
	.string "eso?$"

VerdanturfTown_Escena_Tristana_Texto_24:
	.string "BLASCO: Yo{PAUSE 5}…{PAUSE 5}$"

VerdanturfTown_Escena_Tristana_Texto_25:
	.string "TRISTANA: Esa elección sí que está en\n"
	.string "tu mano, y depende exclusivamente de\l"
	.string "ti. Recuerda: El verdadero ENTRENADOR\l"
	.string "es el que no se rinde ante lo que le\l"
	.string "apasiona.$"

VerdanturfTown_Escena_Tristana_Texto_26:
	.string "BLASCO: L{PAUSE 15}-{PAUSE 15}Lo{PAUSE 25}…{PAUSE 25} intentaré.$"

VerdanturfTown_Escena_Tristana_Texto_27:
	.string "¡BLASCO, espera!$"

VerdanturfTown_Escena_Tristana_Texto_28:
	.string "TRISTANA: {PLAYER}. Entonces sí que\n"
	.string "íbamos a vernos de nuevo. Tu empeño por\l"
	.string "viajar más y más lo ha hecho posible.$"

VerdanturfTown_Escena_Tristana_Texto_29:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

VerdanturfTown_Escena_Tristana_Texto_30:
	.string "¿No estás de acuerdo con esa\n"
	.string "distinción entre cuervos y águilas? No\l"
	.string "es mi problema si te das por aludido\l"
	.string "{PLAYER}, por algo será.$"

VerdanturfTown_Escena_Tristana_Texto_31:
	.string "No hay nada de malo en admitir que eres\n"
	.string "un privilegiado para el combate\l"
	.string "POKÉMON, y que por eso y por todo tu\l"
	.string "recorrido estás donde estás. Lo\l"
	.string "contrario sería ser deshonesto y\l"
	.string "tratar al resto como imbéciles.$"

VerdanturfTown_Escena_Tristana_Texto_32:
	.string "Te veo algo perdido por HOENN, ¿no es\n"
	.string "así?$"

VerdanturfTown_Escena_Tristana_Texto_33:
	.string "Si quieres un poco de acción, tengo algo\n"
	.string "que puede interesarte.$"

VerdanturfTown_Escena_Tristana_Texto_34:
	.string "¡OBTUVISTE UNA LLAVE SÓTANO DE\n"
	.string "TRISTANA!$"

VerdanturfTown_Escena_Tristana_Texto_35:
	.string "Nunca me gustaron los cierres de\n"
	.string "lugares sin dar explicaciones. Con esta\l"
	.string "LLAVE podrás colarte en la CENTRAL al\l"
	.string "sur de MALVALONA y molestar a esos\l"
	.string "burócratas.$"

VerdanturfTown_Escena_Tristana_Texto_36:
	.string "¿Por qué te la doy?$"

VerdanturfTown_Escena_Tristana_Texto_37:
	.string "Si no te hubiera dado este objeto,\n"
	.string "ahora no sabrías dónde ir, ¿verdad?\l"
	.string "¡Eso demuestra que todo lo que le dije a\l"
	.string "ese chaval era verdad!$"


