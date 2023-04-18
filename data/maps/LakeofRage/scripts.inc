LakeofRage_MapScripts::
	.byte 0

LakeofRage2::
end



LakeofRage4::
end



LakeofRage6::
end



LakeofRage8::
lock     
faceplayer     
msgbox LakeofRage_Text_8, MSGBOX_DEFAULT
release     
end

LakeofRage_Text_8:
.string "Ese GURÚ de KANTO, que vive en\n"
.string "FUCSIA, lo único que hizo fue\l"
.string "capturar 3 GYARADOS aquí, cuando\l"
.string "había a montones, y mudarse a otra\l"
.string "región donde escasean. Ahora vive\l"
.string "de la fama que esos 3 GYARADOS le\l"
.string "dieron.$"



LakeofRage9::
lock     
faceplayer     
msgbox LakeofRage_Text_9, MSGBOX_DEFAULT
release     
end

LakeofRage_Text_9:
.string "¿AGUA/VOLADOR GYARADOS?\n"
.string "¿En qué mundo vives?\l"
.string "¡Como si GYARADOS pudiera volar!$"



LakeofRage10::
end



LakeofRage11::
end



LakeofRage12::
end



LakeofRage13::
end



LakeofRage14::
end



LakeofRage15::
end



LakeofRage_EventScript_Pescador::
	trainerbattle_single TRAINER_JOCELYN, LakeofRage_Text_PescadorIntro, LakeofRage_Text_PescadorDefeated
	msgbox LakeofRage_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



LakeofRage_EventScript_Sabio::
	trainerbattle_single TRAINER_ROBERT_2, LakeofRage_Text_SabioIntro, LakeofRage_Text_SabioDefeated
	msgbox LakeofRage_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



LakeofRage_EventScript_Guay::
	trainerbattle_single TRAINER_CHESTER, LakeofRage_Text_GuayIntro, LakeofRage_Text_GuayDefeated
	msgbox LakeofRage_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



LakeofRageDocumento_100::
msgbox LakeofRageDocumento_Text_100, MSGBOX_SIGN   
end

LakeofRageDocumento_Text_100:
	.string "LAGO DE LA FURIA, conocido como\n"
	.string "LAGO DE IKARY.$"



LakeofRageDocumento_101::
msgbox LakeofRageDocumento_Text_101, MSGBOX_SIGN   
end

LakeofRageDocumento_Text_101:
	.string "CASA DEL GURÚ PESCADOR$"

LakeofRage_Fredo::
lock
faceplayer
msgbox LakeofRage_Fredo_Texto_1 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 15, LakeofRage_Fredo_Move_1
waitmovement 0x0
msgbox LakeofRage_Fredo_Texto_2 MSGBOX_AUTOCLOSE
msgbox LakeofRage_Fredo_Texto_3 MSGBOX_AUTOCLOSE
msgbox LakeofRage_Fredo_Texto_4 MSGBOX_AUTOCLOSE
applymovement 15, LakeofRage_Fredo_Move_2
waitmovement 0x0
msgbox LakeofRage_Fredo_Texto_5 MSGBOX_AUTOCLOSE
applymovement 15, LakeofRage_Fredo_Move_3
waitmovement 0x0
msgbox LakeofRage_Fredo_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
fadescreen 1
delay 20
removeobject 15
fadescreen 0
release
end

LakeofRage_Fredo_Move_1:
face_player
emote_exclamation_mark
step_end

LakeofRage_Fredo_Move_2:
face_down
step_end

LakeofRage_Fredo_Move_3:
face_player
step_end

LakeofRage_Fredo_Texto_1:
.string "FREDO: Buenos días, joven, ¿nos\n"
	.string "hemos visto antes?$"

LakeofRage_Fredo_Texto_2:
.string "Sí...\n"
	.string "La reunión de TRIGAL, entonces\l"
	.string "eres ese ROCKET que ganó la LIGA\l"
	.string "POKÉMON.$"

LakeofRage_Fredo_Texto_3:
.string "Como te habrás dado cuenta, los\n"
	.string "actuales LÍDERES de JOHTO nos\l"
	.string "mantenemos al margen de lo que\l"
	.string "ocurre en otros lugares,\l"
	.string "simplemente nos ocupamos de\l"
	.string "nuestra vida y dejamos que las\l"
	.string "cosas caigan por su propio peso.$"

LakeofRage_Fredo_Texto_4:
.string "Lo que no quita que lo que LANCE\n"
	.string "hizo en KANTO fue horrible. De\l"
	.string "haber sabido la verdadera\l"
	.string "historia, los LÍDERES de JOHTO,\l"
	.string "especialmente el MAESTRO DRAGÓN,\l"
	.string "hubiéramos actuado inmediatamente.$"

LakeofRage_Fredo_Texto_5:
.string "Es por ello que tengo fe en\n"
	.string "vosotros, sé que no actuáis por puro\l"
	.string "altruismo, pero tenéis ciertos\l"
	.string "principios, y con todo lo que\l"
	.string "vuestro LÍDER planteó en la\l"
	.string "reunión de TRIGAL, algo como lo\l"
	.string "ocurrido en KANTO jamás hubiera\l"
	.string "sucedido.$"

LakeofRage_Fredo_Texto_6:
.string "Creo que ya he andado bastante, es\n"
	.string "hora de volver a CAOBA. Disfruta\l"
	.string "del paseo, {PLAYER}.$"
