RocketHideout_JohtoP2_MapScripts::
	.byte 0


RocketHideoutJohtoP2Documento_100::
lock        
msgbox RocketHideoutJohtoP2Documento_Text_100, MSGBOX_DEFAULT
msgbox RocketHideoutJohtoP2Documento_Text_101, MSGBOX_DEFAULT
release     
end

RocketHideoutJohtoP2Documento_Text_100:
.string "(Parece ser un documento escrito y\n"
	.string "firmado por el propio GIOVANNI)\p"
	.string "Estimado {PLAYER}, nosotros tampoco\n"
	.string "hemos estado parados. Desde la\l"
	.string "BASE PROFUNDA, nuestros mejores\l"
	.string "científicos han logrado al fin\l"
	.string "desarrollar la PIEDRA POKÉMON\l"
	.string "definitiva, aquella que permite\l"
	.string "evolucionar una última vez a\l"
	.string "POKÉMON que naturalmente no\l"
	.string "deberían poder hacerlo. En otras\l"
	.string "palabras, nos permite acceder a\l"
	.string "todos los experimentos y\l"
	.string "prototipos creados tanto por\l"
	.string "nosotros como por nuestros\l"
	.string "antiguos enemigos.\l"
	.string "La creación de una sola piedra,\l"
	.string "sin embargo, tiene un costo\l"
	.string "económico descomunal. Es por ello\l"
	.string "que, únicamente a los 3 JEFES de\l"
	.string "JOHTO, HOENN e ISLAS SETE, se les\l"
	.string "ha dado una unidad.\p"
	.string "Los POKÉMON compatibles elevarán\n"
	.string "en 100 STATS BASE su poder, al\l"
	.string "igual que la MEGA-EVOLUCIÓN, pero\l"
	.string "permitiendo el uso de objeto.\l"
	.string "Gracias a la colaboración de BILL,\l"
	.string "BLAINE, OAK y ELM, contamos con\l"
	.string "una amplia variedad de POKÉMON\l"
	.string "que reaccionarán a la PIEDRA. Son\l"
	.string "los siguientes:$"

RocketHideoutJohtoP2Documento_Text_101:
.string "- ELECTRODE\n"
	.string "- MAGMORTAR\l"
	.string "- ELECTIVIRE\l"
	.string "- PORYGON2\l"
	.string "- NIDOKING\l"
	.string "- NIDOQUEEN\l"
	.string "- TAUROS\l"
	.string "...\l"
	.string "...\p"
	.string "Escoge bien.$"



RocketHideoutJohtoP2Documento_102::
msgbox RocketHideoutJohtoP2Documento_Text_102, MSGBOX_SIGN   
end

RocketHideoutJohtoP2Documento_Text_102:
	.string "-Este lugar pertenece al ENTRENADOR\n"
	.string "en el cual se han unido lo viejo y lo\l"
	.string "nuevo-.$"

RocketHideoutJohtoP2_Obtencion_Deoxys::
lock
msgbox RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_1 MSGBOX_AUTOCLOSE
msgbox RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_DEOXYS, 50, ITEM_NONE
waitfanfare
delay 20
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1
removeobject 2
release
end

RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_1:
.string "(Hay un mensaje escrito en la POKÉ\n"
	.string "BALL, es de GIOVANNI)$"

RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_2:
.string "-{PLAYER}, los servicios que has\n"
	.string "prestado al TEAM ROCKET han sido\l"
	.string "de un valor incalculables. Sé que\l"
	.string "lo mejor está aún por llegar, esta\l"
	.string "organización no tiene secretos\l"
	.string "para ti. Es por ello que quiero\l"
	.string "que seas el primero en contar con\l"
	.string "un ejemplar de DEOXYS. Aún no\l"
	.string "hemos podido reproducir el\l"
	.string "material genético de las formas\l"
	.string "ATAQUE y DEFENSA, pero sí el de la\l"
	.string "forma BASE.-$"

RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_3:
.string "¡¡OBTUVISTE UN DEOXYS AL Nv.50!!$"


RocketHideoutJohtoP2_Obtencion_Regis::
lock
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_1 MSGBOX_AUTOCLOSE
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_REGIROCK, 20, ITEM_NONE
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_4 MSGBOX_DEFAULT
givemon SPECIES_REGISTEEL, 20, ITEM_NONE
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_REGICE, 20, ITEM_NONE
waitfanfare
delay 20
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2
removeobject 3
release
end

RocketHideoutJohtoP2_Obtencion_Regis_Texto_1:
.string "(Hay un mensaje escrito en las POKÉ\n"
	.string "BALL, es de ANDRA)$"

RocketHideoutJohtoP2_Obtencion_Regis_Texto_2:
.string "-{PLAYER}, GIOVANNI me envió a\n"
	.string "HOENN para encontrar lo\l"
	.string "equivalente a las AVES LEGENDARIAS\l"
	.string "de KANTO en esa región, después de\l"
	.string "mucho investigar, pude encontrar\l"
	.string "las cámaras que guardaban a los\l"
	.string "llamados REGIS, y descifrar los\l"
	.string "enigmas que llevaban hasta ellos,\l"
	.string "nuestros científicos hicieron el\l"
	.string "resto, y de igual forma que los\l"
	.string "LEGENDARIOS de KANTO y JOHTO,\l"
	.string "pudieron clonar su material\l"
	.string "genético. Aquí te mando 3 de los\l"
	.string "primeros ejemplares replicados con\l"
	.string "éxito, seguro que alguien como tú\l"
	.string "sabrá aprovechar sus particulares\l"
	.string "combinaciones de STATS.-$"

RocketHideoutJohtoP2_Obtencion_Regis_Texto_3:
.string "¡¡OBTUVISTE UN REGIROCK AL Nv.20!!$"

RocketHideoutJohtoP2_Obtencion_Regis_Texto_4:
.string "¡¡OBTUVISTE UN REGISTEEL AL Nv.20!!$"

RocketHideoutJohtoP2_Obtencion_Regis_Texto_5:
.string "¡¡OBTUVISTE UN REGICE AL Nv.20!!$"

RocketHideoutJohtoP2_Obtencion_Piedra_Rocket::
release
end
