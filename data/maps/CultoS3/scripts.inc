CultoS3_MapScripts::
	.byte 0


CultoS3_EventScript_Medium::
	trainerbattle_single TRAINER_AURON, CultoS3_Text_MediumIntro, CultoS3_Text_MediumDefeated
	msgbox CultoS3_Text_MediumPostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_EventScript_Medium2::
	trainerbattle_single TRAINER_KELVIN, CultoS3_Text_Medium2Intro, CultoS3_Text_Medium2Defeated
	msgbox CultoS3_Text_Medium2PostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_EventScript_Exorcista::
	trainerbattle_single TRAINER_HECTOR, CultoS3_Text_ExorcistaIntro, CultoS3_Text_ExorcistaDefeated
	msgbox CultoS3_Text_ExorcistaPostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_EventScript_Exorcista2::
	trainerbattle_single TRAINER_EDWIN_1, CultoS3_Text_Exorcista2Intro, CultoS3_Text_Exorcista2Defeated
	msgbox CultoS3_Text_Exorcista2PostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_EventScript_Medium3::
	trainerbattle_single TRAINER_REYNA, CultoS3_Text_Medium3Intro, CultoS3_Text_Medium3Defeated
	msgbox CultoS3_Text_Medium3PostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_EventScript_Medium4::
	trainerbattle_single TRAINER_CONOR, CultoS3_Text_Medium4Intro, CultoS3_Text_Medium4Defeated
	msgbox CultoS3_Text_Medium4PostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_EventScript_Medium5::
	trainerbattle_single TRAINER_HUDSON, CultoS3_Text_Medium5Intro, CultoS3_Text_Medium5Defeated
	msgbox CultoS3_Text_Medium5PostBattle, MSGBOX_AUTOCLOSE
	end



CultoS3_1::
lock     
faceplayer     
msgbox CultoS3_Text_1, MSGBOX_DEFAULT
release     
end

CultoS3_Text_1:
.string "Si no crees en un sistema serás\n"
.string "esclavizado por el de otro.$"



CultoS3_3::
lock     
faceplayer     
msgbox CultoS3_Text_3, MSGBOX_DEFAULT
release     
end

CultoS3_Text_3:
.string "La mayoría de personas ni está\n"
.string "preparada ni merece tener acceso a\l"
.string "un lugar así.$"



CultoS3_4::
lock     
faceplayer     
msgbox CultoS3_Text_4, MSGBOX_DEFAULT
release     
end

CultoS3_Text_4:
.string "Pobres esas almas que confunden lo\n"
.string "que quieren con lo que les apetece.\l"
.string "Creyéndose libres, no son más que\l"
.string "marionetas dictadas por todo cuanto\l"
.string "su química e impulsos les ordenen.$"



CultoS3_7::
lock     
faceplayer     
msgbox CultoS3_Text_7, MSGBOX_DEFAULT
release     
end

CultoS3_Text_7:
.string "La esencia contenida en este lugar\n"
.string "trasciende nuestra propia existencia.\l"
.string "No encontrarás un lugar asçi\l"
.string "en toda KANTO.$"



CultoS3_8::
lock     
faceplayer     
msgbox CultoS3_Text_8, MSGBOX_DEFAULT
release     
end

CultoS3_Text_8:
.string "Este lugar nos da todo cuanto\n"
.string "necesitamos, ¿por qué ibamos a\l"
.string "cambiarlo?$"



CultoS3_9::
lock     
faceplayer     
msgbox CultoS3_Text_9, MSGBOX_DEFAULT
release     
end

CultoS3_Text_9:
.string "No recuerdo la última vez que\n"
.string "tuvimos visita del exterior, pero\l"
.string "no acabó muy bien{PAUSE 5}…{PAUSE 5}$"



CultoS3_10::
lock     
faceplayer     
msgbox CultoS3_Text_10, MSGBOX_DEFAULT
release     
end

CultoS3_Text_10:
.string "¡La esencia está aquí!\n"
.string "¿No la ves?\l"
.string "¡Es tuya!\l"
.string "¡Cógela antes de que se te\l"
.string "escape de entre los dedos!$"



CultoS3_11::
lock     
faceplayer     
msgbox CultoS3_Text_11, MSGBOX_DEFAULT
msgbox CultoS3_Text_11.1, MSGBOX_DEFAULT
release     
end

CultoS3_Text_11:
.string "Este lugar es más antiguo que la\n"
.string "propia TORRE POKÉMON, que fue\l"
.string "creada como un mero complemento\l"
.string "para los rituales más suaves.$"

CultoS3_Text_11.1:
.string "Hace tanto que perdimos el contacto con\n"
.string "el exterior, que la existencia de esta\l"
.string "gran cámara subterránea ha sido borrada\l"
.string "de la memoria, incluso de los más\l"
.string "ancianos de PUEBLO LAVANDA.$"



CultoS3_12::
lock     
faceplayer     
msgbox CultoS3_Text_12, MSGBOX_DEFAULT
release     
end

CultoS3_Text_12:
.string "Potencialidad infinita, eso es lo\n"
.string "que siento cuando cierro los ojos\l"
.string "y admiro la energía de este lugar.$"



CultoS3_13::
lock     
faceplayer     
msgbox CultoS3_Text_13, MSGBOX_DEFAULT
release     
end

CultoS3_Text_13:
.string "Nosotros solo somos meros observadores\n"
.string "ante todo lo que ocurre en KANTO, hace\l"
.string "tiempo que desde aquí montamos una\l"
.string "realidad alternativa a los juegos de\l"
.string "poder que rigen al exterior.$"



CultoS3_14::
lock     
faceplayer     
msgbox CultoS3_Text_14, MSGBOX_DEFAULT
release     
end

CultoS3_Text_14:
.string "Todo fluye y refluye, todo tiene sus\n"
.string "períodos de avance y retroceso, todo\l"
.string "asciende y desciende, todo se mueve\l"
.string "como un péndulo, la medida de su\l"
.string "movimiento hacia la derecha equivale\l"
.string "a la de su movimiento hacia la\l"
.string "izquierda, el ritmo es la compensación.$"



CultoS3_15::
lock     
faceplayer     
msgbox CultoS3_Text_15, MSGBOX_DEFAULT
release     
end

CultoS3_Text_15:
.string "La libertad interior puede elevar\n"
.string "al hombre por encima de un destino\l"
.string "adverso.$"



CultoS3_16::
lock     
faceplayer     
msgbox CultoS3_Text_16, MSGBOX_DEFAULT
release     
end

CultoS3_Text_16:
.string "…\n"
.string "…\l"
.string "Un lugar menos placentero pero en el\l"
.string "que ocurren las cosas más importantes.\l"
.string "…\l"
.string "{PAUSE 5}…{PAUSE 5}$"



CultoS3_17::
lock     
faceplayer     
msgbox CultoS3_Text_17, MSGBOX_DEFAULT
release     
end

CultoS3_Text_17:
.string "Aquel que abraza su destino vive\n"
.string "largos años, y el que se rebela\l"
.string "recibe su castigo.$"



CultoS3_18::
lock     
faceplayer     
msgbox CultoS3_Text_18, MSGBOX_DEFAULT
release     
end

CultoS3_Text_18:
.string "Las flores que han florecido en la\n"
.string "adversidad son las más bellas de\l"
.string "todas.$"



CultoS3_19::
lock     
faceplayer     
msgbox CultoS3_Text_19, MSGBOX_DEFAULT
release     
end

CultoS3_Text_19:
.string "¿Por qué honrar y elevar unas\n"
.string "almas por encima de otras, como es\l"
.string "el caso de este monumento\l"
.string "funerario?\p"
.string "Creemos que lo que hacemos en la vida\n"
.string "tiene su eco en la eternidad, no se\l"
.string "trata de minusvalorar al resto, si no\l"
.string "de reconocer aquellas que lograron la\l"
.string "excelencia.$"



CultoS3_20::
lock     
faceplayer     
msgbox CultoS3_Text_20, MSGBOX_DEFAULT
release     
end

CultoS3_Text_20:
.string "GASTLY, HAUNTER y GENGAR no son los\n"
.string "únicos fantasmas que PUEBLO LAVANDA\l"
.string "guarda en sus más ocultos rincones.\l"
.string "Pero eso ya lo sabes, ¿no?$"



CultoS3_21::
lock     
faceplayer     
msgbox CultoS3_Text_21, MSGBOX_DEFAULT
release     
end

CultoS3_Text_21:
.string "La flor perfecta es algo muy raro,\n"
.string "puedes entregarte a la búsqueda de\l"
.string "una sola, y no habrás malgastado\l"
.string "tu vida.$"



CultoS3_22::
lock     
faceplayer     
msgbox CultoS3_Text_22, MSGBOX_DEFAULT
release     
end

CultoS3_Text_22:
	.string "Los bien dotados, aunque los apartes,\n"
	.string "se aferran aún más a la doctrina.\l"
	.string "Cuanto más se le desaire, tanto más se\l"
	.string "inclinará a su natural.$"



CultoS3_23::
lock     
faceplayer     
msgbox CultoS3_Text_23, MSGBOX_DEFAULT
release     
end

CultoS3_Text_23:
.string "Sin importar el modo, sirve\n"
.string "a tus ideales.$"



CultoS3_24::
lock     
faceplayer     
msgbox CultoS3_Text_24, MSGBOX_DEFAULT
release     
end

CultoS3_Text_24:
.string "Es tu luz y no tu oscuridad tu\n"
.string "mayor miedo, miedo de saber cuanto\l"
.string "puedes llegar a brillar y de\l"
.string "descubrir el infinito potencial\l"
.string "de tu ser.$"



CultoS3_25::
lock     
faceplayer     
msgbox CultoS3_Text_25, MSGBOX_DEFAULT
release     
end

CultoS3_Text_25:
.string "La autoexplotación resulta más\n"
.string "eficaz que la explotación a cargo\l"
.string "de otros, pues va acompañada de\l"
.string "sensación de libertad.$"



CultoS3_26::
lock     
faceplayer     
msgbox CultoS3_Text_26, MSGBOX_DEFAULT
msgbox CultoS3_Text_26.1, MSGBOX_DEFAULT
release     
end

CultoS3_Text_26:
.string "Prueben a colocar al hombre en la más\n"
.string "próspera, idílica y fantástica de\l"
.string "las utopías, refugienle en inmensas\l"
.string "burbujas de placer edonico, evitando\l"
.string "todo contacto con la crudeza del\l"
.string "cosmos, concédale aquello con lo que\l"
.string "siempre soñó, sin tener que pasar por\l"
.string "frustación, dificultad o decepción.$"

CultoS3_Text_26.1:
.string "Les aseguro que, tarde o temprano,\n"
.string "esta enigmática criatura encontrará\l"
.string "algún modo de sentirse miserable.$"



CultoS3_27::
lock     
faceplayer     
msgbox CultoS3_Text_27, MSGBOX_DEFAULT
release     
end

CultoS3_Text_27:
.string "La rana en su estanque\n"
.string "no concibe el océano.$"



CultoS3_28::
lock     
faceplayer     
msgbox CultoS3_Text_28, MSGBOX_DEFAULT
release     
end

CultoS3_Text_28:
.string "Es imposible bañarse dos veces en\n"
.string "el mismo río, tanto por ti como\l"
.string "por el río, ambos estáis en\l"
.string "constante y permanente cambio,\l"
.string "nunca serás como eres hoy, jamás\l"
.string "volveremos a estar aquí de la\l"
.string "misma forma.$"



CultoS3_30::
lock     
faceplayer     
msgbox CultoS3_Text_30, MSGBOX_DEFAULT
msgbox CultoS3_Text_30.1, MSGBOX_DEFAULT
release     
end

CultoS3_Text_30:
.string "Toda causa tiene su efecto, todo\n"
.string "efecto tiene su causa, todo sucede\l"
.string "de acuerdo a la ley, la suerte o\l"
.string "el azar no es más que el nombre\l"
.string "que damos a la ley no reconocida.$"

CultoS3_Text_30.1:
.string "Hay muchos planos de casualidad, pero\n"
.string "nada escapa a la ley. Esto, sin embargo,\l"
.string "no tiene porqué anular nuestra libertad\l"
.string "y libre albedrío.$"



CultoS3_31::
lock     
faceplayer     
msgbox CultoS3_Text_31, MSGBOX_DEFAULT
release     
end

CultoS3_Text_31:
.string "Los semejantes y los antagónicos\n"
.string "son lo mismo, los opuestos son\l"
.string "idénticos en naturaleza, pero\l"
.string "diferentes en grado, los extremos\l"
.string "se tocan, todas las verdades son\l"
.string "medias verdades, todas las\l"
.string "paradojas pueden reconciliarse.$"


CultoS3_34::
lock     
faceplayer     
msgbox CultoS3_Text_34, MSGBOX_DEFAULT
release     
end

CultoS3_Text_34:
.string "Tanto si crees que eres capaz como si\n"
.string "no, en ambos casos tienes razón.$"



CultoS3_35::
lock     
faceplayer     
msgbox CultoS3_Text_35, MSGBOX_DEFAULT
release     
end

CultoS3_Text_35:
.string "Ante la inmensidad del universo,\n"
.string "¿en qué se diferencian el niño de\l"
.string "3 días y el anciano de 95?$"



CultoS3_36::
lock     
faceplayer     
msgbox CultoS3_Text_36, MSGBOX_DEFAULT
release     
end

CultoS3_Text_36:
.string "Aquellos que de puro sentirse\n"
.string "libres, exentos de trabas,\l"
.string "acabarán por sentirse vacías,\l"
.string "porque vivir es tener que hacer\l"
.string "algo determinado, cumplir un\l"
.string "encargo, en la medida en que\l"
.string "eludamos poner a algo nuestra\l"
.string "existencia evacuamos nuestra vida.$"



CultoS3_37::
lock     
faceplayer     
msgbox CultoS3_Text_37, MSGBOX_DEFAULT
release     
end

CultoS3_Text_37:
.string "A veces la gente no quiere escuchar\n"
.string "la verdad porque no quiere que sus\l"
.string "ilusiones se vean destruidas.$"



CultoS3_38::
lock     
faceplayer     
msgbox CultoS3_Text_38, MSGBOX_DEFAULT
release     
end

CultoS3_Text_38:
.string "Serenidad para aceptar las cosas\n"
.string "que no están en nuestra mano.\p"
.string "Valor para cambiar las\n"
.string "que sí lo están.\p"
.string "Sabiduría para poder\n"
.string "diferenciarlas.$"



CultoS3_41::
lock     
faceplayer     
msgbox CultoS3_Text_41, MSGBOX_DEFAULT
release     
end

CultoS3_Text_41:
.string "Los humanos podemos llegar a\n"
.string "evitar nuestra responsabilidad de\l"
.string "forma inconsciente, mirar hacia\l"
.string "otro lado precisamente para no\l"
.string "reconocer el peligro, pretender\l"
.string "que no existe con tal de\l"
.string "permanecer cuerdos.$"



CultoS3_42::
lock     
faceplayer     
msgbox CultoS3_Text_42, MSGBOX_DEFAULT
release     
end

CultoS3_Text_42:
.string "A veces se llega a un punto en que\n"
.string "solo podrás resolver lo que has\l"
.string "sido hasta ahora llegando al final\l"
.string "del camino equivocado.$"

Culto_S3_Batalla::
lockall
clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
clearflag FLAG_HIDE_HO_OH
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
addobject 53
addobject 55
applymovement OBJ_EVENT_ID_PLAYER, Culto_S3_Batalla_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Culto_S3_Batalla_Move_2
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Culto_S3_Batalla_Move_3
waitmovement 0x0
special RemoveCameraObject
msgbox Culto_S3_Batalla_Texto_1 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_4
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_2 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_5
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_3 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Culto_S3_Batalla_Move_6
waitmovement 0x0
special RemoveCameraObject
delay 15
playmoncry SPECIES_YVELTAL, CRY_MODE_ENCOUNTER
msgbox Culto_S3_Batalla_Texto_4 MSGBOX_DEFAULT
waitmoncry
delay 20
setflag FLAG_HIDE_HO_OH
fadescreen 3
delay 20
playse SE_M_GUST
delay 40
playse SE_M_RAZOR_WIND
delay 40
removeobject 53
playse SE_M_CHARGE
delay 40
playse SE_M_SOLAR_BEAM
delay 40
playse SE_BREAKABLE_DOOR
delay 40
fadescreen 2
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Culto_S3_Batalla_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox Culto_S3_Batalla_Texto_5 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Culto_S3_Batalla_Move_8
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Culto_S3_Batalla_Move_3
waitmovement 0x0
playse SE_PIN
applymovement 43, Culto_S3_Batalla_Move_2
applymovement 44, Culto_S3_Batalla_Move_2
applymovement 45, Culto_S3_Batalla_Move_2
applymovement 46, Culto_S3_Batalla_Move_2
applymovement 47, Culto_S3_Batalla_Move_2
applymovement 48, Culto_S3_Batalla_Move_2
applymovement 49, Culto_S3_Batalla_Move_2
applymovement 50, Culto_S3_Batalla_Move_2
applymovement 51, Culto_S3_Batalla_Move_2
applymovement 52, Culto_S3_Batalla_Move_2
applymovement 54, Culto_S3_Batalla_Move_2
waitmovement 0x0
delay 15
msgbox Culto_S3_Batalla_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 54, Culto_S3_Batalla_Move_9
waitmovement 0x0
delay 10
msgbox Culto_S3_Batalla_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 54, Culto_S3_Batalla_Move_2
waitmovement 0x0
waitse
msgbox Culto_S3_Batalla_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 54, Culto_S3_Batalla_Move_4
waitmovement 0x0
delay 10
msgbox Culto_S3_Batalla_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 54, Culto_S3_Batalla_Move_5
waitmovement 0x0
delay 10
msgbox Culto_S3_Batalla_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox Culto_S3_Batalla_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 54, Culto_S3_Batalla_Move_10
waitmovement 0x0
delay 10
msgbox Culto_S3_Batalla_Texto_12 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Culto_S3_Batalla_Move_6
waitmovement 0x0
special RemoveCameraObject
msgbox Culto_S3_Batalla_Texto_13 MSGBOX_AUTOCLOSE
delay 20
playse SE_BALL_OPEN
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
clearflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
removeobject 55
addobject 58
waitse
delay 15
playse SE_BALL_TRADE
delay 15
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
removeobject 58
delay 20
msgbox Culto_S3_Batalla_Texto_14 MSGBOX_AUTOCLOSE
delay 20
applymovement 54, Culto_S3_Batalla_Move_11
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Culto_S3_Batalla_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox Culto_S3_Batalla_Texto_15 MSGBOX_AUTOCLOSE
delay 10
msgbox Culto_S3_Batalla_Texto_15.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Culto_S3_Batalla_Move_2
waitmovement 0x0
waitse
delay 10
msgbox Culto_S3_Batalla_Texto_15.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Culto_S3_Batalla_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 54, Culto_S3_Batalla_Move_9
waitmovement 0x0
delay 10
msgbox Culto_S3_Batalla_Texto_17 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CULTO_1, Culto_S3_Batalla_Texto_18
msgbox Culto_S3_Batalla_Texto_19 MSGBOX_AUTOCLOSE
delay 10
msgbox Culto_S3_Batalla_Texto_19.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Culto_S3_Batalla_Texto_19.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Culto_S3_Batalla_Texto_19.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 54, Culto_S3_Batalla_Move_4
waitmovement 0x0
delay 10
msgbox Culto_S3_Batalla_Texto_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 54, Culto_S3_Batalla_Move_5
waitmovement 0x0
delay 10
msgbox Culto_S3_Batalla_Texto_21 MSGBOX_AUTOCLOSE
delay 10
msgbox Culto_S3_Batalla_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 54, Culto_S3_Batalla_Move_4
waitmovement 0x0
delay 10
msgbox Culto_S3_Batalla_Texto_23 MSGBOX_AUTOCLOSE
delay 10
msgbox Culto_S3_Batalla_Texto_23.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Culto_S3_Batalla_Texto_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 54, Culto_S3_Batalla_Move_5
waitmovement 0x0
delay 10
msgbox Culto_S3_Batalla_Texto_25 MSGBOX_AUTOCLOSE
delay 10
msgbox Culto_S3_Batalla_Texto_26 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
removeobject 55
fadescreen 1
delay 20
removeobject 43
removeobject 44
removeobject 45
removeobject 46
removeobject 47
removeobject 48
removeobject 49
removeobject 50
removeobject 51
removeobject 52
removeobject 54
fadescreen 0
setvar VAR_UNUSED_0x40F7, 108
release
end

Culto_S3_Batalla_Texto_1:
.string "????: Acepta, oh creador de todo,\n"
	.string "nuestro humilde sacrificio en\l"
	.string "señal de respeto y agradecimiento.$"

Culto_S3_Batalla_Texto_2:
.string "No hay arrepentimiento, ni miedo,\n"
	.string "solo la tranquilidad de saber con\l"
	.string "certeza que tu alma volverá a\l"
	.string "formar parte del todo.$"

Culto_S3_Batalla_Texto_3:
.string "Mientras esperamos tu regreso, nos\n"
	.string "mantendremos ocultos y fieles a tu\l"
	.string "voluntad, creador de KANTO.\l"
	.string "¡Que dé comienzo!$"

Culto_S3_Batalla_Texto_4:
.string "¡VTAAAAAALL!$"

Culto_S3_Batalla_Texto_5:
.string "Mantendremos tu esencia viva en\n"
	.string "nuestras mentes, señor de KANTO.$"

Culto_S3_Batalla_Texto_6:
.string "????: Tú no formas parte de este\n"
	.string "culto, solo contadas personas han\l"
	.string "descubierto este lugar, y ninguna\l"
	.string "de ellas ha vuelto jamás al\l"
	.string "exterior, ¿sabes lo que eso\l"
	.string "significa?$"

Culto_S3_Batalla_Texto_7:
.string "No podemos dejar que te vayas, el\n"
	.string "mundo no puede saber que este\l"
	.string "lugar existe, de modo que{PAUSE 5}…{PAUSE 5}$"

Culto_S3_Batalla_Texto_8:
.string "Entonces{PAUSE 5}…{PAUSE 5}\n"
	.string "¿Eres el actual CAMPEÓN de la\l"
	.string "región de KANTO?\l"
	.string "¿Y vas en busca del POKÉMON\l"
	.string "ESENCIA?$"

Culto_S3_Batalla_Texto_9:
.string "Estoy al tanto de lo que ocurre en\n"
	.string "el exterior, -CAMPEÓN-, desde aquí\l"
	.string "lo vemos todo, sabemos de la\l"
	.string "situación por la que ha pasado\l"
	.string "KANTO, y de la caída de LANCE, lo\l"
	.string "que vosotros no podéis ver es\l"
	.string "vuestra limitada forma de pensar.$"

Culto_S3_Batalla_Texto_10:
.string "Toda pregunta que hagas respecto\n"
	.string "al POKÉMON ESENCIA carece de\l"
	.string "sentido según tus patrones, ¿crees\l"
	.string "que es un POKÉMON que pueda\l"
	.string "encontrarse?\l"
	.string "¿Que pueda capturarse y exponerlo\l"
	.string "como otro de tus 6 POKÉMON?\l"
	.string "¿De verdad tú y tu organización\l"
	.string "creéis que podéis medir su poder\l"
	.string "en base al del resto de POKÉMON?$"

Culto_S3_Batalla_Texto_11:
.string "Podrás haber derrotado a LANCE,\n"
	.string "pero sigues siendo un principiante\l"
	.string "en cuanto a conocimiento de las\l"
	.string "leyes que rijen este mundo{PAUSE 5}…{PAUSE 5}$"

Culto_S3_Batalla_Texto_12:
.string "Todos vosotros al final lo que\n"
	.string "buscáis es poder, lo que no sabéis\l"
	.string "es{PAUSE 15}…{PAUSE 15} que el verdadero poder lo\l"
	.string "obtienen aquellos que están\l"
	.string "dispuestos a arrodillarse ante él\l"
	.string "y, con humildad, obtenerlo.\p"
	.string "Debe llegar como  consecuencia de\n"
	.string "la virtud, nunca como fin último.\p"
	.string "Observa{PAUSE 5}…{PAUSE 5}$"

Culto_S3_Batalla_Texto_13:
.string "Ahora mismo podría hacerte\n"
	.string "desaparecer en un abrir y cerrar\l"
	.string "de ojos, pero sería injusto por mi\l"
	.string "parte arrojar sobre ti todo el\l"
	.string "poder y sabiduría de incontables\l"
	.string "generaciones, a alguien como\l"
	.string "tú, que jamás tuvo acceso a ello.$"

Culto_S3_Batalla_Texto_14:
.string "{PAUSE 5}…{PAUSE 5}\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

Culto_S3_Batalla_Texto_15:
.string "Tengo el presentimiento de que no eres\n"
	.string "como los demás, podrías llegar a\l"
	.string "apreciar lo que verdaderamente importa.$"

Culto_S3_Batalla_Texto_15.1:
	.string "No solo te daré la oportunidad de\n"
	.string "regresar al exterior si eres capaz de\l"
	.string "ir algo más allá de lo que fuiste en\l"
	.string "tu combate con LANCE; también te diré\l"
	.string "cómo convocar al -POKÉMON ESENCIA-.$"

Culto_S3_Batalla_Texto_15.2:
	.string "Así es, un conocimiento que\n"
	.string "jamás ha salido de aquí.$"

Culto_S3_Batalla_Texto_16:
.string "No haré uso de mis más avanzadas\n"
	.string "artes chico, tampoco de mis\l"
	.string "POKÉMON que más se han acercado al\l"
	.string "conocimiento supremo, pero no será\l"
	.string "necesario usar más del 50% de mi\l"
	.string "poder para comprobar si tienes o\l"
	.string "no lo que hay que tener.$"

Culto_S3_Batalla_Texto_17:
.string "¡Muéstrame, CAMPEÓN, si eres capaz\n"
	.string "de ver más allá de todo cuanto te\l"
	.string "rodea!$"

Culto_S3_Batalla_Texto_18:
.string "Interesante.$"

Culto_S3_Batalla_Texto_19:
.string "A pesar de la mediocridad que abunda\n"
	.string "en KANTO, tu voluntad no se ha visto\l"
	.string "trastocada por las circunstancias.$"

Culto_S3_Batalla_Texto_19.1:
	.string "Eres un caso especial, no hay duda.\n"
	.string "Usando estos POKÉMON, no creo que más\l"
	.string "de 2 o 3 personas dentro de KANTO,\l"
	.string "pudieran salir airosas.$"

Culto_S3_Batalla_Texto_19.2:
	.string "Te has ganado e derecho a regresar al\n"
	.string "exterior, con la condición de no contar\l"
	.string "a nadie lo que has visto aquí{PAUSE 15}…{PAUSE 15}$"

Culto_S3_Batalla_Texto_19.3:
	.string "{PAUSE 15}…{PAUSE 15} a excepción de la otra persona\n"
	.string "capaz de batir este poder.\l"
	.string "Tú sabrás identificarlo{PAUSE 5}…{PAUSE 5}$"

Culto_S3_Batalla_Texto_20:
.string "En cuanto al POKÉMON ESENCIA, aquí\n"
	.string "le rendimos culto, sí. El\l"
	.string "sacrificio que acabas de ver ha\l"
	.string "sido en su honor, sin embargo, no\l"
	.string "pretendemos ni podemos -ver- o\l"
	.string "-poseer-, a tal POKÉMON, como si\l"
	.string "fuera uno más, eso no es posible.$"

Culto_S3_Batalla_Texto_21:
.string "No obstante, te daré la\n"
	.string "información con la que\l"
	.string "teóricamente es posible convocar a\l"
	.string "tal POKÉMON y hacer que adquiera\l"
	.string "una forma material{PAUSE 5}…{PAUSE 5}$"

Culto_S3_Batalla_Texto_22:
.string "Es necesario reunir a dos POKÉMON,\n"
	.string "no dos POKÉMON cualquiera por\l"
	.string "supuesto, estos dos POKÉMON son\l"
	.string "imposibles de encontrar en KANTO,\l"
	.string "sin embargo, sus orígenes,\l"
	.string "historia y tradición están\l"
	.string "estrechamente ligados con KANTO y\l"
	.string "el POKÉMON ESENCIA.$"

Culto_S3_Batalla_Texto_23:
.string "Hablamos de LUGIA y HO-OH,\n"
	.string "en paradero desconocido.\p"
	.string "La leyenda dice que al reunir a estos\n"
	.string "dos LEGENDARIOS, se desencadenaría\l"
	.string "una reacción, producto del contacto\l"
	.string "entre dos criaturas partícipes de la\l"
	.string "creación de KANTO y JOHTO.$"

Culto_S3_Batalla_Texto_23.1:
	.string "Dicha reacción obligaría a materiali-\n"
	.string "zarse al creador último de todo lo\l"
	.string "conocido: EL POKÉMON ESENCIA.$"

Culto_S3_Batalla_Texto_24:
.string "La leyenda no habla, sin embargo,\n"
	.string "de ningún ritual previo, ni de un\l"
	.string "lugar concreto en que deben\l"
	.string "reunirse LUGIA o HO-OH,\l"
	.string "simplemente habla de unificarlos.$"

Culto_S3_Batalla_Texto_25:
.string "Y eso es todo, espero que seas\n"
	.string "consciente de la magnitud de esta\l"
	.string "información, y la uses sabiamente.$"

Culto_S3_Batalla_Texto_26:
.string "No tengo nada más que decirte,\n"
	.string "cuando estés preparado para\l"
	.string "regresar aquí, lo sabrás, entre\l"
	.string "medias te queda un largo camino\l"
	.string "que recorrer, espero que disfrutes\l"
	.string "de ese proceso, es lo más\l"
	.string "importante al fin y al cabo.$"

Culto_S3_Batalla_Move_1:
walk_in_place_up
step_end

Culto_S3_Batalla_Move_2:
emote_exclamation_mark
step_end

Culto_S3_Batalla_Move_3:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

Culto_S3_Batalla_Move_4:
face_up
step_end

Culto_S3_Batalla_Move_5:
walk_in_place_down
step_end

Culto_S3_Batalla_Move_6:
walk_slow_up
walk_slow_up
walk_slow_up
step_end

Culto_S3_Batalla_Move_7:
walk_down
walk_down
walk_down
step_end

Culto_S3_Batalla_Move_8:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Culto_S3_Batalla_Move_9:
walk_slow_down
delay_16
walk_in_place_down
step_end

Culto_S3_Batalla_Move_10:
walk_slow_up
delay_16
walk_in_place_up
step_end

Culto_S3_Batalla_Move_11:
face_down
step_end

Culto_Bloqueo::
compare VAR_UNUSED_0x40F7, 167
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, Culto_Bloqueo_Move_1
waitmovement 0x0
msgbox Culto_Bloqueo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Culto_Bloqueo_Move_2
waitmovement 0x0
release
end

Culto_Bloqueo_Texto_1:
.string "(Un aura horrible impide seguir\n"
	.string "adelante)$"

Culto_Bloqueo_Move_1:
walk_in_place_down
step_end

Culto_Bloqueo_Move_2:
walk_slow_down
step_end
