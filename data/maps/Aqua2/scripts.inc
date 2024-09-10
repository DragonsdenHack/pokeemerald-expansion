Aqua2_MapScripts::
	.byte 0

Aqua2_1::
end	

Aqua2_Combate_Admin::
lock
faceplayer
msgbox Aqua2_Combate_Admin_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Magma1_Combate_Admin_Move_1
waitmovement 0x0
msgbox Aqua2_Combate_Admin_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua2_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua2_Combate_Admin_Texto_4 MSGBOX_AUTOCLOSE
msgbox Aqua2_Combate_Admin_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AQUAADMIN, Aqua2_Combate_Admin_Texto_6
msgbox Aqua2_Combate_Admin_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua2_Combate_Admin_Texto_3 MSGBOX_AUTOCLOSE
delay 15
playse SE_BANG
waitse
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma1_Combate_Admin_Move_2
waitmovement 0x0
delay 15
msgbox Aqua2_Combate_Admin_Texto_8 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
fadescreen 1
delay 20
removeobject 1
fadescreen 0
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
clearflag FLAG_HOENN_90
clearflag FLAG_HOENN_91
clearflag FLAG_HOENN_92
clearflag FLAG_HOENN_93
clearflag FLAG_HOENN_94
clearflag FLAG_HOENN_95
clearflag FLAG_HOENN_96
clearflag FLAG_HOENN_97
clearflag FLAG_HOENN_98
clearflag FLAG_HOENN_99
setflag FLAG_HOENN_640
setflag FLAG_HOENN_641
setflag FLAG_HOENN_642
setflag FLAG_HOENN_643
setflag FLAG_HOENN_644
setflag FLAG_HOENN_645
setflag FLAG_HOENN_646
setflag FLAG_HOENN_647
setflag FLAG_HOENN_648
setflag FLAG_HOENN_649
release
end

Aqua2_Combate_Admin_Texto_1:
.string "Vaya, no muchos entrenadores están\n"
	.string "a la altura de SILVINA, parece que\l"
	.string "tu presencia aquí no es pura\l"
	.string "casualidad después de todo, aunque\l"
	.string "llegados a este punto, lo que\l"
	.string "alguien como tú o como yo puedan\l"
	.string "hacer carece de importancia en\l"
	.string "comparación con lo que está apunto\l"
	.string "de ocurrir en lo más profundo de\l"
	.string "este lugar.$"

Aqua2_Combate_Admin_Texto_2:
.string "No tienes la menor idea de quienes\n"
	.string "somos ROCKET, a diferencia de esos\l"
	.string "falsos capitanes, como el del\l"
	.string "SS.ANNE o el CAP.BABOR, nosotros\l"
	.string "hemos navegado por los 7 mares sin\l"
	.string "obedecer nada más que a nuestra\l"
	.string "voluntad y sensación insaciable de\l"
	.string "exploración, hemos tenido el\l"
	.string "valor de perdernos para alcanzar\l"
	.string "destinos inalcanzables, todo ello\l"
	.string "nos ha hecho contar con la\l"
	.string "tripulación más ruda y los POKÉMON\l"
	.string "marinos más bravos que puedas\l"
	.string "imaginar y, al fin, hallar al rey,\l"
	.string "al origen de toda la fuerza\l"
	.string "contenida en el mar: KYOGRE.\l"
	.string "Nuestro LÍDER AQUILES es la\l"
	.string "persona ideal para despertarlo,\l"
	.string "sus POKÉMON marinos son los únicos\l"
	.string "merecedores de presenciar el\l"
	.string "renacer de KYOGRE.$"

Aqua2_Combate_Admin_Texto_3:
.string "{PAUSE 5}…{PAUSE 5}$"

Aqua2_Combate_Admin_Texto_4:
.string "Me parece que aún no eres\n"
	.string "consciente de lo que hay detrás de\l"
	.string "estas paredes chico, con solo\l"
	.string "mover una de sus aletas, KYOGRE es\l"
	.string "capaz de crear tsunamis que\l"
	.string "inundarían ciudades enteras.\l"
	.string "Si decidiera hacer uso de todo su\l"
	.string "poder, podría convertir todo el\l"
	.string "planeta en una gigante esfera azul\l"
	.string "con únicamente agua en su\l"
	.string "superficie, afortunadamente para\l"
	.string "todos, nosotros conocemos bien a\l"
	.string "KYOGRE, y solo lo usaremos en su\l"
	.string "justa medida para que todo vuelva\l"
	.string "a su cauce original{PAUSE 5}…{PAUSE 5}$"

Aqua2_Combate_Admin_Texto_5:
.string "Lo que acabo de contarte sigue sin\n"
	.string "convencerte para dar media vuelta,\l"
	.string "tú lo has querido, me obligas a\l"
	.string "hacer uso de la fuerza, si te\l"
	.string "empeñas en ver a KYOGRE, tendrás\l"
	.string "que pasar por delante mía antes,\l"
	.string "mis POKÉMON están más que curtidos\l"
	.string "de viajar a lo largo de los 7\l"
	.string "mares.\l"
	.string "¡No les supondrá ningún problema\l"
	.string "el tumbar a un mequetrefe como tú!$"

Aqua2_Combate_Admin_Texto_6:
.string "¡Mis fieles POKÉMON!\n"
	.string "¿En serio?$"

Aqua2_Combate_Admin_Texto_7:
.string "Así que seguirás adelante hasta\n"
	.string "las últimas consecuencias, tú lo\l"
	.string "has querido, no digas después que\l"
	.string "no te avisamos.$"

Aqua2_Combate_Admin_Texto_8:
.string "¡Escucha!\n"
	.string "¡El renacer de KYOGRE ha\l"
	.string "comenzado!\l"
	.string "¡Debo disponer todo para nuestro\l"
	.string "regreso triunfal a HOENN!\l"
	.string "¡Nada volverá a ser igual después\l"
	.string "de lo ocurrido aquí, no hay tiempo\l"
	.string "que perder!$"
