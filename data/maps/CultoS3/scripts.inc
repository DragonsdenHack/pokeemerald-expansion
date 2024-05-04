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
.string "que quieren con lo que les\l"
.string "apetece, creyéndose libres, no son\l"
.string "más que marionetas dictadas por\l"
.string "todo cuanto su química les ordene,\l"
.string "carentes de voluntad.$"



CultoS3_7::
lock     
faceplayer     
msgbox CultoS3_Text_7, MSGBOX_DEFAULT
release     
end

CultoS3_Text_7:
.string "La esencia contenida en este lugar\n"
.string "trasciende nuestra propia\l"
.string "existencia, no encontrarás un\l"
.string "lugar así en todo KANTO.$"



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
.string "¡Cógela antes de que se te escape\l"
.string "de entre los dedos!$"



CultoS3_11::
lock     
faceplayer     
msgbox CultoS3_Text_11, MSGBOX_DEFAULT
release     
end

CultoS3_Text_11:
.string "Este lugar es más antiguo que la\n"
.string "propia TORRE POKÉMON, que fue\l"
.string "creada como un mero complemento\l"
.string "para los rituales más suaves\l"
.string "accesibles al público, hace tanto\l"
.string "que perdimos el contacto con el\l"
.string "exterior que la existencia de esta\l"
.string "gran cámara subterránea ha sido\l"
.string "borrada de la memoria de incluso\l"
.string "los más ancianos de PUEBLO\l"
.string "LAVANDA.$"



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
.string "Nosotros solo somos meros\n"
.string "observadores ante todo lo que\l"
.string "ocurre en KANTO, hace tiempo que\l"
.string "desde aquí montamos una realidad\l"
.string "alternativa a los juegos de poder\l"
.string "que rigen al exterior.$"



CultoS3_14::
lock     
faceplayer     
msgbox CultoS3_Text_14, MSGBOX_DEFAULT
release     
end

CultoS3_Text_14:
.string "Todo fluye y refluye, todo tiene\n"
.string "sus períodos de avance y\l"
.string "retroceso, todo asciende y\l"
.string "desciende, todo se mueve como un\l"
.string "péndulo, la medida de su\l"
.string "movimiento hacia la derecha es la\l"
.string "misma que la de su movimiento\l"
.string "hacia la izquierda, el ritmo es la\l"
.string "compensación.$"



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
.string "Un lugar menos placentero pero en\l"
.string "el que ocurren las cosas más\l"
.string "importantes.\l"
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
.string "funerario?\l"
.string "Creemos que lo que hacemos en la\l"
.string "vida tiene su eco en la eternidad,\l"
.string "no se trata de minusvalorar al\l"
.string "resto de almas, si no de resaltar\l"
.string "aquellas que lograron la\l"
.string "excelencia.$"



CultoS3_20::
lock     
faceplayer     
msgbox CultoS3_Text_20, MSGBOX_DEFAULT
release     
end

CultoS3_Text_20:
.string "GASTLY, HAUNTER y GENGAR no son\n"
.string "los únicos fantasmas que PUEBLO\l"
.string "LAVANDA guarda en sus más ocultos\l"
.string "rincones.$"



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
.string "A más de uno le explotaría la\n"
.string "cabeza si viera la que tenemos\l"
.string "aquí montada.$"



CultoS3_23::
lock     
faceplayer     
msgbox CultoS3_Text_23, MSGBOX_DEFAULT
release     
end

CultoS3_Text_23:
.string "Sin importar el modo, sirve a tus\n"
.string "ideales.$"



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
.string "descubrir la infinita\l"
.string "potencialidad de tu ser.$"



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
release     
end

CultoS3_Text_26:
.string "Prueben a colocar al hombre en la\n"
.string "más próspera, idílica y fantástica\l"
.string "de las utopías, refugienle en\l"
.string "inmensas burbujas de placer\l"
.string "edonico, evitando todo contacto\l"
.string "con la crudeza del cosmos,\l"
.string "concédale aquello con lo que\l"
.string "siempre soñó, sin tener que pasar\l"
.string "por frustaciones, decepciones o\l"
.string "dificultades, les aseguro que,\l"
.string "tarde o temprano, esta enigmática\l"
.string "criatura encontrará algún modo de\l"
.string "sentirse miserable.$"



CultoS3_27::
lock     
faceplayer     
msgbox CultoS3_Text_27, MSGBOX_DEFAULT
release     
end

CultoS3_Text_27:
.string "La rana en su estanque no concibe\n"
.string "el océano.$"



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
release     
end

CultoS3_Text_30:
.string "Toda causa tiene su efecto, todo\n"
.string "efecto tiene su causa, todo sucede\l"
.string "de acuerdo a la ley, la suerte o\l"
.string "el azar no es más que el nombre\l"
.string "que se le da a la ley no\l"
.string "reconocida, hay muchos planos de\l"
.string "casualidad, pero nada escapa a la\l"
.string "ley, esto, sin embargo, no tiene\l"
.string "porqué anular nuestra libertad y\l"
.string "libre albedrío.$"



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
.string "Tanto si crees que eres capaz como\n"
.string "si no, en ambos casos tienes\l"
.string "razón.$"



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
.string "A veces la gente no quiere\n"
.string "escuchar la verdad porque no\l"
.string "quiere que sus ilusiones se vean\l"
.string "destruidas.$"



CultoS3_38::
lock     
faceplayer     
msgbox CultoS3_Text_38, MSGBOX_DEFAULT
release     
end

CultoS3_Text_38:
.string "Serenidad para aceptar las cosas\n"
.string "que no están en nuestra mano.\l"
.string "Valor para cambiar las que sí lo\l"
.string "están.\l"
.string "Sabiduría para poder\l"
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
applymovement 54, Culto_S3_Batalla_Move_9
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 54, Culto_S3_Batalla_Move_2
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_8 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_4
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_9 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_5
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_10 MSGBOX_AUTOCLOSE
msgbox Culto_S3_Batalla_Texto_11 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_10
waitmovement 0x0
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
msgbox Culto_S3_Batalla_Texto_16 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_9
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_17 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CULTO_1, Culto_S3_Batalla_Texto_18
msgbox Culto_S3_Batalla_Texto_19 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_4
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_20 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_5
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_21 MSGBOX_AUTOCLOSE
msgbox Culto_S3_Batalla_Texto_22 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_4
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_23 MSGBOX_AUTOCLOSE
msgbox Culto_S3_Batalla_Texto_24 MSGBOX_AUTOCLOSE
applymovement 54, Culto_S3_Batalla_Move_5
waitmovement 0x0
msgbox Culto_S3_Batalla_Texto_25 MSGBOX_AUTOCLOSE
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
	.string "es que el verdadero poder lo\l"
	.string "obtienen aquellos que están\l"
	.string "dispuestos a arrodillarse ante él,\l"
	.string "y con humildad obtenerlo, debe de\l"
	.string "ser una consecuencia de otras\l"
	.string "virtudes, nunca el fin último,\l"
	.string "observa{PAUSE 5}…{PAUSE 5}$"

Culto_S3_Batalla_Texto_13:
.string "Ahora mismo podría hacerte\n"
	.string "desaparecer en un abrir y cerrar\l"
	.string "de ojos, pero sería injusto por mi\l"
	.string "parte arrojar sobre ti todo el\l"
	.string "poder y sabiduría de incontables\l"
	.string "generaciones, a alguien como\l"
	.string "tú que jamás tuvo acceso a ello.$"

Culto_S3_Batalla_Texto_14:
.string "{PAUSE 5}…{PAUSE 5}\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

Culto_S3_Batalla_Texto_15:
.string "Tengo el presentimiento de que no\n"
	.string "eres como los demás, podrías\l"
	.string "llegar a apreciar lo que\l"
	.string "verdaderamente importa, no solo te\l"
	.string "daré la oportunidad de regresar al\l"
	.string "exterior si eres capaz de ir algo\l"
	.string "más allá de lo que fuiste en tu\l"
	.string "combate con LANCE, también te diré\l"
	.string "cómo convocar al llamado -POKÉMON\l"
	.string "ESENCIA-, algo que jamás ha salido\l"
	.string "de aquí.$"

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
.string "A pesar de la mediocridad que\n"
	.string "abunda en KANTO actualmente, tu\l"
	.string "voluntad no se ha visto torcida\l"
	.string "por las circunstancias del\l"
	.string "entorno, eres un caso especial, no\l"
	.string "hay duda, no creo que más de 2 o 3\l"
	.string "personas provenientes del exterior\l"
	.string "en KANTO, contando contigo, puedan\l"
	.string "salir airosos ante el equipo que\l"
	.string "acabo de mostrar, te has ganado el\l"
	.string "derecho a regresar al exterior,\l"
	.string "con la condición de no contar a\l"
	.string "nadie lo visto aquí con excepción,\l"
	.string "por supuesto, de esa otra persona\l"
	.string "que hubiera sido capaz de batir a\l"
	.string "este equipo. Tú sabrás\l"
	.string "identificarlo, por supuesto{PAUSE 5}…{PAUSE 5}$"

Culto_S3_Batalla_Texto_20:
.string "En cuanto al POKÉMON ESENCIA, aquí\n"
	.string "le rendimos culto, si, el\l"
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
	.string "actualmente en paradero\l"
	.string "desconocido, la leyenda dice que\l"
	.string "quien reuna a estos dos\l"
	.string "LEGENDARIOS, la reacción que se\l"
	.string "desencadenaría producto del\l"
	.string "contacto entre estas dos criaturas\l"
	.string "partícipes de la creación misma de\l"
	.string "KANTO y JOHTO, obligaría a\l"
	.string "materializarse al creador último\l"
	.string "de todo lo que conocemos en estas\l"
	.string "regiones: EL POKÉMON ESENCIA.$"

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
walk_in_place_down
step_end

Culto_S3_Batalla_Move_10:
walk_slow_up
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
