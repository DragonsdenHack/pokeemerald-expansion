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
	.string "Dude, if you don't believe in one system,\n"
	.string "you're gonna be totally owned by\l"
	.string "another.$"



CultoS3_3::
lock     
faceplayer     
msgbox CultoS3_Text_3, MSGBOX_DEFAULT
release     
end

CultoS3_Text_3:
	.string "The majority of individuals are neither\n"
	.string "prepared nor deserving of access to\l"
	.string "such a place.$"



CultoS3_4::
lock     
faceplayer     
msgbox CultoS3_Text_4, MSGBOX_DEFAULT
release     
end

CultoS3_Text_4:
	.string "It's sad for those who mix up what they\n"
	.string "want with what they crave, thinking\l"
	.string "they're free when they're just puppets\l"
	.string "controlled by their own chemistry, with\l"
	.string "no willpower.$"



CultoS3_7::
lock     
faceplayer     
msgbox CultoS3_Text_7, MSGBOX_DEFAULT
release     
end

CultoS3_Text_7:
	.string "The essence contained within this\n"
	.string "place transcends our own existence;\l"
	.string "you won't find such a place in KANTO.$"



CultoS3_8::
lock     
faceplayer     
msgbox CultoS3_Text_8, MSGBOX_DEFAULT
release     
end

CultoS3_Text_8:
	.string "Why would we change this place when it\n"
	.string "gives us everything we need?$"



CultoS3_9::
lock     
faceplayer     
msgbox CultoS3_Text_9, MSGBOX_DEFAULT
release     
end

CultoS3_Text_9:
	.string "I can't even remember the last time we\n"
	.string "had someone from the outside visit, but\l"
	.string "let me tell you, it didn't go down too\l"
	.string "well.$"



CultoS3_10::
lock     
faceplayer     
msgbox CultoS3_Text_10, MSGBOX_DEFAULT
release     
end

CultoS3_Text_10:
	.string "The essence is here! Can't you see it?\n"
	.string "It's yours! Seize it before it slips away\l"
	.string "from your grasp!$"



CultoS3_11::
lock     
faceplayer     
msgbox CultoS3_Text_11, MSGBOX_DEFAULT
release     
end

CultoS3_Text_11:
	.string "This place is older than POKÉMON TOWER,\n"
	.string "which was just made as an add-on for\l"
	.string "the gentler rituals open to the public.\l"
	.string "It's been so long since we lost touch\l"
	.string "with the outside world that even the\l"
	.string "oldest folks in LAVENDER TOWN don't\l"
	.string "remember this massive underground\l"
	.string "chamber.$"



CultoS3_12::
lock     
faceplayer     
msgbox CultoS3_Text_12, MSGBOX_DEFAULT
release     
end

CultoS3_Text_12:
	.string "Infinite potential, that's what I feel\n"
	.string "when I close my eyes and soak in the\l"
	.string "energy of this place.$"



CultoS3_13::
lock     
faceplayer     
msgbox CultoS3_Text_13, MSGBOX_DEFAULT
release     
end

CultoS3_Text_13:
	.string "We are mere observers of everything\n"
	.string "happening in KANTO. It's been a while\l"
	.string "since we've constructed an alternate\l"
	.string "reality here, apart from the power\l"
	.string "games ruling the region.$"



CultoS3_14::
lock     
faceplayer     
msgbox CultoS3_Text_14, MSGBOX_DEFAULT
release     
end

CultoS3_Text_14:
           .string "Everything flows and ebbs, everything\n"
	.string "has its periods of advancement and\l"
	.string "regression, everything ascends and\l"
	.string "descends, everything moves like a\l"
	.string "pendulum; the measure of its movement\l"
	.string "to the right is equal to that of its\l"
	.string "movement to the left, rhythm is the\l"
	.string "compensation.$"



CultoS3_15::
lock     
faceplayer     
msgbox CultoS3_Text_15, MSGBOX_DEFAULT
release     
end

CultoS3_Text_15:
	.string "Having inner freedom can actually lift\n"
	.string "you up above a tough fate.$"



CultoS3_16::
lock     
faceplayer     
msgbox CultoS3_Text_16, MSGBOX_DEFAULT
release     
end

CultoS3_Text_16:
.string "...\n"
.string "...\l"
.string "A less pleasurable place, but where the\l"
.string "most important things happen.\l"
.string "importantes.\l"
.string "...\l"
.string "...$"



CultoS3_17::
lock     
faceplayer     
msgbox CultoS3_Text_17, MSGBOX_DEFAULT
release     
end

CultoS3_Text_17:
	.string "Those who embrace their destiny live\n"
	.string "long lives, while those who rebel\l"
	.string "receive their punishment.$"



CultoS3_18::
lock     
faceplayer     
msgbox CultoS3_Text_18, MSGBOX_DEFAULT
release     
end

CultoS3_Text_18:
	.string "Flowers that bloom in adversity are the\n"
	.string "most beautiful ones.$"



CultoS3_19::
lock     
faceplayer     
msgbox CultoS3_Text_19, MSGBOX_DEFAULT
release     
end

CultoS3_Text_19:
	.string "Why do we honor and lift some souls\n"
	.string "above others, like this funeral\l"
	.string "monument? We believe our actions in\l"
	.string "life echo in eternity. It's not about\l"
	.string "devaluing other souls, but recognizing\l"
	.string "those who excelled.$"



CultoS3_20::
lock     
faceplayer     
msgbox CultoS3_Text_20, MSGBOX_DEFAULT
release     
end

CultoS3_Text_20:
	.string "GASTLY, HAUNTER and GENGAR are not the\n"
	.string "only ghosts that LAVENDER TOWN\l"
	.string "harbors in its most hidden corners.$"



CultoS3_21::
lock     
faceplayer     
msgbox CultoS3_Text_21, MSGBOX_DEFAULT
release     
end

CultoS3_Text_21:
	.string "The perfect flower is very rare; you can\n"
	.string "spend your entire life searching for\l"
	.string "just one, and you won't have wasted it.$"



CultoS3_22::
lock     
faceplayer     
msgbox CultoS3_Text_22, MSGBOX_DEFAULT
release     
end

CultoS3_Text_22:
	.string "Dude, if anyone saw the crazy setup\n"
	.string "we've got here, their head would\l"
	.string "explode.$"



CultoS3_23::
lock     
faceplayer     
msgbox CultoS3_Text_23, MSGBOX_DEFAULT
release     
end

CultoS3_Text_23:
	.string "No matter how, serve your ideals.$"



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
	.string "lugar existe, de modo que...$"

Culto_S3_Batalla_Texto_8:
.string "De modo que...\n"
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
	.string "leyes que rijen este mundo...$"

Culto_S3_Batalla_Texto_12:
.string "Todos vosotros al final lo que\n"
	.string "buscáis es poder, lo que no sabéis\l"
	.string "es que el verdadero poder lo\l"
	.string "obtienen aquellos que están\l"
	.string "dispuestos a arrodillarse ante él,\l"
	.string "y con humildad obtenerlo, debe de\l"
	.string "ser una consecuencia de otras\l"
	.string "virtudes, nunca el fin último,\l"
	.string "observa...$"

Culto_S3_Batalla_Texto_13:
.string "Ahora mismo podría hacerte\n"
	.string "desaparecer en un abrir y cerrar\l"
	.string "de ojos, pero sería injusto por mi\l"
	.string "parte arrojar sobre ti todo el\l"
	.string "poder y sabiduría de incontables\l"
	.string "generaciones, a alguien como\l"
	.string "tú que jamás tuvo acceso a ello.$"

Culto_S3_Batalla_Texto_14:
.string "...\n"
	.string "...$"

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
	.string "este equipo, tú sabras\l"
	.string "identificarla por supuesto...$"

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
	.string "una forma material...$"

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
