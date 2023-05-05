NeoPowerPlant_MapScripts::
	.byte 0

NeoPowerPlant_1::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_1, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_1:
.string "Una vez vi el MEGA AMPHAROS del dueño\n"
.string "del FARO OLIVO en acción. El único\l"
.string "POKÉMON que he visto superar sus\l"
.string "descargas eléctricas ha sido este\l"
.string "ZAPDOS-P.$"



NeoPowerPlant_2::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_2, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_2:
.string "La TORRE RADIO también se alimenta de\n"
.string "este generador, este lugar es ahora\l"
.string "uno de los ejes directores de KANTO.$"



NeoPowerPlant_3::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_3, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_3:
.string "El DIRECTOR de la CENTRAL te estará\n"
.string "eternamente agradecido. ¡No saques a\l"
.string "ese ZAPDOS cuando estés aquí! ¡Eh!$"




NeoPowerPlant_5::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_5, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_5:
.string "El nuevo generador que hemos instalado\n"
.string "es muy potente, no me extraña que ese\l"
.string "ZAPDOS se haya sentido atraído por él.$"



NeoPowerPlant_8::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_9, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_8:
.string "Ese POKÉMON… parecía hecho para\n"
.string "generar descargas eléctricas, no me\l"
.string "gustaría recibir un RAYO suyo…$"



NeoPowerPlant_9::
lock     
faceplayer     
msgbox NeoPowerPlant_Text_9, MSGBOX_DEFAULT
release     
end

NeoPowerPlant_Text_9:
.string "Ayudé en la construcción de las VÍAS DE\n"
.string "TREN, ahora me aseguro de que al\l"
.string "MAGNETOTRÉN no le falte energía.$"


NeoPowerPlant_Obtencion_Xurkitree::
lock
faceplayer
checkmoncatch SPECIES_XURKITREE
goto_if_eq VAR_RESULT, FALSE, NeoPowerPlant_Obtencion_Xurkitree_2
msgbox NeoPowerPlant_Obtencion_Xurkitree_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoPowerPlant_Obtencion_Xurkitree_2::
msgbox NeoPowerPlant_Obtencion_Xurkitree_Texto_2 MSGBOX_AUTOCLOSE
 playfanfare MUS_OBTAIN_TMHM
msgbox NeoPowerPlant_Obtencion_Xurkitree_Texto_3 MSGBOX_DEFAULT
	givemon SPECIES_XURKITREE, 70, ITEM_FLYING_GEM
	waitfanfare  
release
end


NeoPowerPlant_Obtencion_Xurkitree_Texto_1:
.string "{PLAYER}, no tengo palabras para\n"
	.string "expresar mi agradecimiento. A alguien\l"
	.string "como tú es difícil de sorprender con\l"
	.string "regalos, pero había un POKÉMON muy\l"
	.string "extraño adherido al generador. Nadie lo\l"
	.string "conocía, mira.$"

NeoPowerPlant_Obtencion_Xurkitree_Texto_2:
.string "¡OBTUVISTE UN XURKITREE AL NV.70!$"

NeoPowerPlant_Obtencion_Xurkitree_Texto_3:
.string "Nuestros mecánicos lo encontraron\n"
	.string "justo después de que derrotaras a\l"
	.string "ZAPDOS. Estaba totalmente debilitado,\l"
	.string "creemos que fue la energía de este\l"
	.string "POKÉMON, y no del generador, la que\l"
	.string "atrajo a ZAPDOS. Parece que ZAPDOS-P\l"
	.string "absorbió toda su electricidad, y por\l"
	.string "eso lo encontramos así.$"
