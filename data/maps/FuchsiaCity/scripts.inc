FuchsiaCity_MapScripts::
	.byte 0

FuchsiaCity3::
end


FuchsiaCity4::
end


FuchsiaCity5::
end


FuchsiaCity6::
end


FuchsiaCity8::
end


FuchsiaCity11::
lock     
faceplayer     
msgbox Text_11, MSGBOX_DEFAULT
release     
end

Text_11:
.string "Mi padre es el LÍDER DE GIMNASIO\n"
.string "de esta ciudad.\l"
.string "Estoy entrenándome para usar\l"
.string "POKÉMON TIPO VENENO igual que\l"
.string "hace él.$"



FuchsiaCity12::
lock     
faceplayer     
msgbox Text_12, MSGBOX_DEFAULT
release     
end

Text_12:
.string "Déjame en paz, ROCKET. No he\n"
.string "quedado contigo.$"


FuchsiaCity14::
lock     
faceplayer     
msgbox Text_14, MSGBOX_DEFAULT
release     
end

Text_14:
.string "La ZONA SAFARI está abierta al\n"
.string "público, lástima que tú y tu\l"
.string "organización no seáis considerados\l"
.string "público.$"


FuchsiaCity16::
end


FuchsiaCity17::
lock     
faceplayer     
msgbox Text_17, MSGBOX_DEFAULT
release     
end

Text_17:
.string "¡Aghh!\n"
.string "¡Así que has venido a unirte con\l"
.string "los MOTORISTAS de FUCSIA!$"


FuchsiaCity18::
lock     
faceplayer     
msgbox Text_18, MSGBOX_DEFAULT
release     
end

Text_18:
.string "¡Los ROCKET como vosotros nunca\n"
.string "podréis entrar a la ZONA SAFARI!\l"
.string "…\l"
.string "…\l"
.string "¿Cómo?¿No lo necesitas y ya\l"
.string "capturaste un KANGASKHAN en el\l"
.string "TÚNEL ROCA?\l"
.string "¡Además de ladrón mentiroso, se\l"
.string "demostró que la existencia de un\l"
.string "KANGASKHAN allí era un bulo!$"



FuchsiaCityDocumento_100::
msgbox FuchsiaCityDocumento_Text_100, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_100:
.string "Gimnasio de CIUDAD FUCSIA\n"
	.string "LÍDER: KOGA\l"
	.string "El maestro ninja.$"



FuchsiaCityDocumento_101::
msgbox FuchsiaCityDocumento_Text_101, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_101:
	.string "Nombre: KABUTO\n"
	.string "POKÉMON extremadamente raro\l"
	.string "regenerado a partir de un FÓSIL.$"



FuchsiaCityDocumento_102::
msgbox FuchsiaCityDocumento_Text_102, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_102:
	.string "Nombre: KANGASKHAN\n"
	.string "Un POKÉMON maternal que cuidará a\l"
	.string "su pequeño hasta el final.$"



FuchsiaCityDocumento_103::
msgbox FuchsiaCityDocumento_Text_103, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_103:
	.string "Nombre: LAPRAS\n"
	.string "También conocido como el rey\l"
	.string "de los mares.$"



FuchsiaCityDocumento_104::
msgbox FuchsiaCityDocumento_Text_104, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_104:
	.string "ZONA SAFARI\n"
	.string "¡Hazte con todos!$"



FuchsiaCityDocumento_105::
msgbox FuchsiaCityDocumento_Text_105, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_105:
	.string "El paraíso POKÉMON\n"
	.string "ZONA SAFARI$"



FuchsiaCityDocumento_106::
msgbox FuchsiaCityDocumento_Text_106, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_106:
	.string "CIUDAD FUCSIA\n"
	.string "¡Mirad!¡Es rosa pasión!$"



FuchsiaCityDocumento_107::
msgbox FuchsiaCityDocumento_Text_107, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_107:
	.string "ZONA SAFARI\n"
	.string "Casa del guarda$"



FuchsiaCityDocumento_108::
msgbox FuchsiaCityDocumento_Text_108, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_108:
	.string "Nombre: VOLTORB\n"
	.string "La viva imagen de una POKé BALL.$"



FuchsiaCityDocumento_109::
msgbox FuchsiaCityDocumento_Text_109, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_109:
	.string "Nombre: SLOWPOKE\n"
	.string "Amigable y de movimientos muy\l"
	.string "lentos.$"



FuchsiaCityDocumento_110::
msgbox FuchsiaCityDocumento_Text_110, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_110:
	.string "Nombre: CHANSEY\n"
	.string "Atrapar uno es cuestión de suerte.$"

FuchsiaCity_Encuentro_Koga::
msgbox FuchsiaCity_Encuentro_Koga_Texto_1 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Encuentro_Koga_Texto_2 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Encuentro_Koga_Texto_3 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Encuentro_Koga_Texto_4 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Encuentro_Koga_Texto_5 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Encuentro_Koga_Texto_6 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Encuentro_Koga_Texto_7 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Encuentro_Koga_Texto_8 MSGBOX_AUTOCLOSE
release
end

FuchsiaCity_Encuentro_Koga_Texto_1:
.string "KOGA: ¡{PLAYER}!\n"
	.string "¡No puedo creer que de verdad\l"
	.string "hayas echado a BRUNO del CAMINO\l"
	.string "BICIS!\l"
	.string "¡No eres consciente de la\l"
	.string "importancia de lo que has hecho,\l"
	.string "no dudes de que informaré a\l"
	.string "GIOVANNI sobre tu hazaña!$"

FuchsiaCity_Encuentro_Koga_Texto_2:
.string "KOGA: ...$"

FuchsiaCity_Encuentro_Koga_Texto_3:
.string "Nos ayudaste a mantener el negocio\n"
	.string "del SAFARI, y ahora gracias a ti\l"
	.string "la relación entre el TEAM ROCKET y\l"
	.string "los MOTORISTAS es más fuerte que\l"
	.string "nunca, te has ganado el mejor\l"
	.string "regalo que pueda ofrecerte, además\l"
	.string "de mi respeto.$"

FuchsiaCity_Encuentro_Koga_Texto_4:
.string "Con este pase podrás entrar\n"
	.string "siempre que quieras a nuestra ZONA\l"
	.string "SAFARI sin pagar, y usando tus\l"
	.string "propias POKÉ BALL sin ningún tipo\l"
	.string "de limitación, es algo a lo que\l"
	.string "sólo tienen acceso los principales\l"
	.string "accionistas y personalidades como\l"
	.string "BILL por motivos de\l"
	.string "investigación...considérate\l"
	.string "afortunado, y no te preocupes por\l"
	.string "llevar el uniforme ROCKET, siempre\l"
	.string "puedes alegar al guarda que es un\l"
	.string "cosplay que usas para ridiculizar\l"
	.string "al TEAM ROCKET, este estará\l"
	.string "obligado a dejarte pasar...$"

FuchsiaCity_Encuentro_Koga_Texto_5:
.string "KOGA: ¿Cómo?\n"
	.string "¿Las ISLAS ESPUMA?$"

FuchsiaCity_Encuentro_Koga_Texto_6:
.string "Se encuentran al suroeste de aquí,\n"
	.string "solo tienes que llegar al mar que\l"
	.string "hay al sur de FUCSIA y llegarás,\l"
	.string "no tiene pérdida.$"

FuchsiaCity_Encuentro_Koga_Texto_7:
.string "KOGA: Gracias por todo de nuevo\n"
	.string "{PLAYER}, ahora me retiro, no es\l"
	.string "conveniente que me vean con un\l"
	.string "ROCKET, debo mantener las\l"
	.string "apariencias si queréis seguir\l"
	.string "teniendo a uno de los vuestros\l"
	.string "infiltrado en puestos de\l"
	.string "privilegio, estaré encantado de\l"
	.string "combatir contigo...si se da la\l"
	.string "ocasión.$"

FuchsiaCity_Encuentro_Koga_Texto_8:
.string "GIOVANNI: ¿{PLAYER}?\n"
	.string "¿Cómo va la misión?\l"
	.string "¿Vas de camino a ISLAS ESPUMA?\l"
	.string "Perfecto, AZUL tiene todo listo\l"
	.string "para batir a MOLTRES, y ANDRA ha\l"
	.string "ultimado los preparativos con\l"
	.string "nuestros científicos para hacer su\l"
	.string "equipo más ventajoso frente a\l"
	.string "ZAPDOS, espero noticias tuyas\l"
	.string "{PLAYER}.$"

FuchsiaCity_Encuentro_Koga_Move_1:
walk_in_place_right
step_end

FuchsiaCity_Encuentro_Koga_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
step_end

FuchsiaCity_Encuentro_Koga_Move_3:
face_down
step_end

FuchsiaCity_Encuentro_Koga_Move_4:
face_left
step_end

FuchsiaCity_Encuentro_Koga_Move_5:
emote_exclamation_mark
step_end
